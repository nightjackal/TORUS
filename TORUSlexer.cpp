#include <iostream>
#include <fstream>
#include <string>
/*
This is the Cpp lexer for the TORUS compiler (We chose to use the more complex compiler over
an interpreter for speed).
15 May 2025
*/
int main()
{
    using std::cout;
    std::ifstream tests("tests.torus");
    std::string line;
    if (tests.is_open())
    {
        cout << "The file is properly connected\n";
    }
    else
    {
        cout << "The file is not connected\n";
        return 1;
    };

    int lineNum = 0;
    return 0;
}