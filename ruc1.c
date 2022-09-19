#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("enter the limit");
    scanf("%d",&n);
    sum(n);
    printf("sum is %d",sum(n));
    printf("\n");
    return 0;

}
int sum(int N)
{ 
    int S;
    if(N==1)
    {
        return 1;
    }
    S=N+sum(N-1);
    return S;

}