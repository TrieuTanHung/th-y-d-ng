#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SinhVien
{
protected:
	string hoTen;
	int tuoi;
	string MSSV;
	int DTB;
public:
	SinhVien();
	~SinhVien();
	void Nhap();
	void Xuat();
	string get_hoTen();
	void set_hoTen(string hoTen);
	int get_Tuoi();
	void set_Tuoi(int tuoi);
	string get_MSSV();
	void set_MSSV(string MSSV);
	int get_DTB();
	void set_DTB(int);
};

