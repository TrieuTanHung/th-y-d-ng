#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "DateTime.h"
using namespace std;

class SinhVien
{
protected:
	string hoTen;
	int tuoi;
	string MSSV;
	int DTB;

private:
	DateTime ngaySinh;

public:
	SinhVien();
	SinhVien(string, string, DateTime, float);
	~SinhVien();

	string get_hoTen();
	void set_hoTen(string hoTen);
	DateTime NgaySinh();
	void setNgaySinh(DateTime);
	string get_MSSV();
	void set_MSSV(string MSSV);
	int get_DTB();
	void set_DTB(int);

	virtual void nhap();
	virtual void xuat();
	virtual bool totNghiep() = 0;
};
