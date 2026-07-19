#include <stdio.h>
int main()
{
    int num, copy, rev = 0;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    copy = num;
    while (num > 0)
    {
        rev = rev * 10;
        rev = rev + (num % 10);
        num = num / 10;
    }
    if (rev == copy)
    {
        printf("%d is a Palindrome", copy);
    }
    else
    {
        printf("%d is not a Palindrome", copy);
    }
    return 0;
}
