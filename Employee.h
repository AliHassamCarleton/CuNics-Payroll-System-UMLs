using namespace std;
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "defs.h"
#include "Role.h"

class Employee{

	public:
		Employee (string, string, Role*);
		void addRole(Role*);
		bool approveRole(Role*);
		bool approveMultipleRoles(Role*);
		float getAllPay();
		virtual float getSalary()  = 0;

	
	protected:
		string name;
		string employeeStyle;
		int size;
		int IDNumber;
		static int nextIDNum;
		Role* roles[3];	
		
		

};
#endif
