#include <iostream>

using namespace std;

int main()
{

    string firstname;
    string lastname;
    int age;

    ifstream fin("input.txt");
    fin >> firstname;
    fin >> lastname;
    fin >> age;
}
