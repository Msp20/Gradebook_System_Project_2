/*
 * Author: Mihir Patel
 */
#ifndef STUDENT_H_
#define STUDENT_H_
#include <vector>
#include <string>

namespace std {

class Student {
private:
	int homeworkGrade;
	string name;
	vector<double> homeworks;
	vector<double> quizzes;
	vector<double> exams;

public:
	Student();
	Student(string name);
	void addGrade();

};
}
#endif /* STUDENT_H_ */
