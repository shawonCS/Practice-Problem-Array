#include<stdio.h>
int main()
{
    int i,j,n,x,arr[100],c=0;
    int temp=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
