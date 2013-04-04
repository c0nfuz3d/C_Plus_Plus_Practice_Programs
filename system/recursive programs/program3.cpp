#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "program3: running program2...\n";
    system("program2.exe hello");
    return 0;
}
