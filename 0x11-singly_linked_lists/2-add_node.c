#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of list
 * @str: name of new node
 * Return: Nothing
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}
