#include<iostream>

int main()
{
    int arr[5]={2,4,3,1,5};
   int  n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++)
    {

        for(int j=i;(j>=0)&&(arr[j]>arr[j+1]);j--)
        {
           arr[j]+=arr[j+1];
            arr[j+1]=arr[j]-arr[j+1];
            arr[j]=arr[j]-arr[j+1];
        }
    }
    for(int i=0;i<5;i++)
    {
        std::cout<<arr[i];
    }
    return 0;
}
 