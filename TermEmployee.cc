
#include "TermEmployee.h"

TermEmployee::TermEmployee(string name, string sDate, string eDate, float rate, Role* r):Employee (name, "term", r){

	startDate= sDate ;
	endDate= eDate;
	biMonthlyRate= rate;


}



float TermEmployee::getSalary(){

	return getAllPay()+biMonthlyRate;

}


