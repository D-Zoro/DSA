#include<iostream>
#include<iomanip>
int main()
{
   int a;
   std::cin>>a;
   for(int i=1;i<=a;i++)
   {
    for (int j=1;j<=a;j++)
    {
        if(j<=a-i)
        {
            std::cout<<" ";
        }
        else
        {
            std::cout<<"*";
        }
        
    }
    std::cout<<std::endl;
   }
}
   
