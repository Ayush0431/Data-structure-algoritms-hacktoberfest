#include <iostream>
using namespace std;
int main()
{
    int ar[] = {1, 2, 3, 4, 5, 6}; // array
    for (auto &it : ar)
        cout << it << " "; // printing
}