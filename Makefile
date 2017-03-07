OBJ = Faculty.o Staff.o Ta.o Ra.o Role.o Employee.o ContinuingEmployee.o TermEmployee.o 

cuNICS:	$(OBJ)
	g++ -o cuNICS $(OBJ)


Faculty.o: Faculty.cc Faculty.h Role.h  
	g++ -c Faculty.cc

Staff.o: Staff.cc Staff.h Role.h  
	g++ -c Staff.cc

Ta.o:	Ta.cc Ta.h Role.h  
	g++ -c Ta.cc

Ra.o:	Ra.cc Ra.h Role.h  
	g++ -c Ra.cc

Role.o:	Role.cc Role.h defs.h
	g++ -c Role.cc

Employee.o:	Employee.cc Employee.h Role.h defs.h
	g++ -c Employee.cc

ContinuingEmployee.o:	ContinuingEmployee.cc ContinuingEmployee.h Employee.h defs.h
	g++ -c ContinuingEmployee.cc

TermEmployee.o:	TermEmployee.cc TermEmployee.h Employee.h defs.h
	g++ -c TermEmployee.cc


clean:
	rm -f $(OBJ) cuNICS

