#include <iostream>
#include <string>
#include "lesson1.hpp"

int main() {
	setlocale(LC_ALL, "ru");

	std::cout << "itProger - short tutorial of C++ programming language" << std::endl << std::endl;

	Lesson1 lesson1;
	lesson1.lesson1();

	// Lesson2 lesson2....
	// ...
	// ... 
	// and so on


	std::cout << "Press key to exit program..." << std::endl;
	std::cin.get();
	return 0;
}