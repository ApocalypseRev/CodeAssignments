/*read two numbers  and perform addition subtraction multi and div*/

#include <iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int subtr(int a,int b)
{
    return a-b;
}
int multi(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int n1,n2,Sum,Sub,Mul,Div;

    cout<<"Enter First Digit = ";
    cin>>n1;
    cout<<"Enter Second Digit = ";
    cin>>n2;
    Sum=add(n1,n2);
    Sub=subtr(n1,n2);
    Mul=multi(n1,n2);
    Div=div(n1,n2);
    cout<<"Addition = "<<Sum<<endl;
    cout<<"Subtraction = "<<Sub<<endl;
    cout<<"Multiplication = "<<Mul<<endl;
    cout<<"Division = "<<Div<<endl;
    return 0;
}
