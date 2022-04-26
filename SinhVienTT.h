#include "SinhVien.h"
class SinhVienTT : public SinhVien
{
	float ToefliBT;

public:
	SinhVienTT(){};
	~SinhVienTT(){};

	float get_ToefliBT() { return ToefliBT; };
	void set_ToefliBT(float ToefliBT) { this->ToefliBT = ToefliBT; };

	virtual bool totNghiep();
	virtual void nhap();
	virtual void xuat();
};
