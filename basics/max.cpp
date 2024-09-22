#include<iostream>
void swap(int & a,int& b)
{
    a+=b;
    b=a-b;
    a=a-b;
}
int max(int a,int b) 
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    std::cout<<"Enter the size of the array:\n";
    int n;
    std::cin>>n;
    int a[n];
    std::cout<<"Enter the elemnts\n";
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];

    }
   int maxi=a[0];
   for(int i=1;i<n-1;i++)
   {
    maxi=(a[i],maxi);
   }
   std::cout<<"the biggest number:"<<maxi;
   return 0;





}