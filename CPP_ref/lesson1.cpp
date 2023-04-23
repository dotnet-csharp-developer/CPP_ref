#include "lesson1.hpp"

// DEFINITIONS OF FUNCTIONS THAT WAS DECLARED IN CLASS NAMELY 'Lesson1'
void Lesson1::if_else_oper() {
	std::cout << "\n=======================================================" << std::endl;
	std::cout << "\n\tTitle: If...else operations in " << cpp << std::endl << std::endl;
	std::cout << "\n=======================================================\n" << std::endl;
}

void Lesson1::ternary_oper() {
	std::cout << "\n=======================================================" << std::endl;
	std::cout << "\n\tTitle: Ternary operations in " << cpp << std::endl << std::endl;
	std::cout << "\n=======================================================\n" << std::endl;
}

void Lesson1::switch_oper() {
	std::cout << "\n=======================================================" << std::endl;
	std::cout << "\n\tTitle: Switch operations in " << cpp << std::endl << std::endl;
	std::cout << "\n=======================================================\n" << std::endl;
}

void Lesson1::restart() {
	std::cout << "Do you want to see other lessons as well? (Y/n): ";
	std::cin >> response_sub;
	if (response_sub == "Y" || response_sub == "y") {
		choose();
	}
	else {
		std::cout << "Good bye!!!" << std::endl;
	}
	std::cout << "\n";
}

void Lesson1::choose() {
	topics = {
		"if...else operations in C++",
		"ternary operations in C++",
		"switch operations in C++"
	};

	int t; // stands for topic

	for (t = 0; t < topics.size(); t++) {
		std::cout << t + 1 << ". " << topics[t] << std::endl;
	}

	std::cout << "\nWhat do you want to see first, if...else operations, or switch operations?" << std::endl;
	std::cout << "Your response (";
	for (t = 0; t < topics.size(); t++) {
		std::cout << t + 1 << " ";
	}
	std::cout << "):? ";
	std::cin >> response;

	std::cout << "\nYour response is: " << response << std::endl;
	std::cout << "Here is the lesson output that you chose:" << std::endl;

	switch (response) {
	case 1:
		if_else_oper();
		break;
	case 2:
		ternary_oper();
		break;
	case 3:
		switch_oper();
		break;
	default:
		std::cout << "For now, there is no lesson like this!" << std::endl;
		break;
	}
	restart();
}

void Lesson1::lesson1() {
	std::cout << "Lesson 1 - Logic operations in " << cpp << std::endl << std::endl;
	choose();
}