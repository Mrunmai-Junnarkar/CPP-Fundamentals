/**
 *This program demonstrates the use of Pair template class to store data of different types.
 * 
 * The program defines a `myDetails` class to store information such as a person's name and marks.
 * It then creates pairs with the `myDetails` class and other data types and displays the information.
 */

#include <iostream>
#include <utility>
using namespace std;

/**
 * The class has two data members: `name` (of type string) and `marks` (of type float).
 * It provides methods to set and show the data.
 */
class myDetails {
    string name;   /**< Person's name */
    float marks;   /**< Person's marks */

public:
    /**
     * 
     * This function takes a string and a float as arguments and stores them in the `name` and `marks` data members.
     * 
     * @param n The name of the person.
     * @param m The marks of the person.
     */
    void setData(string n, float m) {
        name = n;
        marks = m;
    }

    /**
     *Displays the name and marks of the person.
     * 
     * This function prints the `name` and `marks` data members to the console.
     */
    void show() {
        cout << "\nName: " << name << "\nMarks: " << marks << endl;
    }
};

/**
 * Main function to demonstrate the use of pairs with different data types.
 * 
 * The main function creates two pairs:
 * - A pair of an integer ID and an object of `myDetails` class.
 * - A pair of a string (city name) and an integer (pincode).
 * It also demonstrates how to access the elements of the pair and display the data.
 */
int main() {
    // Creating an object of myDetails
    myDetails m;
    m.setData("Mrunmai", 70.55);

    // Creating a pair of int and myDetails
    pair<int, myDetails> p1(111, m);
    cout << "ID: " << p1.first;  // Accessing the first element of the pair (ID)
    
    // Accessing the second element of the pair (myDetails object) and showing details
    myDetails r = p1.second;
    r.show();

    // Creating a pair of string and int (address and pincode)
    pair<string, int> p2;
    p2 = make_pair("Pune", 412308);

    // Displaying the address and pincode
    cout << "Address: " << p2.first << " " << "Pincode: " << p2.second << endl;

    return 0;  
}
/*
Output:
ID: 111
Name: Mrunmai
Marks: 70.55
Address: Pune Pincode: 412308
*/