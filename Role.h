
#ifndef ROLE_H
#define ROLE_H

using namespace std;
#include "defs.h"
#include <string>


class Role{

	public:
		Role (RoleTime, string);
		virtual float getRolePay()  = 0;
		RoleTime getRoleTime();
		RoleTime getRoleName();


	protected:
		RoleTime roletime;
		string rolename;


};

#endif
