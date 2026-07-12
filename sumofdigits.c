#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    for(i=1;i<=num;i+=1)
    {
        sum=sum+i;
    }
    printf("Sum of natural numbers is %d",sum);
    return 0;
}