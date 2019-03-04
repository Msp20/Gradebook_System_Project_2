/*
 * Author: Mihir Patel
 */
#include <iostream>
#include <string>
#ifndef GRADEBOOK_H_
#define GRADEBOOK_H_
namespace std{
class Gradebook {


public:
	Gradebook(string course, const int studentMax, double examAvg, double quizAvg, double homeworkAvg);
	Gradebook();


private:

	string courseTitle;
	static const int STUDENTMAX = 15;
	int studentArray[STUDENTMAX];
	double examAvg;
	double quizAvg;
	double homeworkAvg;





};
}
#endif /* GRADEBOOK_H_ */
