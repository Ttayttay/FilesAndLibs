#include <iostream>
#include <Windows.h>
#include "mathFunk.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "Russian");

	double num1, num2;
	int op;

	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;

	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> op;

	switch (op) {
		case ADD:
			std::cout << num1 << " плюс " << num2 << " равно " << add(num1, num2) << std::endl;
			break;

		case SUB:
			std::cout << num1 << " минус " << num2 << " равно " << sub(num1, num2) << std::endl;
			break;

		case MUL:
			std::cout << num1 << " умножить на " << num2 << " равно " << mul(num1, num2) << std::endl;
			break;

		case DIV:
			std::cout << num1 << " разделить на " << num2 << " равно " << div(num1, num2) << std::endl;
			break;

		case POW:
			std::cout << num1 << " в степени " << num2 << " равно " << power(num1, num2) << std::endl;
			break;
	}
}