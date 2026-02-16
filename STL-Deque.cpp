/**
 *  Demonstrates the usage of the `deque` container in C++ STL.
 *
 * A `deque` (Double Ended Queue) is a sequence container that allows efficient insertion and 
 * deletion of elements from both the front and the rear. It supports random access, which makes 
 * it faster than a `list` for certain operations.
 *
 * Features:
 * - Fast insertion and deletion at both front and back.
 * - Supports random access (can use `[]` or `.at()`).
 * - Dynamic size.
 * - Faster access than a `list` (but slower than a `vector`).
 */

#include <iostream>
#include <deque>
using namespace std;

/**
 * @brief Main function to demonstrate the usage of `deque` container functions.
 * 
 * This program demonstrates various operations that can be performed on a `deque`:
 * - Initializing a `deque` with values.
 * - Using `push_front()` and `push_back()` to add elements at the front and back.
 * - Iterating through the `deque` using both forward and reverse iterators.
 * - Using `pop_front()` and `pop_back()` to remove elements from the front and back.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
    deque<int> d = {1, 2, 3, 4, 5};  ///< Initializing a deque with values {1, 2, 3, 4, 5}
    deque<int>::iterator it;  ///< Iterator for deque traversal

    // Add an element at the front of the deque
    d.push_front(0);

    // Add an element at the back of the deque
    d.push_back(6);

    // Display the deque elements from front to back using a forward iterator
    cout << "Deque elements from front to back: ";
    for (it = d.begin(); it != d.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Display the deque elements from back to front using a reverse iterator
    cout << "Deque elements from back to front: ";
    for (auto it = d.rbegin(); it != d.rend(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Remove the first element (front)
    d.pop_front();

    // Remove the last element (back)
    d.pop_back();

    return 0;  
}
