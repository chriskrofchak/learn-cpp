#include <iostream> 

int* make_ptr(int &x) {
    int* ptr_bad = &x;
    int* ptr = new int;
    ptr = &x;
    return ptr_bad;
}


// int main() {
//     int x = 2;
//     int* ptr = &x;

//     std::cout << "x value: " << x << std::endl;
//     std::cout << "x address: " << &x << std::endl;
//     std::cout << "ptr value: " << ptr << std::endl;
//     std::cout << "ptr address: " << &ptr << std::endl;
//     std::cout << "value pointed at by ptr: " << *ptr << std::endl;

//     *ptr = 3;
//     std::cout << "what is x now? x: " << x << std::endl;
// }


int main() {
    int x = 222;
    int* ptr = make_ptr(x);
    std::cout << *ptr << std::endl;
    return 0;
}