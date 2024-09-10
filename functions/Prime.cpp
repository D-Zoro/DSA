#include<iostream>
int prime(int n);
int main()
{
    int x,y;
    std::cout<<"Enter the range of numbers\n";
    std::cin>>x>>y;
    std::cout<<"Prime numbers in the range["<<x<<','<<y<<"]:\n";
    for(int i=x;i<=y;i++)
    {
        if(prime(i)==1)
        std::cout<<i<<'\t';

    }
   return 0;
}


int prime(int n)
{
    int count=0,i=1;

    while(i<=n)
    {
        if (n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    return 1;
    
    else 
    return 0;
}