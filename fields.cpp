#include "field.h"

<<<<<<< HEAD
Field::Field(string name) {
	this->mName = name;
=======
Field::Field(string name, int location) {
	this->mName = name;
	this->mLocation = location;
>>>>>>> dev
}

string Field::getName() {
	return mName;
}
<<<<<<< HEAD

=======
int Field::getLocation() {
	return mLocation;
}
>>>>>>> dev
Field::~Field() {

}
