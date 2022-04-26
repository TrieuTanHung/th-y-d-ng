#include "QuanLy.h"

QuanLy::QuanLy()
{

}

QuanLy::~QuanLy()
{
    // delete danh sach sinh vien
    for (int i = 0; i < danhSachSinhVien.size(); i++)
    {
        delete danhSachSinhVien[i];
    }
}

void QuanLy::Nhap()
{
    cout << "So luong hoc sinh: ";
    int n;
    cin >> n;
    danhSachSinhVien.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "1.SVCQ" << endl;
        cout << "2.SVTT" << endl;
        int chon;
        cin >> chon;
       
        danhSachSinhVien[i]->Nhap();
    }
}
void QuanLy::Xuat()
{

    for (int i = 0; i < danhSachSinhVien.size(); i++)
    {
        danhSachSinhVien[i]->Xuat();
    }
}
