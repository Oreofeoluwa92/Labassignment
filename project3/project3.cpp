// project3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

extern int amount;
extern int pennies;
extern int nickel;
extern int dime;
extern int quarter;
extern int dollar;
extern int remain;

int main() {
	cout << " Enter the amount: ";
	cin >> amount;

	dollar = amount / 100;
	remain = amount % 100;

	quarter = remain / 25;
	remain = remain % 25;

	dime = remain / 10;
	remain = remain % 10;

	nickel = remain / 5;
	remain = remain % 5;

	pennies = remain;

	cout << " The amount you have is " << dollar << " dollars " << quarter  <<  " quarter "  << dime <<  " dime " << nickel <<  " nickel " << pennies <<  " & pennies " << std::endl;

	

}

