#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * print_name - prints a name using a function pointer
 *
 * @name: pointer to the name string
 * @f: pointer to the function that prints the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
    if (name && f)
        f(name);
}

/**
 * print_name_as_is - prints a name as is
 *
 * @name: pointer to the name string
 *
 * Return: void
 */
void print_name_as_is(char *name)
{
    while (*name)
    {
        _putchar(*name);
        name++;
    }
    _putchar('\n');
}

/**
 * print_name_uppercase - prints a name in uppercase
 *
 * @name: pointer to the name string
 *
 * Return: void
 */
void print_name_uppercase(char *name)
{
    while (*name)
    {
        if (*name >= 'a' && *name <= 'z')
            _putchar(*name - 32);
        else
            _putchar(*name);
        name++;
    }
    _putchar('\n');
}
