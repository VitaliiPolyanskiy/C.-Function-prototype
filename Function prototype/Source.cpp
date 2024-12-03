#include <iostream>

using namespace std;

/*
	Существует способ сообщить компилятору о том, что функция существует. 
	Для этого перед функцией main размещают прототип функции - это имя функции, 
	ее аргументы, а также тип возвращаемого значения. 
	Когда компилятор встречает прототип функции он точно знает о том, 
	что функция существует в программе после функции main.
*/

/* Прототипы функций */
// Функция сложения двух чисел
double Addition(double n1, double n2);

// Функция вычитания двух чисел
double Subtraction(double n1, double n2);

// Функция произведения двух чисел
double Multiplication(double, double);

// Функция деления двух чисел
double Division(double, double);

int main()
{
	double num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter operation sign ('+' or '-' or '*' or '/'): ";
	char sign;
	cin >> sign;
	switch (sign)
	{
	case '+':
		cout << "Result: " << Addition(num1, num2);
		break;
	case '-':
		cout << "Result: " << Subtraction(num1, num2);
		break;
	case '*':
		cout << "Result: " << Multiplication(num1, num2);
		break;
	case '/':
		cout << "Result: " << Division(num1, num2);
		break;
	default:
		cout << "Incorrect input!\n";
		break;
	}
	cout << endl;

	return 0;
}

// Определение функций

// Функция сложения двух чисел
double Addition(double n1, double n2)
{
	return n1 + n2;
}

// Функция вычитания двух чисел
double Subtraction(double n1, double n2)
{
	return n1 - n2;
}

// Функция произведения двух чисел
double Multiplication(double n1, double n2)
{
	return n1 * n2;
}

// Функция деления двух чисел
double Division(double n1, double n2)
{
	return n1 / n2;
}