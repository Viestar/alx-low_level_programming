#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>

/*
* Desc: header file with all function prototypes for this project.
*/


/**
 * struct list_s - singly linked list
 * @str: string
 * @len: len of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h); /* Prints elements */
size_t list_len(const list_t *h); /* Counts elements */
list_t *add_node(list_t **head, const char *str); /* inserts first node */
list_t *add_node_end(list_t **head, const char *str); /* Inserts last node */
void free_list(list_t *head); /*Frees a list*/


#endif /* LISTS_H */
