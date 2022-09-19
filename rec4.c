#include<stdio.h>
int sumsquaren(int);
int main()
{
    int n;
    printf("enter the limit");
    scanf("%d",&n);
    sumsquaren(n);
    printf("sum is %d",sumsquaren(n));
    printf("\n");
    return 0;
}
int sumsquaren(int N)
{
    int S;
    if(N==1)
    {
        return 1;
    }
    S=(N*N)+sumsquaren(N-1);
    return S;
}