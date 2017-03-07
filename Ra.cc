

#include "Ra.h"

Ra::Ra(float p):Role(PART_TIME,"Ra"){

	pay=p;


}


float Ra::getRolePay(){

	return pay;

}
