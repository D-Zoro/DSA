#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)  
        {
           std::cout<<"#\t" ;
        }
        for(int j=1;j<=2*(n-i);j++)  
        {
           std::cout<<" \t" ;
        }
        for(int j=1;j<=i;j++)  
        {
           std::cout<<"#\t" ;
        }
        std::cout<<std::endl;


    }
    for (int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)  
        {
           std::cout<<"#\t" ;
        }
        for(int j=1;j<=2*(n-i);j++)  
        {
           std::cout<<" \t" ;
        }
        for(int j=1;j<=i;j++)  
        {
           std::cout<<"#\t" ;
        }
        std::cout<<std::endl;


    }
}