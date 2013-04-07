#include <iostream>

using namespace std;

int main()
{
    string s;
    int x;
    cout << "type in a string\n";
    cin >> s;
    cout << "how many times would you like this to print?\n";
    cin >> x;
    for(int i=0; i<x; i++)
    {
        cout << s;
    }



}
