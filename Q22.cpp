/* finding Greatest Digit in number*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> n;
    int mdigit = -1;
    int digit;
    while (n > 0)
        {
            digit = n % 10;
            if (digit > mdigit) {
            mdigit = digit;
        }
        n /= 10;
    }
    cout << "The greatest digit in the given number is = " << mdigit <<endl;

    return 0;
}
