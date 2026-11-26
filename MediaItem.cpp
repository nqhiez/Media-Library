#include "MediaItem.h"
#include <iostream>
using namespace std;
bool MediaItem::operator==(const MediaItem& item) const {   // so sanh == 
	if (this->getType() == item.getType() && this->name == item.name) { // so sanh type va name cua item??? 
		return true;
	}
	else {
		return false;
	}
}
ostream& operator<<(ostream& os, const MediaItem& item) { // cach hien thi thong tin cua item
	item.displayInfo();
	return os;
}
double MediaItem::calculateLateFee(int Latedays) { // tinh phi tre han cua item
	if (Latedays <= 0) {
		return 0;
	}
	else if (Latedays > 0 && Latedays <= 3) {
		return Latedays;
	}
	else {
		return Latedays * 2;
	}
}
void MediaItem::checkOut() { // muon item
	if (isAvailable == true) {
		isAvailable = false;
		cout << this->getType() << name << " has been checked out." << endl;
	}
	else {
		cout << this->getType() << name << " is not available for checkout." << endl;
	}
}
void MediaItem::checkIn() { // tra item
	if (isAvailable == false) {
		isAvailable = true;
		cout << this->getType() << name << " has been checked in." << endl;
	}
	else {
		cout << this->getType() << name << " is already available in the library." << endl;
	}
}