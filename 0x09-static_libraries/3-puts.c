#include "main.h"
#include<stdio.h>
/**
 * _puts - Entry point
 * @str: string to print
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\0');
}
