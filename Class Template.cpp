#include <iostream>  ///< Include the input-output stream library for using cout
using namespace std; ///< Use the standard namespace to avoid writing std:: each time

/**
 *  Template class Test to store and manipulate values of any type.
 * 
 * This class is a template that can work with any data type (like int, float, etc.)
 * and allows setting and getting the value of that type.
 * 
 * T The data type of the value to be stored (e.g., int, float).
 */
template<class T>
class Test {
    T value;  ///< A variable to store a value of type T (generic type)
    
public:
    /**
     * 
     * This function assigns the value passed as an argument to the private member variable `value`.
     */
    void setValue(T v) {
        value = v;  ///< Store the value passed as an argument
    }

    /**
     * @brief Gets the value of the object.
     * 
     * This function returns the value stored in the private member variable `value`.
     */
    T getValue() {
        return value;  ///< Return the stored value
    }
};

/**
 * @brief Main function to demonstrate usage of the Test class template.
 * 
 * This function creates objects of type `Test<int>` and `Test<float>`,
 * sets their values, and prints the values to the console.
 * 
 * @return int Status code (0 if successful).
 */
int main() {

    // Create an object 't1' of type Test<int> (template with int as type T)
    Test<int> t1;

    // Set the value of 't1' to 5 (an integer)
    t1.setValue(5);

    // Output the value stored in 't1' (which is 5)
    cout << t1.getValue() << endl;

    // Create another object 't2' of type Test<float> (template with float as type T)
    Test<float> t2;

    // Set the value of 't2' to 5.5 (a float)
    t2.setValue(5.5);

    // Output the value stored in 't2' (which is 5.5)
    cout << t2.getValue() << endl;

    return 0;  
}


