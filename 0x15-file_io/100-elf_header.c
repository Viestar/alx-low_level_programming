#include <stdio.h>	/* input output*/
#include <stdlib.h> /* Malloc, exit */
#include <unistd.h> /* POSIX-1 STDS 0-2*/
#include <fcntl.h>	/* File Modes */
#include <elf.h>	/* Elf64_Ehdr */
#include <sys/types.h>

/* Prototypes */
void file_closer(int file);
void elf_checker(unsigned char *e_ident);
void os_abi_printer(unsigned char *e_ident);
void type_printer(unsigned char *e_ident, unsigned int e_type);
void entry_printer(unsigned char *e_ident, unsigned long int e_entry);
void magic_printer(unsigned char *e_ident);
void class_printer(unsigned char *e_ident);
void data_printer(unsigned char *e_ident);
void version_printer(unsigned char *e_ident);

/**
 * main - Displays ELF_header infomation at the start of an ELF file.
 * @argc: number of arguments
 * @argv: Array of arguments.
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	Elf64_Ehdr *elf_head;

	int filopn, filrd;
	(void)argc;

	/* Reading elf file passed as the second argument */
	filopn = open(argv[1], O_RDONLY);
	/* Incase file not read */
	if (filopn == -1)
	{
		dprintf(STDERR_FILENO, "Error: File %s not read!\n", argv[1]);
		exit(98);
	}

	/* allocating memory to the buffer*/
	elf_head = malloc(sizeof(Elf64_Ehdr));
	if (!elf_head)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		file_closer(filopn);
		exit(98);
	}

	/* Using the descriptor to read into elf_head_buffer*/
	filrd = read(filopn, elf_head, sizeof(Elf64_Ehdr));
	if (filrd == -1)
	{
		dprintf(STDERR_FILENO, "Error: File %s not found\n", argv[1]);
		file_closer(filopn); /* Own closing function */
		free(elf_head);
		exit(98);
	}

	elf_checker((*elf_head).e_ident); /* ELF checker */

	printf("ELF Header:\n");

	magic_printer((*elf_head).e_ident);	  /* Magic */
	class_printer((*elf_head).e_ident);	  /* Class */
	data_printer((*elf_head).e_ident);	  /* Data */
	version_printer((*elf_head).e_ident); /* Version */
	os_abi_printer((*elf_head).e_ident);  /* OS/ABI */

	/*Printing ABI Version */
	printf("ABI Version:%d\n",
		   (*elf_head).e_ident[EI_ABIVERSION]);

	type_printer((*elf_head).e_ident, (*elf_head).e_type);	 /* Type */
	entry_printer((*elf_head).e_ident, (*elf_head).e_entry); /* Entry point */

	free(elf_head);
	file_closer(filopn);
	return (0);
}

/**
 * file_closer - closes the passed file
 * @file: file to be closed
 * Return: void
 */

void file_closer(int file)
{
	/* Store the closing descriptor */
	int closer;

	closer = close(file);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: File desc. %d can't be closed", file);
		exit(98);
	}
}

/**
 * entry_printer - Prints ELF Header entry point
 * @e_entry: Entry point address
 * @e_ident: pointer to the array.
 */
void entry_printer(unsigned char *e_ident, unsigned long int e_entry)
{
	printf("Entry point address:");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
				  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] != ELFCLASS32)
		printf("%#lx\n", e_entry);

	else
		printf("%#x\n", (unsigned int)e_entry);
}

/**
 * type_printer - prints ELF header type
 * @e_type: type to be printed
 * @e_ident: pointer to the array
 */

void type_printer(unsigned char *e_ident, unsigned int e_type)
{
	if (e_ident[EI_DATA == ELFDATA2MSB])
		e_type = e_type >> 8;

	printf("Type:");

	if (e_type == ET_NONE)
		printf("NONE (None)\n");
	else if (e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (e_type == ET_DYN)
		printf("DYN (Share Object file)\n");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", e_type);
}

/**
 * os_abi_printer - printes the ELF header OS?ABI
 * @e_ident: pointer to the OS ABI
 */
void os_abi_printer(unsigned char *e_ident)
{
	printf("OS/ABI:");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * version_printer - prints ELF header version
 * @e_ident: pointer to the verssion.
 */
void version_printer(unsigned char *e_ident)
{
	printf("Version:%d", e_ident[EI_VERSION]);
	if (e_ident[EI_VERSION == EV_CURRENT])
		printf("(current)\n");
	else
		printf("\n");
}

/**
 * data_printer - prints ELF header data
 * @e_ident: pointer to the data
 */
void data_printer(unsigned char *e_ident)
{
	printf("Data:");
	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
}

/**
 * class_printer - prints ELF header class
 * @e_ident: Pointer to the class.
 */

void class_printer(unsigned char *e_ident)
{
	printf("Class:");
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * magic_printer - prints ELF header magic numbers.
 * @e_ident: Pointer to the magic numbers.
 */

void magic_printer(unsigned char *e_ident)
{
	int count;

	count = 0;

	printf("Magic:");
	while (count < EI_NIDENT)
	{
		printf("%02x", e_ident[count]);
		if (count == (EI_NIDENT - 1))
			printf("\n");
		else
			printf(" ");
		count++;
	}
}

/**
 * elf_checker - Checks for ELF files.
 * @e_ident: magic numbers
 * Return: void
 */

void elf_checker(unsigned char *e_ident)
{
	int count;

	count = 0;

	while (count < 4)
	{
		if (e_ident[count] != 127 && e_ident[count] != 'E' &&
			e_ident[count] != 'L' && e_ident[count] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: File not an ELF\n");
			exit(98);
		}
		count++;
	}
}
