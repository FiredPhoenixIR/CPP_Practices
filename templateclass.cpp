#include <iostream>
using namespace std;
/*
template <class T>
class myvalues {
    T myval1, myval2; //two values of type T
public:
    myvalues(T arg1, T arg2) { myval1 = arg1; myval2 = arg2; } //constructor
    T max(); //max function
};

template <class T>
T myvalues<T>::max()  //definition of a function with type T
{
    if (myval1 > myval2) {
        return myval1;
    }
    else {
        return myval2;
    }
}

int main() {
    myvalues <int> obj(20, 50); //try changing the value and value types to results for different types 
    cout << "Max value is: " << obj.max();
    return 0;
}
*/

/*
* //NICE

template <class T>
class Score
{
private:
    T value;
public:
    static int counter;
    Score() { counter++; }
};

template<class T>
int Score<T>::counter = 0;

int main()
{
    Score<int> x;
    Score<int> y;
    Score<double> z;
    cout << Score<int>::counter << endl;
    cout << Score<double>::counter << endl;
    return 0;
}
*/

