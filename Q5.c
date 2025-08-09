// Rotate an array by one.
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i;
    if(n>1)
    {
        int last=arr[n-1];
        for(i=n-1;i>=1;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=last;
    }
printf("Rotated array: ");
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}