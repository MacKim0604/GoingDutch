#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <istream>

int test_csv_parse(){
    std::ifstream readFile;

    if(readFile.is_open()){
        while(!readFile.eof()) {
            char arr[256];
            readFile.getline(arr, 256);
        }
    }
    
    readFile.close();
}


bool csv_lib_full_test(){
    test_csv_parse();
}