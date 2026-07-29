#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <vector>
#include <sstream>

/*
/Users/graham/Desktop/TORUS/tests.torus
*/
const std::vector<char> symbols_vector = {';', '+', '-', '*', '/'};//There DTorCN's can just be index + 1
const std::vector<std::string> keywords_vector = {"citizen", "num", "char", "string"};//Same for here, DTorCN's can be written informat of >category∞exact_token∞value_if_exists> 
//for variables it will have to go through a different process though, consisting of defining that it is in the variable category, 
//and then what kind of variable (only ints and doubles allowed so far), then assigning and logging the value assigned to that specific variable

void symbolprocessor(char symbol, int position, std::vector<char> symbols_vector) {
    for (int i = 0; i < symbols_vector.size(); i++){
        //this runs a for loop f./Lexer2or as long as the size of the symbol vector to check every possibility
        if(symbol == symbols_vector[i]){
            std::cout << symbol;
            std::cout << position + 1 << "∞" << i + 1 << "∞";
        }
    }
};
//The symbol processor processes symbols and translates them to their DoubleTORUS code

void alphaprocessor(std::string file_contents, int position, std::vector<std::string> keywords_vector) {
    std::cout << file_contents[position - keywords_vector[0].length()];
    for (int i = 0; i < keywords_vector.size(); i++){
        //need to go back to the part of the file where the keywod would begin and then read 
        // in the exact amount of characters that would amount to 
        // the keyword and if that doesn't match the keyword, 
        // move o to the next keyword and repeat the reading in process
        
        
    }
};//the alphaprocessor is under work, it is having bugs

int main (){
    std::vector<std::string> variables_vector = {};
    std::vector<double> var_value_vector = {};
    std::vector<int> var_value_DTorCNs_vector = {};

    #pragma region usings

    /*All of these are for making the process easier for now, 
    I plan to replace them with their std:: form just to avoid any errors*/

        using std::cout;
        using std::cin;
        using std::string;
        using std::getline;
        using std::ifstream;
        using std::ofstream;
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

        for (int i = 0; i < file_size; i++){
            /*Beginning to add structure for tokenization, since TORUS is going to be a language that prioritizes numbers,
            go first, then symbols (there'll be a lot), then letters*/

            if (std::isdigit(file_contents[i + 7])){
            }//Checks if it is a digit

            else if(std::ispunct(file_contents[i + 7])){
                char symbol = file_contents[i];
                int position = i;
                symbolprocessor(symbol, position, symbols_vector);
            }//Checks if it is punctuation--aka symbol

            else if(std::isalpha(file_contents[i + 7])){
                int position = i;
                alphaprocessor(file_contents, position, keywords_vector);
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