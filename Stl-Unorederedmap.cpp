/**
 *Demonstrates the usage of the `unordered_map` container in C++ STL.
 *
 * An `unordered_map` is an associative container that stores key-value pairs, but it does not
 * store them in any particular order. It is implemented using a hash table.
 * 
 * Features:
 * - **Hash Table Implementation**: Provides fast average-time operations (O(1)) for inserting,
 *   searching, and deleting elements.
 * - **Unique Keys**: Keys are unique, and duplicate keys are not allowed.
 * - **Direct Element Access**: Elements can be accessed directly using their key.
 *
 * Advantages:
 * - **Fast Average-Time Operations**: Searching, insertion, and deletion take constant time (on average).
 * - **No Sorting**: Does not store elements in any particular order, which may improve performance for certain operations.
 *
 * Disadvantages:
 * - **No Order**: The elements are not stored in any predictable order, unlike `map` or `set`.
 */

#include <iostream>
#include <unordered_map>
using namespace std;

/**
 *Main function to demonstrate the usage of the `unordered_map` container.
 *
 * This program demonstrates the following operations on an `unordered_map`:
 * - Inserting key-value pairs using `insert()` and `emplace()`.
 * - Traversing the unordered map using an iterator.
 * - Displaying key-value pairs in no particular order.
 */
int main() {
    unordered_map<int, string> m;  ///< Declaring an unordered_map with int keys and string values

    // Inserting elements into the unordered_map
    m.insert({1111, "Mrunmai"});
    m.emplace(1136, "Mrunmai");
    m.emplace(1137, "Mrunmai");
    m.emplace(1546, "Mrunmai");

    // Declaring an iterator to traverse the unordered_map
    unordered_map<int, string>::iterator it;

    // Traversing the unordered_map and displaying the key-value pairs
    cout << "Unordered map elements: \n";
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << ": " << it->second << endl;  ///< Displaying key-value pair
    }

    return 0;  
}
