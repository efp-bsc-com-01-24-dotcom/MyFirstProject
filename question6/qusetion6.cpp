#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

int consonuntvowels(const string& text){
    int count = 0;
    for(char c : text){
         c = tolower(c);
        if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u'){
            count++;
        }
    }

    return count;
}

int countwords(string text){
    stringstream ss(text);
    string word;
    int count = 0;

    while(ss >> word){
        count++;
    }
    return count;
}

string reverse(string text){
    string reversed ="";
    for(int i = text.length()-1;1>=0;i++){
        reversed += text[i];
    }
    return reversed; 
}

int main(){
    string myText;
    string fileData;
    string newstring = "*";

    ifstream MyReadFile("file.txt");

   
    
    
    cout<<newstring;


} 