/**
 *Demonstrates the usage of the `priority_queue` container in C++ STL.
 *
 * A `priority_queue` is a container adaptor in C++ that provides constant-time access to the 
 * largest (or highest-priority) element. It is typically implemented using a heap, and by default, 
 * it uses a max heap, which means that the largest element is at the top.
 * 
 * Features:
 * - **Automatic Sorting**: Elements are sorted according to priority, but they are not stored in 
 *   sorted order. Instead, the largest element is always at the top.
 * - **No Iterators**: A `priority_queue` does not support iterators.
 * - **Heap-based**: The container is implemented using a heap, either max heap (default) or min heap.
 */

#include <iostream>
#include <queue>
using namespace std;

/**
 *Main function to demonstrate the usage of the `priority_queue` container.
 *
 * This program demonstrates the following operations on a `priority_queue`:
 * - Inserting elements using `push()` and `emplace()`.
 * - Accessing and removing the top (highest-priority) element using `top()` and `pop()`.
 * - Using a `priority_queue` with a custom comparator (`greater<int>`) to create a min-heap.
 */
int main() {

   /// Default max-heap priority_queue
   priority_queue<int> q;

   // Inserting elements into the priority_queue
   q.push(1);
   q.push(0);
   q.emplace(10);
   q.emplace(4);

   // Removing and displaying elements from the priority_queue
   cout << "Max heap (priority queue) elements: ";
   while (!q.empty()) {
       cout << q.top() << " ";  ///< Display the top (largest) element
       q.pop();  ///< Remove the top element
   }
   cout << endl;

   /// Min-heap priority_queue using greater<int> comparator
   priority_queue<int, vector<int>, greater<int>> q1;

   // Inserting elements into the priority_queue
   q1.push(1);
   q1.push(0);
   q1.emplace(10);
   q1.emplace(4);

   // Removing and displaying elements from the min-heap priority_queue
   cout << "Min heap (priority queue) elements: ";
   while (!q1.empty()) {
       cout << q1.top() << " ";  ///< Display the top (smallest) element
       q1.pop();  ///< Remove the top element
   }
   cout << endl;

   return 0;  
}
