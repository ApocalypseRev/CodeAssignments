/* to check whether given number is +ve or -ve */
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter Number  = ";
    cin>>a;
    if(a>0)
    {
        cout<<a<<" is a Positive number";
    }
    else if(a<0)
    {
        cout<<a<<" is a Negative number";
    }
    else
    {
        cout<<"Given number is Zero";
    }
    return 0;
}

