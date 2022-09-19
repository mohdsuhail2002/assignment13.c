#include<stdio.h>
int sumevenn(int);
int main()
{
    int n;
    printf("enter the limit");
    scanf("%d",&n);
    sumevenn(2*n);
    printf("sum is %d",sumevenn(2*n));
    printf("\n");
    return 0;
}
int sumevenn(int N)
{
    int S;
    if(N%2==0)
    {
        if(N==0)
        {
            return 0;
        }
        S=N+sumevenn(N-2);
        return S;
    }
    else
    {
        N=N-1;
        if(N==0)
        {
            return 0;
        }
        S=N+sumevenn(N-2);
        return S;
    }
}