#include <iostream>
using namespace std;

/* Declaration 
void (*fp)(); //fp is a pointer to a function taking zero arguments and that returns void

// Initialization 
void foobar()
{
    std::cout << "Hello from foobar()" << std::endl;
}

int main() {
    fp = &foobar;  //to initialize a function pointer we give it the address of the function foobar 

    //Now we call fp that contains the address of the function foobar()
    fp();
}
*/