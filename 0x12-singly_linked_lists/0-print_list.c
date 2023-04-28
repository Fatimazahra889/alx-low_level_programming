#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
size_t print_list(const list_t *b)
{
	size_t count = 0;
	while (b != NULL)
	{
		if (b->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", b->len, b->str);
		h = h->next;
		count++;
	}
	return (count);}
