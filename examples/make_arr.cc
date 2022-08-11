#include <iostream> 

using namespace std;

// write program which takes in a number 
// say N (from input)
// which is the size of the array
// makes an array (on stack or heap)
// then takes in N numbers as each element in the array
// prints the array 

int main() {
    int input;
    int size;
    std::cin >> size;

    // DECLARED THE VARIABLE. but we didnt "initialize"
    // we dont know anything about it yet
    int arr[size];
    // int* arr = new int[size];

    for (int i=0; i<size; i++) {
        std::cin >> arr[i];
    }

    // now i want you to print it: 
    for (int i = size-1; i > -1; i--) {
        cout << arr[i] << endl;
    }
}