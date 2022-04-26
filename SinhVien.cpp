#include "SinhVien.h"

SinhVien::SinhVien()
{

}
SinhVien::~SinhVien()
{

}
string SinhVien::get_hoTen()
{
	return hoTen;
}
void SinhVien::set_hoTen(string hoTen)
{
	this->hoTen = hoTen;
}
int SinhVien::get_Tuoi()
{
	return tuoi;
}
void SinhVien::set_Tuoi(int tuoi)
{
	this->tuoi = tuoi;
}
string SinhVien::get_MSSV()
{
	return MSSV;
}
void SinhVien::set_MSSV(string MSSV)
{
	this->MSSV = MSSV;
}
int SinhVien::get_DTB()
{
	return DTB;
}
void SinhVien::set_DTB(int DTB)
{
	this->DTB = DTB;
}
void SinhVien::Nhap()
{
	cout << "Nhap ho ten: ";
	getline(cin, hoTen);
	//cin >> hoTen;
	cout << "Nhap tuoi: ";
	cin >> tuoi;
	cout << "Nhap MSSV: ";
	cin >> MSSV;
	cout << "Nhap diem trung binh: ";
	cin >> DTB;
}
void SinhVien::Xuat()
{
	cout << "\nHo ten: " << hoTen;
	cout << "\nTuoi: " << tuoi;
	cout << "\nMSSV: " << MSSV;
	cout << "\nDiem trung binh: " << DTB;
}
	