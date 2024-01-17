/*sum and avg of three integers*/

#include <iostream>
using namespace std;
int add(int a,int b,int c)
{
    return a+b+c;
}
int avg(int a,int b,int c)
{
    return (a+b+c)/3;
}
int main()
{
    int n1,n2,n3,Sum,Avg;

    cout<<"Enter First Digit = ";
    cin>>n1;
    cout<<"Enter Second Digit = ";
    cin>>n2;
    cout<<"Enter Second Digit = ";
    cin>>n3;
    Sum=add(n1,n2,n3);
    Avg=avg(n1,n2,n3);

    cout<<"Addition = "<<Sum<<endl;
    cout<<"Average = "<<Avg<<endl;

    return 0;
}
