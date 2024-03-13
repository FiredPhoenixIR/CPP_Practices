#include <iostream>
using namespace std;

/*
// providing meaningful names to integral constants. 
// They are particularly useful in situations where a 
// variable may take on one of a limited set of values.
// They provide a convenient way to group related constants together

enum class Day {
    Monday, //0
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday //6
};

std::string dayToString(Day d) {
    switch (d) {
    case Day::Monday:
        return "Monday";
    case Day::Tuesday:
        return "Tuesday";
    case Day::Wednesday:
        return "Wednesday";
    case Day::Thursday:
        return "Thursday";
    case Day::Friday:
        return "Friday";
    case Day::Saturday:
        return "Saturday";
    case Day::Sunday:
        return "Sunday";
    }
}

int main() {
    Day today = Day::Monday;
    std::cout << "Today is: " <<dayToString(today) << std::endl;
    return 0;
}
*/

/*
#include <iostream>

enum class ErrorCode {
    Success,
    FileNotFound,
    AccessDenied,
    OutOfMemory
};

std::string errorMessage(ErrorCode code) {
    switch (code) {
    case ErrorCode::Success:
        return "Success";
    case ErrorCode::FileNotFound:
        return "File not found";
    case ErrorCode::AccessDenied:
        return "Access denied";
    case ErrorCode::OutOfMemory:
        return "Out of memory";
    }
}

int main() {
    ErrorCode errorCode = ErrorCode::FileNotFound;
    std::cout << "Error: " << errorMessage(errorCode) << std::endl;
    return 0;
}
*/

/*
int main() {
    enum class suits { clubs, diamonds, hears, spades }; // try withous calss

    enum suitsChar : char { myClubs, myDiamonds, myHearts, mySpades };

    enum carBrands { BMW = 100, MERCEDES = 200, FIAT = 300, VW = 400, RENAULT = 9999 };

    //suits card1 = diamonds;
    suitsChar card2 = suitsChar::mySpades;
    suits card = suits::diamonds;
    char c = card2 + 10;
    char d = card + 20;
}
*/