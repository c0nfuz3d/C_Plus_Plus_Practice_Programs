#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<string> strings;
    string in;
    cout << "type in some strings. type '.' to end\n";
    while(in.compare("."))
    {
        cin >> in;
        strings.push_front(in);
    }
    cout << "strings in reverse:\n";

    for(int i=0; i<strings.size();i++)
    {
        cout << strings[i] << "\n";
    }



}
