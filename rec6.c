#include<stdio.h>
int fac(int);
int main()
{
    int n;
    printf("enter the limit");
    scanf("%d",&n);
    fac(n);
    printf("factorial is %d",fac(n));
    printf("\n");
    return 0;
}
int fac(int N)
{
    int factorial;
    if(N==1)
    {
        return 1;
    }
    factorial=N*fac(N-1);
    return factorial;
}