#include "SinhVien.h"
class SinhVienTT:public SinhVien
{
public:
	SinhVienTT() {};
	~SinhVienTT() {};
	bool totNghiep()
	{
		if (DTB >= 6.5)
			return true;
	}
};

