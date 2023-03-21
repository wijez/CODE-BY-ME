/******************************************************************************
			QUAN LY HOC SINH - CAI DAT DANH SÁCH BANG MANG
*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <math.h>

#define Max 1000
using namespace std;
//Khai bao danh sach mang
struct hocsinh{
    int maHS;
    string hoten;
    string lop;
    float toan, van, anh;
};
struct danhsachHS{
    hocsinh element[Max];
    int count;
};
typedef danhsachHS LIST;
//
void inTieude(){
    cout << setw(5) << left << "STT";
	cout << setw(10) << left << "MaHS";		
	cout << setw(20) << left << "Name";	
	cout << setw(10) << left << "Lop";
	cout << setw(10) << right << "Toan";
	cout << setw(10) << right << "Van";
	cout << setw(10) << right << "Anh";
	cout << setw(10) << right << "DTB" << endl;	
	cout << setfill('-');
	cout << setw(85) << "-" << endl;
	cout << setfill(' ');
}
//Khoi tao ds rong
void init(LIST &L){
    L.count = 0;
}
//them mot hoc sinh vao danh sach
void insert(hocsinh e, int p, LIST &L){
    if(L.count>Max) return;
    if(p<0 || p>L.count) return;
    for(int i = L.count-1; i>=p; i--)
        L.element[i+1] = L.element[i];
    L.element[p] = e;
    L.count++;
}
//xoa mot hoc sinh trong danh sach
void del(int p, LIST &L){
    if(p<0 || p>L.count-1) return;
    for(int i = p+1; i<=L.count-1; i++)
        L.element[i-1] = L.element[i];
    L.count--;
}
//Nhap 1 hoc sinh
void nhaphs(hocsinh &A){
    cout<<"Ma HS: "; cin>>A.maHS;
    cout<<"Ho ten: "; cin>>A.hoten;
    cout<<"Lop: "; cin>>A.lop;
    cout<<"Toan: "; cin>>A.toan;
    cout<<"Van: "; cin>>A.van;
    cout<<"Anh: "; cin>>A.anh;
}
//Nhap 1 danh sach
void nhapDS(LIST &L){
    init (L);
    hocsinh hs;
    do{
        nhaphs(hs);
        if(hs.maHS != 0)
            insert(hs,L.count ,L);
    }while(hs.maHS!=0);
}
//Tinh diem trung binh
float DTB(hocsinh A){
    return (A.toan+A.van+A.anh)/3;
}
//xuat 1 hoc sinh
void xuatHS(hocsinh hs,int vt){
	cout << setw(5) << left << vt;
    cout << setw(10) << left << hs.maHS;
	cout << setw(20) << left << hs.hoten;
	cout << setw(10) << left << hs.lop;
	cout << setw(10) << right << hs.toan;
	cout << setw(10) << right << hs.van;
	cout << setw(10) << right << hs.anh;
	cout << setw(10) << right << DTB(hs)<<endl;
}
//Xuat 1 danh sach
void xuat(LIST L){
    for(int i = 0; i<L.count; i++)
        xuatHS(L.element[i],i);
}

//Du lieu chay thu
int n = 15;
int Ma[] = {1078, 1123, 1169, 1000, 1005, 1016, 1002, 1001, 1008, 1007, 1020, 1051, 1187, 1043, 1089};
float toan[] = {9, 10, 9, 7, 5, 4, 10, 6, 8, 8, 9, 9, 3, 7, 5};
float van[] = {9, 3, 7, 5, 10, 6, 8, 8, 9, 9, 7, 5, 4, 9, 10};
float anh[] = {8, 8, 9, 9, 7, 5, 4, 9, 10, 9, 3, 7, 5, 10, 6};
string ten[] = {"Thu", "Dat","Ha","Thao","Lien","Tuyet","Huong","Huy","Nguyen","Hieu","Hong","Hanh","Hang","Hue","Bach","Tung"};
string lop[] = {"A1","A1","A1","A2","A3","A3","A2","A3","A1","A1","A2","A1","A2","A3","A1","A2","A3"};
void taoDS(LIST &L){
	init(L);
	for(int i = 0; i<n; i++){
		hocsinh e;
		e.maHS = Ma[i];
		e.anh = anh[i];
		e.hoten = ten[i];
		e.lop = lop[i];
		e.toan = toan[i];
		e.van = van[i];
		insert(e,L.count,L);
	}
}

int main(){
   
    return 0;
}