
#include "ContinuingEmployee.h"

ContinuingEmployee::ContinuingEmployee(Role* r): Employee (name, "continuing", r) {


	salary=  0; //get the salary from appropriate roles
	


}




void ContinuingEmployee::setLeave(float percentage){

	if (onLeave==true)
		onLeave=false;
	else
		onLeave=true;	

	leavePercentage= percentage;

}


float ContinuingEmployee::getSalary(){

	if(onLeave==true)
		return salary*leavePercentage;
	

}



void ContinuingEmployee::giveRaisePercent(float percent){


	salary+= getAllPay()*percent;

}


void ContinuingEmployee::giveRaiseAmount(float amount){

	salary+= amount;

}



		

