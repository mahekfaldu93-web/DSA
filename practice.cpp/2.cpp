#include <iostream>
using namespace std;

int main()
{
    int arr[7]={5,2,8,5,3,8,9};
    int n= sizeof(arr) / sizeof(arr[0]);

    // 1.Search Elements

    int search = 8;
    bool found = false;
    for (int i =0; i < n; i++)
    {
        if (arr[i] == search)
      {      
      cout << "Element " << search << "found at index " << i << endl;
      found = true; 
      }
   }
    if(!found) cout << "Element noy found" << endl;

    // 2. Find Occurrences of each element

    cout << "\noccurrences of each element :\n";
    for (int i=0; i < n; i++)
   {
    int count = 1;
    bool alreadycounted = false;
}
    

}