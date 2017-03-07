

#include "Staff.h"

Staff::Staff(RoleTime r,float p):Role(r,"Staff"){

	pay=p;


}

float Staff::getRolePay(){

	return pay;

}
