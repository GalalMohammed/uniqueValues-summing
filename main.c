#include <stdio.h>
#include <stdlib.h>

int sum(int arr[]){
int sum=0;
for (int i=0;i<20;i++)
{
    sum+=arr[i];
}
return sum;
}

int main()
{
    int i=0,arr[20];
    printf("Enter 20 numbers (without duplicating):\n");
    for (;i<20;i++)
    {
        scanf("%d",&arr[i]);
        for (int k=i-1;k>=0;k--)
        {
            if (arr[i]==arr[k])
            {
                printf("Don't duplicate numbers\n");
                i--;
                break;
            }
        }
    }
    printf("The values of array are:\n");
    for (i=0;i<20;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nSum=%d",sum(arr));
    return 0;
}
