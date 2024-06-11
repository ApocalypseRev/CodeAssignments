/* reverse an array */
#include <iostream>
using namespace std;
int main()
{
    int i;
    const int size=5;
    int arr[size]={5,4,3,2,1};

    cout<<"Original array: " ;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int start=0;
    int end=size-1;
    while(start<end)
    {
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"Reversed Array : ";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
