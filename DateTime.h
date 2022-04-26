#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class DateTime
{
private:
	int ngay;
	int thang;
	int nam;
public:
	DateTime();
	DateTime(int, int, int);
	~DateTime();
	int Ngay();
	void setNgay(int);
	int Thang();
	void setThang(int);
	int Nam();
	void setNam(int);

public:
	string toString();
	friend ostream& operator<<(ostream& os, const DateTime& dt);
	friend istream& operator>>(istream& is, DateTime& dt);
};

