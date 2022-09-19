#include<stdio.h>
int sumdigits(int);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    sumdigits(n);
    printf("sum is %d",sumdigits(n));
    printf("\n");
    return 0;

}
int sumdigits(int N)
{
    int S ;
    if(N==0)
    {
        return 0;
    }
    S=N%10+sumdigits(N/10);
    return S;
}