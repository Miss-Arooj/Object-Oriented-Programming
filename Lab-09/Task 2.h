#ifndef Task 2
#define Task 2

#include <iostream>

//super parent class
class Faculty {
public:
	virtual void print();
};

//base class I
class Administrator : virtual public Faculty {
public:
	void print();
};

//base class II
class Teacher : virtual public Faculty {
public:
	void print();
};

//derived class
class AdministratorTeacher : public Administrator, public Teacher {
public:
	void print();
};

#endif
