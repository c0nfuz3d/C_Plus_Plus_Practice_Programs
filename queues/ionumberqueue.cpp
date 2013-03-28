#include<iostream>
#include<queue>

using namespace std;

int in;
bool done;
string command;
queue<int> numbers;

int main()
{

    cout << "ionumberqueue by James Nakano\ntype a command:\n";
    cout << "'push x' - pushes x onto the queue\n";
    cout << "'pop' - deletes the next element\n";
    cout << "'front' - returns the first element of the queue\n";
    cout << "'back' - returns the last element of the queue\n";
    cout << "'size' - returns the  of the stack\n";
    cout << "'quit' - quits the program\n\n";
    while (!done)
    {
        cin >> command;
        if (command.compare("push") == 0)
        {
            cin >> in;
            numbers.push(in);

        }
        if (command.compare("pop") == 0)
        {
            if (numbers.empty())
                cout << "nothing left to pop.\n";
            else
                numbers.pop();
        }

        if (command.compare("front") == 0)
        {
            if (numbers.empty())
                cout << "empty\n";
            else
                cout << numbers.front() << '\n';

        }

        if (command.compare("back") == 0)
        {
            if (numbers.empty())
                cout << "empty\n";
            else
                cout << numbers.back() << '\n';

        }

        if(command.compare("size")==0)
            cout<<numbers.size()<<'\n';

        if (command.compare("quit") == 0)
            done = true;
    }
    return 0;

}

