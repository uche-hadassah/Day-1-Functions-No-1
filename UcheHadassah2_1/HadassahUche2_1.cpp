/*Write a function called factorial that takes a number n as a parameter and returns the 
factorial of that number. In mathematics, the factorial of a number n is defined as:
n! = n * ( n – 1 ) * ( n – 2 ) * … * 1 and 
0!=1
For example in your program, factorial(4) should return 24 (the value of 1*2*3*4), 
factorial(3) returns 6 (1*2*3). Write a program to test your function with user defined 
input and user friendly comments*/
#include<iostream>
using namespace std;
int factorial(int n);//Function prototype
int main()
{
	int number;
	cout << "Enter the number you want to work with:";
	cin >> number;
	if (number < 0)
	{
		cout << "Invalid input!" << endl;//Validates user input for numbers less than 0
	}
	else
	{
		cout << "f(" << number << ") = " << factorial(number) << endl;
	}
	return 0;
}
int factorial(int n)
{
	do
	{
		if (n == 0)//0! = 1
		{
			return 1;
		}
		else if(n > 0)
		{
			int product = 1;//Declared outside the for-loop to avoid reset
			for (int i = n; n > 0; n--)
			{
				product *= n;
			}
			return product;//returns the factorial
		}	
	} while (n < 0);
}

