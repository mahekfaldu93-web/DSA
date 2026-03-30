#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Print the addresses of each element in the array

    // 1. Indexing method
    cout << "Access using indexing:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2. Pointer method
    cout << "Access using pointers:\n";
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    // 3. Range-based for loop (C++11 onwards)
    cout << "Access using range-based for loop:\n";
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

int main()
{
    int arr[20];
    int n;
    cout << "Enter the elemets of number : "<< endl;
    cin >> n ;
    if (n>20)
    {
        cout << "limit exceed !";
    }
    for(int i=0; i<n; i++)
    {
        cout << "Enter element " << i+1 << ":" ;
        cin >> arr[i];
    }
    cout << "array element are :";
    for(int i=0; i<n; i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}