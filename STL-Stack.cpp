/**
 *Demonstrates the usage of the `stack` container in C++ STL.
 *
 * A `stack` is a container adaptor in C++ that follows the LIFO (Last In, First Out) principle.
 * Elements are inserted and removed only from the top of the stack.
 * The `stack` is designed to provide restricted access and strictly adheres to the LIFO principle.
 *
 * Features:
 * - **LIFO Order**: The last element inserted is the first one to be removed.
 * - **No Random Access**: Elements can only be accessed from the top of the stack.
 * - **No Iterators**: The stack does not support iterators, preventing misuse of data.
 *
 * Advantages:
 * - **Fast Push and Pop**: These operations occur in constant time (O(1)).
 * - **Restricted Access**: Prevents misuse by restricting access to the top element.
 * 
 * Disadvantages:
 * - **No Traversal**: Cannot traverse or access elements other than the top.
 * - **No Random Access**: You can only access the top element, not elements in the middle of the stack.
 */

#include <iostream>
#include <stack>
using namespace std;

/**
 * @brief Main function to demonstrate the usage of the `stack` container.
 *
 * This program demonstrates the following operations on a `stack`:
 * - Inserting elements using `push()` and `emplace()`.
 * - Swapping two stacks using `swap()`.
 * - Accessing the top element using `top()` and removing elements using `pop()`.
 */
int main() {
    stack<int> s;  ///< Declaring a stack of integers

    // Inserting elements into the stack using push() and emplace()
    s.push(1);
    s.push(2);
    s.emplace(3);

    // Declaring another stack and swapping its contents with the first stack
    stack<int> s1;
    s1.swap(s);

    // Displaying the size of the stacks
    cout << "\nFirst Stack Size: " << s.size() << endl;  ///< Displaying the size of the first stack
    cout << "Second Stack Size: " << s1.size() << endl;  ///< Displaying the size of the second stack

    // Removing and displaying elements from the second stack (after swapping)
    cout << "Elements in Second Stack: ";
    while (!s1.empty()) {
        cout << s1.top() << " ";  ///< Displaying the top element
        s1.pop();  ///< Removing the top element
    }
    cout << endl;

    return 0; 
}

/**
 * Stack Overflow Condition Explanation.
 *
 * A stack overflow occurs when the stack memory is full and a new element cannot be pushed onto it.
 * The program may crash due to stack overflow, often caused by infinite or deep recursion.
 *
 * Causes of Stack Overflow:
 * - **Infinite or very deep recursion**: When a recursive function keeps calling itself without a proper base condition.
 * - **Too many nested function calls**: When function calls go too deep without proper management of resources.
 * - **No proper base condition in recursion**: Recursion without an end condition will lead to stack overflow as each call consumes stack memory.
 */
