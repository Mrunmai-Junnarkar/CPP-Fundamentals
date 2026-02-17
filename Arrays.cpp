#include <iostream> // Include the standard input-output stream header for console operations
using namespace std; // Use the standard namespace to avoid prefixing 'std::'

int main() {
    // Initialize an array with some values
    int arr[] = {3, 6, 8, 3, 0, 3, 7, 5};
    
    // Calculate the length of the array by dividing the total size of the array by the size of one element
    int len = sizeof(arr) / sizeof(arr[0]);
    
    // Print the original array elements
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " "; // Print each element separated by a space
    }
    cout << endl; // Print a new line after the array elements
    
    // Print the length of the array
    cout << len;
    cout << endl; // Print a newline
    
    // Calculate the sum of all elements in the array
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum = sum + arr[i]; // Add each element to sum
    }
    cout << sum << endl; // Print the sum of the array elements
    
    // Reverse the array by swapping the first and last elements, and so on
    int start = 0;
    int end = len - 1;
    while (start < end) {
        int temp = arr[start]; // Store the element at the start index temporarily
        arr[start] = arr[end]; // Swap the element at the start index with the element at the end index
        arr[end] = temp; // Assign the temporarily stored value to the end index
        start++; // Move the start index to the right
        end--; // Move the end index to the left
    }

    // Print the reversed array
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " "; // Print each reversed element separated by a space
    }
    cout << endl; // Print a newline after the reversed array
    
    // Find the largest element in the array
    int large = arr[0]; // Assume the first element as the largest initially
    for (int i = 1; i < len; i++) {
        if (arr[i] > large) { // If a larger element is found
            large = arr[i]; // Update 'large' with the new largest value
        }
    }
    cout << large; // Print the largest element
    cout << endl; // Print a newline
    
    // Find the smallest element in the array
    int small = arr[0]; // Assume the first element as the smallest initially
    for (int i = 1; i < len; i++) {
        if (arr[i] < small) { // If a smaller element is found
            small = arr[i]; // Update 'small' with the new smallest value
        }
    }
    cout << small; // Print the smallest element
    
    // Find the second largest element in the array
    int seclarge; // Declare a variable for the second largest element
    for (int i = 0; i < len; i++) {
        if (arr[i] > large) { // If the current element is greater than the largest element
            seclarge = large; // The previous largest element becomes the second largest
            large = arr[i]; // Update the largest element to the current element
        } else if (arr[i] > seclarge && arr[i] != large) { // If the current element is greater than second largest, but not equal to the largest
            seclarge = arr[i]; // Update the second largest element
        }
    }
    cout << seclarge; // Print the second largest element
    
    return 0; // End of the program, return 0 to indicate successful execution
}
