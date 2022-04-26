#include "SinhVienTT.h"

bool SinhVienTT::totNghiep()
{
    if (DTB >= 6.5 && ToefliBT >= 80)
        return true;
    return false;
}
void SinhVienTT::nhap()
{
    SinhVien::nhap();
    cout << "Nhap diem ToefliBT: ";
    cin >> ToefliBT;
}
void SinhVienTT::xuat()
{
    SinhVien::xuat();
    cout << "Diem ToefliBT: " << ToefliBT << endl;
}