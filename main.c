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
    unsigned int ui;
    void *addr;
    char str[] = "hi! im zahra";

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("%!\n");
    _printf("%%\n");
    _printf("chi haja:%%\n");
    _printf("%");
    _printf("% ");
    _printf(str);
    _printf("\n");
    _printf("%s%c%c%c%s%%%s%c","loading",'.','.','.',"99","please wait",'\n');
    printf("%s%c%c%c%s%%%s%c","loading",'.','.','.',"99","please wait",'\n');
    _printf("css%ccs%scscscs\n",'T',"Test");
    printf("css%ccs%scscscs\n",'T',"Test");
    _printf("A char inside a sentence:  %c.Dit it work?\n",'F');
    printf("A char inside a sentence:  %c.Dit it work?\n",'F');
    _printf("let's se if the cast is correctly done: %c.did it work?\n",48);
    printf("let's se if the cast is correctly done: %c.did it work?\n",48);
    _printf("%s", "this sentence is retrieved from va_arg!\n");
    printf("%s", "this sentence is retrieved from va_arg!\n");
    _printf("complete this sentence : you %s nothing, Jon snow.\n","know");
    printf("complete this sentence : you %s nothing, Jon snow.\n","know");
    _printf("salam ana rihab: you %s nothing, rihab zwina.\n", (char *)0);
    printf("salam ana rihab: you %s nothing, rihab zwina.\n", (char *)0);
    _printf("%c%cth %s%s a%cg%s: y%sou %s no%ching%s snow.%c",'W','i',"some","more",'r',"s","","know",'t',",zahra",'\n');
    printf("%c%cth %s%s a%cg%s: y%sou %s no%ching%s snow.%c",'W','i',"some","more",'r',"s","","know",'t',",zahra",'\n');


    return (0);
}
