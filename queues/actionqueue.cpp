#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int x=0;
int y=0;
bool done=false;
queue< vector<int> > actions;

void add_action(int action_no, int times)
{
    vector<int> action;
    action.push_back(action_no);//number of action to do
    action.push_back(times);//number of times to do the action
    action.push_back(0);//how many times its already been done
    actions.push(action);
}

void initialize()
{
    add_action(3,5);//move up 5 units
    add_action(2,5);//move right 5 units
    add_action(4,5);//move down 5 units
    add_action(1,5);//move left 5 units
}

void perform_actions()
{
    if(!actions.empty())
    {
        cout <<"action no:"<<actions.front().at(0)<<" to do:"<<actions.front().at(1)<< " done:"<<actions.front().at(2);
        if(actions.front().at(2)<actions.front().at(1))//times done is less than times to do
        {
            switch(actions.front().at(0))
            {
            case 1://move left
                x--;
                break;
            case 2://move right
                x++;
                break;
            case 3://move up
                y++;
                break;
            case 4://move down
                y--;
                break;
            }
            actions.front().at(2)++;
        }
        else
            actions.pop();

    }
    else
        done=true;//the queue is empty so stop
}

int main()
{
    initialize();
    while(!done)
    {
        perform_actions();
        cout << " position: "<< x <<","<<y<<endl;
    }
    return 0;
}
