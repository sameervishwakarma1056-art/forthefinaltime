#include<stdio.h>
int fun(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}
int fun2(int n, int revrev)
{
    if(n ==0) return revrev;
    return fun2(n/10,revrev*10+n%10);
}
int main()
{
    printf("%d\n", fun(6090));
    printf("%d\n", fun2(6090,0));

}