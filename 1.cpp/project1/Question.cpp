#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Unique elements are:\n";

    for(int i = 0; i < n; i++)
    {
        bool isDuplicate = false;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if(!isDuplicate)
            cout << arr[i] << " ";
    }

    return 0;
}

// 2.Mission: Topper Finder

// #include <iostream>
// using namespace std;

// int main() 
// {
//     int arr[100], n;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int largest = arr[0];
//     int secondLargest = arr[0];

//     for(int i = 1; i < n; i++) {

//         if(arr[i] > largest) {
//             secondLargest = largest;
//             largest = arr[i];
//         }

//         else if(arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }

//     cout << "Largest Element = " << largest << endl;
//     cout << "Second Largest Element = " << secondLargest << endl;

//     return 0;
// }

// 3.Mission: Sort Squad

#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Ascending Order
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }

    cout << "Ascending Order:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    // Descending Order
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] < arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }

    cout << "Descending Order:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// 4.Mission: Count Values

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, arr[100];
//     int positive = 0, negative = 0;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter array elements:\n";
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] > 0)
//             positive++;
//         else if(arr[i] < 0)
//             negative++;
//     }

//     cout << "Positive numbers: " << positive << endl;
//     cout << "Negative numbers: " << negative << endl;

//     return 0;
// }

//5.Mission: Magic Sorter

#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Sort even ascending
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] % 2 == 0 && arr[j] % 2 == 0 && arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }

    // Sort odd descending
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] % 2 != 0 && arr[j] % 2 != 0 && arr[i] < arr[j])
                swap(arr[i], arr[j]);
        }
    }

    cout << "Result:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}