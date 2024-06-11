/* Find sum of first N positive integers */
#include <iostream>
using namespace std;
int main()
{
    int s,n,a,i;
    cout<<"Number of integers = ";
    cin>>n;

    cout<<"first term = ";
    cin>>a;

    cout<<"last term = ";
    cin>>i;

    s=(n*(a+i))/2;
    cout<<" Total Sum = "<<s;
}
