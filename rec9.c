#include<stdio.h>
int count(int,int);
int main()
{
    int n,c=0;
    printf("enter the number");
    scanf("%d",&n);
    count(n,c);
    printf("digits are %d",count(n,c));
    printf("\n");
    return 0;
}
int count(int N,int C)
{
    if(N%10!=0)
    {
        C++;
    }
    else
    {
        return C;
    }
    count(N/10,C);

}