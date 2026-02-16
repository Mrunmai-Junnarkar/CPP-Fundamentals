/**
 *Demonstrates the usage of vector class and its functions in C++.
 *
 * A vector is a dynamic array that can store elements of the same data type. It is provided by the
 * Standard Template Library (STL) in C++ and supports operations like automatic resizing,
 * random access, and efficient memory management.
 *
 * Features:
 * - **Dynamic Size**: Automatically resizes when elements are added or removed.
 * - **Contiguous Memory Allocation**: Elements are stored in contiguous memory locations.
 * - **Random Access**: Elements can be accessed using an index.
 * - **Automatic Memory Management**: No need for manual memory allocation/deallocation.
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * Main function to demonstrate vector class functions.
 * 
 * The program demonstrates various operations that can be performed using the `vector` class in C++:
 * - Initializing vectors with different constructors.
 * - Using vector functions such as `push_back()`, `pop_back()`, `insert()`, `erase()`, etc.
 * - Accessing and displaying vector elements.
 * - Checking the size, capacity, front, and back of a vector.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
    vector<int> v;  ///< Empty vector of integers

    vector<int> v1 = {3, 5, 2, 4, 6, 7, 6};  ///< Initializing a vector with values
    vector<int> v2(3, 10);  ///< Initializing a vector of size 3 with all elements set to 10

    // Inserting a value into vector v2 at index 2
    v2.insert(v2.begin() + 2, 100);

    // Display values of vector v2 using a for loop
    cout << "Printing Values Of Vector Using For Loop:" << endl;
    for (int val : v2) {
        cout << val << " ";
    }

    // Initializing v3 as a copy of v1
    vector<int> v3(v1);
    cout << "\nInitializing 1 vector into another vector:";
    for (int n : v3) {
        cout << n << " ";
    }

    // Adding elements to vector v using push_back
    v.push_back(1);
    v.push_back(2);
    v.push_back(10);
    v.push_back(13);
    v.push_back(15);
    v.push_back(110);

    // Removing the last element using pop_back
    v.pop_back();

    // Removing an element at index 2 (element 10 is removed)
    v.erase(v.begin() + 2);

    // Removing a range of elements from index 2 to 4
    v.erase(v.begin() + 2, v.begin() + 4);

    // Accessing and displaying specific elements of the vector
    cout << "\nIndex Value: " << v[2] << endl;

    // Displaying the size and capacity of vector v
    cout << "Size of Vector: " << v.size() << endl;
    cout << "Capacity of Vector: " << v.capacity() << endl;

    // Displaying the first and last elements of vector v
    cout << "Front Of Vector: " << v.front() << endl;
    cout << "Back of Vector: " << v.back() << endl;

    // Checking if the vector is empty
    cout << "Check Vector is Empty Or Not: " << v.empty() << endl;  // 0=true (not empty)

    return 0;  
}
