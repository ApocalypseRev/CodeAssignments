/* revers a number */
#include <iostream>
using namespace std;
int main()
{
    int n,digit;
    int rn=0;
    cout<<"Enter a number = ";
    cin>>n;
    while(n!= 0)
    {
        digit = n%10;
        rn = rn*10+digit;
        n/=10;
    }
    cout<<"Reversed number : "<<rn<<endl;
    return 0;

}
