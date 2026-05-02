/* 2.5(a)
#include<stdio.h>
int COUNT(int [], int, int);

int main()
{
    int n, c;
    int DATA[10] = {70, 30, 25, 80, 60, 50, 30, 85, 95, 160};
    n = 10;
    c = 0;
    printf("No of times LOC changed:%d", COUNT(DATA, n, c));
    return 0;
}
int COUNT(int LIST[], int N, int C)
{
    int i, MAX;
    i = 0;
    MAX = LIST[0];
    while(i < N)
    {
        if(MAX < LIST[i])
        {
            MAX = LIST[i];
            C = C + 1;
        }
        i = i + 1;
    }
    return C;
}
*/
/* 2.5.(b)
#include<stdio.h>
#include<stdlib.h>

int COUNT(float [], int, int);
int main()
{
    int i, N, C;
    C =0;
    printf("enter the value of N:");
    scanf("%d", &N);
    float *DATA = (float *)malloc(sizeof(float) * N);
    if( DATA == NULL)
    {
        printf("Memory Allocation Failed");
        return 0;
    }
    for ( i = 0; i < N; i++)
    {
        printf("enter value between 0 and 1:");
        scanf("%f", &DATA[i]);
    }
    printf("No of times value of location changed:%d", COUNT(DATA, N, C));
    return 0;
}
int COUNT(float LIST[], int n, int c)
{
    int i;
    float max;
    i = 1;
    max = LIST[0];
    while( i < n)
    {
        if( max < LIST[i])
        {
            max = LIST[i];
            c = c + 1;
        }
        i = i + 1;
    }
    return c;
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int CountUpdates(double [], int, int);
int main()
{
    int i, j, N, C, sum;
    double DATA[4];
    int COUNT[4];
    float average;
    sum = 0;
    N = 4;

    srand(time(0));
    for ( i = 0; i < N; i++)
    {
        C = 0;
        for ( j = 0; j < N; j++)
        {
            DATA[j] = (double)rand() / RAND_MAX;
        }
        COUNT[i] = CountUpdates(DATA, N, C);
    }
    for ( i = 0; i < N; i++)
    {
        sum = sum + COUNT[i];
    }
    average = (double)sum / N;
    printf("The total number of times the value of MAX gets updated :%d\n", sum);
    printf("the average no of times the value of MAX gets updated : %f", average);
    return 0;
}
int CountUpdates(double LIST[], int n, int c)
{
    int i;
    double MAX;
    MAX = LIST[0];
    for ( i = 1; i < n; i++)
    {
        if( MAX < LIST[i])
        {
            MAX = LIST[i];
            c = c + 1;
        }
    }
    return c;
}