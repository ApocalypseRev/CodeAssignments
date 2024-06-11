/* print any number cha padha using While loop */
#include <iostream>
using namespace std;
int main()
{
    int n,i=0,s=0;
    cout<<"Enter number = ";
    cin>>n;
    while(i<10)
    {
        s=s+n;
        cout<<s<<endl;
        i++;
    }
}
