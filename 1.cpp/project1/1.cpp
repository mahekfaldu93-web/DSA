#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,1,1,3,4,5,3,1};
    int size = 10;
    int freq[10] = {}; // {1:4,2: 1, 3: 3, 4:1, 5: 1}
 
    for(int i = 0; i < size; i++)
    { // i = 9 < 10(T)
        freq[arr[i]]++; // arr[i]
    }

    for(int i = 0; i < size; i++)
    {
        if(freq[i] != 0)
        {
            cout << i << " Occures " << freq[i] << " Times " << endl;
        }
    }

    return 0;
}

// freq[0] = 0
// freq[1] = 0
// freq[2] = 0
// freq[3] = 0
// freq[4] = 0
// freq[5] = 0
// freq[6] = 0
// freq[7] = 0
// freq[8] = 0
// freq[9] = 0