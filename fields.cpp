#include "field.h"

Field::Field(string name) {
	this->mName = name;
}

string Field::getName() {
	return mName;
}

Field::~Field() {

}
