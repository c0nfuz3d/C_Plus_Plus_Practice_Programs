#include <iostream>

using namespace std;

int main()
{
    int i,j;

    cout << "Type in two integers:";
    cin >> i >> j;
    if(i>j)
    cout << i <<" is greater than " << j;
    else
    cout << i <<" is less than " << j;
}
