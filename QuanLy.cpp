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

void QuanLy::nhap()
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
        if (chon == 1) // SVCQ
        {
            SinhVienCQ *sv = new SinhVienCQ();
            sv->nhap();
            danhSachSinhVien[i] = sv;
        }
        else if (chon == 2) // SVTT
        {
            SinhVienTT *sv = new SinhVienTT();
            sv->nhap();
            danhSachSinhVien[i] = sv;
        }
    }
}
void QuanLy::xuat()
{

    for (int i = 0; i < danhSachSinhVien.size(); i++)
    {
        danhSachSinhVien[i]->xuat();
    }
}

void QuanLy::tinhTongSVTN()
{
    vector<SinhVien *> dsSVTN;
    int tongSVTN = 0;
    for (int i = 0; i < danhSachSinhVien.size(); i++)
    {
        if (danhSachSinhVien[i]->totNghiep())
        {
            // tongSVTN++;
            dsSVTN.push_back(danhSachSinhVien[i]);
        }
    }
    cout << "\n\n";
    cout << "So luong sinh vien tot nghiep: " << dsSVTN.size() << endl;
    for (int i = 0; i < dsSVTN.size(); i++)
    {
        dsSVTN[i]->xuat();
    }
    cout << "\n\n";
}