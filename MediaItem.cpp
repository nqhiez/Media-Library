#include "MediaItem.h"
#include <iostream>
using namespace std;
bool MediaItem::operator==(const MediaItem& item) const {
	if (id == item.id && this->getType() == item.getType()) { 
		return true;
	}
	else {
		return false;
	}
}
ostream& operator<<(ostream& os, const MediaItem& item) {
	item.displayInfo();
	return os;
}