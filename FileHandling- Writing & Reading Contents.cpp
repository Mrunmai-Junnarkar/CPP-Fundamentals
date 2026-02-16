 #include<iostream>
#include<fstream>
#include<string>
using namespace std;

/**
 * This program writes a line of text to a file and then reads it back.
 * It uses `ofstream` to write to the file and `ifstream` to read from the file.
 */
int main() {
    /**
     * Create an output file stream object to write to the file "MyFile.txt".
     * 
     * The program writes a line of text to the file "MyFile.txt" using the
     * ofstream object `outFile`.
     */
    ofstream outFile("MyFile.txt");

    // Write a line of text to the file
    outFile << "This is My First Line In File"; 

    // Close the output file stream
    outFile.close();

    /**
     *Create an input file stream object to read from the file "MyFile.txt".
     * 
     * This part reads the content of the file "MyFile.txt" using the ifstream 
     * object `inFile` and prints it to the console.
     */
    string line;  ///< Variable to store the line read from the file
    
    // Open the file for reading
    ifstream inFile("MyFile.txt");

    // Print a message indicating the reading process
    cout << "Reading First Line From File....";
    
    // Read the first line from the file and store it in 'line'
    if (getline(inFile, line)) {
        cout << line << endl;  
    }

    // Close the input file stream
    inFile.close();

    return 0;  
}



