#include <iostream>
#include <cstdlib>
int main()
{
    int returned_value;
    std::cout << "program1: executing program2...\n";
    returned_value = system("program2.exe");
    std::cout << "program1: program2 returned "<< returned_value << "\n";
    std::cout << "program1: executing program3...\n";
    returned_value = system("program3.exe");
    std::cout << "program1: program3 returned "<< returned_value << "\n";
    return 0;
}
