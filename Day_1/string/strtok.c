#include<stdio.h>
#include<string.h>

int main()
{
    char src[50] = "Geeks-for-Geeks";
    const char delit[4] = "-";
    char *tok;

    tok = strtok(src,delit);

    while(tok !=0){
        printf("%s\n", tok);
        tok = strtok(0,delit);
    }
}