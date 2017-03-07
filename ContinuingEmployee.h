
#ifndef CONTINUINGEMPLOYEE_H
#define CONTINUINGEMPLOYEE_H

#include "defs.h"
#include "Employee.h"



class ContinuingEmployee: public Employee{

	public:
		ContinuingEmployee(Role);
		void giveRaisePercent(float);
		void giveRaiseAmount(float);
		void setLeave(float);
		float getSalary();
		

	protected:
		float salary;
		float leavePercentage;
		boolean onLeave;
		



};

#endif
