#include<iostream>
using namespace std;

// Built-In
// Derived ( function , array , pointer )
// User Defiend ( struct , union , enum )

/*
int main() {

    //binary  - Uses the prefix 0b
    //octal - Uses the prefix 0
    //decimal - Default
    //hexadecimal - Uses the prefix 0x

    // char DEFAULT VALUE = /0 --> Null
    // bool DEFAULT VALUE = false
    // pointer DEFAULT VALUE = nullptr

    unsigned short a = 0b10101010; // 1*pow(2,7) + 0*pow(2,6)+...
    printf("%hu\n", a);

    int b = 0123; // 1* pow(8,2) + 2* pow(8,1) + 3 * pow(8,0)
    printf("%d\n", b);

    unsigned long long d = 0xFFFFFFFFFFFFFFF; 
    // it uses sixteen digits: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, and F.
    // F is last and 15
    // 15* pow(16,14) + ... + 15 * pow (16,0)
    printf("%llu\n", d);
    return 0;
}
*/

// float - single precision - 4bytes . float a = 0.2F;
// double - double precision - 8bytes
// long double - extended precision - 8bytes . long double c = 0.3L;

/*
6.626070044e-34 means
6.626070044×pow(10,?34)
This number is often encountered in physics and represents Planck's constant, 
denoted by ?
which is a fundamental physical constant that appears in quantum mechanics
*/
/*
int main(){

double an = 6.0221409e23;
printf("Avogadro's number : %le %lf %lg \n", an, an, an);
float hp = 9.76;
printf("Hogwarts Platform : %e %f %g \n", hp, hp, hp);

//Avogadro's number : 6.022141e+23 602214090000000006225920.000000 6.02214e+23
//Hogwarts Platform : 9.760000e+00 9.760000 9.76

}
*/
/*
int main() {


       //char - The Default types - 1  Byte - Signed or Unsigned - EXAMPLE : ASCII  ''
       //char16_t - Used for 2 byte char sets - EXAMPLE : UTF-16 Literal is u
       //char32_t - Used for 4 byte char sets - EXAMPLE : UTF-32 Literal is U
       //signed char - Same as char but guaranteed to be signed
       //unsigned char - Same as char but guaranteed to be unsigned
       //wchar_t - Large enough to contain the largest char of 
       //the implementation's locale : UNICODE L

       //    NARROW CHARS : char, signed char, unsigned char
       //    WIDE CHARS : char16_t, char32_t, wchar_t

   //ESCAPE SEQUENCES :

   //Newline \n
   //TAB \t
   //TAB Vertial \v
   //Backspace \b
   //Carriage Return \r
   //Form feed \f
   //Alert \a
   //Backslash \\
   //Single quote \'
   //Double quote \"
   //The NULL  Char \0


   //A = '\u0041'


    char x = 'M';
    wchar_t y = L'Z';
    printf("Windows binaries start with %c%lc. \n", x, y);

}
*/

