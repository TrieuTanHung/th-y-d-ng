#include "SinhVienCQ.h"

bool SinhVienCQ::totNghiep()
{
    if (DTB >= 5)
        return true;
    return false;
}
void SinhVienCQ::nhap()
{
    SinhVien::nhap();
}
void SinhVienCQ::xuat()
{
    SinhVien::xuat();
}