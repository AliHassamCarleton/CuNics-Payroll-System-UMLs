
using namespace std;
#include "ContinuingEmployee.h"

ContinuingEmployee::ContinuingEmployee(Role r): Employee (name, "continuing", r) {


	salary=  0; //get the salary from appropriate roles
	


}




bool ContinuingEmployee::flipLeave(float percentage){

	if (onLeave==true)
		onLeave=false;
	else
		oneLeave=true;	

	if(onLeave==true)
		salary= salary*percentage;		


}


void ContinuingEmployee::giveRaisePercent(float percent){


	salary+= getAllPay()*percent;

}


void ContinuingEmployee::giveRaiseAmount(float amount){

	salary+= amount;

}



		

