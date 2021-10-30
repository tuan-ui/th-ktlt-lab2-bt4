#include<iostream>
using namespace std;
const int MAX = 100;
struct DaySo {
	int a[MAX];
	int n;
};

void nhapDS(DaySo& ds);
void xuatDS(DaySo ds);
bool ktHoanThien(int n);
int demSoHoanThien(DaySo ds);
bool ktTangDan(DaySo ds);
void thayTheXbangY(DaySo &ds, int x, int y);
int demSoPhantu(DaySo ds);