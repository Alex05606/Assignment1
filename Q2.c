#include<stdio.h>
int main()
{
    int arr[]={10,12,13,14,15};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}