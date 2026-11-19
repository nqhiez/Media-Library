#include "MediaItem.h"
#include <iostream>
using namespace std;
bool MediaItem::operator==(const MediaItem& item) const {
	// hong biet so sanh ntn, xiu hoi mn roi update nhe!
}
ostream& operator<<(ostream& os, const MediaItem& item) {
	item.displayInfo();
	return os;
}