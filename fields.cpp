#include "field.h"

Field::Field(string name, int location) {
	this->mName = name;
	this->mLocation = location;
}

string Field::getName() {
	return mName;
}
int Field::getLocation() {
	return mLocation;
}
Field::~Field() {

}
