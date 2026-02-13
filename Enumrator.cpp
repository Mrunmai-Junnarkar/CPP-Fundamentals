/*
enum is a user-defined datatype to assign name to integer constant.
enum can be declared in a local scope.
enum names are automatically initialized by the compiler.
Usecase: Organizes related constants under one name.
*/

#include <iostream>
using namespace std;
int main() {
    enum gender { Male = 1, Female, Other };
    gender e = Female;
    e =  Male;
    if (e == Female) {
        cout << "50% Discount";
    } else {
        cout << "25% Discount";
    }
    cout<<"\n"<<(e)<<endl;
    return 0; 
}
//Output:25% Discount

/*
//Enum with switch case
#include <iostream>
using namespace std;
int main() {
    
// Define enum
    enum Day { Monday, Tuesday, Wednesday, Thursday, Friday };
    
// Create a variable of enum type
    Day today = Wednesday;

// Use switch-case to print message
    switch (today) {
        case Monday:
            cout << "Start of the week!";
            break;
        case Tuesday:
            cout << "Second day!";
            break;
        case Wednesday:
            cout << "Midweek!";
            break;
        case Thursday:
            cout << "Almost Friday!";
            break;
        case Friday:
            cout << "Weekend is coming!";
            break;
        default:
            cout << "Invalid day!";
    }
    return 0;
}
*/