#include<iostream>
int main()
{
int n,k;
    std::cin>>n>>k;

    for (int i=1;i<=n;i++)
    {
       
       
            for (int j=1;j<=k;j++)
            {
                 if(i==1||i==n)
                {
                std::cout<<"* \t";
                }
                else
                {
                if(j==1||j==k)
                {
                    std::cout<<"* \t";
                }

                else
                {
                    std::cout<<" \t";
                }
                }
               
            }

      std::cout<<"\n";

    }
}