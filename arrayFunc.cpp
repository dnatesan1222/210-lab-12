// COMSC-210 | Lab 12 | Diksha Tara Natesan
// IDE used: Vim (Terminal) 

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.csv");

    array<string,50> arr;
    int count = 0;
    
    if (fin.good( )) {
        string line;
        //header
        getline(fin, line);
        cout << line << endl;

        while (getline(fin, line) && count < arr.size()) { 
            arr[count] = line;
            count += 1;
        }
        fin.close( ); // close the file
    }
    else
       cout << "File not found.\n";

    for (int i = 0; i<count; i++) {
        cout << arr.at(i) << endl;
    }
    return 0;
}


