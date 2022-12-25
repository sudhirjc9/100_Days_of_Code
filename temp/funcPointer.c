#include<stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int (*fp)(int, int);
    fp = sum;
    printf("%d\n", (*fp)(10,20));

    printf("%d\n", fp(10,20));

}