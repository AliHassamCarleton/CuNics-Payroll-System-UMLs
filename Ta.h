
#ifndef TA_H
#define TA_H

#include "defs.h"
#include "Role.h"
#include <string>


class Ta:public Role{

	public:
		Ta(float);
		float getRolePay();

	protected:
		float pay; 
	

};

#endif
