#include "main.h"

/**
 * get_endianness - checks endianness of a system
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
int i = 1;
char *c = (char *)&i;

return ((int)(*c));
}
