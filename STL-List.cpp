/**
 *  Demonstrates the usage of the `list` container in C++ STL.
 *
 * A `list` is a doubly linked list container provided by the C++ Standard Template Library (STL).
 * Unlike vectors and arrays, a list does not store elements in contiguous memory locations.
 * It allows efficient insertion and deletion of elements at any position but does not support random access.
 *
 * Features:
 * - Fast insertion and deletion at any position.
 * - Size can grow or shrink dynamically.
 * - No random access (cannot use [] or `.at()`).
 */

#include <iostream>
#include <list>
using namespace std;

/**
 *  Main function to demonstrate the usage of `list` container functions.
 *
 * This program demonstrates the following operations on a `list`:
 * - Initializing a list with values.
 * - Using `push_front()` and `push_back()` to add elements at the beginning and end.
 * - Iterating through the list using both forward and reverse iterators.
 * - Using `pop_front()` and `pop_back()` to remove elements from the front and back.
 */
int main() {
    list<int> l = {1, 2, 3, 4, 5};  ///< Initializing a list with values {1, 2, 3, 4, 5}
    list<int>::iterator it;  ///< Iterator for list traversal

    // Add an element at the front of the list
    l.push_front(0);

    // Add an element at the back of the list
    l.push_back(6);

    // Display the list elements from front to back using a forward iterator
    cout << "List elements from front to back: ";
    for (it = l.begin(); it != l.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Display the list elements from back to front using a reverse iterator
    cout << "List elements from back to front: ";
    for (auto it = l.rbegin(); it != l.rend(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Remove the first element (front)
    l.pop_front();

    // Remove the last element (back)
    l.pop_back();

    return 0;  
}
