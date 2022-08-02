#include<iostream>
using namespace std;
int main ()
{
    int m,n,a,x;
    cin>> m>>n;
    a=2*1;
    x=m*n;
    if (x/a!=0 || x/a==0 || x<a)
    {
        cout<<x/a<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}
