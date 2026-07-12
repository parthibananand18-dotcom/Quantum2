#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem, copy, sum = 0, copy1, count = 0, digit;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    copy = num;
    copy1 = num;
    while (num > 0)
    {
        digit = num % 10;
        count = count + 1;
        num = num / 10;
    }
    while (copy > 0)
    {
        rem = copy % 10;
        sum = sum + (pow(rem,count));
        copy = copy / 10;
    }
    if (sum == copy1)
    {
        printf("%d is an Armstrong number", copy1);
    }
    else
    {
        printf("%d is not an Armstrong number", copy1);
    }
    return 0;
}