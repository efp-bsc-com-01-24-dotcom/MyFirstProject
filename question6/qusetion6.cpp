#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string myText;
    string fileData;

    ifstream MyReadFile("file.txt");

    while(getline(MyReadFile, myText)){
        fileData += myText + "\n";
    }
    MyReadFile.close();
    



}