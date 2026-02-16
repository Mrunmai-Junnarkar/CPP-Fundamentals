#include<iostream>
using namespace std;

/* Template function to find the larger of two values.
 * 
 * This function compares two values of different types (X and Y), 
 * and returns the larger one. It works with any data type that supports 
 * comparison using the `>` operator.
 */
template <class X, class Y>
X big(X a, Y b) {
    if (a > b)  ///< If 'a' is greater than 'b', return 'a'.
        return a;
    else         ///< Otherwise, return 'b'.
        return b;
}

/**
 * Main function to demonstrate the usage of the big function template.
 * 
 * This function calls the template function `big` with two arguments 
 * of different types and prints the result.
 */
int main() {
// Call big() with an int (10) and a double (5.55)
    cout << big(10, 5.55);  
    return 0;  
}
