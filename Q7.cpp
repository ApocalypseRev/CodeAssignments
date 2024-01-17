/* Swapping value of two integer variables */
#include <iostream>
using namespace std;
int main()
{
        int a,b,temp;

        cout<<"Enter a = ";
        cin>>a;
        cout<<"Enter b = ";
        cin>>b;

        temp=a;
        a=b;
        b=temp;

        cout<<"------------------After swapping--------------"<<endl;
        cout<<"Value of a ="<<a<<endl;
        cout<<"Value of b ="<<b<<endl;

        return 0;
}
