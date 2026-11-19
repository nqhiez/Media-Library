#pragma once //<---- khi viet file .h thi khong xoa dong nay nhe
#include <iostream>
class MediaItem {
protected:
	std::string id;  // ID item trong thu vien
	std::string name; // Ten item trong thu vien
	bool isAvailable; // Trang thai item( co san = true | dang muon = false)
	friend std::ostream& operator<<(std::ostream& os, const MediaItem& item);
public:
	MediaItem(std::string id, std::string name, bool isAvailable) : id(id), name(name), isAvailable(isAvailable) {} // Them item chung vao thu vien (phai khai bao cac thuoc tinh khac cua item vo nua nhe, con khai bao ntn thi viet trong file class con)
	std::string getId() const { return id; }
	std::string getName() const { return name; }
	bool getStatus() const { return isAvailable; }
	void setStatus(bool available) { isAvailable = available; }
	virtual void displayInfo() const = 0; // Ham hien thi thong tin cua item (phai khai bao trong file class con)
	virtual ~MediaItem() = default; // ham huy 
	virtual std::string getType() const = 0; // Ham tra ve type(Book,DVD,AudioTrack) item (phai khai bao trong file class con)
	bool operator==(const MediaItem& item) const;
};
/* Class MediaItem - la class cha cho cac loai item trong thu vien
 Vay nen moi nguoi khi viet cac class con thi nho include file header(.h) cua class nay trong file .h cua class con nhe
 CHU Y: file.h thi chi khai bao class, atribute, methods, ham huy va ham khoi tao! khong  viet body code cua methods nhe( tru khi body code qua ngan)
 file .cpp thi moi viet body code cua methods, ham huy va ham khoi tao nhe( mn co the kham thao file MediaItem.cpp )


 VD: viet class Book

 file .h: #include "MediaItem.h" || dong thoi khong dung using namespace std; trong file .h cua class con nhe
 file .cpp: #include "Book.h" (include file .h cua file .cpp la duoc)

 
 
 
 */