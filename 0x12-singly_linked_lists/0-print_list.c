#include "lists.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: Represents character to print
 *
 * Return: Upon success return 1,
 * upon error, -1 is returned, otherwise errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_list - prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: numerical value for  nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{

			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}

		else
		{
			size_t letty;

			for (letty = 0; h->str[letty] != '\0'; letty++)
				_putchar(h->str[letty]);

			_putchar('\n');
		}

		h = h->next;
		count++;
	}

	return (count);
}
