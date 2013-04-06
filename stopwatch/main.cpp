#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t start;
    time_t stop;
    clock_t t;
    cout << "stopwatch by James Nakano\n";
    cout << "Commands:\n";
    cout << "'start' - start the timer\n";
    cout << "'stop' - stops the timer\n";
    cout << "'quit' - quits the program\n";
    string input;
    while(input.compare("quit")!=0)
    {
        cin >> input;
        if(input.compare("start")==0)
        {
            t = clock();
            cout << "timer started.\n";
        }
        if(input.compare("stop")==0)
        {
            t = clock() -t;
            cout <<"timer stopped.\n";
            cout <<"elapsed time: "<< ((float)t)/CLOCKS_PER_SEC <<" seconds\n";
        }
    }

    return 0;
}
