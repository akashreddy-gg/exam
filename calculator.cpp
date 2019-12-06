
#include <iostream>
using namespace std;


int main()
{
	char op;
	float num1, num2;

	// It allows user to enter operator i.e. +, -, *,
    cout << "Enter the operator(+,-,*,/): ";
	cin >> op;

	// It allow user to enter the operands
    cout << "Enter 2 numbers : ";
	cin >> num1 >> num2;


    //TEST
    //TEST

	switch (op) {


		case '+':
			cout << num1 + num2;
			break;

		case '-':
			cout << num1 - num2;
			break;

		case '*':
			cout << num1 * num2;
			break;

		case '/':
			cout << num1 / num2;
			break;


		default:
			cout << "Error! operator is not correct";
			break;
	}

	return 0;
}
