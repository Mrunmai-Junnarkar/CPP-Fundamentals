/**
 *Demonstrates the usage of the `queue` container in C++ STL.
 *
 * A `queue` is a container adaptor that follows the FIFO (First In, First Out) order.
 * It allows elements to be inserted at the rear and removed from the front.
 *
 * Features:
 * - **FIFO Order**: The first element inserted is the first one to be removed.
 * - **No Iterators**: STL `queue` does not support iterators.
 * - **No Random Access**: You can only access elements via the `front()` or `back()` functions.
 * 
 * Use Cases:
 * - **Task Scheduling**: Where tasks are handled in the order they arrive.
 * - **Buffer Management**: In applications where data is processed in the order it was received.
 */

#include <iostream>
#include <queue>
using namespace std;

/**
 * This program demonstrates the following operations on a `queue`:
 * - Inserting elements into the queue using `push()` and `emplace()`.
 * - Accessing the front element using `front()`.
 * - Removing elements from the queue using `pop()`.
 */
int main() {
   queue<int> q;  ///< Declaring a queue of integers

   // Inserting elements into the queue using push() and emplace()
   q.push(1);
   q.push(2);
   q.emplace(3);
   q.emplace(4);

   // Accessing and removing elements from the queue
   cout << "Queue elements: ";
   while (!q.empty()) {
       cout << q.front() << " ";  ///< Access and display the front element
       q.pop();  ///< Remove the front element
   }
   cout << endl;

   return 0;  
}
