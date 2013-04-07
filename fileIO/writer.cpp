#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    string command;
    string text;
    string filename;
    ofstream fout(filename);
    cin << text;
    while(command.compare("quit")!=0)
    {
        cin >> command;
        if(command.compare("write")==0)
        {
            fout << text;
        }

        if(command.compare("save")==0)
        {
            cout << "what would you like to save it as?\n";
            cin >> filename;
            fout << text;
            cout << "saved.\n";
        }
    }

}
