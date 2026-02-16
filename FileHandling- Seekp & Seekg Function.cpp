#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/*
 * This program writes to a file and demonstrates how to move the write pointer
 * using `seekp()` and the read pointer using `seekg()`. It writes "Hello User",
 * then modifies a portion of the file content, and finally reads back the updated content.
 */
int main(){
    /**
     *Create an fstream object to both write to and read from "MyFile.txt".
     * 
     * The file is opened with `ios::out`, `ios::in`, and `ios::trunc` flags, allowing
     * both output and input operations. The file is truncated if it already exists.
     */
    fstream file("MyFile.txt", ios::out | ios::in | ios::trunc);

    // Write initial text to the file
    file << "Hello User";

    // Move the write pointer to the 6th byte from the beginning of the file
    file.seekp(6, ios::beg);

    // Overwrite part of the file starting from position 6
    file << "Mrunmai";

    // Close the file after writing
    file.close();
    
    /**
     *Reopen the file for reading.
     * 
     * Use `seekg()` to move the read pointer to the beginning of the file before reading.
     */
    file.seekg(0, ios::beg);

    string data;  ///< Variable to store the data read from the file

    // Read the updated content from the file
    getline(file, data);

    // Output the updated file content
    cout << "File Contents: " << data << endl;

    // Close the file after reading
    file.close();
    
    return 0;  
}
