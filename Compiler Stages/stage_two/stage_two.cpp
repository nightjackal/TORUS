#

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include "token_library"


int main (){
#pragma region usings
/*All of these are for making the process easier for now, 
I plan to replace them with their std:: form just to avoid any errors*/
    using std::cout;
    using std::cin;
    using std::string;
    using std::getline;
    using std::ifstream;
    using std::vector;
    #pragma endregion
#pragma region file_opener
    cout << "Please Provide a File Directory: \n";
    string file_directory;
    std::getline(cin, file_directory);//Sets the directory
    ifstream file(file_directory);//Opens the file
    if (file.is_open()){
        cout << "\nFile Succesfully Opened\n\n";
    }
    if (!file.is_open()){
        cout << "File not found...";
        return 1;
    }//checks if the file is open or not
    std::ostringstream string_one;//declares an ostringstream string to put into the buffer
    string_one << file.rdbuf();//moves the entire file into the buffer
    string file_contents = string_one.str();//converts the buffer into a string
    cout << file_contents << std::endl << std::endl;//displays the entire file as a string

    #pragma endregion
#pragma region tokenization_and_reader
    int file_size = file_contents.size();//measures the size of the string
    cout << "The File Size: " << file_size << " Characters"<< std::endl;//Displays the size of the file_string/file
    for (int index_one = 0; index_one < file_size; index_one++){
       
        /*Beginning to add structure for tokenization, since TORUS is going to be a language that prioritizes numbers,
        go first, then symbols (there'll be a lot), then letters*/
        
        if (std::isdigit(file_contents[index_one])){

        }//Checks if it is a digit
        else if(std::ispunct(file_contents[index_one])){
            for (int index_two = 0; index_two < symbols_vector.size(); index_two++){
                //this runs a for loop for as long as the size of the symbol vector to check every possibility
                if(file_contents[index_one] == symbols_vector[index_two][0]){
                     cout << file_contents[index_one];
                    cout << symbols_DTorCNs_vector[index_two] << "∞";
                }
            }
        }//Checks if it is punctuation--aka symbol
        else if(std::isalpha(file_contents[index_one])){

        }//Checks if it is a letter
        else{
            cout << "";
        }//Must be whitespace, thus ignore
        cout << ">"; 
    }//reads through every single character in the file, in here I will put the Tokenization process most likely
    cout << std::endl << std::endl;

#pragma endregion




return 0;
}
