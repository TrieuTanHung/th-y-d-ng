#include "SinhVien.h"
#include "SinhVienCQ.h"
#include "SinhVienTT.h"

class QuanLy
{
private:
	vector<SinhVien *> danhSachSinhVien;

public:
	QuanLy();
	~QuanLy();
	void nhap();
	void xuat();
	void tinhTongSVTN();
};