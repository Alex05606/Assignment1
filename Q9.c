// Count frequency of array.
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,3,5,6,1,7,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int visited[n];
    int i;
    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(visited[i]==1)
        continue;
    int count=1;
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
            visited[j]=1;
        }
    }
    printf("%d occurs%d times\n",arr[i],count);
    }
return 0;
}