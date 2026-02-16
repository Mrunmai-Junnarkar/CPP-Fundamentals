#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/*
 * This program demonstrates how to use `tellp()` to get the write pointer position
 * and `tellg()` to get the read pointer position in a file stream. It also shows
 * how to use `seekp()` to move the write pointer and `get()` to read characters from the file.
 */
int main(){
    /**
     *Create an fstream object for both reading and writing to "MyFile.txt".
     * 
     * The file is opened with `ios::out`, `ios::in`, and `ios::trunc` flags, allowing
     * both output and input operations, and truncating the file (clearing its contents) if it exists.
     */
    fstream file("MyFile.txt", ios::out | ios::in | ios::trunc);

    // Write text to the file
    file << "Hello User";

    // Output the current write pointer position
    cout << "Write Pointer Position: " << file.tellp() << endl;

    // Move the write pointer to the beginning of the file
    file.seekp(0, ios::beg);

    char ch;  ///< Variable to store a character read from the file

    // Read one character from the file and move the read pointer by 1
    file.get(ch);

    // Output the current read pointer position
    cout << "Read Pointer Position: " << file.tellg() << endl;

    // Close the file
    file.close();

    return 0;  
}
