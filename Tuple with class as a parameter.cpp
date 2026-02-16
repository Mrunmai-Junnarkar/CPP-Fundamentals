/**
 * Demonstrates using tuples with class objects as parameters in C++.
 *
 * This program shows how to use a tuple to store instances of user-defined classes.
 * It demonstrates how to create a tuple of objects, access their members, 
 * and display the values.
 */

#include <iostream>
#include <tuple>
using namespace std;

/**
 * @class A
 * @brief A class that stores an integer value.
 * 
 * This class has one data member `x` and a constructor that initializes
 * `x` with a given value. If no value is provided, `x` is initialized to 0.
 */
class A {
public:
    int x;   /**< Data member to store integer value */

    /**
     * @brief Constructor to initialize `x` with a given value.
     * 
     * @param v The value to initialize `x` (defaults to 0).
     */
    A(int v = 0) : x(v) {}
};

/**
 * @class B
 * @brief A class that stores an integer value.
 * 
 * Similar to class A, this class contains an integer data member `y`
 * and a constructor to initialize it.
 */
class B {
public:
    int y;   /**< Data member to store integer value */

    /**
     * @brief Constructor to initialize `y` with a given value.
     * 
     * @param v The value to initialize `y` (defaults to 0).
     */
    B(int v = 0) : y(v) {}
};

/**
 * @brief Main function demonstrating the use of tuples with class objects.
 * 
 * This program:
 * - Creates two objects `a` of class `A` and `b` of class `B`.
 * - Stores them in a tuple `t`.
 * - Accesses the elements of the tuple using `get<index>()`.
 * - Displays the values of `x` from object `a` and `y` from object `b`.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
    A a(10);  ///< Object of class A with x = 10
    B b(20);  ///< Object of class B with y = 20

    /// Create a tuple of objects a and b
    tuple<A, B> t(a, b);

    /// Access and display the x value of object A
    cout << get<0>(t).x << " ";  ///< Access A's x value
    
    /// Access and display the y value of object B
    cout << get<1>(t).y;         ///< Access B's y value

    return 0;  
}
