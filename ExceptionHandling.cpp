/*
what is exception
Exception is a unpredictable error that holds program.

What is exception handling?
Exception handling is a mechanism in C++ used to detect and handle runtime errors 
so that a program does not terminate unexpectedly.

Why exception handling is needed?
Without exception handling:
Program crashes
No chance to recover
Poor user experience

With exception handling:
Errors are handled gracefully
Program continues or exits safely

Purpose?
try
Purpose:
To place the code that may cause an error (exception).
throw
Purpose:
To generate (raise) an exception when an error occurs.
catch
Purpose:
To handle the exception thrown in the try block.
thrown → the exception that is raised
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
 // throw exception
            throw b;  
        }
        cout << "Result = " << a / b << endl;
    }
    catch (int)
    {
        cout << "Error: Division by zero is not allowed!" << endl;
    }
    return 0;
}
