#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, K, result=0;
    int DIV(int, int);
    do
    {
        printf("enter the value of N:");
        scanf("%d",&N);
    } while (N<10);
    if (DIV(2,N)==0)
    {
        for ( K = 3; K*K <= N; K=K+2)
        {
            if (DIV(K,N)==0)
            {
                result=1;
                continue;
            }
            else
            {
                printf("Not Prime");
                exit(0);
            }
            
        }
    }
    else
    {
        printf("Not Prime");
    }
    if(result==1)
    {
        printf("Prime Number");
    }
    return 0;
}
int DIV(int X, int Y)
{
    if (Y%X==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
