#include <iostream>

// int* ptr 
// int * ptr 

// int & 

void incr_2(int x) {
    x += 2;
    std::cout << "incr_2 x is: " << x << std::endl; 
}


void incr_ref(int & x) {
    x += 2;
}

int incr_const_ref(const int& x) {
    return x+2;
}



int main() {
    int x = 2; 
    // increment by 2 
    std::cout << "x pre increment: " << x << std::endl;
    incr_ref(x);
    std::cout<< "x is: " << x << std::endl;
}