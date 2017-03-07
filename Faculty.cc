

#include "Faculty.h"

Faculty::Faculty(float p):Role(FULLTIME,"Faculty"){

	pay=p;


}

float Faculty::getRolePay(){

	return pay;

}
