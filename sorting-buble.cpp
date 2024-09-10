#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter the size of the arry";
    std::cout<<std::endl;
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter the elements of the array"<<std::endl;
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]+=arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
    std::cout<<"the arry after sorting\n";
    for(int i=0; i<n;i++)
    {
        std::cout<<arr[i]<<' ';
    }
    return 0;
}