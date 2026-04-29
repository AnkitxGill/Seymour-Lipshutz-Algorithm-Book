#include<stdio.h>

int main()
{
    int J,K;
    int DIV(int, int);

    printf("enter value of K:");
    scanf("%d",&K);
    printf("enter value of J:");
    scanf("%d",&J);
    printf("%d",DIV(K,J));
    return 0;
}
int DIV(int M, int N)
{
    if (M%N==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
