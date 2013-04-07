#include <iostream>

using namespace std;

int main()
{
    cout << "echo by James Nakano\n";
    cout << "Directions:\n";
    cout << "Type anything to see it spat back out.\n";
    string user_input="";
    while(user_input.compare("quit")!=0)
    {
        cin >> user_input;
        cout << "echo: "<<user_input<<"\n";
    }
    cout << "quitting...";
    return 0;
}
