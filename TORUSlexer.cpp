#include <iostream>
#include <fstream>
#include <string>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

#pragma region file opener

    string file_directory = "/Users/graham/Desktop/TORUS/tests.torus"; // Sets File Directory
    std::ifstream file(file_directory);                                // Opens File
    if (file.is_open())                                                // checks if the file is open
    {
        cout << "File Succesfully Opened\n\n";
    }
    if (!file.is_open()) // if the file was not found, declares it and stops program
    {
        cout << "File Not Found\n";
        return 1;
    }

    int line_num = 0;
    string line;
    while (std::getline(file, line))
    {
        line_num++;
        cout << "Line " << line_num << ":\n"
             << line << "\n\n";
    }
#pragma endregion

#pragma region reader

#pragma endregion

#pragma region processer

#pragma endregion

    return 0;
}
