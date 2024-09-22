//for this the array must me in assending order so it is recomended
//to sort the arry using sort algorithm
#include<iostream>
int binarysearch(int arr[],int n,int k)
{
    int s=0,e=n,mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;

}
int main()
{
    int n;
    std::cout<<"Enter the size of array"<<std::endl;
    std::cin>>n;
    int arr[n];
    std::cout<<"enter the elements of the array"<<std::endl;
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"enter the key:"<<std::endl;
    int key,index;
    std::cin>>key;

    index=binarysearch(arr,n,key);
    std::cout<<"Key found at position : "<<index+1;

}