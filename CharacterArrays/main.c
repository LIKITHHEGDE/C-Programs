#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[] = "My name is Likith Hegde";
    // using name[] array we can't change the charactrers in the array so we use pointers for this purpose

    char *naam = "Mera naam Likith Hegde hey!";
    puts(naam);
    // puts() starts from the first char of naam and prints the strings after reaching th null char \0

    naam = "Jawan hey mera Naam , sunahi hoga na ?";
    puts(naam);

    return 0;



}
