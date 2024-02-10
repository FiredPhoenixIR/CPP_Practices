//Float 4Bytes Double 8Bytes
//unsigned int 0-4billion
//int -2 tp 2 billion (4byte)
//short int -32768 to 32767 (2byte)
// 
//0x (base 16) 1,2,3,..,9,A,B,C,D,E,F
// 
//char (base10) but in memory in base2
//like char x='A' = 65,base10 = 01000001,base2
// bool true = 1 = 00000001
// int i = 1234 (4byte)--> 00000000,00000000,00000100,11010010 ( each byte in one memory address 0x...)
// if you give more than capacity it will iteriate from start 
// -- short int number = 32768 --> -32768

// Operators == != < > <= >= 
// || && 
// / % x + -
// += *=
// y = x++ = first y = x then x is x plus one -- y = ++x = first x plus one then assign to y
//abs=absolute sqrt=squart
//getline(cin,var) -- cin >> s
//\r recursive -- goes at first of line


/*
#include <iostream>
using namespace std;

main()
{
   char ch;
   cout<<"Enter a character: ";
   cin>>ch;

   if(ch >= 48 && ch <= 57)
   {
	  cout<<"0..9\n ";
   }
   else if(ch >= 65 && ch <= 90)
   {
	  cout<<"A..Z\n ";
   }
   else if(ch >= 97 && ch <=122)
   {
	  cout<<"a..z\n ";
   }
   else
   {
	  cout<<"special character \n";
   }
}

*/

/*
// CPP-Starter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include<cmath>
#include <sstream>
#define A	8

//using namespace std;

//std::string message;
std::string message = "YooHaHa";
//std::int number = 24;
std::int_fast32_t number_1 = 24;
std::float_t number_2 = 25.123456789123456789123456789123456789f; //did round up
std::double_t number_3 = 25.123456789123456789123456789123456789;
std::int16_t number_4 = 32768; //short max is 32767
std::uint16_t number_5 = 65537; // unsigned short max is 65535

const std::int_fast8_t zx = 8;
const std::int_fast16_t zy = 3;

std::float_t za = 8 , zb = 3;
std::float_t zc = za++ * --zb;
bool test = (zx == 8) || (zb != 4);
std::ostringstream oss;
std::ostringstream oss2;
char grade;

int main() {
	std::cout << A << std::endl;
	std::cout << "hah\rI'm\tthe best\nDeveloper" << std::endl;
	std::cout << sizeof(message) << std::endl;
	oss << "message is " << message << std::endl;
	std::string msg = oss.str();
	std::cout << msg;
	std::cout << number_1 << std::endl;
	std::cout << number_2 << std::endl;
	std::cout << std::setprecision(18) << number_3 << std::endl;
	std::cout << number_4 << std::endl;
	std::cout << number_5 << std::endl;
	std::cout << zx / zy << std::endl;
	std::cout << zx % zy << std::endl;
	std::cout << za / zb << std::endl;
	std::cout << ((zy == 3) && ((zx == 8) || (zb != 4))) << std::endl;
	std::cout << "C is :" << std::endl;
	std::cout << zc << std::endl;
	//cmath
	std::cout << sqrt(64) << std::endl;
	std::cout << abs(-64) << std::endl;
	std::cout << pow(2,3) << std::endl;
	std::cout << floor(3.6) << std::endl;
	std::cout << ceil(3.6) << std::endl;
	std::cout << trunc(4.83) << std::endl;
	std::cout << log2(32) << std::endl;
	std::cin >> grade;
	switch (grade) {
	case 'A':
		std::cout << "Well Done";
		break;
	case 'B':
	case 'C':
		std::cout << "Nice!";
		break;
	case 'D' :
		std::cout << "WTF?";
		break;
	default:
		std::cout << "Bad Input";
	}
	oss2 << "\nYour grade is " << grade <<"!" << std::endl;
	std::string msg2 = oss2.str();
	std::cout << msg2;
}
*/