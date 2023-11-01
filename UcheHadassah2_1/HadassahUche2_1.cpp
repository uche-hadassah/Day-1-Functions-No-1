/*Name:Uche Hadassah
This program calculates and returns the factorial of a user given integer
*/
#include<iostream>
using namespace std;
int factorial(int n);//Function prototype
int main()
{
	int number;
	cout << "Enter the number you want to work with:";
	cin >> number;//Gets input from the user
	if (number < 0)//Validates user input for numbers less than 0
	{
		cout << "Invalid input!" << endl;
	}
	else
	{
		cout << "f(" << number << ") = " << factorial(number) << endl;//Calling the function
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
		else if(n > 0)//For every other positive integer
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

