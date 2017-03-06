
using namespace std;
#include "ContinuingEmployee.h"

ContinuingEmployee::ContinuingEmployee(Role r): Employee (name, "continuing", r) {


	salary=  ; //get the salary from appropriate roles
	


}

bool ContinuingEmployee::flipLeave(){

	if (onLeave==true)
		onLeave=false;
	else
		oneLeave=true;		


}


void ContinuingEmployee::giveRaisePercent(float percent){

	salary+= salary*percent;


}


void ContinuingEmployee::giveRaiseAmount(float amount){

	salary+= amount;

}

//string ContinuingEmployee::getEmployeeType(){

//	return "Continuing";

//}



		

