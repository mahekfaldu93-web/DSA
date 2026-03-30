#include <iostream>
#include <vector>
using namespace std;

// Q3.  Write a C++ program that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours

int main()
{
    vector<int> v1 = {5,10,3,5,1,2,8,3,5,10};

    for(int i = 1; i< v1.size(); i++)
    {
      if(v1[i] < v1[i-1] && v1[i] < v1[i+1])
      {
        cout << v1[i] << " ";
      }
    }
    return 0;
}