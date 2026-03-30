#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(60);
    v1.push_back(90);
    v1.push_back(70);
    v1.pop_back();
    v1.pop_back();

    v1.clear();
    v1.insert(v1.begin()+1, 29);
    v1.erase(v1.begin()-1);
    cout << " Size of Vector "<< v1.size() << endl;
    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
  cout << v1.front() << endl;
  cout << v1.back() << endl;

    return 0;
}