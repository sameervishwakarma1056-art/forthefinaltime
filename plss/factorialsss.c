#include<stdio.h>
int funfact(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int funfact2(int n)
{
    if(n==1)  return 1;
    return n*funfact2(n-1);

}
int main()
{
    printf("%d\n", funfact(8));
    printf("%d\n", funfact2(8));
}