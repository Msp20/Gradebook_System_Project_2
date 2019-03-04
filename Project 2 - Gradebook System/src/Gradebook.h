/*
 * Author: Mihir Patel
 */
#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#ifndef GRADEBOOK_H_
#define GRADEBOOK_H_
namespace std {
class Gradebook {

public:
	Gradebook(string course, double examAvg, double quizAvg,
			double homeworkAvg);
	Gradebook();
	string print();
	void ChangeGrade();
	void AddStudent(string name);

private:

	string courseTitle;
	static const int STUDENTMAX = 15;
	Student students[STUDENTMAX];
	double examAvg;
	double quizAvg;
	double homeworkAvg;
	double examWeight;
	double quizWeight;
	double homeworkWeight;
	int studentCounter = 0;

};
}
#endif
