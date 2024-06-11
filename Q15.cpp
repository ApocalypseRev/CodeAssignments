/*WAP for Grades using Switch Case */
#include <iostream>
using namespace std;
int main()
{
    int c;
    cout<<"Choose 1 for 100% to 95% "<<endl;
    cout<<"Choose 2 for 94% to 85% "<<endl;
    cout<<"Choose 3 for 84% to 80% "<<endl;
    cout<<"Choose 4 for 79% to 70% "<<endl;
    cout<<"Choose 5 for 69% to 60% "<<endl;
    cout<<"Choose 6 for 59% to 50% "<<endl;
    cout<<"Choose 7 for 49% to 45% "<<endl;
    cout<<"Choose 8 for below 45%"<<endl;
    cout<<"Enter Choice = "<<;
    cin>>c;
    switch(c)
    {
        case 1:
            {
                cout<<"A+";
                break;
            }
        case 2:
            {
                cout<<"A";
                break;
            }
        case 3:
            {
                cout<<"B+";
                break;
            }
        case 4:
            {
                cout<<"B";
                break;
            }
        case 5:
            {
                cout<<"C+";
                break;

            }
        case 6:
            {
                cout<<"C";
                break;
            }
        case 7:
            {
                cout<<"D";
                break;
            }
        case 8:
            {
                cout<<"Fail";
                break;
            }
    }
}
