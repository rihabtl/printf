#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;
int len2;
char str[] = "hi! im zahra";

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Character:[%c]\n", 'H');
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("%!\n");
_printf("%%\n");
_printf("chi haja:%%\n");
_printf("%");
_printf("% ");
_printf(str);
_printf("\n");
_printf("css%ccs%scscscs\n", 'T', "Test");
printf("css%ccs%scscscs\n", 'T', "Test");
_printf("A char inside a sentence:  %c.Dit it work?\n", 'F');
printf("A char inside a sentence:  %c.Dit it work?\n", 'F');
_printf("let's se if the cast is correctly done: %c.did it work?\n", 48);
printf("let's se if the cast is correctly done: %c.did it work?\n", 48);
_printf("%s", "this sentence is retrieved from va_arg!\n");
printf("%s", "this sentence is retrieved from va_arg!\n");
_printf("salam ana rihab: you %s nothing, rihab zwina.\n", (char *)0);
_printf("%c%cth %s%s a%cg%s: y%sou %s no%ching%s snow.%c",
		'W', 'i', "some", "more", 'r', "s", "", "know", 't', ",zahra", '\n');
_printf("man gcc:\n%s", str);
_printf(NULL);
_printf("%c", '\0');
printf("%c\n", '\0');
return (0);
}
