#include<bits/stdc++.h>
using namespace std;
int gcdExtended(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1);
    
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}


int main()
{
    int a1, b1, x1, y1;
    cin>>a1>>b1;
    cout<<"GCD: "<<gcdExtended(a1,b1,&x1,&y1)<<endl;
    cout<<"X: "<<x1<<endl;
    cout<<"Y: "<<y1;
    return 0;
}