#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main (){
#pragma region usings
    using std::cout;
    using std::cin;
    using std::string;
    using std::getline;
    using std::ifstream;
    #pragma endregion
#pragma region file_opener

    string file_directory = "/Users/graham/Desktop/TORUS/tests.torus";//Stes file directory
    ifstream file(file_directory);//Opens file
    if (file.is_open()){
        cout << "\nFile Succesfully Opened\n";
    }
    if (!file.is_open()){
        cout << "File not found...";
        return 1;
    }

    #pragma endregion
#pragma region file_reader

     int line_num = 0; // Sets the line number to zero so it can be incremented in the while loop
     std::vector<int> tokenization;   
     std::vector<string> tokis;           
    string line;                     // Declares a string called line that will be used to store each line from tests.torus
    while (std::getline(file, line)) // Reads the line and then loops the process below as well as continuing to read tests.torus
    {
        line_num++; // Increments line_num in orcer to move onto the next line
        for (int i = 0; i < line.length(); i++)
        {
            char current_char = line[i];
            if(isdigit(current_char)){
                tokenization.push_back(1);
                tokis.push_back();
            }
            
           else if(isalpha(current_char)){
                tokenization.push_back(3);
            }
            
            else if(isspace(current_char)){
                tokenization.push_back(5);
            }
            else{
                tokenization.push_back(4);
            }
            
        }
        for( int i2 = 0; i2 < tokenization.size(); i2++){
            cout << tokenization[i2];
        }
        cout << "\n";
    }
    #pragma endregion
#pragma region tokenizer
    #pragma endregion

    return 0;
}
