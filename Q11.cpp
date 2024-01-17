/*check whether given char is  vowel or not */
#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout<<"Enter Character = ";
    cin>>letter;
    if(letter=='a' || letter=='e' ||letter=='i' || letter=='o' || letter=='u')
    {
        cout<<"Given letter is a Vowel";

    }
    else
    {
        cout<<"Given letter is not a vowel";
    }
    return 0;
}
