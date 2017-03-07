
#ifndef FACULTY_H
#define FACULTY_H

#include "defs.h"
#include "Role.h"

class Faculty:public Role{

	public:
		Faculty(float);
		float getRolePay();

	protected:
		float pay; 
	


};

#endif
