 
using namespace std;
#include "Role.h"


Role::Role(RoleTime r, string rname){

	roletime= r;
	rolename= rname;


}
	
RoleTime Role::getRoleTime(){

	return roletime;

}

string Role::getRoleName(){

	return rolename;

}

