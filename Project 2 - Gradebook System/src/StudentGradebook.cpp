//============================================================================
// Author      : Mihir Patel
//============================================================================

#include <iostream>
#include "gradebook.h"
#include "student.h"

namespace std {

int main() {

	int loop = 0;
	int exit = 0;

	cout << "1. Add a student" << endl;
	cout << "2. Remove a student" << endl;
	cout << "3. Change a students grades" << endl;
	cout << "4. Change group weights" << endl;
	cout << "5. Change the gradebook name" << endl;
	cout << "6. Display class averages" << endl;
	cout << "7. Display full report" << endl;
	cout << "0. Exit" << endl;
	int userInput;
	cin >> userInput;
	string studentName;
	Gradebook gradebook();
	switch (userInput) {
	case 1:
		cout << "What is the name of the student: ";
		cin >> studentName;

		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		break;
	}

	return 0;
}

}
