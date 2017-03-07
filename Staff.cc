

#include "Staff.h"

Staff::Staff(Role_Time r,float p):Role(r,"Staff"){

	pay=p;


}

float Staff::getRolePay(){

	return pay;

}
