

using namespace std;
#include "TermEmployee.h"

TermEmployee::TermEmployee(string name, string sDate, string eDate, float rate, Role r):Employee (name, "term", r){

	startDate= sDAte ;
	endDate= eDate;
	biMonthlyRate= rate;


}



float TermEmployee::getSalary(){

	return getAllPay()+biMonthlyRate;

}


