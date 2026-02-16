/** 
 *Demonstrates the usage of the `multimap` container in C++ STL.
 *
 * A `multimap` is an associative container that stores key-value pairs, where multiple elements
 * can have the same key. Unlike a `map`, a `multimap` allows duplicate keys.
 *
 * Features:
 * - **Duplicate Keys**: Multiple elements with the same key are allowed.
 * - **Sorted Order**: Elements are stored in sorted order by key.
 * - **No Direct Access Operator**: Cannot use `[]` to access values like in `map`.
 * 
 * Use Cases:
 * - **Storing multiple records with the same key**.
 * - **Efficient searching, insertion, and deletion** of elements by key.
 */

#include <iostream>
#include <map>
using namespace std;

/**
 *Main function to demonstrate the usage of the `multimap` container.
 *
 * This program demonstrates the following operations on a `multimap`:
 * - Inserting key-value pairs using `insert()` and `emplace()`.
 * - Iterating through the `multimap` and displaying key-value pairs.
 */
int main() {
    multimap<int, string> m;  ///< Declaring a multimap with int keys and string values

    // Inserting multiple elements with the same key (1111)
    m.insert({1111, "Mrunmai"});
    m.emplace(1111, "Mrunmai");
    m.emplace(1111, "Mrunmai");
    m.emplace(1111, "Mrunmai");

    // Declaring an iterator to traverse the multimap
    multimap<int, string>::iterator it;

    // Traversing the multimap and printing key-value pairs
    cout << "Displaying multimap elements: \n";
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << ": " << it->second << endl;  ///< Printing key-value pair
    }

    return 0;  
}
