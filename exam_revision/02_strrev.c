#include <stdio.h>

char *strrev (char *str)
{
    int len;
    int i;
    char temp;

    len = 0;
    while (str[len]) 
    {
        len++;
    }
    i = 0;
    while ( i < len - 1)
    {
        temp = str[len - 1];
        str[len - 1] = str[i];
        str[i] = temp;
        i++;
        len--;
    } 
    return (str);
}

int main ()
{
    char str[] = "hola";
    strrev(str);
    printf("%s", str);
    return (0);
}
