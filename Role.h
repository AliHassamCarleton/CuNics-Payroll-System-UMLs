
#ifndef ROLE_H
#define ROLE_H

#include "defs.h"


class Role{

	public:
		Role (RoleTime);
		virtual float getRolePay()  = 0;
		RoleTime getRoleTime();


	protected:
		RoleTime roletime;
		string rolename;


};

#endif
