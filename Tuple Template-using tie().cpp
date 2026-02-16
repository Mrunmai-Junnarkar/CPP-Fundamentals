/**
 *Demonstrates returning multiple values using a tuple in C++.
 *
 * This program shows how a function can return multiple values
 * using the tuple template class. The returned values are unpacked
 * using the tie() function.
 */

#include <iostream>
#include <tuple>
using namespace std;

/**
 * Calculates the sum and difference of two integers.
 *
 * This function takes two integers as input and returns
 * a tuple containing:
 * - Sum of the two numbers
 * - Difference of the two numbers
 *
 * @param a First integer
 * @param b Second integer
 * @return tuple<int,int> A tuple containing (sum, difference)
 */
tuple<int, int> addSub(int a, int b) {
    return make_tuple(a + b, a - b);
}

/**
 * @brief Main function demonstrating how to receive multiple values from a tuple.
 *
 * The function:
 * - Calls addSub()
 * - Uses tie() to unpack the returned tuple
 * - Displays the sum and difference
 *
 * @return int Returns 0 on successful execution.
 */
int main() {

    int sum, diff;

    /// Unpack returned tuple values into sum and diff
    tie(sum, diff) = addSub(10, 5);

    /// Display the results
    cout << sum << " " << diff;

    return 0; 
}
