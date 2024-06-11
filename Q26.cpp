/* check whether number is armstrong or not */
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter number - ";
    cin>>n;
    int on=n;
    int count=0;

    while(on!=0)
    {
        on=on/10;
        count++;
    }
    int sum=0;
    on=n;
    while(on != 0)
    {
        int digit=on%10;
        int pdigit=1;
        for(i=0;i<count;i++)
        {
            pdigit = pdigit*digit;
        }
        sum = sum + pdigit;
        on = on/10;
    }
    if (sum == n)
    {
        cout<<n<<" = is an Armstrong Number ."<<endl;
    }
    else
    {
        cout<<n<<"= is not an Armstrong number ."<<endl;
    }
}
