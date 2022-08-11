#include <iostream> 


// STL standard template library 

// MAKE AN ARRAY ON THE HEAP!!!! 
int* make_array(int size) {
    int* my_arr = new int[size];
    if (size > 2) {
        my_arr[0] = 32;
        my_arr[1] = 55;
    }
    return my_arr;
}

int main____() {
    // syntax is 
    // TYPE NAME[SIZE] = INIT VALUES; 
    int lis[5] = {1,2,3,4,5};
    std::cout << lis << std::endl;
    std::cout << &lis[0] << std::endl;
    // std::cout << lis[5] << std::endl; // VERY BAD 
    std::cout << "[";
    for (int i = 0; i < 5; i++) {
        std::cout << lis[i];
        if (i != 4) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    return 0;
}

int main() {
    // int* arr = make_array(5);
    // std::cout << arr[0] << std::endl;
    // std::cout << arr[1] << std::endl;
    // delete[] arr;

    int * ptr = new int;
    *ptr = 5;
    std::cout << ptr << ": " << *ptr << std::endl;
    delete ptr;
    return 0;
}