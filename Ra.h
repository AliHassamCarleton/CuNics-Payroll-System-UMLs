
#ifndef RA_H
#define RA_H

#include "defs.h"
#include "Role.h"
#include <string>

class Ra:public Role{

	public:
		Ra(float);
		float getRolePay();

	protected:
		float pay; 
	


};

#endif
