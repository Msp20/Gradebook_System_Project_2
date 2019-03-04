/*
 * Author: Mihir Patel
 */
#include <iostream>
#ifndef GRADEBOOK_H_
#define GRADEBOOK_H_

class Gradebook {


public:
	Gradebook(string course, int studentMax, double examAvg, double quiz Avg, double homeworkAvg);

	//

private:

	string courseTitle;
	int studentArray;
	int studentMax;
	double examAvg;
	double quizAvg;
	double homeworkAvg;





};

#endif /* GRADEBOOK_H_ */
