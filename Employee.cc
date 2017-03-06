
using namespace std;
#include "Employee.h"


int Employee::nextIDNum = 7001;

Employee::Employee(string employeeName, string empStyle, Role* role){

	name= employeeName;
	IDNumber= nextIDNum++;
	size=0;
	employeeStyle= empStyle;
	roles.addRole(role);
	
	//need an add roll check
	//roles[size]=role; //initiate employees default role


}



void Employee::approveRole(Role* role){

	if(role->getRoleName=="Staff"){

		//everything flies
		return true;
	}
	else if(role->getRoleName=="Ra" || role->getRoleName=="Ta"){

		//part time ! Term
		if(role->getRoleTime()==PART_TIME)&&employeeStyle=="term")
			return true;


	}
	else if(role->getRoleName=="Faculty"){

		//full time ! Term or continuing
		if(role->getRoleTime()==FULLTIME)
			return true;


	}
	}else{//oh no

		return false


	}

}



//get $ amount from Roles{
	


//}

void Employee::addRole(Role* role)
{
  if (size >= MAX_ROLL)
    return;

  roles[size++] = role;
}