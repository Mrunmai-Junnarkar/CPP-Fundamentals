/**
 * Demonstrates the use of Tuple template class in C++.
 *
 * A tuple is a pre-defined template class in C++ that can hold multiple
 * values of different data types in a single object.
 * 
 * Key Features:
 * - Similar to class and structure.
 * - Works at compile time.
 * - Elements are mutable but tuple size is fixed (static).
 * - Can accept any number of data types.
 * - get<index>() is used to access elements.
 * - make_tuple() is used to insert values into a tuple.
 */

#include <iostream>
#include <tuple>
using namespace std;

/**
 *Main function demonstrating tuple operations.
 *
 * This program demonstrates:
 * - Creating and initializing tuples.
 * - Accessing tuple elements using get<index>().
 * - Using auto keyword for automatic type deduction.
 * - Using tie() to unpack tuple values into separate variables.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {

    /// Declare a tuple with int, string, and float data types
    tuple<int, string, float> t1;

    /// Insert values into tuple using make_tuple()
    t1 = make_tuple(111, "Mrunmai", 70.55);

    /// Access and display tuple elements using get<index>()
    cout << get<0>(t1) << endl;  ///< Access first element (int)
    cout << get<1>(t1) << endl;  ///< Access second element (string)
    cout << get<2>(t1) << endl;  ///< Access third element (float)

    /**
     * Using auto keyword for automatic type deduction.
     * 
     * The compiler automatically determines the tuple type.
     */
    auto t2 = make_tuple("Pune", 412308);

    /// Display elements of t2
    cout << get<0>(t2) << endl;
    cout << get<1>(t2) << endl;

    /**
     * @brief Demonstrating tie() function.
     * 
     * tie() creates references to existing variables.
     * It is used to unpack tuple elements into separate variables.
     */
    auto t3 = make_tuple("Delta IOT");

    string company;

    /// Unpack tuple value into variable using tie()
    tie(company) = t3;

    cout << company << endl;

    return 0; 
}
