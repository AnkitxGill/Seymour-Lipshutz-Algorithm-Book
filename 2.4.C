#include<stdio.h>
#include<stdlib.h>

void primeCheck(int, int, int []);
int main()
{
    int N, i;
    printf("Enter the value of N:");
    scanf("%d",&N);
    int *DATA = (int *)malloc(sizeof(int) * (N+1));
    if( DATA == NULL)
    {
        printf("Memory Allocation Failed");
        return 0;
    }
    DATA[0] = 0;
    for ( i = 1; i <= N; i++)
    {
        DATA[i] = i;
    }
    
    for ( i = 2; i*i <= N; i++)
    {
        primeCheck(i, N, DATA);
    }
    for ( i = 1; i < N; i++)
    {
        if(DATA[i] != 1)
        {
            printf("%d\n", DATA[i]);
        }
    }
    free(DATA);
    return 0;
}
void primeCheck(int k, int n, int LIST[])
{
    if (LIST[k] == 1)
    {
        return;
    }
    for (int l = 2 * k; l < n; l = l + k)
    {
        LIST[l] = 1;
    }
}