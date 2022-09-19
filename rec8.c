#include<stdio.h>
void fibonacci(int,int,int);
int main()
{
    int n,a=0,b=1;
    printf("enter thae nth number");
    scanf("%d",&n);
    fibonacci(n,a,b);
    printf("\n");
    return 0;
}
void fibonacci(int N,int first, int second)
{
    int c; 
    c=first+second; 
    first=second;
    second=c;
    if(N>0)
    {
        printf("%d\n",second);
    }
    fibonacci(N-1,first,second);

}



