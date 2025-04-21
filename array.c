#include<stdio.h>
int main()
{
    int *a;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",*(a+i));
    }
}