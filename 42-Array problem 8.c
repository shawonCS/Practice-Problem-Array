#include<stdio.h>
int main()
{
    int i,j,n,arr[100];
    int temp=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     j=0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
