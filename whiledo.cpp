#include<iostream>
using namespace std;

int main() {

	for (int x = 5; x < 10; x++) {
		cout << x << endl;
	}

	int i = 10;
	while (i < 18) {
		i++;
		cout << i << endl;
		if (i == 16)
			break;
	}

	int y = 20;
	do {
		cout << y << endl;
		y++;
	}
		while (y < 20);

	for (int z = 30;z < 35;z++) {
		if (z == 32) {
			continue; // or break
		}
		cout << " z is : " << z << endl;
	}

}
