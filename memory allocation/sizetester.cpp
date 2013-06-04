#include <\Users\James\Dropbox\My Programs\C++\2dworld\src\point.h>
#include <iostream>
using namespace std;
int main()
{
    string input;
    int *p;

    while(input.compare("quit")!=0)
    {
        cin >> input;
        if(input.compare("create")==0)
        {
            cout << "creating...\n";
            p = new int[1000];
            cout << "created.";
        }

        if(input.compare("destroy")==0)
        {
            delete[] p;
            cout << "destroyed.";
        }

    }


}
