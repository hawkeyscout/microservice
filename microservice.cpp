#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <stdio.h>

using namespace std;

void create_file(string name){
    ofstream file;
    file.open(name);
    file << "Number,Description,Data,Key\n";
    file.close();
}


int main(int argc, char* argv[]){
    char* in = argv[1];
    fstream file;
    string fileData;

    file.open(in);

    getline(file, fileData);

    if(strstr(in, ".txt") == NULL){
        cout << "User input was not in text file format, try again." << endl;
        return -1;
    }

    if(fileData == "Number,Description,Data,Key"){
        cout << "The File Exists" << endl;
    }
    else{
        
        cout << "Creating New File" << endl;
        file.close();
        create_file(in);
    }
    
    return 1;
}