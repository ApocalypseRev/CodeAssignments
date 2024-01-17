/*to check whether given number is odd or even*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter number = ";
    cin>>a;
    if(a%2==0 && a!=0)
    {
        cout<<a<<" is Even Number ";
    }
    else if(a%2!=0)
    {
        cout<<a<<" is Odd Number ";
    }
    else
    {
        cout<<"Compiler Detected You...Because you no HERO ..you ZERO";
    }
    return 0;
}
