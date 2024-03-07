#include <iostream>
using namespace std;
#include<stdio.h>

/*
class electricityBill {
private:
    int id; // Stores the bill id
    int units; // Stores the number of units consumed 
    double bill; // Stores the total bill amount

public:
    void set(int idd, int unitss)
    {
        id = idd;
        units = unitss;
    }
    double getBill()
    {
        calculateBill();
        return bill;
    }
    void calculateBill()
    {
        if (units <= 50) {
            bill = units * 0.50;
        }
        else if (units > 50 && units <= 150) {
            bill = (50 * 0.50) + ((units - 50) * 0.75);
        }
        else if (units > 150 && units <= 250) {
            bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
        }
        else if (units > 250) {
            bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
        }
    }
};

int main() {
    electricityBill obj;
    obj.set(2, 253);
    double total = obj.getBill();
    cout << total;
}
*/