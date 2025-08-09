// Check If array is sorted..
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    int issorted=1;
    int i;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            issorted=0;
            break;
        }
    }
    if(issorted)
   {
    printf("Array is already sorted.");
   } 
   else
   {
    printf("Not sorted.");
   }
return 0;
}

