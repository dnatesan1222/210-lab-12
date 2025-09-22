// COMSC-210 | Lab 12 | Diksha Tara Natesan
// IDE used: Vim (Terminal) 

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.csv");

    if (fin.good( )) {
        string arr[50];
        int count = 0;
    
        string line;
        //header
        getline(fin, line);
        cout << line << endl;

        while (getline(fin, line) && count < 50) { 
            arr[count] = line;
            count += 1;
        }
        fin.close( ); // close the file
    }
    else
       cout << "File not found.\n";

    for (int i = 0; i < count; i++) {
        cout << lines[i] << endl;
    }

}



int main(){
    
    string arr[5]

    return 0;
}


