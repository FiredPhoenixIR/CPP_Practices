#include<iostream>
using namespace std;
/*
namespace utilities{

    bool pull_data(){
        // example code #1
    }
    int get_data(){
        // example code #2
    }

}

namespace myProfessionalUtilites {
    //declaring the functions
    bool pull_data();

    int get_data();


    //defining the functions
    bool myProfessionalUtilites::pull_data() {
        //code that return a bool from this func
    }
    int myProfessionalUtilites::get_data() {
        // code that return an integer in this func
    }
    inline namespace  V1 {
        bool pull_data();
        int get_data();
    }

    namespace V2 {
        bool pull_data();

        int get_data();
        int new_feature(); // our new Version 2 Program
    }
}

int main() {

    if (myProfessionalUtilites::V1::pull_data()) {
        int i = myProfessionalUtilites::V1::get_data();
        // we will use i variable here
    }
    myProfessionalUtilites::V2::pull_data(); // new Version of our namespace
    myProfessionalUtilites::V1::pull_data();
    myProfessionalUtilites::V2::get_data();

    return 0;
    //:: Scope resolution operator
    // global external sometimes declared in headers , extern int z;
}
*/

/*
int inc(int i) {
    static int num;
    cout << num << endl;;
    num += i;
    return num;
}

int main() {
    cout << inc(5) << endl;
    // function termiantes after executation but int num keeps the value as it's static; 
    cout << inc(6) << endl;
    cout << inc(8) << endl;
}
*/