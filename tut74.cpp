#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function Objects(Functor): Function wrapped in a class so that it is available like an object
    int arr[]= {1,25,13,4,2,3};
    sort(arr,arr+5); // sorts only first 5 elements
    sort(arr,arr+6, greater<int>()); // sorts in descending order
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}