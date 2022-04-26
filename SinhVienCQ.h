#pragma once
#include "SinhVien.h"

class SinhVienCQ : public SinhVien
{
public:
	SinhVienCQ(){};
	~SinhVienCQ(){};

	virtual bool totNghiep();
	virtual void nhap();
	virtual void xuat();
};
