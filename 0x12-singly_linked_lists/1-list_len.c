#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
size_t list_len(const list_t *b)
{size_t count = 0;
	while (b)
	{
		b = b->next;
		count++;}
	return (count);
}
