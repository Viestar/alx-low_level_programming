#include "main.h"

int len_without_wilds(char *str);
void recurse_wild(char **wildstring);
char *match_finder(char *str, char *match_post);


/**
 * wildcmp - Compares two strings.
 * @s1: First string to be compared.
 * @s2: Second string to be compared - may contain wildcards.
 * Return: 0 or 1.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		recurse_wild(&s2);
		s2 = match_finder(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}

/**
 * len_without_wilds - Returns the length of a string,
 * @str: The string to be measured.
 * Return: The length.
 */

int len_without_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))  /* Iterates through the string */
	{
		if (*str != '*') /* Ignores all the aestericks */
			len++;

		index++;
		len += len_without_wilds(str + index);
	}

	return (len);
}

/**
 * recurse_wild - Iterates for non-wild characters.
 * @wildstring: The string to be iterated through.
 */

void recurse_wild(char **wildstring)
{
	if (**wildstring == '*')
	{
		(*wildstring)++;
		recurse_wild(wildstring);
	}
}

/**
 * match_finder - Checks for matches.
 * @str: The string to be matched.
 * @match_post: The match_post.
 * Return: Pointer if match
 */
char *match_finder(char *str, char *match_post)
{
	int str_len = len_without_wilds(str) - 1;
	int match_post_length = len_without_wilds(match_post) - 1;

	if (*match_post == '*')
		recurse_wild(&match_post);

	if (*(str + str_len - match_post_length) == *match_post
		&& *match_post != '\0')
	{
		match_post++;
		return (match_finder(str, match_post));
	}

	return (match_post);
}

