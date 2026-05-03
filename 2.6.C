#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number, sum=0, size=0;
    printf("enter a number");
    scanf("%d",&number);
    while(number>0)
    {
        sum=sum + number%10;
        size++;
        number=number/10;
    }
    printf("%d\n",sum);
    printf("%d",size);
    return 0;
}