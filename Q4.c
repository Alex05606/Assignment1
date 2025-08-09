//Move Zeros to wards end.
#include<stdio.h>
int main()
{
    int arr[]={1,3,0,3,0,4,0,4,0,6,0,7,0,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int count =0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]!=0)
        {
            arr[count]=arr[i];
            count++;
        }
    }
while(count<n)
{
    arr[count]=0;
    count++;
}
printf("New array");
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}