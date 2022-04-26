#include "DateTime.h"

DateTime::DateTime()
{
	ngay = 1;
	thang = 1;
	nam = 2022;
}

DateTime::DateTime(int ngay, int thang, int nam)
{
	ngay = ngay;
	thang = thang;
	nam = nam;
}

int DateTime::Ngay()
{
	return ngay;
}
void DateTime::setNgay(int value)
{
	ngay = value;
}
int DateTime::Thang()
{
	return thang;
}
void DateTime::setThang(int value)
{
	thang = value;
}
int DateTime::Nam()
{
	return nam;
}
void DateTime::setNam(int value)
{
	nam = value;
}

DateTime::~DateTime()
{
	// cout << "Destructor is called.\n";
}

string DateTime::toString()
{
	stringstream builder;

	builder << ngay << "/" << thang << "/" << nam;

	string result = builder.str();
	return result;
}

ostream &operator<<(ostream &os, const DateTime &dt)
{
	cout << dt.ngay << "/" << dt.thang << "/" << dt.nam;

	return os;
}
istream &operator>>(istream &is, DateTime &dt)
{
	cout << "\nNgay: ";
	is >> dt.ngay;
	cout << "\nThang: ";
	is >> dt.thang;
	cout << "\nNam: ";
	is >> dt.nam;

	return is;
}