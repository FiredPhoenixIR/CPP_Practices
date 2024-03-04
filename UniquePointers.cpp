#include <memory>
#include <iostream>
/*
int main() {
    std::unique_ptr<int> ptr(new int(5));
    std::cout << *ptr << std::endl;   // Output: "5"
    ptr.reset(new int(10));
    std::cout << *ptr << std::endl;   // Output: "10"
    return 0;
}
*/
// no delete needed as it automatically removes object 
// after reset or going out of scope