#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    char *_s = "Hello, world and the world we live in";
    char *_f = "world we";
    char *_t;

    t = _strstr(s, f);
    _t = _strstr(_s, _f);
    printf("%s\n", t);
    printf("%s\n", _t);
    return (0);
}