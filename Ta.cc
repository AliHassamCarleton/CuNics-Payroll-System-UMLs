
#include "Ta.h"

Ta::Ta(float p):Role(PART_TIME,"Ta"){

	pay=p;


}

float Ta::getRolePay(){

	return pay;

}