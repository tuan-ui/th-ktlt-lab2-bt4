#include"Header.h"

void main()
{
	int x, y;
	DaySo ds;
	nhapDS(ds);
	xuatDS(ds);
	cout << "\nDem so luong so hoan thien: " << demSoHoanThien(ds);
	if (ktTangDan(ds))
		cout << "\nDay la day so tang dan.";
	else
		cout << "\nDay la day so khong rang dan.";
	cout << "\nNhap phan tu x can thay the: ";
	cin >> x;
	cout << "Nhap phan tu y thay the: ";
	cin >> y;
	thayTheXbangY(ds, x, y);
	xuatDS(ds);
	cout << "\nDem so phan tu khong trung nhau: " << demSoPhantu(ds);
	cout << endl;
	system("pause");
}