#include<iostream>
using namespace std;

int main()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int k=1;k<=row-i;k++)
        cout<<" ";
        for(int j=1;j<=row;j++)
        {
           cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}