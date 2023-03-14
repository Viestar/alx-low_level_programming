#ifndef MAIN_H
#define MAIN_H

/**
 * main_h - File
 * Desc: Prototypes for all functions used
 *       in the 0x0B-malloc_free projects.
 * @c: parameter passed
 * Return: 0 for success
 */

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif  /*MAIN_H*/
