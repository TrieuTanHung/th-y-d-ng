#pragma once
#include "SinhVien.h"

class SinhVienCQ:public SinhVien
{
public:
	SinhVienCQ() {};
	~SinhVienCQ() {};
	virtual void DKTN()
	{
		if (DTB >= 5)
			cout << "Tot Nghiep";
	}
};

