#include <iostream>

struct node {
    int data;
    node * next;
};

class Node {
private: 
    //// variables 
    int x;
public:
    int data;
    node * next;
    //// functions here 
    int get_x() {
        return x;
    }
};



// int main() {
//     node first;
//     node second;
//     node third;

//     float f = 33.33;
//     float * ptr = &f;

//     first.data = 13;
//     first.next = &second;

//     second.data = 46;
//     second.next = &third;

//     third.data = 54;
//     third.next = nullptr;

//     std::cout << first.data << std::endl;
//     std::cout << (*first.next).data << std::endl;
//     std::cout << (*(*first.next).next).data << std::endl;

//     return 0;
// }



int main() {
    Node mynode; 
    std::cout << mynode.get_x() << std::endl;
}