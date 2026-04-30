#include<stdio.h>

int DATA[10]={70, 30, 25, 80, 60, 50, 30, 75, 25, 60};
int N=10, LOC1, LOC2, first, second;
void FIND();
int main()
{
    FIND();
    printf("First = %d, LOC=%d, Second=%d, LOC=%d", first, LOC1, second, LOC2);
    return 0;    
}
void FIND()
{
    int Temp, i;
    first=DATA[0];
    second=DATA[1];
    LOC1=0;
    LOC2=1;
    
    if(first < second)
    {
        Temp = first;
        first = second;
        second = Temp;
        LOC1 = 1;
        LOC2 = 0;
    }
    for( i = 2; i < N; i++)
    {
        if(first < DATA[i])
        {
            Temp = first;
            first = DATA[i];
            second = Temp;
            LOC2 = LOC1;
            LOC1 = i;
        }
        else if(second < DATA[i])
        {
            second = DATA[i];
            LOC2 = i;
        }
    }
}
