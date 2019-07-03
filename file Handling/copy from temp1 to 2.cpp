#include <iostream>
#include <fstream>
using namespace std;
 
// driver code
int main()
{
    fstream file;
 
    // Input stream class to
    // operate on files.
    ifstream ifile("temp1.txt", ios::in);
 
    // Output stream class to
    // operate on files.
    ofstream ofile("temp2.txt", ios::out | ios::app);
 
    // check if file exists
    if (!ifile.is_open()) {
 
        // file not found (i.e, not opened).
        // Print an error message.
        cout << "file not found";
    }
    else{
// then add more lines to
        // the file if need 
        ofile << ifile.rdbuf();
    }
    
	/* char word[20];
    // opening file
    file.open("file2.txt");
 
    // extracting words from the file
    while (file >> word) {
 
        // displaying content of
        // destination file
        cout << word << " ";
    }*/
//	system("pause");
    return 0;
}
