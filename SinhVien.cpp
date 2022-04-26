#include "SinhVien.h"

SinhVien::SinhVien()
{
	MSSV = "";
	hoTen = "";
	ngaySinh = DateTime();
	DTB = 0;
}
/*SinhVien::SinhVien(string MSSV, string hoTen, DateTime ngaySinh, float DTB)
{
	MSSV = MSSV;
	hoTen = hoTen;
	ngaySinh = ngaySinh;

}*/
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
DateTime SinhVien::NgaySinh()
{
	return ngaySinh;
}
void SinhVien::setNgaySinh(DateTime value)
{
	ngaySinh = value;
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
void SinhVien::nhap()
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, hoTen);
	cout << "Nhap tuoi: ";
	cin >> tuoi;
	cout << "Nhap MSSV: ";
	cin >> MSSV;
	cout << "Nhap diem trung binh: ";
	cin >> DTB;
}
void SinhVien::xuat()
{
	cout << "\nHo ten: " << hoTen;
	cout << "\nTuoi: " << tuoi;
	cout << "\nMSSV: " << MSSV;
	cout << "\nDiem trung binh: " << DTB;
}
