

#ifndef TERMEMPLOYEE_H
#define TERMEMPLOYEE_H


using namespace std;

#include <string>
#include "defs.h"
#include "Employee.h"


class TermEmployee: public Employee{

	public:
		TermEmployee(string, string, string, float, Role*);
		float getSalary();
		
	protected:
		string startDate;
		string endDate;
		float biMonthlyRate;



};

#endif


