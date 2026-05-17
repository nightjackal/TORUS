#include <iostream>
#include <fstream>
#include <string>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;
    string src_code;
    string file_directory;
    
    cout << "Please provide the directory for your .torus file (OS Sensitive):\n";
    cin >> file_directory;
    std::ifstream file(file_directory);

    if (!file.is_open())
    {
        cout << "The File has not been found, please try again...\n";
        cin >> file_directory;
        std::ifstream file(file_directory);
        if (!file.is_open())
        {
            cout << "File not found. Do you have TORUS raw source code for compiling(Yes or No)?\n";
            cin >> src_code;
        }
    }
    if (file.is_open())
    {
        cout << "The file has been found\n";
    }

    std::string line;
    int line_num = 0;
    cout << "Entering While Loop\n";
    cout << "File size check: " << file.tellg() << "\n";
    while (std::getline(file, line))
    {
        cout << "Inside while loop";
        line_num++;
        cout << line << '\n';
        string first_line = line;
        int i = 0;
        while (i < first_line.length())
        {

            i++;
        }
    }
    cout << "While loop ended\n";

    cout << "Operation Executed\n";
    return 0;
}
