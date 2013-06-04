#include <iostream>
using namespace std;

class person
{
    string name;
    int age;

    public:

    person()
    {
        name="Fred";
        age=50;
    }

    ~person()
    {

    }
};

int main()
{
    string input;
    person * people;

    while(input.compare("quit")!=0)
    {
        cin >> input;
        if(input.compare("create")==0)
        {
            cout << "creating...\n";
            people = new person[100];
            cout << "created.";
        }

        if(input.compare("size")==0)
        {
            cout << sizeof(people);
        }

        if(input.compare("destroy")==0)
        {
            delete[] people;
            cout << "destroyed.";
        }

    }


}
