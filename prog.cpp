#include <iostream>

int main() {
	std::cout << "Hello World!"<<std::endl;

	int x,y;
	std::cout << "Введите первое число: ";
	std::cin >> x; 
	std::cout << "Введите второе число: ";
	std::cin >> y; 
	std::cout << x+y;
	return 0;
}