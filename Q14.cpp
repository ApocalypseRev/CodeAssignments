/* Convert single digit to words */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<" Enter Digit = ";
    cin>>n;
    if(n==0)
    {
        cout<<" In Words = "<<" Zero ";
    }
    else if(n==1)
    {
        cout<<" In Words = "<<" One ";
    }
    else if(n==2)
    {
        cout<<" In Words = "<<" Two ";
    }
    else if(n==3)
    {
        cout<<" In Words = "<<" Three ";
    }
    else if(n==4)
    {
        cout<<" In Words = "<<" Four ";
    }
    else if(n==5)
    {
        cout<<" In Words = "<<" Five ";
    }
    else if(n==6)
    {
        cout<<" In Words = "<<" Six ";
    }
    else if(n==7)
    {
        cout<<" In Words = "<<" Seven ";
    }
    else if(n==8)
    {
        cout<<" In Words = "<<" Eight ";
    }
    else if(n==9)
    {
        cout<<" In Words = "<<" Nine ";
    }
    else
    {
        cout<<"Maju Nako Lai Maril You Entered Double Digit ";
    }
    return 0;
}
