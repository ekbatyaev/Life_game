#include "Obj.h"

Obj::Obj(string type, int gender) {
	this->type = type;
	
}
void Obj::print_inf() {
	cout << type << '\n';
}