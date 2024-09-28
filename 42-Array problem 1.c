#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }

    int min=arr[0];
    for(i=1;i<n;i++)
    {
        if(min>=arr[i])
            min=arr[i];
    }
    printf("The minimum value is:%d\n",min);

    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("The maximum value is:%d\n",max);

    return 0;
}
