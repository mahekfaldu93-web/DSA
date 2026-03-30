#include<iostream>
using namespace std;

int main()
{
    int arr[7] = {5, 2, 8, 5, 3, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 1. Search Elements

    int search = 8;
    bool found = false;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == search) 
        {
            cout << "Element " << search << " found at index " << i << endl;
            found = true;
        }
    }
    if (!found) cout << "Element not found" << endl;

    // 2. Find Occurrences of each element

    cout << "\nOccurrences of each element:\n";
    for (int i = 0; i < n; i++) 
    {
        int count = 1;
        bool alreadyCounted = false;
        for (int j = 0; j < i; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                alreadyCounted = true;
                break;
            }
        }
        if (!alreadyCounted) 
        {
            for (int k = i + 1; k < n; k++) 
            {
                if (arr[i] == arr[k]) count++;
            }
            cout << arr[i] << " occurs " << count << " times\n";
        }
    }

    // 3. Sum and Average of Array
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    double avg = (double)sum / n;
    cout << "\nSum = " << sum << ", Average = " << avg << endl;

    // 4. Find Min and Max in Array
    int minVal = arr[0], maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    cout << "\nMin = " << minVal << ", Max = " << maxVal << endl;

    return 0;
}