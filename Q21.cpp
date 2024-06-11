/*Count occurrences of 3 in digit */
#include <iostream>
using namespace std;
int main()
{
    char digit[20];
    int i,flag,count=0;
    cout<<"Enter Digit = ";
    cin>>digit;
    flag=0;
    cout<<"Digit = "<<digit<<endl;
    for(i=0;digit[i]!='\0';i++)
    {
        if(digit[i]=='3')
        {
            cout<<"Location of 3 = "<<i<<endl;
            count++;
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"no 3 present tasach ghri jaa";
    }
    cout<<"Total number 3 present = "<<count<<endl;


}
