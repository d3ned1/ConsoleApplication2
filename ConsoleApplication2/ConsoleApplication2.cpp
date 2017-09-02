// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iomanip"
#include "iostream"
#include "ctype.h"
#include "string"
#include "conio.h"

using namespace std;

#include <process.h> // для exit()

int main()
{
	double first, second;
	char oper = 'a'; char ch = 'a';
	long result;
	do
	{
		cout << "Please, enter the first number, the operation and the second number: ";
		cin >> first >> oper >> second;
		switch (oper)
		{
			case '/': result = first / second; break;
			case '+': result = first + second; break;
			case '-': result = first - second; break;
			case '*': result = first * second; break;
			default:  result = 0;
		}
		cout << endl << "Result: " << result << endl;
		cout << endl << "Continue? (y/n)" << endl;
		cin >> ch;
	}
	while (ch != 'n');
	return 0;
}