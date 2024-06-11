/* check whether number is palindrome or not */
#include <iostream>
using namespace std;
int main()
{
    int n,digit;
    cout<<"Enter a number = ";
    cin>>n;
    int on=n;
    int rn=0;
    while(n> 0)
    {
        digit = n%10;
        rn = rn*10+digit;
        n/=10;
    }
    if(on==rn)
    {
        cout<<"This Number - "<<on<<" is palindrome number";
    }
    else
    {
        cout<<"This Number - "<<on<<" is not a palindrome number";
    }

}
