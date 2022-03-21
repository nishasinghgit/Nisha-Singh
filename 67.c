#include <stdio.h>

int main()
{
    char *s;
    int len, i;
    printf("nisha singh\n");
    

    printf("\nEnter a string: ");
    gets(s);

    len = strlen(s);
    printf("\nThe Reverse of the string is:");

    for (i = len; i >= 0; i--)
        printf("%c", *(s + i));

    return 0;
}




