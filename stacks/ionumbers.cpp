#include<iostream>
#include<stack>
using namespace std;

stack<int>numbers;
int in;
bool done;
string command;
int main()
{

  cout << "ionumbers by James Nakano\ntype a command:\n";
  cout << "'push x' - pushes x onto the stack\n";
  cout << "'pop' - pops the last element off the stack\n";
  cout << "'top' - returns the top element of the stack\n";
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
                cout<<numbers.pop();
        }

    if (command.compare("top") == 0)
    {
      if (numbers.empty())
        cout << "empty\n";
      else
        cout << numbers.top() << '\n';

    }

    if(command.compare("size")==0)
        cout<<numbers.size()<<'\n';

    if (command.compare("quit") == 0)
      done = true;
  }
  return 0;

}

