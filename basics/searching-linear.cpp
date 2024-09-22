#include<iostream>

int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }
    std::cout<<"element not found";
    return -1;
}
int main()
{
    int n;
    std::cout<<"Enter the size of the array\n";
    std::cin>>n;
    int arr[n];
    std::cout<<"enter the elements\n";
    for(int i =0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"enter the key";
    int key,index;
    std::cin>>key;

   index=linearsearch(arr,n,key);
   if (index ==-1)
   {
    return 0;
   }
    std::cout<<"element found at position "<<index+1;
    return 0;
}
