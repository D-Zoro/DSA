#include<iostream>
void swap(char &a,char& b)
{
  a+=b;
  b=a-b;
  a=a-b;
}
int main()
{
    int n;
    std::cout<<"Enter the size of the array"<<std::endl;
    std::cin>>n;

    char a[n];
    std::cout<<"Enter the elements"<<std::endl;
    for(int i=0;i<n;i++)n
    {
        std::cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(int(a[i])>int(a[j]))
            {
                swap(a[i],a[j]);
            }
        }
    }
    std::cout<<"the arranged array is \n";
    for(int i=0;i<n;i++)
    {
        std::cout<<a[i]<<' ';
    }
    return 0;

}