// COMSC-210 | Lab 12 | Diksha Tara Natesan
// IDE used: Vim (Terminal) 

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.csv");

    string state;
    string abbr;
    int pop;
    
    string line;
    //header
    getline(fin, line);
    cout << state << '\t' << abbr << '\t' << header << endl;

    while (getline(fin, state)) {  // reads the first attribute, the state
        fin.ignore();  // needed between a fin>> and a getline(fin)
        getline(fin, abbr);  // reads the second attribute, the abbreviation
        fin >> pop; // reads the third attribute, the double
        cout << state << "\t" << abbr << "\t" << pop << endl;
    }
    if (fin.good( )) {
        
    }
    fin.close( ); // close the file          
    ...
  }
  else
    cout << "File not found.\n";
}



int main(){
    
    string arr[5]

    return 0;
}


