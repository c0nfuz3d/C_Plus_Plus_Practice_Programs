#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
    string text;
    ifstream file;//inputfilestream
    file.open("doc.txt");//open the file
    while(getline(file,text))//as long as you can get a line from the file
    {
        cout << text<<"\n";//print it
    }
    file.close();
}
