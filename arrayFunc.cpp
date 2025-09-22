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

    ifstream fin("pop.txt");

    array<int,50> pop;
    int count1 = 0;

    if (fin.good( )) {
        string line;
        //header

        while (getline(fin, line) && count1 < pop.size()) {
            pop[count1] = stoi(line);
            count1 += 1;
        }
        fin.close( ); // close the file
    }
    else
       cout << "File not found.\n";

    for (int i = 0; i<count1; i++) {
        cout << pop.at(i) << endl;
    }

    return 0;
}


