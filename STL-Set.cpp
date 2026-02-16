/**
 *Demonstrates the usage of the `set` container in C++ STL.
 *
 * A `set` is an associative container that stores unique elements in sorted order.
 * By default, the `set` uses ascending order to store its elements, and duplicate 
 * elements are automatically ignored.
 * 
 * Features:
 * - **Unique Elements**: Duplicate elements are not allowed.
 * - **Sorted Order**: Elements are stored in sorted (ascending) order by default.
 * - **No Random Access**: Elements can be accessed via iterators, but not by index.
 *
 * Use Cases:
 * - **Storing unique elements**: For example, storing distinct records or identifiers.
 * - **Efficient searching**: Searching for elements in a sorted container is efficient.
 */

#include <iostream>
#include <set>
using namespace std;

/**
 *  Main function to demonstrate the usage of the `set` container.
 *
 * This program demonstrates the following operations on a `set`:
 * - Inserting elements using `insert()`.
 * - Traversing the set using an iterator to display the elements.
 */
int main() {
    set<int> s;  ///< Declaring a set of integers

    // Inserting elements into the set
    s.insert(2);
    s.insert(0);
    s.insert(1);
    s.insert(5);

    // Declaring an iterator to traverse the set
    set<int>::iterator it;

    // Traversing the set and displaying the elements
    cout << "Set elements in sorted order: ";
    for (it = s.begin(); it != s.end(); it++) {
        cout << *(it) << " ";  ///< Displaying each element
    }
    cout << endl;

    return 0; 
}
