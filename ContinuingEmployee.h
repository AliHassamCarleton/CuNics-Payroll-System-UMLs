
#ifndef CONTINUINGEMPLOYEE_H
#define CONTINUINGEMPLOYEE_H

using namespace std;
#include "defs.h"
#include "Employee.h"
#include <string>



class ContinuingEmployee: public Employee{

	public:
		ContinuingEmployee(Role*);
		void giveRaisePercent(float);
		void giveRaiseAmount(float);
		void setLeave(float);
		float getSalary();
		

	protected:
		float salary;
		float leavePercentage;
		bool onLeave;
		



};

#endif
