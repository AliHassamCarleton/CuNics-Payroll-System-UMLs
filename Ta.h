
#ifndef TA_H
#define TA_H

#include "defs.h"
#include "Role.h"


class Ta::public Role{

	public:
		Ta(float);
		float getRolePay(){

	return pay;

}

	protected:
		float pay; 
	


};

#endif
