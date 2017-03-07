

#include "Employee.h"


int Employee::nextIDNum = 7001;

Employee::Employee(string employeeName, string empStyle, Role* role){

	name= employeeName;
	IDNumber= nextIDNum++;
	size=-1;//so when you add it becomes 0 for first element
	employeeStyle= empStyle;
	addRole(role);
	

}



bool Employee::approveRole(Role* role){

	if(role->getRoleName()=="Staff"){

		//everything flies
		return true;
	}
	else if(role->getRoleName()=="Ra" || role->getRoleName()=="Ta"){

		//part time ! Term
		if(role->getRoleTime()==PART_TIME && employeeStyle=="term")
			return true;


	}
	else if(role->getRoleName()=="Faculty"){

		//full time ! Term or continuing
		if(role->getRoleTime()==FULLTIME)
			return true;


	}
	else{//oh no

		return false;
	}

}



float Employee::getAllPay(){

  int count=0;
  float total;

  while(roles[count]!=NULL){

  	total+= roles[count]->getRolePay();

  	count++;
  }


}


bool Employee::approveMultipleRoles(Role* role){

	int count=0;

	while(roles[count]!=NULL){

		if(roles[count]->getRoleName()==role->getRoleName())//already has this role
			return false;

		else if(role->getRoleName()=="faculty"||roles[count]->getRoleName()=="faculty")
			return false; //faculty cannot have multiple roles
		else
			count++;
		
	}

	return true;

}
	



void Employee::addRole(Role* role){

  bool check1, check2, multicheck;

  //corelation issues: you can only have a certian amount of roles and not duplicates
  check1=approveRole(role);//makes sure role for the style of employee is possible
  check2=approveMultipleRoles(role);

  if (check1==false||check2==false)//both conditions havent been met
  	return;

  if (size+1 >= 3)
    return;

  roles[size++] = role;
}







