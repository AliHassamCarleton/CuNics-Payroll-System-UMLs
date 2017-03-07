
#ifndef TERMEMPLOYEE_H
#define TERMEMPLOYEE_H

#include "defs.h"


class TermEmployee: public Employee{

	public:
		TermEmployee(string, string, string, float, Role);
		float getSalary();
		
	protected:
		string startDate;
		string endDate;
		float biMonthlyRate;



};

#endif


