#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

int main (){
#pragma region usings
/*All of these are for making the process easier for now, 
I plan to replace them with their std:: form just to avoid any errors*/
    using std::cout;
    using std::cin;
    using std::string;
    using std::getline;
    using std::ifstream;
    #pragma endregion
#pragma region file_opener
    cout << "Please Provide a File Directory: \n";
    string file_directory;
    cin >> file_directory;//Sets the directory
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
    for (int index_one = 0; index_one <= file_size; index_one++){
        cout << file_contents[index_one];
    }//reads through every single character in the file, in here I will put the Tokenization process most likely
    cout << std::endl << std::endl;
#pragma endregion
return 0;
}
