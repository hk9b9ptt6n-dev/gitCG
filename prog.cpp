#include <iostream>

int main() {
	std::cout << "Hello World!"<<std::endl;

	int x,y;
	std::cout << "Введите первое число: ";
	std::cin >> x; 
	std::cout << "Введите второе число: ";
	std::cin >> y; 
	std::cout << "Результат: " << (x+y)*2;
	return 0;
}
