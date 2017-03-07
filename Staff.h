
#ifndef STAFF_H
#define STAFF_H

#include "defs.h"
#include "Role.h"
#include <string>

class Staff:public Role{

	public:
		Staff(RoleTime, float);
		float getRolePay();

	protected:
		float pay; 
	

};

#endif
