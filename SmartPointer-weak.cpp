/*A weak pointer is a smart pointer that references an object managed by shared_ptr 
without affecting its reference count, used to prevent circular dependency and dangling pointers.

#include <iostream>
#include <memory>
using namespace std;
int main(){
    shared_ptr<int>p1(new int(10));
    cout<<*p1<<endl;
    weak_ptr<int>p2;
    p2=move(p1);
    cout<<"Reference Count after moving ownership:"<<p1.use_count()<<endl;
    return 0;
}*/

#include <iostream>
#include <memory>
using namespace std;

class Rectangle {
    int length;   ///< Length of the rectangle
    int breadth;  ///< Breadth of the rectangle

public:
    /**
     * @brief Constructor to initialize a rectangle with given dimensions.
     * 
     * This constructor sets the length and breadth of the rectangle when
     * an object is created.
     * 
     * @param l The length of the rectangle.
     * @param b The breadth of the rectangle.
     */
    Rectangle(int l, int b) : length(l), breadth(b) {}

    /**
     * @brief Calculates the area of the rectangle.
     * 
     * This method calculates the area of the rectangle using the formula:
     * Area = length * breadth.
     * 
     * @return The area of the rectangle.
     */
    int area() { return length * breadth; }
};

/**
 * @brief Main function demonstrating the use of shared_ptr and weak_ptr.
 * 
 * This function creates a shared_ptr to a Rectangle object and a weak_ptr
 * that observes the same object. It then prints the area of the rectangle 
 * and the use count of the shared_ptr.
 * 
 * @return int Status code (0 if successful).
 */
int main() {
    /**
     * @brief Create a shared_ptr to manage the Rectangle object.
     * 
     * shared_ptr automatically manages the memory of the dynamically allocated
     * Rectangle object. The shared_ptr ensures that the object is destroyed when
     * there are no more references to it.
     */
    shared_ptr<Rectangle> P1(new Rectangle(10, 5));

    /**
     * @brief Create a weak_ptr that observes the shared_ptr.
     * 
     * weak_ptr does not manage the object's lifetime directly. It is used to observe
     * the object managed by the shared_ptr without increasing its reference count.
     */
    weak_ptr<Rectangle> P2(P1);

    // Output the area of the rectangle (50) using the shared_ptr P1.
    cout << P1->area() << endl;  ///< Expected output: 50

    // Output the use_count of the shared_ptr P1, which should be 1.
    cout << P2.use_count();  ///< Expected output: 1

    return 0;  
}

