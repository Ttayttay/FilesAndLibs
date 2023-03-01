#include <iostream>
#include <Windows.h>
#include "counter.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "Russian");

	int a;
	std::string ans;
	char c;
	std::cout << "Вы хотите указать начальное значение? Введите да или нет: ";
	std::cin >> ans;
	if (ans == "да" || ans == "yes") {
		std::cout << "Введите начальное значения: ";
		std::cin >> a;
	}
	else {
		a = 1;
	}

	counter cnt{ a };
	do {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> c;
		switch (c) {
		case '+':
			cnt.plus();
			break;
		case '-':
			cnt.minus();
			break;
		case '=':
			std::cout << cnt.equal() << std::endl;
			break;
		}
	} while (c != 'x');

	std::cout << "\nДо свидания!\n";
}