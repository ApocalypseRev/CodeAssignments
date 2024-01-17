/* finding out max number between 3 numbers */
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,large;
    cout<<"Enter Number 1 = ";
    cin>>a;
    cout<<"Enter Number 2 = ";
    cin>>b;
    cout<<"Enter Number 3 = ";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is greater among = "<<a<<","<<b<<","<<c;
        }
        else
        {
            cout<<c<<" is greater among = "<<a<<","<<b<<","<<c;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<" is greater among = "<<a<<","<<b<<","<<c;
        }
        else
        {
            cout<<c<<" is greater among = "<<a<<","<<b<<","<<c;
        }
    }

}
