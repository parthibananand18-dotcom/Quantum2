#include <stdio.h>
int main()
{
    int num, flag = 0, r, i;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        r = num % i;
        if (r == 0)
        flag++;
    }
    if (flag == 0)
    {
        printf("%d is a Prime number", num);
    }
    else
    {
        printf("%d is not a Prime number", num);
    }
}