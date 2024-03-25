//#include <iostream>
//using namespace std;
//
//class Account {
//protected:
//	float balance;
//public:
//	Account(float balance) : balance(balance) {}
//	virtual void Withdraw(float x) {
//		cout << "withdrawing .. " << endl;
//	}
//	virtual void Deposit(float x) {
//		cout << "Depositing .. " << endl;
//	};
//	virtual void printBalance() {
//		cout << "Printing Balance .. " << endl;
//	};
//};
//
//class Savings : public Account {
//private:
//	float interest_rate = 0.8;
//public:
//	Savings(float balance) : Account(balance) {}
//	void Withdraw(float x) {
//		balance -= (x + x * interest_rate);
//	};
//	void Deposit(float x) {
//		balance += x + x * interest_rate;
//	};
//	void printBalance() {
//		cout << "Balance in you saving account: " << balance << endl;
//	};
//};
//
//class Current : public Account {
//public:
//	Current(float balance) : Account(balance) {}
//	void Withdraw(float x) {
//		balance -= x;
//	};
//	void Deposit(float x) {
//		balance += x;
//	};
//	void printBalance() {
//		cout << "Balance : " << balance << endl;
//	};
//};
//
//int main() {
//	Savings s1(50000);
//	Account* acc = &s1;
//	acc->Deposit(1000);
//	acc->printBalance();
//
//	acc->Withdraw(3000);
//	acc->printBalance();
//
//
//	Current c1(50000);
//	acc = &c1;
//	acc->Deposit(1000);
//	acc->printBalance();
//
//	acc->Withdraw(3000);
//	acc->printBalance();
//}