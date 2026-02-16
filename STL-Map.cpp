/**
 *Demonstrates the usage of the `map` container in C++ STL.
 *
 * A `map` is an associative container in C++ that stores key-value pairs. Each key is unique, and
 * the elements are stored in sorted order of their keys. It allows for efficient searching, insertion,
 * and deletion, all of which take O(log n) time.
 *
 * Features:
 * - **Unique Keys**: Duplicate keys are not allowed. If a key already exists, the insertion is ignored
 *   or the value is updated.
 * - **Automatic Sorting**: By default, keys are stored in ascending order.
 * - **Dynamic Size**: The size of the `map` grows and shrinks automatically.
 * - **Iterator Support**: Supports bidirectional iterators for traversing.
 *
 * Use Cases:
 * - **Database-like Records**: Storing unique records with keys.
 * - **Scheduling and Indexing**: Efficient lookups based on sorted keys.
 */

#include <iostream>
#include <map>
using namespace std;

/**
 * Main function to demonstrate the usage of the `map` container.
 *
 * This program demonstrates the following operations on a `map`:
 * - Inserting key-value pairs using `[]`, `emplace()`, and `insert()`.
 * - Traversing the `map` using an iterator.
 * - Erasing elements from the `map` using `erase()`.
 * - Searching for elements using `find()`.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
    map<int, string> m;  ///< Declaring a map with int keys and string values

    // Inserting elements using the array access operator
    m[111] = "Mrunmai";
    m[132] = "Sakshi";
    m[124] = "Rinky";
    m[514] = "Prateek";

    // Inserting elements using emplace
    m.emplace(180, "Yash");

    // Inserting elements using insert with initializer list
    m.insert({356, "Sakshi"});

    // Declaring an iterator to traverse the map
    map<int, string>::iterator it;

    // Traversing the map and printing key-value pairs
    cout << "Displaying map elements: \n";
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << ": " << it->second << endl;  ///< Printing key-value pair
    }

    // Removing an element using erase
    m.erase(180);

    // Searching for a key using find
    if (m.find(180) != m.end()) {
        cout << "Found\n";  ///< Key found in the map
    } else {
        cout << "Not Found";  ///< Key not found in the map
    }

    return 0;  
}
