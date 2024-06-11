/*Find Factorial of number */
#include <iostream>
using namespace std;
int f(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * f(n - 1);
}
int main()
{
    int num;
    cout<<"Enter Number = ";
    cin>>num;
    cout << "Factorial of " << num << " is " << f(num);
    return 0;
}

