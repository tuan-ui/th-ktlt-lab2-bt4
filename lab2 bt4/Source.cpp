#include"Header.h"

void nhapDS(DaySo& ds)
{
	do {
		cout << "\nNhap so phan tu : ";
		cin >> ds.n;
		if (ds.n <= 0)
			cout << "\nNhap sai.Nhap lai.";
	} while (ds.n <= 0);
	for (int i = 0; i < ds.n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> ds.a[i];
	}
}

void xuatDS(DaySo ds)
{
	for (int i = 0; i < ds.n; i++)
		cout << ds.a[i] << " ";
}

bool ktHoanThien(int n)
{
	int tong = 0;
	for (int i = 1; i <= n / 2; i++) 
		if (n % i == 0)
			tong += i;
	if (tong == n) 
		return true; 
	return false;
}

int demSoHoanThien(DaySo ds)
{
	int k = 0;
	for (int i = 0; i < ds.n; i++)
		if (ktHoanThien(ds.a[i]))
			k++;
	return k;
}

bool ktTangDan(DaySo ds)
{
	for (int i = 0; i < ds.n - 1; i++)
		if (ds.a[i] >= ds.a[i + 1])
			return false;
	return true;
}

void thayTheXbangY(DaySo &ds, int x, int y)
{
	for (int i = 0; i < ds.n ; i++)
		if (ds.a[i] == x)
			ds.a[i] = y;
}

int demSoPhantu(DaySo ds)
{
	int k = 0;//dem so phan tu
	for (int i = 0; i < ds.n; i++)
	{
		int dem = 0;//dem so lan trung
		for (int j = i + 1; j < ds.n; j++)
			if (ds.a[j] == ds.a[i])
				dem++;
		if (dem == 0)
			k++;
	}
	return k;
}