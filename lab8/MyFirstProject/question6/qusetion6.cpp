#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

int countvowels(string text){
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

string reverseText(string text){
    string reversed ="";
    for(int i = text.length()-1;i>=0;i--){
        reversed += text[i];
    }
    return reversed; 
}
string capitalizeSecondLatter(string text){
    stringstream ss(text);
    string word,result="";

    
    while(ss >> word){
        if(ss>>word){
            word[1] = toupper(word[1]);
        }
        result += word + " ";
    }
    return result;
}

int main(){
    
    ifstream MyReadFile("file.txt");
    string fileData;

    getline(MyReadFile, fileData);
    MyReadFile.close();
    cout<<"Original text: "<<fileData<<endl;
    cout<<"Number of words: "<<countwords(fileData)<<endl;
    cout<<"Reversed text: "<<reverseText(fileData)<<endl;
    cout<<"Number of vowels: "<<countvowels(fileData)<<endl;
    cout<<"capitalized text: "<<capitalizeSecondLatter(fileData)<<endl;


} 