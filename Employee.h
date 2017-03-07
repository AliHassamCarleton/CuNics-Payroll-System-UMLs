
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "defs.h"
#include "Role.h"

class Employee{

	public:
		Employee (string, string, Role*);
		addRole(Role*);
		approveRole(Role*);
		approveMultipleRoles(Role*);
		virtual float getSalary()  = 0;

	
	protected:
		string name;
		string employeeStyle;
		int size;
		int IDNumber;
		Role* roles[MAX_ROLE];	
		
		

};
#endif