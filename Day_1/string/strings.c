#include<stdio.h>
#include<string.h>

// char *strncat(char *dest, const char *src, size_t n)

int main()
{
    char src[50]="World";
    char dest[50]="Hello ";

    strncat(dest, src, 5);
    printf("%s",dest);
}