#pragma once
#include "Grass.h"

class Obj: public Grass {
public:
	Obj(): type("0") {}
	Obj(string type, int gender = -1);
	void print_inf();
	string get_type() { return type; }
private:
	string type;
	
};