#include<iostream>
using namespace std;

int main()
{
    int row,num=1;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
           cout<<num<<" ";
           num=num+1;
        }
        cout<<endl;
    }
    return 0;
}