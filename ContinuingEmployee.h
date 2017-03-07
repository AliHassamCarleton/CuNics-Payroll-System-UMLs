
#ifndef CONTINUINGEMPLOYEE_H
#define CONTINUINGEMPLOYEE_H

#include "defs.h"



class ContinuingEmployee: public Employee{

	public:
		ContinuingEmployee(Role);
		giveRaisePercent(float);
		giveRaiseAmount(float);
		
		

	protected:
		float salary;
		boolean onLeave=false;
		





};

#endif
