#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,max=0;

    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter element-\n ");
        scanf("%d",&arr[i]);
    }
       min=arr[i];
        for(i=0;i<n;i++)
        {
            if(min>=arr[i])
            {
                min=arr[i];
            }
        }

        for(i=0;i<n;i++)
        {
            if(arr[i]>=max)
            {
                max=arr[i];
            }
        }

    printf("minimum = %d\n maximum= %d",min,max);
}

