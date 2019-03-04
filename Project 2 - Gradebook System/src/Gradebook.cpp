/*
 * Author: Mihir Patel
 */

#include "Gradebook.h"

namespace std {

Gradebook::Gradebook() {
	courseTitle = "";
	examAvg = 0;
	quizAvg = 0;
	homeworkAvg = 0;
	quizWeight = 0;
	examWeight = 0;
	homeworkWeight = 0;
}

Gradebook::Gradebook(string course, double examAvg, double quizAvg,
		double homeworkAvg) {
	this->courseTitle = course;
	this->examAvg = examAvg;
	this->quizAvg = quizAvg;
	this->homeworkAvg = homeworkAvg;
}

void Gradebook::AddStudent(string name) {
	if (studentCounter < 16) {
		Student student(name);
		students[studentCounter] = student;
		studentCounter++;
	} else {
		cout << "Cannot add anymore students. Gradebook full!" << endl;
	}
}
}
