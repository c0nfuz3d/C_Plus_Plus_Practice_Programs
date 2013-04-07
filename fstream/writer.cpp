#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
int main()
{
    string command;
    string text;
    ofstream file;
    cin >> text;
    while(command.compare("quit")!=0)
    {
        cin >> command;
        if(command.compare("write")==0)
        {
            cout << "type your input:\n";
            cin >> text;
            command="";
        }

        if(command.compare("save")==0)
        {
            file.open("doc.txt");
            file << text;
            cout << "saved.\n";
            file.close();
        }
    }

}
