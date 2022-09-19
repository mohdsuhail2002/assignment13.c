#include<stdio.h>
int sumoddn(int);
int main()
{
    int n;
    printf("enter the limit");
    scanf("%d",&n);
    sumoddn(2*n);
    printf("sum is %d",sumoddn(2*n));
    printf("\n");
    return 0;
}
int sumoddn(int N)
{
    int S;
    if(N%2!=0)
    {
        if(N==1)
        {
            return 1;
        }
        S=N+sumoddn(N-2);
        return S;
    }
    else
    {
        N=N-1;
        if(N==1)
        {
            return 1;
        }
        S=N+sumoddn(N-2);
        return S;
    }
}