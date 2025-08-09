// Find the  second largest element from an array.
#include<stdio.h>
int main()
{
    int arr[]={10,12,13,14,15,27};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max,second;
    if ((arr[0]>arr[1]))
    {
        
         max=arr[0];
        second=arr[1];
    }
     
    else
    {
        
        max=arr[1];
        second=arr[2];

    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]>max)
        {
            second=max;
            max=arr[i];
        }
        else if(arr[i]>second && arr[i]!=max)
        {
            second=arr[i];
        }
    }
printf("The second largest is %d",second);
return 0;
    
}