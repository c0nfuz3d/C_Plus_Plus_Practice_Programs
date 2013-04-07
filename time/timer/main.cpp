#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t start;
    time_t stop;
    time_t current;
    bool stopped=false;
    int set_time;
    cout << "timer by James Nakano\n";
    cout << "Commands:\n";
    cout << "'start' - starts the timer\n";
    cout << "'set x' - sets the timer to x seconds\n";
    cout << "'quit' - quits the program\n";
    string input;
    cin >> input;
    while(input.compare("quit")!=0)
    {
        time(&current);
        if(input.compare("start")==0)
        {
            time(&start);
            time(&stop);
            cout << "timer started.\n";
            input="";
            stopped=false;
        }
        if(input.compare("set")==0)
        {
            cin >> set_time;
            cout << "set timer for "<<set_time<<" seconds.\n";
            cin >> input;
        }
        if(-difftime(start,current)==set_time)
        {
            cout << "beep! timer done.\n";
            stopped=true;
            cin >> input;
        }
        if(difftime(stop,current)==-1 && !stopped)
        {
            time(&stop);
            cout << ".";
        }

    }
    cout << "quitting...";

    return 0;
}
