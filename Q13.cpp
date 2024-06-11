/* check whether char is lower case or upper case */
#include <iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter Letter = ";
    cin>>x;

    if(x>=97 && x<=122)
    {
        cout<<"Given letter is in Lowercase";
    }
    else if(x>=65 && x<=90)
    {
        cout<<"Given letter is in Uppercase";
    }
    else
    {
        cout<<"je tu taklay te Letter  upper ani lower kontach naiye ..lai maril";
    }
}
