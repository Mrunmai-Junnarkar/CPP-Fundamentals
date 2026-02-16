/*
 *This program demonstrates the use of STL vector with pairs.
 * 
 * The program uses an STL vector to store pairs of string and integer values.
 * It showcases how to initialize, add elements, and iterate over a vector of pairs.
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 *Main function to demonstrate the use of STL vector with pairs.
 * 
 * This function demonstrates the following:
 * - Initializing a vector with pairs of string and int.
 * - Using `emplace_back` and `push_back` to add new pairs to the vector.
 * - Iterating over the vector and displaying the contents of each pair.
 * 
 * @return int Returns 0 on successful execution.
 */
int main() {
   // Initialize vector with pairs of string and int
   vector<pair<string, int>> v = {{"Mrunsmi", 1111}, {"Rinky", 1010}};

   // Adding a new pair using emplace_back
   v.emplace_back("Sakshi", 2627);

   // Adding a new pair using push_back
   v.push_back({"Prateek", 3687});

   // Iterating over the vector and displaying each pair
   for (pair<string, int> p : v) {
       cout << p.first << " " << p.second << endl;  // Display the first (name) and second (ID) elements
   }

   return 0;  
}
/*
Output:
Mrunsmi 1111
Rinky 1010
Sakshi 2627
Prateek 3687
*/