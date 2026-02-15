#include<stdio.h>
void display(int arr[] ,int n )
{
    printf("Array Elements->\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");

} 
int insert_place(int arr[], int n, int x, int pos)
{
    if(pos<0||pos>=n)
    {
        printf("Can not insert");
        return n; 
    }
     for(int j=n-1;j>=pos;j--)
     {
        arr[j+1]=arr[j];
     }
     arr[pos]=x;
     return n+1;
 }
 int delete_x(int arr[], int n ,int x)
 {
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            break;
        }
    }
    if(i == n)
    {
        printf("BRUH!!!\n");
        return n;
    }
    for(int j=i;j<=n-2;j++)
    {
        arr[j]=arr[j+1];
    }
    return n - 1;
 }
 int main()
 {
    int arr[10]={1, 2, 33, 40, 50, 69};
    int n=6;
    display(arr,n);
     n=insert_place(arr,n,2,3);
     display(arr,n);
     n=delete_x(arr,n,50);
     display(arr,n);
 }