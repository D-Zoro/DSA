#include<iostream>

int main()
{
    int n;
    std::cout<<"enter the size of array"<<std::endl;
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter the elements of the array:"<<std::endl;
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    //sorting
     for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                arr[j]+=arr[i];
                arr[i]=arr[j]-arr[i];
                arr[j]=arr[j]-arr[i];
            }
        }
    }
    std::cout<<"the elements after sorting are:"<<std::endl;
    
        for(int i=0;i<n;i++)
        {
            std::cout<<arr[i]<<' ';
        }
    return 0;
}