#include "std_lib_facilities.h"
#include <iostream>

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Christine Hawkins
 */

/*

5.Write a program that performs as a very simple calculator. Your calculator
should be able to handle the four basic math operations — add, subtract,
multiply, and divide — on two input values. Your program should prompt the user
to enter three arguments: two double values and a character to represent an
operation. If the entry arguments are 35.6, 24.1, and
'+', the program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6
we look at a much more sophisticated simple calculator.

7. Modify the “mini calculator” from exercise 5 to accept (just) single-digit
numbers written as either digits or spelled out.
*/


int number() {

    vector<string> digits = {"zero",
						 "one",
						 "two",
						 "three",
						 "four",
						 "five",
						 "six",
						 "seven",
						 "eight",
						 "nine"};

int in_digits;
string in_string;

//if input is int 
    in_digits = digits.size();
    if (cin >> in_digits)
        return in_digits;
    cin.clear();

//if input is string
   if( cin >> in_string)
    for (int i = 0; i < digits.size(); ++i)
        if (digits[i] == in_string)
            return i;
    return 0;
}

int main() {

  	cout << "Enter two values then an operation (putting a space between "
			"each):\n ";

	char operation;
  int input1=number();
	int input2=number();

cin>>operation; 

if (input1&&input2<10)
{
		switch (operation) {
		case '+':
			cout << "The sum of " <<input1 << " and " << input2 << " is "
				 <<input1 + input2;
			break;

		case '-':
			cout << "The differance of " << input1 << " and " << input2 << " is "
				 << input1 - input2;
			break;

		case '*':
			cout << "The product of " << input1 << " and " << input2 << " is "
				 << input1 * input2;
			break;

		case '/':
			cout << "The quotient of " << input1 << " and " << input2 << " is "
				 << input1/ input2;
			break;

		default:
			cout << "Invalid operator";
			break;
		}
}else 
cout<<"enter single digits";

}