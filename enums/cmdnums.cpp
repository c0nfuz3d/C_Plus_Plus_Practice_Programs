#include<iostream>
using namespace std;
enum command_t {NOTHING,MOVE_LEFT,MOVE_RIGHT,MOVE_UP,MOVE_DOWN};

void process_command(int command)
{
    switch(command)
    {
    case NOTHING:
        cout << "nothing";
        break;
    case MOVE_LEFT:
        cout << "move left";
        break;
    case MOVE_RIGHT:
        cout << "move right";
        break;
    case MOVE_UP:
        cout << "move up";
        break;
    case MOVE_DOWN:
        cout << "move down";
        break;
    default:
        cout << "command not recognized";

    }
}

int main()
{
    for(int i=0; i<6;i++)
    {
        process_command(i);
        cout << endl;
    }
}
