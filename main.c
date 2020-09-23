#include <stdio.h>
#include <stdlib.h>
int j=0,n=20;
int sum(int arr[]){
int sum=0;
for (int i=0;i<j;i++)
{
    sum+=arr[i];
}
return sum;
}
int main()
{
    int i=0,arr[n];
    printf("Enter 20 numbers (without duplicating):\n");
    for (;i<20;i++)
    {
        scanf("%d",&arr[j]);
        if (i>0)
        {
        for (int k=j-1;k>=0;k--)
        {
            if (arr[j]==arr[k])
            {
                j--;
                break;
            }
        }}
        j++;
    }
    printf("The values of array are:\n");
    for (i=0;i<j;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nSum=%d",sum(arr));
    return 0;
}
