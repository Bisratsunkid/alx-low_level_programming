<<<<<<< HEAD
#include <stdio.h>
=======
#include "main.h"

>>>>>>> f8ccb2739b7fe02f941b64fff2670b82272d024e
/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
