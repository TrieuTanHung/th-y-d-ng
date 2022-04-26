#pragma once
#include "SinhVien.h"

class SinhVienCQ:public SinhVien
{
public:
	SinhVienCQ() {};
	~SinhVienCQ() {};
	bool totNghiep()
	{
		if (DTB >= 5)
			return true;
	}
};

