#pragma once
#include "cautruc.h"

#include <sstream>

#define DOWN -80
#define UP -72
#define LEFT -75
#define RIGHT -77
#define ENTER 13
#define ESC 27
#define BACKSPACE 8
#define SPACE 32
#define DOT 46
#define F1 -59
#define F2 -60
#define F3 -61
#define F4 -62
#define F5 -63
#define F8 -66
//=================================
struct lop_hoc
{
	char lop[15];
};
typedef struct lop_hoc LOP_HOC;
//============================================================================
//======= mon hoc ===========
int kt_Trung(char a[11],DS_MON_HOC ds_mh); //kiem tra trung ma mon hoc
void InsertNode_MH(DS_MON_HOC &ds_mh , MON_HOC *p); // them 1 node mon hoc
void XemMonHoc(DS_LOP_TIN_CHI &DSLTC, DS_MON_HOC &DSMH, int chedoxem);
void GhiFileDSMH(DS_MON_HOC DS_MH);
void SortDSMH(DS_MON_HOC &DSMH);//sap xep mon hoc theo abc (buble sort)
int fullMH(DS_MON_HOC DSMH) ;// danh sach mon hoc day
void Them_MH(DS_MON_HOC &DSMH, bool &check_change);
void Xoa_1_MH(DS_MON_HOC &ds_mh,int i);
void Xoa_MH(DS_LOP_TIN_CHI &ds_ltc,DS_MON_HOC &ds_mh, bool &check_change);
int KTMH(DS_MON_HOC DSMH, char mh[]) ;//xuat ra vitri mon hoc trong mang
void Sua_MH(DS_LOP_TIN_CHI &ds_ltc,DS_MON_HOC &ds_mh, bool &check_change);
void search_maMH_LTC(tree t,char ma[],int &malop);// tim malop tin chi ma mon hoc da mo
char* Search_MH(DS_MON_HOC DSMH, char mh[]) ;// tu ma mon hoc xuat ra ten mh
//======= lop tin chi ============
lop_tin_chi* khoi_tao_ltc();
bool check_ma_ltc(tree &t, int ma);//check ma ltc da ton tai chua
int tao_ma_ltc(tree t);//random maltc
void them_1_ltc(tree &t, lop_tin_chi *p );
int check_max_min(int max, int min);
void MangTam_LopTC(tree t, tree ltc[], int &dem);// do ltc ra mang tam de hien thi
int check_4_ma(tree t,int maTC,char ma_mh[], char nienkhoa[], int hocky, int nhom); // check dieu kien 4 field kh trung
void GhiFileDSLTC(DS_LOP_TIN_CHI dsltc);
void DuyetNLR(ofstream &file,tree t);
void DocFileDSLTC( DS_LOP_TIN_CHI &ds_ltc);
void XemLopTC(DS_LOP_TIN_CHI &DSLTC, DS_MON_HOC &DSMH, int chedoxem);
void NLR(tree t);
void XoaLopTC(DS_LOP_TIN_CHI &ds_ltc, bool &check_change);
void xoa_1_ltc(tree &t , int ma_ltc);
void tim_node_thay_the(tree &t , tree &x);
void SuaLopTC(DS_LOP_TIN_CHI &DSLTC, DS_MON_HOC &DSMH, bool &check_change);
bool check_nien_khoa(char nk[8]);
tree Search_LTC(tree &t, int ma);
void Sua_node_LTC(tree &t, int ma,tree tc);
void nhapDSLTC(DS_LOP_TIN_CHI &DSLTC, DS_MON_HOC DSMH ,bool &check_change);
void Mo_LTC(DS_LOP_TIN_CHI &DSLTC, DS_MON_HOC DSMH );
void in_mang_tam_LTC(lop_tin_chi mangtamLTC[],int demsl,int trang,int tongtrang);
//===================== sinh vien========================
int check_lop(DS_SINH_VIEN ds_sv, char malop[]);//kiem tra lop nhap vao ton tai chua
void xem_SV_theo_lop(DS_SINH_VIEN ds_sv,char malop[]);
void DocFileSV(DS_SINH_VIEN &dssv);
void GhiFileSV(DS_SINH_VIEN dssv);
void Insert_TailSV(DS_SINH_VIEN &DSSV, SINH_VIEN *sv);
void MangTam_SV(DS_SINH_VIEN ds_sv, SINH_VIEN mangSV[], char malop[]);// do sv ra mang tam de hien thi
sinh_vien* khoi_tao_sv();
void xem_SV_theo_lop(DS_SINH_VIEN ds_sv,DS_LOP_TIN_CHI dsltc,char malop[],bool &checkchange);//xem sv theo 1 lop
void XemSinhVien(DS_SINH_VIEN &DSSV,DS_LOP_TIN_CHI dsltc);
int dem_SV_lop(DS_SINH_VIEN ds_sv,char malop[]);//sl sinh vien cua lop do
void NhapDSSinhVien(DS_SINH_VIEN &DSSV);
int check_sv(DS_SINH_VIEN ds_sv, char malop[], char masv[]);
int check_phai(string phai);
void them_1_sv(DS_SINH_VIEN &l, SINH_VIEN *p);
void them_1_sv_vao_dau_ds(DS_SINH_VIEN &l, SINH_VIEN *p);
void in_mang_tam_SV(SINH_VIEN sv[],int dem,int trang, int tongtrang);
void in_mang_tam_SV_1(SINH_VIEN* sv[],int dem,int trang, int tongtrang);
void sua_mang_tam_SV(DS_SINH_VIEN DSSV,SINH_VIEN sv[],int dem,char mssv[],char malop[]);
void them_SV(DS_SINH_VIEN &DSSV,bool &check_change,char malop[],int &sl);
void sua_Sinh_Vien(DS_SINH_VIEN &DSSV,SINH_VIEN *sv,char mssv[],char malop[],bool &checkchange);
void xoa_1_sv(DS_SINH_VIEN &l, char malop[],char mssv[]);
SINH_VIEN* tim_sv_khong_malop(DS_SINH_VIEN ds_sv, char masv[]);
void xoa_1_sv_dau_ds(DS_SINH_VIEN &l);
void xoa_1_sv_cuoi_ds(DS_SINH_VIEN &l);
SINH_VIEN* tim_sv(DS_SINH_VIEN ds_sv, char malop[], char masv[]);
int check_sv_khac_lop(DS_SINH_VIEN ds_sv, char masv[]);
void ds_lop(DS_SINH_VIEN ds_sv, LOP_HOC listlop[],int &dem);
//======================dang ki lop tin chi====================================
void ds_ltc(tree t,tree ds[] ,char nk[], int hk,int &sl);
dang_ky* khoi_tao_dk();
void them_1_node_vao_dau_ds(tree t, DANG_KY *p);
int dang_ky_1_LTC(tree t, char nk[], int hk, int ma_ltc, char masv[]);
void Dang_Ki_LTC(tree t, DS_SINH_VIEN ds_sv);
void hienthi_DS_LTC_DK(tree ds[],int dem,int trang,int tongtrang);
int so_luong_sv_1_LTC(tree t, int maltc);
int kiem_tra_sv_dang_ky_LTC_2_lan(tree t,int maltc, char masv[]);
void GhiFileDSDK(tree t);
void FileDK(tree t, ofstream &outfile1);
void xem_sv_theo_LTC(DS_SINH_VIEN dssv,DS_LOP_TIN_CHI dsltc,DS_MON_HOC dsmh);
void ds_sv_dang_ky_LTC_theo_maLTC(tree t, int maltc,SINH_VIEN mangsv[],int &dem);
tree check_ma_ltc1(tree t, int ma);
void them_1_node_vao_dau_ds_ltc(tree t, DANG_KY *p);
void check_sv_dk_ltc(tree t,char masv[],int &dem);
void DocFileDSDK(DS_LOP_TIN_CHI &ds_ltc);
void hieu_chinh_danh_sach_DK(DS_LOP_TIN_CHI &dsltc,DS_SINH_VIEN ds_sv);
void in_ds_LTC_sv_dang_ky(tree t,char masv[],tree mangLTC[],int &dem);
void huy_dang_ky_1_LTC(tree &t, int maltc, char masv[],int &check);
float diem_sv_LTC(tree t,int maltc, char masv[]);
void nhap_diem_theo_LTC(DS_SINH_VIEN dssv,DS_LOP_TIN_CHI &dsltc,DS_MON_HOC dsmh);
void nhap_diem_1_sv(tree &t, int maltc, char masv[],float diem);
void xem_diem_theo_LTC(DS_SINH_VIEN dssv,DS_LOP_TIN_CHI dsltc,DS_MON_HOC dsmh);
void xem_diem_TB_theo_lop(DS_SINH_VIEN dssv,DS_LOP_TIN_CHI dsltc,DS_MON_HOC dsmh);
//=============================================================================

char MENU[6][40] = {
	"    Quan Ly Lop Tin Chi ",
	"    Quan Ly Lop Hoc     ",
	"    Quan Ly Sinh Vien   ",
	"    Quan Ly Mon Hoc     ",
	"    Quan Ly Dang Ki     ",
	"    Thoat               " };

char MENUloptc[4][40] = {
	"   Mo Lop Tin Chi          ",
	"   Danh Sach Lop Tin Chi   ",
	"     DS SV Lop Tin Chi     ",
	"   Xem Diem Lop Tin Chi    "
};

char MENUlop[2][40] = {
	"     Xem Danh Sach Lop   ",
	"     Xem diem Trung Binh "
};

char MENUsv[3][40] = {
	"     Nhap Danh Sach SV     ",
	"     Xem Danh Sach SV      ", 
	"     Xem Diem Sinh Vien    "};

char MENUmonhoc[1][40] = {
	"         Xem Mon Hoc       " };

char MENUdangki[3][40] = {
	"     Dang Ki Lop Tin Chi   ",
	"     Xem Danh Sach Dang Ki ",
	"     Nhap Diem             " };


//=================================
//Bat phim
int GetKey()
{
	char key;
	key = _getch();
	if (key == -32 || key == 0)
		return -_getch();
	else return key;
}
//Ghi chu
void GhiChu(char c[], int x, int y, int color, int sleep)
{

	gotoXY(x, y);
	TextColor(color);
	cout << c;
	Sleep(sleep);
	gotoXY(x, y);
	TextColor(14);
	for (int j = 0; j <= strlen(c); j++)
	{
		cout << ' ';
	}

}
// to mau
void ToMauMenuChinh(int color, int vitri)
{
	if(vitri<3){
		TextColor(color);
		gotoXY(20+vitri*28, 10); cout << "                        ";
		gotoXY(20+vitri*28, 11); cout << MENU[vitri];
		gotoXY(20+vitri*28, 12); cout << "                        ";
	}
	if(vitri>=3){
		TextColor(color);
		gotoXY(20+(vitri-3)*28, 14); cout << "                        ";
		gotoXY(20+(vitri-3)*28, 15); cout << MENU[vitri];
		gotoXY(20+(vitri-3)*28, 16); cout << "                        ";
	}
}
//to mau
void ToMauMenuCon(int item,int color, char MENUCON[][40], int vitri)
{
	if(item==4){
		TextColor(color);
		gotoXY(4+vitri*28, 20); cout << "                           ";
		gotoXY(4+vitri*28, 21); cout << MENUCON[vitri];
		gotoXY(4+vitri*28, 22); cout << "                           ";
	}
	if(item==3){
		TextColor(color);
		gotoXY(18+vitri*28, 20); cout << "                           ";
		gotoXY(18+vitri*28, 21); cout << MENUCON[vitri];
		gotoXY(18+vitri*28, 22); cout << "                           ";
	}
	if(item==2){
		TextColor(color);
		gotoXY(35+vitri*28, 20); cout << "                         ";
		gotoXY(35+vitri*28, 21); cout << MENUCON[vitri];
		gotoXY(35+vitri*28, 22); cout << "                         ";
	}
	if(item==1){
		TextColor(color);
		gotoXY(45+vitri*28, 20); cout << "                           ";
		gotoXY(45+vitri*28, 21); cout << MENUCON[vitri];
		gotoXY(45+vitri*28, 22); cout << "                           ";
	}
}
//di chuyen giua menu con
int MenuCon(int item, char MENUCON[][40])
{
	
	char key;
	int vitri = 0;	int color = 224; int color1 = 240;
	while (1)
	{
		ThongTinChung();
		key = GetKey1();
		if (key == ENTER)
			return vitri + 1;
		if (key == ESC || key == UP)
			return 0;
		switch (key)
		{
		case RIGHT:
		{
			if (vitri == (item - 1))
			{
				ToMauMenuCon(item,240, MENUCON, vitri);
				vitri = 0;
				ToMauMenuCon(item,224, MENUCON, vitri);
			}
			else
			{
				ToMauMenuCon(item,240, MENUCON, vitri);
				vitri++;
				ToMauMenuCon(item,224, MENUCON, vitri);
			}
		}break;
		case LEFT:
		{
			if (vitri == 0)
			{
				ToMauMenuCon(item,240, MENUCON, vitri);
				vitri = item - 1;
				ToMauMenuCon(item,224, MENUCON, vitri);
			}
			else
			{
				ToMauMenuCon(item,240, MENUCON, vitri);
				vitri--;
				ToMauMenuCon(item,224, MENUCON, vitri);
			}
		}break;
		}
	}
}
// di chuyen menu chinh
int MenuCha()
{
	
	int vitri = 0;
	while (1)
	{
		ThongTinChung();
		char key = GetKey1();
		if (key == ENTER ) // vitri!= 5 la ngay tai o Tho·t
		{
			return vitri + 1;
		}
		switch (key)
		{
		case DOWN:
		{		
				if(vitri>=3)
				{
				ToMauMenuChinh(240, vitri);
				vitri=vitri-3;
				ToMauMenuChinh(158, vitri);	
				}
				else{
					ToMauMenuChinh(240, vitri);
					vitri=vitri+3;
					ToMauMenuChinh(158, vitri);	
				}
				
		}break;
		case UP:
		{
				if(vitri<3){
				ToMauMenuChinh(240, vitri);
				vitri=vitri+3;
				ToMauMenuChinh(158, vitri);	
				}
				else{
					ToMauMenuChinh(240, vitri);
					vitri=vitri-3;
					ToMauMenuChinh(158, vitri);
				}
				
		}break;
		case RIGHT:
		{
			if (vitri == 5)
			{
				ToMauMenuChinh(240, vitri);
				vitri = 0;
				ToMauMenuChinh(158, vitri);
			}
			else
			{
				ToMauMenuChinh(240, vitri);
				vitri++;
				ToMauMenuChinh(158, vitri);
			}
		}break;
		case LEFT:
		{
			if (vitri == 0)
			{
				ToMauMenuChinh(240, vitri);
				vitri = (5);
				ToMauMenuChinh(158, vitri);
			}
			else
			{
				ToMauMenuChinh(240, vitri);
				vitri--;
				ToMauMenuChinh(158, vitri);
			}
		}break;
		}
	}
}
// giao dien chinh
void MenuKT( DS_LOP_TIN_CHI &DSLTC,DS_MON_HOC &DSMH,DS_SINH_VIEN &DSSV)
{
	ShowCur(TRUE);//hien thi con tro
	int chonMenuCon;
	while (1)
	{
		system("cls");
		for (int i = 0; i < 3; i++)
		{
			if (i == 0) { TextColor(158); }
			else { TextColor(240); }
			gotoXY(20+i*28, 10); cout << "                        ";	//in ra hang tren giao dien chinh
			gotoXY(20+i*28, 11); cout << MENU[i];
			gotoXY(20+i*28, 12); cout << "                        ";
			
			 TextColor(240);
			gotoXY(20+i*28, 14); cout << "                        "; //in ra hang duoi giao dien chinh
			gotoXY(20+i*28, 15); cout << MENU[i+3];
			gotoXY(20+i*28, 16); cout << "                        ";
		}
		
		int chon = MenuCha();
		switch (chon)
		{
		case 1:																//Lop tinh chi
		{
			for (int i = 0; i < 4; i++)
			{
				if (i == 0) { TextColor(224); }
				else { TextColor(240); }
				gotoXY(4+i*28, 20); cout << "                           ";
				gotoXY(4+i*28, 21); cout << MENUloptc[i];
				gotoXY(4+i*28, 22); cout << "                           ";
			}
			chonMenuCon = MenuCon(4, MENUloptc);
			TextColor(14);
			system("cls");
			switch (chonMenuCon)
			{
			case 1: {	Mo_LTC(DSLTC,DSMH);break;}					// mo lop tinh chi
			case 2: {	XemLopTC(DSLTC,DSMH,0) ;  break;		}	//xem ds lop tinh chi
			case 3: {
				xem_sv_theo_LTC(DSSV,DSLTC,DSMH);					// xem ds sv cua 1 lop tc
				break;
			}
			case 4: {   xem_diem_theo_LTC(DSSV,DSLTC,DSMH); break;  }	//xem diem cua 1 lop tc
			}break;
		}
		case 2:
		{
			for (int i = 0; i < 2; i++)
			{
				if (i == 0) { TextColor(224); }
				else { TextColor(240); }
				gotoXY(35+i*28, 20); cout << "                         ";
				gotoXY(35+i*28, 21); cout << MENUlop[i];
				gotoXY(35+i*28, 22); cout << "                         ";
			}
			chonMenuCon = MenuCon(2, MENUlop);
			TextColor(14);
			system("cls");
			switch (chonMenuCon)
			{
			case 1: {	XemSinhVien(DSSV,DSLTC);break;	}//xem danh sach sinh vien  
			case 2: {  xem_diem_TB_theo_lop(DSSV,DSLTC,DSMH); break; }//xem diem trung binh cua lop (khac voi LTC)
			}break;
		}
		case 3:
		{
			for (int i = 0; i < 3; i++)
			{
				if (i == 0) { TextColor(224); }
				else { TextColor(240); }
				gotoXY(18+i*28, 20); cout << "                           ";
				gotoXY(18+i*28, 21); cout << MENUsv[i];
				gotoXY(18+i*28, 22); cout << "                           ";
			}
			chonMenuCon = MenuCon(3, MENUsv);
			TextColor(14);
			system("cls");
			switch (chonMenuCon)
			{
			case 1: {	NhapDSSinhVien(DSSV); break;			} //nhap sv lien tuc
			case 2: {	XemSinhVien(DSSV,DSLTC); break;			} //xem ds sv
			case 3: { 	xem_diem_theo_LTC(DSSV,DSLTC,DSMH); break; }
			}break;
		}
		case 4:
		{
			for (int i = 0; i < 1; i++)
			{
				if (i == 0) { TextColor(224); }
				else { TextColor(240); }
				gotoXY(45+i*28, 20); cout << "                           ";
				gotoXY(45+i*28, 21); cout << MENUmonhoc[i];
				gotoXY(45+i*28, 22); cout << "                           ";
			}
			chonMenuCon = MenuCon(1, MENUmonhoc);
			TextColor(14);
			system("cls");
			switch (chonMenuCon)
			{
			case 1: { XemMonHoc(DSLTC, DSMH, 0); break; }
			}break;
		}
		case 5:
		{
			for (int i = 0; i < 3; i++)
			{
				if (i == 0) { TextColor(224); }
				else { TextColor(240); }
				gotoXY(18+i*28, 20); cout << "                           ";
				gotoXY(18+i*28, 21); cout << MENUdangki[i];
				gotoXY(18+i*28, 22); cout << "                           ";
			}
			chonMenuCon = MenuCon(3, MENUdangki);
			TextColor(14);
			system("cls");
			switch (chonMenuCon)
			{
			case 1: {  Dang_Ki_LTC(DSLTC.ds,DSSV); break; }
			case 2: {hieu_chinh_danh_sach_DK(DSLTC,DSSV); break; }
			case 3: {nhap_diem_theo_LTC(DSSV,DSLTC,DSMH); break; }
			}break;
		}
		case 6:
		{
			//putchar(7);
			int temp = ThongBao_Thoat();
			if (temp == 1) {
				//GiaiPhong(ds, DSMH, DSLTC);
				TextColor(7);
				system("cls");
				exit(0);
			}
			TextColor(14);	break;
		}
		}
	}
}
char* Search_MH(DS_MON_HOC DSMH, char mh[]) {
	if (DSMH.sl == 0)
	{
		return NULL;
	}
	else {
		for(int i=0;i<DSMH.sl;i++)
		{
			if(strcmp(DSMH.ds[i]->ma_mh,mh)==0) return DSMH.ds[i]->ten_mh;
		}
		return NULL;
	}
}
int KTMH(DS_MON_HOC DSMH, char mh[]) {
	if (DSMH.sl == 0)
	{
		return -1;
	}
	else {
		for(int i=0;i<DSMH.sl;i++)
		{
			if(strcmp(DSMH.ds[i]->ma_mh,mh)==0) return i;
		}
		return -1;
	}
}
void DocFileMH(DS_MON_HOC &ds_MH) {
	ifstream infile;
	string data;
	infile.open("DSMH.txt", ios::in);
	if (!infile) { GhiChu("Khong tim thay file", 50, 13, 79, 2000); return; } //Khong tim thay file
	while (infile.good())
	{
		ds_MH.ds[ds_MH.sl] = new MON_HOC;
		getline(infile, data);
		if (data.size() == 0) { break; } //Da co file nhung chua co du lieu
		strcpy(ds_MH.ds[ds_MH.sl]->ma_mh, data.c_str());
		getline(infile, data);		strcpy(ds_MH.ds[ds_MH.sl]->ten_mh, data.c_str());
		infile >> ds_MH.ds[ds_MH.sl]->so_tclt;
		infile.ignore();
		infile >> ds_MH.ds[ds_MH.sl]->so_tcth;
		infile.ignore();
		ds_MH.sl++;
	}
	infile.close();
}
void InsertNode_MH(DS_MON_HOC &ds_mh , MON_HOC *p)
{
	*ds_mh.ds[ds_mh.sl] = *p;
	ds_mh.sl++;
}
int kt_Trung(char a[],DS_MON_HOC ds_mh)
{
	for(int i = 0;i< ds_mh.sl;i++)
	{
		if(strcmp(ds_mh.ds[i]->ma_mh,a)==0)
			{
				return i;
			}
	}
	return -1;
}
//sort mon hoc
//Buble Sort
void SortDSMH(DS_MON_HOC &DSMH) {
	int i, j;
	MON_HOC* temp;
	for (i = 1; i < DSMH.sl; i++) {
		for (j = DSMH.sl - 1; j >= i; j--) {
			if (strcmp(DSMH.ds[j-1]->ten_mh, DSMH.ds[j]->ten_mh) >0) {
				temp = DSMH.ds[j - 1];
				DSMH.ds[j - 1] = DSMH.ds[j];
				DSMH.ds[j] = temp;
			}
		}
	}
}
int fullMH(DS_MON_HOC DSMH) {

	return(DSMH.sl == MAXMON ? TRUE : FALSE);
}
void Xoa_1_MH(DS_MON_HOC &ds_mh,int i)
{
	
	if(ds_mh.sl==0) return;
	delete ds_mh.ds[i];
	for(int j = i+1;j<ds_mh.sl;j++)
	{
		ds_mh.ds[j-1]=ds_mh.ds[j];
	}
	ds_mh.sl--;
}
void search_maMH_LTC(tree t,char ma[],int &malop)
{
	if(t!=NULL)
	{
		if(strcmp(t->ma_mh,ma)==0) malop=t->maloptinchi;
		search_maMH_LTC(t->pleft,ma,malop);
		search_maMH_LTC(t->pright,ma,malop);
	}
}
void Xoa_MH(DS_LOP_TIN_CHI &ds_ltc,DS_MON_HOC &ds_mh, bool &check_change)
{
	int key, x = 62, y = 26, vitri = 0;
	Khung_Xoa_MonHoc();	gotoXY(x, y);
	char ma_mon[11];
	while (1)
	{
		TextColor(15);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			ma_mon[vitri] = char(key);
			ma_mon[vitri] = toupper(ma_mon[vitri]);
			cout << ma_mon[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(62 + vitri, y);
			cout << " ";
			gotoXY(62 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			ma_mon[vitri] = '\0';	//Ngat chuoi~
			int kiemtra = KTMH(ds_mh, ma_mon);
			int kiemtraLTC=0 ;
			search_maMH_LTC(ds_ltc.ds,ma_mon,kiemtraLTC);
			if(kiemtraLTC!=0){
				int temp = ThongBao_XoaLTC();
				if(temp==1){
					while(kiemtraLTC!=0)
					{
						xoa_1_ltc(ds_ltc.ds,kiemtraLTC);
						ds_ltc.sl--;
						kiemtraLTC=0;
						search_maMH_LTC(ds_ltc.ds,ma_mon,kiemtraLTC);
					}
					Xoa_1_MH(ds_mh,kiemtra);
					check_change=true;
					GhiChu("XOA THANH CONG MON HOC!", 50, 3, 79, 700);
				}
				return ;
			}
			if(kiemtra!=-1)
			{
				Xoa_1_MH(ds_mh,kiemtra);
				check_change=true;
				GhiChu("XOA THANH CONG MON HOC!", 50, 3, 79, 700);
				return;
			}
			else {
				GhiChu("MON HOC Khong Ton Tai!", 50, 3, 79, 500);
				TextColor(15);
				gotoXY(56 + vitri, y);
			}
		}
		if (key == ESC || key == F3) { return; }
	}
}
void Sua_MH(DS_LOP_TIN_CHI &ds_ltc,DS_MON_HOC &ds_mh, bool &check_change)
{
	ShowCur(true);
	int key, x = 62, y = 26, vitri = 0;
	int kiemtra=-1;
	char lt[5]={};
	char th[5]={};
//	MON_HOC* MH = new MON_HOC;
	Khung_Sua_MonHoc();	gotoXY(x, y);
	char ma_mon[11];
	while (1)
	{
		TextColor(15);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			ma_mon[vitri] = char(key);
			ma_mon[vitri] = toupper(ma_mon[vitri]);
			cout << ma_mon[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(62 + vitri, y);
			cout << " ";
			gotoXY(62 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			ma_mon[vitri] = '\0';	//Ngat chuoi~
			kiemtra = KTMH(ds_mh, ma_mon);
			if(kiemtra!=-1)
			{
//				MH = ds_mh.ds[kiemtra];
//				strcpy(mamoncu,ds_mh.ds[kiemtra]->ma_mh);
				ftoa(ds_mh.ds[kiemtra]->so_tclt,lt,1);
				ftoa(ds_mh.ds[kiemtra]->so_tcth,th,1);
				Xoa_Khung_FooterLTC();
				Khung_Them_MonHoc();
				TextColor(15);
				gotoXY(30, 26 ); cout <<ds_mh.ds[kiemtra]->ma_mh;
				gotoXY(51, 26 ); cout << ds_mh.ds[kiemtra]->ten_mh;
				gotoXY(89, 26 ); printf("%.1f",ds_mh.ds[kiemtra]->so_tclt);
				gotoXY(100, 26 ); printf("%.1f",ds_mh.ds[kiemtra]->so_tcth);
				vitri=strlen(ds_mh.ds[kiemtra]->ten_mh);
				goto TENMH;
			}
			else {
				GhiChu("MON HOC Khong Ton Tai!", 50, 3, 79, 500);
				TextColor(15);
					gotoXY(62, y);cout<<"             ";
					vitri=0;
				gotoXY(62 + vitri, y);
			}
		}
		if (key == ESC || key == F3) { return; }
	}
TENMH:
	while (1)
	{
		TextColor(244);
		gotoXY(43,27); cout << "Ki tu so & chu: (A-Z) && (0-9). Toi da 30 ki tu!";
		TextColor(15);
		gotoXY(51 + vitri, y);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 35))
		{
			ds_mh.ds[kiemtra]->ten_mh[vitri] = char(key);
			ds_mh.ds[kiemtra]->ten_mh[vitri]= toupper(ds_mh.ds[kiemtra]->ten_mh[vitri]);
			cout << ds_mh.ds[kiemtra]->ten_mh[vitri];
			vitri++;
		}
		if (key == SPACE && ds_mh.ds[kiemtra]->ten_mh[vitri - 1] != ' ' && vitri > 0 && vitri < 35) // ko cho 2 khoang trang && vitri = 0
		{
			gotoXY(51 + vitri, y);
			cout << " ";
			ds_mh.ds[kiemtra]->ten_mh[vitri] = ' ';
			vitri++;
		}
		if (key == ENTER && vitri != 0)
		{
			ds_mh.ds[kiemtra]->ten_mh[vitri] = '\0';
			if (ds_mh.ds[kiemtra]->ten_mh[vitri - 1] == ' ') { vitri--; } //Kiem tra ki tu cuoi cung la khoang trang thi xoa khoang trang
			ds_mh.ds[kiemtra]->ten_mh[vitri] = '\0';
			vitri = strlen(lt);
			gotoXY(89 + vitri, y);
			goto STCLT;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(51 + vitri, y);
			cout << " ";
			gotoXY(51 + vitri, y);
		}
		if (key == RIGHT)
		{
			ds_mh.ds[kiemtra]->ten_mh[vitri] = '\0';
			if (ds_mh.ds[kiemtra]->ten_mh[vitri - 1] == ' ') { vitri--; } //Kiem tra ki tu cuoi cung la khoang trang thi xoa khoang trang
			ds_mh.ds[kiemtra]->ten_mh[vitri] = '\0';
			vitri = strlen(lt);
			gotoXY(89 + vitri, y);
			goto STCLT;
		}
		if (key == ESC || key == F1)
		{
			return;
		}
	}
STCLT:
	while (1)
	{
		TextColor(244);	gotoXY(43,27);
		cout << "Ki tu: (0-9) va dau '.' . Toi da: 5 ki tu              ";
		TextColor(15); gotoXY(89 + vitri, y); // Ghi ch˙
		key = GetKey();
		if (ds_mh.ds[kiemtra]->ten_mh[0] == '\0')
		{
			GhiChu("Ban Chua Nhap TEN Mon Hoc!", 45, 3, 79, 700);
			gotoXY(51, y);
			goto TENMH;
		}
		if ((key <= '9' && key >= '0'||key==DOT) && (vitri < 5))
		{
			int checkdot ;
			lt[vitri]=char(key);
			if(lt[vitri]=='.'&&vitri==0 || lt[vitri]=='.'&&vitri==4){
				continue;
			}
			if(lt[vitri]=='.'&&checkdot==1){
				continue;
			}
			if(lt[vitri]=='.'&&vitri>0&&vitri<4 ){
				checkdot=1;
			}
			if(lt[vitri]=='.'&&lt[vitri-1]=='.'){
				continue;
			}
			
			lt[vitri] = toupper(lt[vitri]);
			cout << lt[vitri];
			vitri++;
			
		}

		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(89 + vitri, y);
			cout << " ";
			gotoXY(89 + vitri, y);
			ds_mh.ds[kiemtra]->so_tclt=atof(lt);
		}
		if (key == ENTER && vitri != 0)
		{
			lt[vitri] = '\0';
			ds_mh.ds[kiemtra]->so_tclt=atof(lt);
			vitri = strlen(th);
			gotoXY(100 + vitri, y);
			goto STCTH;
		}
		if (key == LEFT)
		{
			lt[vitri] = '\0';
			vitri = strlen(ds_mh.ds[kiemtra]->ten_mh);
			gotoXY(51 + vitri, y);
			goto TENMH;
		}
		if (key == RIGHT)
		{
			lt[vitri] = '\0';
			ds_mh.ds[kiemtra]->so_tclt=atof(lt);
			vitri = strlen(th);
			gotoXY(100 + vitri, y);
			goto STCTH;
		}
		if (key == ESC || key == F1) { return; }
	}
STCTH:
	while (1)
	{
		TextColor(244);	gotoXY(43,27);
		cout << "Ki tu: (0-9) va dau '.' . Toi da: 5         ";
		TextColor(15); gotoXY(100 + vitri, y);
		key = GetKey();
		if (ds_mh.ds[kiemtra]->so_tclt == 0)
		{
			GhiChu("Ban Chua Nhap so tin chi LT!", 45, 3, 79, 700);
			gotoXY(89, y);
			goto STCLT;
		}
		if ((key <= '9' && key >= '0'||key== '.') && (vitri < 5))
		{
			th[vitri]=char(key);
			int checkdot ;
			th[vitri]=char(key);
			if(th[vitri]=='.'&&vitri==0 || th[vitri]=='.'&&vitri==4){
				continue;
			}
			if(th[vitri]=='.'&&checkdot==1){
				continue;
			}
			if(th[vitri]=='.'&&vitri>0&&vitri<4 ){
				checkdot=1;
			}
			if(th[vitri]=='.'&&th[vitri-1]=='.'){
				continue;
			}
			
			
			th[vitri] = toupper(th[vitri]);
			cout << th[vitri];
			vitri++;
			
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(100 + vitri, y);
			cout << " ";
			gotoXY(100 + vitri, y);
			ds_mh.ds[kiemtra]->so_tcth=atof(th);
		}
		if (key == ENTER && vitri != 0)
		{
			check_change = true;
			th[vitri] = '\0';
			ds_mh.ds[kiemtra]->so_tcth=atof(th);
			GhiChu("Sua Thanh Cong", 45, 3, 79, 1000);
			ShowCur(false);
			return;
		}
		if (key == LEFT)
		{
			th[vitri] = '\0';
			vitri = strlen(lt);
			gotoXY(89 + vitri, y);
			goto STCLT;
		}
		if (key == ESC || key == F1) { return; }
	}	
}
void Them_MH(DS_MON_HOC &DSMH, bool &check_change) {
	ShowCur(TRUE);
	int key;
	int checkdot ;
	int checkdot1 ;
	int STT = 1;
	int vitri = 0, x = 27, y = 26;
	int check_trung;
	char lt[5]={};
	char th[5]={};
	MON_HOC* MH = new MON_HOC;
	MH->ma_mh[0]=NULL; MH->so_tclt=0;MH->so_tcth=0;MH->ten_mh[0]=NULL;
	Khung_Them_MonHoc();
	TextColor(15);
	char tam[11];
	memset(tam, 0, sizeof(tam));
	gotoXY(x, y);

MAMH:
	while (1)
	{
		TextColor(244);
		gotoXY(43,27); cout << "Ki tu so & chu: (A-Z) && (0-9). Toi da 10 ki tu!";
		TextColor(15);
		gotoXY(27 + vitri, y);
		key = GetKey();

		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			tam[vitri] = char(key);
			tam[vitri] = toupper(tam[vitri]);
			cout << tam[vitri];
			vitri++;
		}
		if (key == ENTER && vitri != 0)
		{
			if (fullMH(DSMH)) {GhiChu("Danh sach mon hoc da day ,khong the them!", 45, 3, 79, 500); continue; }
			tam[vitri] = '\0';
			check_trung = kt_Trung(tam,DSMH);
			if (-1 != check_trung)
			{
				GhiChu("Trung Ma Mon Hoc. Vui Long Nhap Lai!", 45, 3, 79, 500);
				gotoXY(9 + vitri, y);
				continue;
			}
			strcpy(MH->ma_mh,tam);
			vitri = strlen(MH->ten_mh);
			gotoXY(44 + vitri, y);
			goto TENMH;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(27 + vitri, y);
			cout << " ";
			gotoXY(27 + vitri, y);
		}
		if (key == RIGHT)
		{
			if (fullMH(DSMH)) {GhiChu("Danh sach mon hoc da day ,khong the them!", 45, 3, 79, 500); continue; }
			tam[vitri] = '\0';
			check_trung = kt_Trung(tam,DSMH);
			if (-1 != check_trung)
			{
				GhiChu("Trung Ma Mon Hoc. Vui Long Nhap Lai!", 45, 3, 79, 500);
				gotoXY(9 + vitri, y);
				continue;
			}
			strcpy(MH->ma_mh,tam);
			vitri = strlen(MH->ten_mh);
			gotoXY(44 + vitri, y);
			goto TENMH;
		}
		if (key == ESC || key == F1)
		{
			return;
		}
	}
TENMH:
	while (1)
	{
		TextColor(244);
		gotoXY(43,27); cout << "Ki tu so & chu: (A-Z) && (0-9). Toi da 30 ki tu!";
		TextColor(15);
		gotoXY(44 + vitri, y);
		key = GetKey();
		if (MH->ma_mh == NULL)		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap ma mon", 45, 3, 79, 700);
			vitri = 0;
			gotoXY(27, y);
			goto MAMH;
		}
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 35))
		{
			MH->ten_mh[vitri] = char(key);
			MH->ten_mh[vitri]= toupper(MH->ten_mh[vitri]);
			cout << MH->ten_mh[vitri];
			vitri++;
		}
		if (key == SPACE && MH->ten_mh[vitri - 1] != ' ' && vitri > 0 && vitri < 35) // ko cho 2 khoang trang && vitri = 0
		{
			gotoXY(44 + vitri, y);
			cout << " ";
			MH->ten_mh[vitri] = ' ';
			vitri++;
		}
		if (key == ENTER && vitri != 0)
		{
			MH->ten_mh[vitri] = '\0';
			if (MH->ten_mh[vitri - 1] == ' ') { vitri--; } //Kiem tra ki tu cuoi cung la khoang trang thi xoa khoang trang
			MH->ten_mh[vitri] = '\0';
			vitri = strlen(lt);
			gotoXY(87 + vitri, y);
			goto STCLT;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(44 + vitri, y);
			cout << " ";
			gotoXY(44 + vitri, y);
		}
		if (key == LEFT)
		{
			MH->ten_mh[vitri] = '\0';
			vitri = strlen(MH->ma_mh);
			gotoXY(87 + vitri, y);
			goto MAMH;
		}
		if (key == RIGHT)
		{
			MH->ten_mh[vitri] = '\0';
			if (MH->ten_mh[vitri - 1] == ' ') { vitri--; } //Kiem tra ki tu cuoi cung la khoang trang thi xoa khoang trang
			MH->ten_mh[vitri] = '\0';
			vitri = strlen(lt);
			gotoXY(87 + vitri, y);
			goto STCLT;
		}
		if (key == ESC || key == F1)
		{
			return;
		}
	}
STCLT:
	while (1)
	{
		TextColor(244);	gotoXY(43,27);
		cout << "Ki tu: (0-9) va dau '.' . Toi da: 5 ki tu              ";
		TextColor(15); gotoXY(87 + vitri, y); // Ghi ch˙
		key = GetKey();
		if (MH->ten_mh[0] == '\0')
		{
			GhiChu("Ban Chua Nhap TEN Mon Hoc!", 45, 3, 79, 700);
			gotoXY(44, y);
			goto TENMH;
		}
		if ((key <= '9' && key >= '0'||key==DOT) && (vitri < 5))
		{
			
			lt[vitri]=char(key);
			if(lt[vitri]=='.'&&vitri==0 || lt[vitri]=='.'&&vitri==4){
				continue;
			}
			if(lt[vitri]=='.'&&checkdot==1){
				continue;
			}
			if(lt[vitri]=='.'&&vitri>0&&vitri<4 ){
				checkdot=1;
			}
			if(lt[vitri]=='.'&&lt[vitri-1]=='.'){
				continue;
			}
			
			lt[vitri] = toupper(lt[vitri]);
			cout << lt[vitri];
			vitri++;
			
		}

		if (key == BACKSPACE && vitri > 0)
		{
			
			vitri--;
			if(lt[vitri]=='.') checkdot=0;
			gotoXY(87 + vitri, y);
			cout << " ";
			gotoXY(87 + vitri, y);
			MH->so_tclt=atof(lt);
		}
		if (key == ENTER && vitri != 0)
		{
			lt[vitri] = '\0';
			MH->so_tclt=atof(lt);
			vitri = strlen(th);
			gotoXY(96 + vitri, y);
			goto STCTH;
		}
		if (key == LEFT)
		{
			lt[vitri] = '\0';
			vitri = strlen(MH->ten_mh);
			gotoXY(44 + vitri, y);
			goto TENMH;
		}
		if (key == RIGHT)
		{
			lt[vitri] = '\0';
			MH->so_tclt=atof(lt);
			vitri = strlen(th);
			gotoXY(96 + vitri, y);
			goto STCTH;
		}
		if (key == ESC || key == F1) { return; }
	}
STCTH:
	while (1)
	{
		TextColor(244);	gotoXY(43,27);
		cout << "Ki tu: (0-9) va dau '.' . Toi da: 5         ";
		TextColor(15); gotoXY(96 + vitri, y); // Ghi ch˙
		key = GetKey();
		if (MH->so_tclt == 0)
		{
			GhiChu("Ban Chua Nhap so tin chi LT!", 45, 3, 79, 700);
			gotoXY(87, y);
			goto STCLT;
		}
		if ((key <= '9' && key >= '0'||key== '.') && (vitri < 5))
		{
			th[vitri]=char(key);
			
			th[vitri]=char(key);
			if(th[vitri]=='.'&&vitri==0 || th[vitri]=='.'&&vitri==4){
				continue;
			}
			if(th[vitri]=='.'&&checkdot1==1){
				continue;
			}
			if(th[vitri]=='.'&&vitri>0&&vitri<4 ){
				checkdot1=1;
			}
			if(th[vitri]=='.'&&th[vitri-1]=='.'){
				continue;
			}
			
			
			th[vitri] = toupper(th[vitri]);
			cout << th[vitri];
			vitri++;
			
		}
		if (key == BACKSPACE && vitri > 0)
		{
			
			vitri--;
			if(lt[vitri]=='.') checkdot1=0;
			gotoXY(96 + vitri, y);
			cout << " ";
			gotoXY(96 + vitri, y);
			MH->so_tcth=atof(th);
		}
		if (key == ENTER && vitri != 0)
		{
			check_change = true;
			th[vitri] = '\0';
			MH->so_tcth=atof(th);
			InsertNode_MH(DSMH,MH);
			delete(MH);
			GhiChu("Them Thanh Cong", 45, 3, 79, 1000);
			ShowCur(false);
			return;
		}
		if (key == LEFT)
		{
			th[vitri] = '\0';
			vitri = strlen(lt);
			gotoXY(87 + vitri, y);
			goto STCLT;
		}
		if (key == ESC || key == F1) { return; }
	}
}
void XemMonHoc(DS_LOP_TIN_CHI &DSLTC, DS_MON_HOC &DSMH, int chedoxem) { // 1 xem,  != 1 xuli
	int key;
	int STT = 1, trang = 0, tongtrang = 0;
	int soluongmh, dem = 0, demdong = 0;
	bool check_change = false;
	while (1)
	{
		soluongmh = DSMH.sl;
		if (soluongmh == 0)
		{
			GhiChu("Chua co du lieu Mon Hoc", 35, 27, 79, 500);
		}
		else {
			if (soluongmh < 15)
			{
				tongtrang = 1;
				trang = 0;
			}
			else {
				tongtrang = ((soluongmh - 1) / 15 + 1);
			}
		}
		SortDSMH(DSMH);
		dem = 0; demdong = 0;
		TextColor(14);	system("cls");
		Khung_Xuat_MH();
		for (int i = trang * 15; i < 15 + trang * 15 && i < soluongmh; i++)
		{
			TextColor(12); gotoXY(21, 8 + demdong); cout << (i + 1);
			TextColor(15);
			gotoXY(30, 8 + demdong); cout << DSMH.ds[i]->ma_mh;
			gotoXY(51, 8 + demdong); cout << DSMH.ds[i]->ten_mh;
			gotoXY(89, 8 + demdong); cout << DSMH.ds[i]->so_tclt;
			gotoXY(100, 8 + demdong); cout << DSMH.ds[i]->so_tcth;
			demdong++;
		}
		HienThiTrang(trang + 1, tongtrang, 90, 24);
		if (chedoxem == 1)//Dang o che do xem
		{
			gotoXY(18, 24); cout << "                        DANG O CHE DO XEM!                      ";
			gotoXY(44, 2); cout << " NHAN ESC DE THOAT CHE DO XEM";
		}	gotoXY(81, 26);
		key = GetKey();
		if ((key == RIGHT || key == DOWN) && trang < tongtrang - 1) { trang++; }
		if ((key == LEFT || key == UP) && trang > 0) { trang--; }
		if (key == F1 && chedoxem != 1)
		{
			gotoXY(33, 24);  TextColor(251);	cout << "F1";	//TÙ m‡u F1
			Them_MH(DSMH,check_change);
		}
		if (key == F2 && chedoxem != 1)
		{
			gotoXY(33, 24);  TextColor(251);	cout << "F2";	//TÙ m‡u F2
			Sua_MH(DSLTC, DSMH, check_change);
		}
		if (key == F3 && chedoxem != 1)
		{
			
			gotoXY(60, 24);  TextColor(251);	cout << "F3";	//TÙ m‡u F3
			Xoa_MH(DSLTC,DSMH,check_change);
		}
		if (key == ESC)
		{
			if (chedoxem == 1) {  break; };
			if (check_change == true)
			{
				
				int temp = ThongBao_ESC();
				if (temp == -1) { continue; }
				if (temp == 1) {
					GhiChu("Luu Vao File Thanh Cong!", 35, 27, 79, 2000);
					GhiFileDSLTC(DSLTC);GhiFileDSMH(DSMH);GhiFileDSDK(DSLTC.ds);
				}
				if (temp == 0) { GhiChu("Luu Vao File Khong Thanh Cong!", 45, 3, 79, 2000); }
			}
			 return;
		}
		if (key == ESC && chedoxem==1)
		{
			 return;
		}
		if (key == F5 && chedoxem == 1) { return; }
	}
}
void GhiFileDSMH(DS_MON_HOC DS_MH)
{
	ofstream outfile;
	outfile.open("DSMH.txt");
	for (int i = 0; i<DS_MH.sl; i++)
	{
		outfile << DS_MH.ds[i]->ma_mh << endl;
		outfile << DS_MH.ds[i]->ten_mh << endl;
		outfile <<DS_MH.ds[i]->so_tclt << endl;
		outfile <<DS_MH.ds[i]->so_tcth << endl;
	}
	outfile.close();
}
 //======================= LOP TIN CHI=========================
 lop_tin_chi* khoi_tao_ltc()
{
	lop_tin_chi *p = new lop_tin_chi;
	p->pleft=NULL;
	p->pright =NULL;
	p->hocky=0;
	p->maloptinchi=0;
	p->nhom=0;
	p->so_svmax=0;
	p->so_svmin=0;
	p->ma_mh[0]=NULL;
	p->nienkhoa[0]=NULL;
	return p;
}
bool check_ma_ltc(tree &t, int ma)
{ 
	if(t==NULL) // duyet den cuoi
	{
		return 0;
	}	
	else
	{
		if(t->maloptinchi==ma)
		{
			return 1;
		}
		if(t->maloptinchi<ma) // ma > t => pright
		{
			check_ma_ltc(t->pright, ma);
		}
		else if(t->maloptinchi>ma) // ma < t => pleft
		{
			check_ma_ltc(t->pleft,ma);
		}
	}
}

int tao_ma_ltc(tree t)
{
	int ma;// random 100 -999
	do
	{
		ma=rand()%(999-100+1)+100;
	}while(check_ma_ltc(t, ma)==true); // neu ma_ltc ton tai => tao lai ma
	return ma;
	
}
void them_1_ltc(tree &t, lop_tin_chi* p )
{
	if(t==NULL)
	{
		t = p;
	}
	else
	{
		if(p->maloptinchi>t->maloptinchi)
		{
			them_1_ltc(t->pright,p);
		}
		
		else if(p->maloptinchi<t->maloptinchi)
		{
			them_1_ltc(t->pleft,p);
		}
	}
}
int check_max_min(int max, int min)
{
	if(max < min)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int check_4_ma(tree t,int maTC,char ma_mh[], char nienkhoa[], int hocky, int nhom)
{
	
	if(t==NULL){
		return 0;
	}
	if(t!=NULL)
	{
		if(t->maloptinchi!=maTC&&(strcmp(t->ma_mh,ma_mh)==0)&&strcmp(t->nienkhoa,nienkhoa)==0&&(t->hocky == hocky)&&(t->nhom == nhom)){
			return 1;
		}
		if(t->maloptinchi==maTC&&(strcmp(t->ma_mh,ma_mh)==0)&&strcmp(t->nienkhoa,nienkhoa)==0&&(t->hocky == hocky)&&(t->nhom == nhom)){
			return 0;
		}
		check_4_ma(t->pleft,maTC, ma_mh, nienkhoa,hocky,nhom);
		check_4_ma(t->pright,maTC, ma_mh, nienkhoa,hocky,nhom);
	}
	
}
void DocFileDSLTC( DS_LOP_TIN_CHI &ds_ltc){
	ifstream infile;
	string data;
	infile.open("DSLTC.txt", ios::in);
	
	if (!infile)
	{
		cout << "Khong tim thay file!" << endl;
		return;
	} //Khong tim thay file
	while (infile.good())
	{
		lop_tin_chi* x = new lop_tin_chi;
		x->pleft = NULL;
		x->pright = NULL;
		
		infile >> x->maloptinchi;
	
		getline(infile, data);
						
		getline(infile, data); strcpy(x->ma_mh, data.c_str());
	
		
		getline(infile, data); strcpy(x->nienkhoa, data.c_str());
	
		infile >> x->hocky;
	
		infile >> x->nhom;
	
		infile >> x->so_svmin;
	
		infile >> x->so_svmax;	
		
	
		them_1_ltc(ds_ltc.ds, x);	
		ds_ltc.sl++;	
	}
	infile.close();
}

void NLR(tree t)
{
	if(t!=NULL)
	{
		
		NLR(t->pleft);
		NLR(t->pright);
	}
}
void DuyetNLR(ofstream &file,tree t)
{
	if(t!=NULL)
	{
		DuyetNLR(file,t->pleft);
		file<<endl;
		file<<t->maloptinchi<<endl;
		file<<t->ma_mh<<endl;
		file<<t->nienkhoa<<endl;
		file<<t->hocky<<endl;
		file<<t->nhom<<endl;
		file<<t->so_svmin<<endl;
		file<<t->so_svmax;
		DuyetNLR(file,t->pright);
	}
} 
void GhiFileDSLTC(DS_LOP_TIN_CHI dsltc){
	ofstream outfile;
	outfile.open("DSLTC.txt", ios::out);
	DuyetNLR(outfile,dsltc.ds);
	outfile.close();  
}
void XemLopTC(DS_LOP_TIN_CHI &DSLTC, DS_MON_HOC &DSMH, int chedoxem) { // 1 xem,  != 1 xuli
	
	int key;
	int  trang = 0, tongtrang = 0;
	int soluonglopTC, dem=0, demdong = 0;
	bool check_change = false;
	while (1)
	{
		soluonglopTC = DSLTC.sl;// lay sl lop tin chi hien co
		if (soluonglopTC == 0)
		{
			GhiChu("Chua co du lieu lop tin chi", 35, 27, 79, 500); // neu chua co thi thong bao
		}
		else {
			if (soluonglopTC < 15) // neu sl <15 (chi hien thi 1 trang)
			{
				tongtrang = 1;
				trang = 0;
			}
			else {
				tongtrang = ((soluonglopTC - 1) / 15 + 1); // neu lon hon 15 thi tinh tong trang
			}
		}
		tree *TC = new tree[soluonglopTC];
		MangTam_LopTC(DSLTC.ds, TC, dem); //Do Cay Nhi Phan ra Mang?
		dem = 0; demdong = 0;
		system("cls");
		Khung_Xuat_LTC();
		for (int i = trang * 15; i < 15 + trang * 15 && i < soluonglopTC; i++)
		{
			TextColor(12); gotoXY(21, 7 + demdong); cout << (i + 1);
			TextColor(14);
			gotoXY(27, 7 + demdong); cout << TC[i]->maloptinchi;
			gotoXY(37, 7 + demdong); cout << TC[i]->ma_mh;
			gotoXY(48, 7 + demdong); cout << TC[i]->nienkhoa;
			gotoXY(63, 7 + demdong); cout << TC[i]->hocky;
			gotoXY(70, 7 + demdong); cout << TC[i]->nhom;
			gotoXY(78, 7 + demdong); cout << TC[i]->so_svmin;
			gotoXY(86, 7 + demdong); cout << TC[i]->so_svmax;
			demdong++;
		}
		HienThiTrang(trang + 1, tongtrang, 80, 24);
		key = GetKey();
		if ((key == RIGHT || key == DOWN) && trang < tongtrang - 1) { trang++; }
		if ((key == LEFT || key == UP) && trang > 0) { trang--; }
		if (key == F1 && chedoxem != 1)
		{
			gotoXY(29, 24);  TextColor(251);	cout << "F1";	//TÙ m‡u F1
			nhapDSLTC(DSLTC,DSMH,check_change);// them LTC
		}
		if (key == F2 && chedoxem != 1)
		{
			gotoXY(45, 24);  TextColor(251);	cout << "F2";	//TÙ m‡u F2
			SuaLopTC(DSLTC,DSMH,check_change);// sua LTC 
		}
		if (key == F3 && chedoxem != 1)
		{
			gotoXY(55, 24);  TextColor(251);	cout << "F3";	//TÙ m‡u F3
			XoaLopTC(DSLTC,check_change); // xoa LTC
		}
		if (key == F5 && chedoxem != 1) 
		{
			
			XemMonHoc(DSLTC,DSMH,1); // xem danh sach mon hoc
		}
		if (key == ESC)
		{
			if (chedoxem == 1) { delete(TC); return; };
			if (check_change == true)
			{
				
				int temp = ThongBao_ESC();
				if (temp == -1) { continue; }
				if (temp == 1) {
					GhiChu("Luu Vao File Thanh Cong!", 50, 3, 79, 2000);
					GhiFileDSLTC(DSLTC);
					GhiFileDSDK(DSLTC.ds);
				}
				if (temp == 0) { GhiChu("Luu Vao File Khong Thanh Cong!", 50, 3, 79, 2000); }
			}
			system("cls");	delete(TC); return;
		}

	}
}
void MangTam_LopTC(tree t, tree ltc[], int &dem) {
	if (t != NULL)
	{
		ltc[dem++] = t;
		MangTam_LopTC(t->pleft, ltc, dem);
		MangTam_LopTC(t->pright, ltc, dem);
	}
}
void tim_node_thay_the(tree &t , tree &x)
{
	if(t->pleft!=NULL)
	{
		tim_node_thay_the(t->pleft, x); // trai cung cay con phai
	}
	else
	{
		x->maloptinchi = t->maloptinchi; // gan data
		x->hocky = t->hocky;
		strcpy(x->ma_mh,t->ma_mh);
		x->nhom = t->nhom;
		strcpy(x->nienkhoa, t->nienkhoa);
		x->so_svmax = t->so_svmax;
		x->so_svmin = t->so_svmin;
				
		x= t; // x se luu vi tri t de giai phong bo nho
		t=t->pright; // pright == NULL thi t = NULL
					 // pright != NULL thi t = t ->pright
					 
	}
}
void xoa_1_ltc(tree &t , int ma_ltc)
{
	if(t!=NULL)
	{
		if(t->maloptinchi == ma_ltc)
		{
			tree x =t; // x se luu node can giai phong
			if(t->pleft == NULL)
			{
				t=t->pright; // neu pright == NULL t = NULL
							 // neu pright != NULL t = t->pright
			}
			else if(t->pright == NULL)
			{
				t=t->pleft;
			}
			else if(t->pleft != NULL && t->pright != NULL)
			{
			
				//tim node thay the : node trai cung cay con phai
			
				tim_node_thay_the(t->pright,x);			
			}
			delete x;
		}
		else if(t->maloptinchi > ma_ltc)
		{
			xoa_1_ltc(t->pleft, ma_ltc);
		}
		else if(t->maloptinchi < ma_ltc)
		{
			xoa_1_ltc(t->pright,ma_ltc);
		}
	}
}
void in_mang_tam_LTC(lop_tin_chi mangtamLTC[],int demsl,int trang,int tongtrang){
	system("cls");
	Khung_Xuat_LTC();
	Khung_Them_LTC();
	gotoXY(29, 24);	cout<<"                                                     ";
	gotoXY(29, 24);		TextColor(252);		cout << "F3";
	TextColor(14);		cout << ": Delete";
	gotoXY(41, 24);		TextColor(252);		cout << "F5";
	TextColor(14);		cout << ": List MH";
	int demdong=1;
	if (demsl < 15)
	{
		tongtrang = 1;
		trang = 0;
	}
	else {
		tongtrang = ((demsl - 1) / 15 + 1);
	}
	if(demsl>15) trang++;
	for (int i = trang * 15; i < 15 + trang * 15 && i < demsl; i++)
	{
		TextColor(12); gotoXY(21, 7 + demdong); cout << (i + 1);
		TextColor(14);
		gotoXY(27, 7 + demdong); cout << mangtamLTC[i].maloptinchi;
		gotoXY(37, 7 + demdong); cout << mangtamLTC[i].ma_mh;
		gotoXY(48, 7 + demdong); cout << mangtamLTC[i].nienkhoa;
		gotoXY(63, 7 + demdong); cout << mangtamLTC[i].hocky;
		gotoXY(70, 7 + demdong); cout << mangtamLTC[i].nhom;
		gotoXY(78, 7 + demdong); cout << mangtamLTC[i].so_svmin;
		gotoXY(86, 7 + demdong); cout << mangtamLTC[i].so_svmax;
		demdong++;
	}
	HienThiTrang(trang + 1, tongtrang, 80, 24);
}
void Mo_LTC(DS_LOP_TIN_CHI &DSLTC, DS_MON_HOC DSMH ){
	ShowCur(true);
	int key, x = 45, y = 27, vitri = 0;
	int trang=0,tongtrang=0;
	Khung_Xuat_LTC();
	gotoXY(18,24);cout<<"                                                            ";
	Khung_Nhap_NK_HK_LTC();	gotoXY(x, y);
	char nienkhoa[10]={};
	char hocki[2]={};
	bool check_change = false;
	//===================xu ly nien khoa========================
	 time_t now = time(0);
	 tm *ltm = localtime(&now);
	 int nam,thang;
	 nam = 1900 + ltm->tm_year;
	 thang = 1 + ltm->tm_mon;
	 if(7<=thang<=9){								// neu tu thang 7-9 NK = nam - nam+1 HK = 1
	 	char namdau[5],namsau[5];						
	 	itoa(nam,namdau,10);
	 	itoa(nam+1,namsau,10);
	 	strcpy(nienkhoa,namdau);
	 	strcat(nienkhoa,"-");
	 	strcat(nienkhoa,namsau);
	 	itoa(1,hocki,10);
	 	vitri=9;
	 }
	 else if(1<=thang<3){							// neu tu tang 1-3 NK= nam-1 - nam  HK=2
	 	char namdau[5],namsau[5];
	 	itoa(nam-1,namdau,10);
	 	itoa(nam,namsau,10);
	 	strcpy(nienkhoa,namdau);
	 	strcat(nienkhoa,"-");
	 	strcat(nienkhoa,namsau);
	 	itoa(2,hocki,10);
	 	vitri=9;
	 }
	 //===========================================================
NIENKHOA :		// Nhap nien khoa
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "      NIEN KHOA: GOM CAC KI TU  (0-9), TOI DA: 9 KI TU          ";
		TextColor(14);
		gotoXY(45, y);
		for(int i=0;i<strlen(nienkhoa);i++){
			cout<<nienkhoa[i];		//in ra nien khoa
		}
		key = GetKey();
		if ((key <= '9' && key >= '0'||key=='-' ) && (vitri < 9))
		{
			
			nienkhoa[vitri] = char(key);
			if(nienkhoa[vitri]=='-'&&vitri!=4)continue ;	// neu dau - giua 2 nam kh nam o vi tri thu 4 thi k nhap dc
			nienkhoa[vitri] = toupper(nienkhoa[vitri]);
			cout << nienkhoa[vitri];
			vitri++;
		}
		if (key == ENTER && vitri != 0)
		{
			
			nienkhoa[vitri] = '\0';
			if(check_nien_khoa(nienkhoa)){											// check nien khoa
				GhiChu("Nien khoa phai du 9 ki tu va co nghia !", 47, 3, 79, 700);
				continue;
			}
			vitri = strlen(hocki);		// vitri con tro bang x + do dai cua hoc ki
			gotoXY(71, y);cout<<hocki;
			gotoXY(71 + vitri, y);
			goto HOCKI;					
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(45 + vitri, y);
			cout << " ";
			nienkhoa[vitri]='\0';
			gotoXY(45 + vitri, y);
		}
		if (key == RIGHT)
		{
			nienkhoa[vitri] = '\0';
			if(check_nien_khoa(nienkhoa)){
				GhiChu("Nien khoa phai du 9 ki tu va co nghia !", 47, 3, 79, 700);
				continue;
			}
			vitri = strlen(hocki);
			gotoXY(71, y);cout<<hocki;
			gotoXY(71 + vitri, y);
			goto HOCKI;
		}
		if (key == ESC)
		{
			
			system("cls"); 	return;
		}
	}
HOCKI:
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "        HOC KI: GOM CAC KI TU  (1-9), TOI DA: 1 KI TU           ";
		TextColor(14);
		gotoXY(71 + vitri, y); // vi tri nhap tiep theo
		key = GetKey();
		if (nienkhoa[0] == '\0')		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap Nien Khoa", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(45, y);
			goto NIENKHOA;
		}
		if ((key <= '9' && key >= '1') && (vitri < 1))
		{
			hocki[vitri] = char(key);
			hocki[vitri] = toupper(hocki[vitri]);
			cout <<hocki[vitri];
			vitri++;
		}

		if (key == ENTER && vitri != 0)
		{
			hocki[vitri] = '\0';
			system("cls");
			vitri=0;
			goto START;
			
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(71 + vitri, y);
			cout << " ";
			gotoXY(71 + vitri, y);
		}
		if (key == LEFT)
		{
			hocki[vitri] = '\0';
			vitri = strlen(nienkhoa);
			gotoXY(45 + vitri, y);
			goto NIENKHOA;
		}
			
		if (key == ESC)
		{
		
			system("cls"); 	return;
		}
	}
START :
	int demsl=0;	// sl LTC nhap vao , sau moi lan enter xuong dong demsl + 1
	lop_tin_chi* mangtamLTC = new lop_tin_chi[MAXLOP];
	for (int dem = 0; dem < MAXLOP; dem++) {
		mangtamLTC[dem].pleft=NULL;
		mangtamLTC[dem].pright=NULL;
	}	// khoi tao mang tam
	Khung_Xuat_LTC();
	Khung_Them_LTC();
	gotoXY(29, 24);	cout<<"                                                     ";
	gotoXY(29, 24);		TextColor(252);		cout << "F3";
	TextColor(14);		cout << ": Delete";
	gotoXY(41, 24);		TextColor(252);		cout << "F5";
	TextColor(14);		cout << ": List MH";
MALTC:
	 
	char nhom[3]={},min[5]={},max[5]={};	// khoi tao cac bien de nhap vao cac doi tuong co kieu la int float ...
	TextColor(14);
	gotoXY(27 + vitri, y);
	int ma = tao_ma_ltc(DSLTC.ds);			// ma LTC tu sinh 3 ki tu
	mangtamLTC[demsl].maloptinchi = ma;		// gan ma LTC vao phan tu thu demsl cua mangtam
	cout<<mangtamLTC[demsl].maloptinchi;
	strcpy(mangtamLTC[demsl].nienkhoa,nienkhoa); // gan nien khoa
	mangtamLTC[demsl].hocky = atoi(hocki);		// gan hk
	gotoXY(47,y); cout<<mangtamLTC[demsl].nienkhoa;
	gotoXY(60,y); cout<<mangtamLTC[demsl].hocky;
	goto MAMH;
MAMH:// MA MON HOC
	while (1)
	{
		Khung_Them_LTC();
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "   MA MON HOC: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU    ";
		TextColor(14);
		gotoXY(37 + vitri, y);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			mangtamLTC[demsl].ma_mh[vitri] = char(key);
			mangtamLTC[demsl].ma_mh[vitri] = toupper(mangtamLTC[demsl].ma_mh[vitri]);
			cout << mangtamLTC[demsl].ma_mh[vitri];
			vitri++;
		}
		if (key == ENTER && vitri != 0)
		{
			mangtamLTC[demsl].ma_mh[vitri] = '\0';
			int temp; // tao bien de check
			temp = KTMH(DSMH, mangtamLTC[demsl].ma_mh); // neu ton tai mon hoc thi chuyen den label NHOM , khong thi thong bao !
			if (temp != -1) {
				vitri = strlen(nhom);
				gotoXY(70 + vitri, y);
				goto NHOM;
			}
			else {
				GhiChu("MON HOC KHONG TON TAI", 47, 3, 79, 700);
				gotoXY(37 + vitri, y);
				continue;
			}
		}
		
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(37 + vitri, y);
			cout << " ";
			gotoXY(37 + vitri, y);
		}
		if(key==F4){
			XemLopTC(DSLTC,DSMH,1); // xem DSLTC da co
		}
		if(key==F5)
		{
			XemMonHoc(DSLTC,DSMH,1); //Xem DSMH;
		}
		if(key==F3&&demsl>0) //Xoa phan tu cua mang tam LTC , chua luu vao DSLTC
		{
			Xoa_Khung_FooterLTC();
			gotoXY(14,28);cout<<"                                                                                      ";
			Khung_Xoa_LTC();
			vitri = 0;
			gotoXY(56,27);
			char ma_lopTC[3];
			Reset:
			while (1)
			{
				TextColor(15);
				key = GetKey();
				if ((key <= '9' && key >= '0')  && (vitri < 3))
				{
					ma_lopTC[vitri] = char(key);
					ma_lopTC[vitri] = toupper(ma_lopTC[vitri]);
					cout << ma_lopTC[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(56 + vitri, y);
					cout << " ";
					gotoXY(56 + vitri, y);
				}
				if (key == ENTER && vitri != 0)
				{
					ma_lopTC[vitri] = '\0';
					int checkxoa=0	;
					for(int i = 0;i<demsl;i++){
						if(mangtamLTC[i].maloptinchi==atoi(ma_lopTC))
						{
							for(int j = i+1;j<demsl;j++)
							{
								mangtamLTC[j-1]=mangtamLTC[j];
							}
							demsl--;
							checkxoa=1;
						}
					}
					if(checkxoa==1)// bool =1
					{
						check_change=true;
						GhiChu("XOA THANH CONG LOP TIN CHI!", 50, 3, 79, 700);
						in_mang_tam_LTC(mangtamLTC,demsl,trang,tongtrang);
						vitri=0;
						goto MALTC;
					}
					else {
						GhiChu("LOP TIN CHI Khong Ton Tai!", 50, 3, 79, 500);
						TextColor(15);
						gotoXY(56 + vitri, y);
					}
				}
				if (key == ESC || key == F3) { return; }
			}
		}
		if (key == RIGHT) // tuong tu ENTER
		{
			mangtamLTC[demsl].ma_mh[vitri] = '\0';
			int temp;
			temp = KTMH(DSMH, mangtamLTC[demsl].ma_mh);
			if (temp != -1) {
				vitri = strlen(nhom);
				gotoXY(70 + vitri, y);
				goto NHOM;
			}
			else {
				GhiChu("MON HOC KHONG TON TAI", 47, 3, 79, 700);
				gotoXY(37 + vitri, y);
				continue;
			}
		}

		if (key == ESC) // neu k co thay doi thi thi thoat ra , neu thay doi hien thi thong bao co muon luu hay k !
		{
			if(check_change==true){
				int temp = ThongBao_ESC();
				if (temp == -1) { continue; }
				if (temp == 1) {
					
					for(int i=0;i<demsl;i++){			
					them_1_ltc(DSLTC.ds,&mangtamLTC[i]);
					DSLTC.sl++;
					}
					GhiFileDSLTC(DSLTC);
					GhiChu("Luu Vao File Thanh Cong!", 50, 3, 79, 1000);
				}
				if (temp == 0) { GhiChu("Luu Vao File Khong Thanh Cong!", 50, 3, 79, 1000); }
			}
			system("cls"); 	return;
		}
	}
NHOM:
	while (1)
	{
		Khung_Them_LTC();
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "         NHOM : GOM CAC KI TU  (1-9), TOI DA: 1 KI TU           ";
		TextColor(14);
		gotoXY(70 + vitri, y); // vi tri nhap tiep theo
		key = GetKey();
		if ((key <= '9' && key >= '1') && (vitri < 1))
		{
			nhom[vitri] = char(key);
			nhom[vitri] = toupper(nhom[vitri]);
			cout << nhom[vitri];
			vitri++;
			mangtamLTC[demsl].nhom = atoi(nhom);
		}
		if(key==F4){
			XemLopTC(DSLTC,DSMH,1);
		}		
		if (key == ENTER && vitri != 0) // check xem 4 field MAMH,NIENKHOA,HK,NHOM co trung hay khong , neu trung bao loi , khong thi tiep tuc
		{   
			nhom[vitri] = '\0';
			mangtamLTC[demsl].nhom = atoi(nhom);
			int check_4=0;
			check_4 = check_4_ma(DSLTC.ds,mangtamLTC[demsl].maloptinchi,mangtamLTC[demsl].ma_mh,mangtamLTC[demsl].nienkhoa,mangtamLTC[demsl].hocky,mangtamLTC[demsl].nhom);
			int check4mangtam = 0;
			for(int i = demsl-1 ; i==0 ; i--){
				if((strcmp(mangtamLTC[demsl].ma_mh,mangtamLTC[i].ma_mh)==0)&&(strcmp(mangtamLTC[demsl].nienkhoa,mangtamLTC[i].nienkhoa)==0)&&(mangtamLTC[demsl].hocky ==mangtamLTC[i].hocky)&&(mangtamLTC[demsl].nhom ==mangtamLTC[i].nhom)){
				check4mangtam=1;
				}
			}
			if (check_4 == 1||check4mangtam==1) {
				GhiChu("4 field MAMH , NIEN KHOA, HOC KI, NHOM khong duoc hoan toan giong nhau!", 30, 3, 79, 2000);
				continue;
			}
			vitri = strlen(min);
			gotoXY(78 + vitri, y);
			goto SOLUONGMIN;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(70 + vitri, y);
			cout << " ";
			gotoXY(70 + vitri, y);
		}
		if (key == LEFT)
		{
			vitri = strlen(mangtamLTC[demsl].ma_mh);
			gotoXY(37 + vitri, y);
			goto MAMH;
		}
		if (key == RIGHT)
		{
			nhom[vitri] = '\0';
			mangtamLTC[demsl].nhom = atoi(nhom);
			int check_4=0;
			check_4 = check_4_ma(DSLTC.ds,mangtamLTC[demsl].maloptinchi,mangtamLTC[demsl].ma_mh,mangtamLTC[demsl].nienkhoa,mangtamLTC[demsl].hocky,mangtamLTC[demsl].nhom);
			if (check_4 == 1) {
				GhiChu("4 field MAMH , NIEN KHOA, HOC KI, NHOM khong duoc hoan toan giong nhau!", 40, 3, 79, 2000);
				continue;
			}
			vitri = strlen(min);
			gotoXY(78 + vitri, y);
			goto SOLUONGMIN;
		}
		if(key==F5)
		{
			XemMonHoc(DSLTC,DSMH,1);
		}
		if(key==F3&&demsl>0)
		{
			Xoa_Khung_FooterLTC();
			gotoXY(14,28);cout<<"                                                                                      ";
			Khung_Xoa_LTC();
			vitri = 0;
			gotoXY(56,27);
			char ma_lopTC[3];
			while (1)
			{
				TextColor(15);
				key = GetKey();
				if ((key <= '9' && key >= '0')  && (vitri < 3))
				{
					ma_lopTC[vitri] = char(key);
					ma_lopTC[vitri] = toupper(ma_lopTC[vitri]);
					cout << ma_lopTC[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(56 + vitri, y);
					cout << " ";
					gotoXY(56 + vitri, y);
				}
				if (key == ENTER && vitri != 0)
				{
					ma_lopTC[vitri] = '\0';
					int checkxoa=0	;
					for(int i = 0;i<demsl;i++){
						if(mangtamLTC[i].maloptinchi==atoi(ma_lopTC))
						{
							for(int j = i+1;j<demsl;j++)
							{
								mangtamLTC[j-1]=mangtamLTC[j];
							}
							demsl--;
							checkxoa=1;
						}
					}
					if(checkxoa==1)// bool =1
					{
						check_change=true;
						GhiChu("XOA THANH CONG LOP TIN CHI!", 50, 3, 79, 700);
						in_mang_tam_LTC(mangtamLTC,demsl,trang,tongtrang);
						vitri=0;
						goto MALTC;
					}
					else {
						GhiChu("LOP TIN CHI Khong Ton Tai!", 50, 3, 79, 500);
						TextColor(15);
						gotoXY(56 + vitri, y);
					}
				}
				if (key == ESC || key == F3) { return; }
			}
		}
		if (key == ESC)
		{
			system("cls"); delete(mangtamLTC);	return;
		}
}
SOLUONGMIN:
	while (1)
	{
		Khung_Them_LTC();
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "      SO LUONG MIN: GOM CAC KI TU  (0-9), TOI DA: 3 KI TU       ";
		TextColor(14);
		gotoXY(78 + vitri, y); // vi tri nhap tiep theo
		key = GetKey();
		if (mangtamLTC[demsl].nhom == NULL)		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap Nhom", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(70, y);
			goto NHOM;
		}
		if ((key <= '9' && key >= '0') && (vitri < 3))
		{
			min[vitri] = char(key);
			min[vitri] = toupper(min[vitri]);
			cout <<min[vitri];
			vitri++;
		}
		mangtamLTC[demsl].so_svmin = atoi(min);
		if (key == ENTER && vitri != 0)
		{
			
			min[vitri] = '\0';
			vitri = strlen(max);
			gotoXY(86 + vitri, y);
			goto SOLUONGMAX;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			min[vitri-1]='\0';
			vitri--;
			gotoXY(78 + vitri, y);
			cout << " ";
			gotoXY(78 + vitri, y);
			mangtamLTC[demsl].so_svmin = atoi(min);
		}
		if (key == LEFT)
		{
			min[vitri] = '\0';
			vitri = strlen(nhom);
			gotoXY(70 + vitri, y);
			goto NHOM;
		}
		if (key == RIGHT)
		{
			min[vitri] = '\0';
			vitri = strlen(max);
			gotoXY(86 + vitri, y);
			goto SOLUONGMAX;
		}
		if(key==F4){
			XemLopTC(DSLTC,DSMH,1);
		}
		if(key==F5)
		{
			XemMonHoc(DSLTC,DSMH,1);
		}
		if(key==F3&&demsl>0)
		{
			Xoa_Khung_FooterLTC();
			gotoXY(14,28);cout<<"                                                                                      ";
			Khung_Xoa_LTC();
			vitri = 0;
			gotoXY(56,27);
			char ma_lopTC[3];
			while (1)
			{
				TextColor(15);
				key = GetKey();
				if ((key <= '9' && key >= '0')  && (vitri < 3))
				{
					ma_lopTC[vitri] = char(key);
					ma_lopTC[vitri] = toupper(ma_lopTC[vitri]);
					cout << ma_lopTC[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(56 + vitri, y);
					cout << " ";
					gotoXY(56 + vitri, y);
				}
				if (key == ENTER && vitri != 0)
				{
					ma_lopTC[vitri] = '\0';
					int checkxoa=0	;
					for(int i = 0;i<demsl;i++){
						if(mangtamLTC[i].maloptinchi==atoi(ma_lopTC))
						{
							for(int j = i+1;j<demsl;j++)
							{
								mangtamLTC[j-1]=mangtamLTC[j];
							}
							demsl--;
							checkxoa=1;
						}
					}
					if(checkxoa==1)// bool =1
					{
						check_change=true;
						GhiChu("XOA THANH CONG LOP TIN CHI!", 50, 3, 79, 700);
						in_mang_tam_LTC(mangtamLTC,demsl,trang,tongtrang);
						vitri=0;
						goto MALTC;
					}
					else {
						GhiChu("LOP TIN CHI Khong Ton Tai!", 50, 3, 79, 500);
						TextColor(15);
						gotoXY(56 + vitri, y);
					}
				}
				if (key == ESC || key == F3) { return; }
			}
		}
		if (key == ESC)
		{
			system("cls"); delete(mangtamLTC);	return;
		}
	}
SOLUONGMAX:
	while (1)
	{
		Khung_Them_LTC();
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "      SO LUONG MAX: GOM CAC KI TU  (0-9), TOI DA: 3 KI TU       ";
		TextColor(14);
		gotoXY(86 + vitri, y); // vi tri nhap tiep theo
		key = GetKey();
		if (mangtamLTC[demsl].so_svmin == NULL)		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap so luong toi thieu", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(78, y);
			goto SOLUONGMIN;
		}
		if ((key <= '9' && key >= '0') && (vitri < 4))
		{
			max[vitri] = char(key);
			max[vitri]= toupper(max[vitri]);
			cout << max[vitri];
			vitri++;
			mangtamLTC[demsl].so_svmax = atoi(max);
		}
		if (key == ENTER && vitri != 0) // khi enter se tang demsl len 1 va xuong dong nhap tiep
		{
			if(check_max_min(mangtamLTC[demsl].so_svmax,mangtamLTC[demsl].so_svmin)==1){
					GhiChu("So luong toi da phai lon hon so luong toi thieu", 30, 3, 79, 1000);
				continue;
			}
			max[vitri] = '\0'; // cai nay de ngat chuoi, chuyen sang ben phai hoac trai nhap tiep
			check_change = true;
			mangtamLTC[demsl].so_svmax=atoi(max);
			demsl++;
			in_mang_tam_LTC(mangtamLTC,demsl,trang,tongtrang);
			vitri=0;
			goto MALTC;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			max[vitri-1]='\0';
			vitri--;
			gotoXY(86 + vitri, y);
			cout << " ";
			gotoXY(86 + vitri, y);
			mangtamLTC[demsl].so_svmax = atoi(max);
		}
		if(key==F4){
			XemLopTC(DSLTC,DSMH,1);
		}
		if (key == LEFT)
		{
			max[vitri] = '\0';
			vitri = strlen(min);
			gotoXY(78 + vitri, y);
			goto SOLUONGMIN;
		}
		if(key==F3&&demsl>0)
		{
			Xoa_Khung_FooterLTC();
			gotoXY(14,28);cout<<"                                                                                      ";
			Khung_Xoa_LTC();
			vitri = 0;
			gotoXY(56,27);
			char ma_lopTC[3];
			while (1)
			{
				TextColor(15);
				key = GetKey();
				if ((key <= '9' && key >= '0')  && (vitri < 3))
				{
					ma_lopTC[vitri] = char(key);
					ma_lopTC[vitri] = toupper(ma_lopTC[vitri]);
					cout << ma_lopTC[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(56 + vitri, y);
					cout << " ";
					gotoXY(56 + vitri, y);
				}
				if (key == ENTER && vitri != 0)
				{
					ma_lopTC[vitri] = '\0';
					int checkxoa=0	;
					for(int i = 0;i<demsl;i++){
						if(mangtamLTC[i].maloptinchi==atoi(ma_lopTC))
						{
							for(int j = i+1;j<demsl;j++)
							{
								mangtamLTC[j-1]=mangtamLTC[j];
							}
							demsl--;
							checkxoa=1;
						}
					}
					if(checkxoa==1)// bool =1
					{
						check_change=true;
						GhiChu("XOA THANH CONG LOP TIN CHI!", 50, 3, 79, 700);
						in_mang_tam_LTC(mangtamLTC,demsl,trang,tongtrang);
						vitri=0;
						goto MALTC;
					}
					else {
						GhiChu("LOP TIN CHI Khong Ton Tai!", 50, 3, 79, 500);
						TextColor(15);
						gotoXY(56 + vitri, y);
					}
				}
				if (key == ESC || key == F3) { return; }
			}
		}
		if(key==F5)
		{
			XemMonHoc(DSLTC,DSMH,1);
		}
		if (key == ESC)
		{
			system("cls"); delete(mangtamLTC);	return;
		}
	}	 
}
void XoaLopTC(DS_LOP_TIN_CHI &ds_ltc, bool &check_change)
{
	int key, x = 56, y = 27, vitri = 0;
	Khung_Xoa_LTC();	gotoXY(x, y);
	char ma_lopTC[3];
Reset:
	while (1)
	{
		TextColor(15);
		key = GetKey();
		if ((key <= '9' && key >= '0')  && (vitri < 3))
		{
			ma_lopTC[vitri] = char(key);
			ma_lopTC[vitri] = toupper(ma_lopTC[vitri]);
			cout << ma_lopTC[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(56 + vitri, y);
			cout << " ";
			gotoXY(56 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			ma_lopTC[vitri] = '\0';	//Ngat chuoi~
			bool kiemtra = check_ma_ltc(ds_ltc.ds, atoi(ma_lopTC));
			if(kiemtra==true)// bool =1
			{
				xoa_1_ltc(ds_ltc.ds, atoi(ma_lopTC));
				ds_ltc.sl--;
				check_change=true;
				GhiChu("XOA THANH CONG LOP TIN CHI!", 50, 3, 79, 700);
				return;
			}
			else {
				GhiChu("LOP TIN CHI Khong Ton Tai!", 50, 3, 79, 500);
				TextColor(15);
				gotoXY(56 + vitri, y);
			}
		}
		if (key == ESC || key == F3) { return; }
	}
}
bool check_nien_khoa(char nk[8]){
	 time_t now = time(0);
	 tm *ltm = localtime(&now);
	 int nam,thang;
	 nam = 1900 + ltm->tm_year;		// lay nam cua he thong
	if(strlen(nk)<9) return true;	// do dai phai dam bao
	char first[4],last[4];
	for(int i=0;i<4;i++){
		first[i]=nk[i];
		last[i]=nk[i+5];
	}
	if(atoi(last)-atoi(first)!=1) return true;	// nam sau tru nam dau phai = 1
	if(nam-atoi(first)>1) return true;	// nien khoa k dc cach nam hien tai qua 1 nam
	else return false;
}

void nhapDSLTC(DS_LOP_TIN_CHI &DSLTC, DS_MON_HOC DSMH ,bool &check_change) {
	ShowCur(TRUE);
	char  hocki[2]={}; 		
	char  nhom[2]={}; 			
	char  nsvmax[4]={};
	char  nsvmin[4]={};
	int key;
	int vitri = 0, x = 37, y = 27;
	int dem = 0, demkhongdoi = 0;
	
	Khung_Them_LTC();
MALOPTC:
	int check_trung;
	int soluonglop = DSLTC.sl;
	lop_tin_chi *lopTc = khoi_tao_ltc();
	time_t now = time(0);
	 tm *ltm = localtime(&now);
	 int nam,thang;
	 nam = 1900 + ltm->tm_year;
	 thang = 1 + ltm->tm_mon;
	 if(7<=thang<=9){
	 	char namdau[5],namsau[5];
	 	itoa(nam,namdau,10);
	 	itoa(nam+1,namsau,10);
	 	strcpy(lopTc->nienkhoa,namdau);
	 	strcat(lopTc->nienkhoa,"-");
	 	strcat(lopTc->nienkhoa,namsau);
	 	itoa(1,hocki,10);
	 	gotoXY(48,y);cout<<lopTc->nienkhoa;
	 	gotoXY(63,y);cout<<hocki;
	 }
	 else if(1<=thang<3){
	 	char namdau[5],namsau[5];
	 	itoa(nam-1,namdau,10);
	 	itoa(nam,namsau,10);
	 	strcpy(lopTc->nienkhoa,namdau);
	 	strcat(lopTc->nienkhoa,"-");
	 	strcat(lopTc->nienkhoa,namsau);
	 	itoa(2,hocki,10);
	 	gotoXY(48,y);cout<<lopTc->nienkhoa;
	 	gotoXY(63,y);cout<<hocki;
	 }
	TextColor(14);
	gotoXY(27 + vitri, y);
	int mamh = tao_ma_ltc(DSLTC.ds);
	lopTc->maloptinchi = mamh;
	cout<< lopTc->maloptinchi;
	
MAMH:
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "   MA MON HOC: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU    ";
		TextColor(14);
		gotoXY(37 + vitri, y);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			lopTc->ma_mh[vitri] = char(key);
			lopTc->ma_mh[vitri] = toupper(lopTc->ma_mh[vitri]);
			cout << lopTc->ma_mh[vitri];
			vitri++;
		}
		if (key == ENTER && vitri != 0)
		{
			lopTc->ma_mh[vitri] = '\0';
			int temp;
			temp = KTMH(DSMH, lopTc->ma_mh);
			if (temp != -1) {
				vitri = strlen(lopTc->nienkhoa);
				gotoXY(48 + vitri, y);
				goto NIENKHOA;
			}
			else {
				GhiChu("MON HOC KHONG TON TAI", 47, 3, 79, 700);
				gotoXY(37 + vitri, y);
				continue;
			}
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(37 + vitri, y);
			cout << " ";
			gotoXY(37 + vitri, y);
		}
		if (key == RIGHT)
		{
			lopTc->ma_mh[vitri] = '\0';
			int temp;
			temp = KTMH(DSMH, lopTc->ma_mh);
			if (temp != -1) {
				vitri = strlen(lopTc->nienkhoa);
				gotoXY(48 + vitri, y);
				goto NIENKHOA;
			}
			else {
				GhiChu("MON HOC KHONG TON TAI", 47, 3, 79, 700);
				gotoXY(37 + vitri, y);
				continue;
			}
		}

		if (key == ESC)
		{
			
			system("cls"); delete(lopTc);	return;
		}
	}
NIENKHOA:
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "      NIEN KHOA: GOM CAC KI TU  (0-9), TOI DA: 9 KI TU          ";
		TextColor(14);
		gotoXY(48 + vitri, y);
		key = GetKey();
		if (lopTc->ma_mh[0] == '\0')		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap ma mon hoc", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(37, y);
			goto MAMH;
		}
		if ((key <= '9' && key >= '0'||key=='-' ) && (vitri < 9))
		{
			
			lopTc->nienkhoa[vitri] = char(key);
			if(lopTc->nienkhoa[vitri]=='-'&&vitri!=4)continue ;
			lopTc->nienkhoa[vitri] = toupper(lopTc->nienkhoa[vitri]);
			cout << lopTc->nienkhoa[vitri];
			vitri++;
		}
		if (key == ENTER && vitri != 0)
		{
			
			lopTc->nienkhoa[vitri] = '\0';
			if(check_nien_khoa(lopTc->nienkhoa)){
				GhiChu("Nien khoa phai du 8 ki tu va co nghia !", 47, 3, 79, 700);
				continue;
			}
			vitri = strlen(hocki);
			gotoXY(63 + vitri, y);
			goto HOCKI;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(48 + vitri, y);
			cout << " ";
			gotoXY(48 + vitri, y);
		}
		if (key == LEFT)
		{
			lopTc->nienkhoa[vitri] = '\0';
			vitri = strlen(lopTc->ma_mh);
			gotoXY(37 + vitri, y);
			goto MAMH;
		}
		if (key == RIGHT)
		{
			lopTc->nienkhoa[vitri] = '\0';
			if(check_nien_khoa(lopTc->nienkhoa)){
				GhiChu("Nien khoa phai du 8 ki tu va co nghia !", 47, 3, 79, 700);
				continue;
			}
			vitri = strlen(hocki);
			gotoXY(63 + vitri, y);
			goto HOCKI;
		}
		if (key == ESC)
		{
			
			system("cls"); delete(lopTc);	return;
		}
	}
HOCKI:
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "        HOC KI: GOM CAC KI TU  (1-9), TOI DA: 1 KI TU           ";
		TextColor(14);
		gotoXY(63 + vitri, y); // vi tri nhap tiep theo
		key = GetKey();
		if (lopTc->nienkhoa[0] == '\0')		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap Nien Khoa", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(48, y);
			goto NIENKHOA;
		}
		if ((key <= '9' && key >= '1') && (vitri < 1))
		{
			hocki[vitri] = char(key);
			hocki[vitri] = toupper(hocki[vitri]);
			cout <<hocki[vitri];
			vitri++;
			lopTc->hocky = atoi(hocki);
		}
		
		if (key == ENTER && vitri != 0)
		{
			hocki[vitri] = '\0';
			lopTc->hocky = atoi(hocki);
			vitri = strlen(nhom);
			gotoXY(70 + vitri, y);
			goto NHOM;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(63 + vitri, y);
			cout << " ";
			gotoXY(63 + vitri, y);
		}
		if (key == LEFT)
		{
			hocki[vitri] = '\0';
			vitri = strlen(lopTc->nienkhoa);
			gotoXY(48 + vitri, y);
			goto NIENKHOA;
		}
		if (key == RIGHT)
		{
			hocki[vitri] = '\0';
			lopTc->hocky = atoi(hocki);
			vitri = strlen(nhom);
			gotoXY(70 + vitri, y);
			goto NHOM;

		if (key == ESC)
		{
		
			system("cls"); delete(lopTc);	return;
		}
	}
}
NHOM:
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "         NHOM : GOM CAC KI TU  (1-9), TOI DA: 1 KI TU           ";
		TextColor(14);
		gotoXY(70 + vitri, y); // vi tri nhap tiep theo
		key = GetKey();
		if (lopTc->hocky == NULL)		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap Hoc Ki", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(63, y);
			goto HOCKI;
		}
		if ((key <= '9' && key >= '1') && (vitri < 1))
		{
			nhom[vitri] = char(key);
			nhom[vitri] = toupper(nhom[vitri]);
			cout << nhom[vitri];
			vitri++;
			lopTc->nhom = atoi(nhom);
		}
		
		if (key == ENTER && vitri != 0)
		{   
			nhom[vitri] = '\0';
			lopTc->nhom = atoi(nhom);
			int check_4=0;
			check_4 = check_4_ma(DSLTC.ds,lopTc->maloptinchi,lopTc->ma_mh,lopTc->nienkhoa,lopTc->hocky,lopTc->nhom);
			if (check_4 == 1) {
				GhiChu("4 field MAMH , NIEN KHOA, HOC KI, NHOM khong duoc hoan toan giong nhau!", 40, 3, 79, 2000);
				continue;
			}
			vitri = strlen(nsvmin);
			gotoXY(78 + vitri, y);
			goto SOLUONGMIN;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(70 + vitri, y);
			cout << " ";
			gotoXY(70 + vitri, y);
		}
		if (key == LEFT)
		{
			vitri = 1;
			gotoXY(63 + vitri, y);
			goto HOCKI;
		}
		if (key == RIGHT)
		{
		nhom[vitri] = '\0';
			lopTc->nhom = atoi(nhom);
			int check_4=0;
			check_4 = check_4_ma(DSLTC.ds,lopTc->maloptinchi,lopTc->ma_mh,lopTc->nienkhoa,lopTc->hocky,lopTc->nhom);
			if (check_4 == 1) {
				GhiChu("4 field MAMH , NIEN KHOA, HOC KI, NHOM khong duoc hoan toan giong nhau!", 40, 3, 79, 2000);
				continue;
			}
			vitri = strlen(nsvmin);
			gotoXY(78 + vitri, y);
			goto SOLUONGMIN;
		}
		if (key == ESC)
		{
			system("cls"); delete(lopTc);	return;
		}
}
SOLUONGMIN:
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "      SO LUONG MIN: GOM CAC KI TU  (0-9), TOI DA: 3 KI TU       ";
		TextColor(14);
		gotoXY(78 + vitri, y); // vi tri nhap tiep theo
		key = GetKey();
		if (lopTc->nhom == NULL)		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap Nhom", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(70, y);
			goto NHOM;
		}
		if ((key <= '9' && key >= '0') && (vitri < 3))
		{
			nsvmin[vitri] = char(key);
			nsvmin[vitri] = toupper(nsvmin[vitri]);
			cout <<nsvmin[vitri];
			vitri++;
		}
		lopTc->so_svmin = atoi(nsvmin);
		if (key == ENTER && vitri != 0)
		{
			
			nsvmin[vitri] = '\0';
			vitri = strlen(nsvmax);
			gotoXY(86 + vitri, y);
			goto SOLUONGMAX;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			nsvmin[vitri-1]='\0';
			vitri--;
			gotoXY(78 + vitri, y);
			cout << " ";
			gotoXY(78 + vitri, y);
			lopTc->so_svmin = atoi(nsvmin);
		}
		if (key == LEFT)
		{
			nsvmin[vitri] = '\0';
			vitri = strlen(nhom);
			gotoXY(70 + vitri, y);
			goto NHOM;
		}
		if (key == RIGHT)
		{
			nsvmin[vitri] = '\0';
			vitri = strlen(nsvmin);
			gotoXY(86 + vitri, y);
			goto SOLUONGMAX;
		}

		if (key == ESC)
		{
			system("cls"); delete(lopTc);	return;
		}
	}
SOLUONGMAX:
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "      SO LUONG MAX: GOM CAC KI TU  (0-9), TOI DA: 3 KI TU       ";
		TextColor(14);
		gotoXY(86 + vitri, y); // vi tri nhap tiep theo
		key = GetKey();
		if (lopTc->so_svmin == NULL)		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap so luong toi thieu", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(78, y);
			goto NHOM;
		}
		if ((key <= '9' && key >= '0') && (vitri < 4))
		{
			nsvmax[vitri] = char(key);
			nsvmax[vitri]= toupper(nsvmax[vitri]);
			cout << nsvmax[vitri];
			vitri++;
			lopTc->so_svmax = atoi(nsvmax);
		}
		if (key == ENTER && vitri != 0)
		{
			if(check_max_min(lopTc->so_svmax,lopTc->so_svmin)==1){
					GhiChu("So luong toi da phai lon hon so luong toi thieu", 30, 3, 79, 1000);
				continue;
			}
			
			nsvmin[vitri] = '\0'; // cai nay de ngat chuoi, chuyen sang ben phai hoac trai nhap tiep
			check_change = true;
			them_1_ltc(DSLTC.ds,lopTc);
			DSLTC.sl++;
			GhiChu("Them Thanh Cong", 47, 3, 79, 1000);
			return;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			nsvmax[vitri-1]='\0';
			vitri--;
			gotoXY(86 + vitri, y);
			cout << " ";
			gotoXY(86 + vitri, y);
			lopTc->so_svmax = atoi(nsvmax);
		}
		if (key == LEFT)
		{
			nsvmin[vitri] = '\0';
			vitri = strlen(nsvmin);
			gotoXY(78 + vitri, y);
			goto SOLUONGMIN;
		}
		if (key == ESC)
		{
			system("cls"); delete(lopTc);	return;
		}
	}
}
tree Search_LTC(tree &t, int ma)
{ 
	if(t==NULL) // duyet den cuoi
	{
		return NULL;
	}	
	else
	{
		if(t->maloptinchi==ma)
		{
			return t;
		}
		if(t->maloptinchi<ma) // ma > t => pright
		{
			Search_LTC(t->pright, ma);
		}
		else if(t->maloptinchi>ma) // ma < t => pleft
		{
			Search_LTC(t->pleft,ma);
		}
	}
}

void Sua_node_LTC(tree &t, int ma,tree tc)
{ 
	if(t!=NULL) // duyet den cuoi
	{
	if(t->maloptinchi==ma)
		{
			t=tc;
		}
		if(t->maloptinchi<ma) // ma > t => pright
		{
			Sua_node_LTC(t->pright, ma,tc);
		}
		else if(t->maloptinchi>ma) // ma < t => pleft
		{
			Sua_node_LTC(t->pleft,ma,tc);
		}	
	}	
}	
void SuaLopTC(DS_LOP_TIN_CHI &DSLTC, DS_MON_HOC &DSMH, bool &check_change)
{	
	ShowCur(TRUE);
	char  hocki[2]={}; 		
	char  nhom[2]={}; 			
	char  nsvmax[4]={};
	char  nsvmin[4]={};
	int key, vitri = 0, x = 56, y = 27, check_trung;
	char ma_lopTC[3]; //de luu ma mon nhap vao
	lop_tin_chi *lopTc = khoi_tao_ltc();
	Khung_Sua_LTC(); gotoXY(x, y);
	while (1)
	{
		TextColor(15);
		key = GetKey();
		if ((key <= '9' && key >= '0')  && (vitri < 3))
		{
			ma_lopTC[vitri] = char(key);
			ma_lopTC[vitri] = toupper(ma_lopTC[vitri]);
			cout << ma_lopTC[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(56 + vitri, y);
			cout << " ";
			gotoXY(56 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{	
		    ma_lopTC[vitri] = '\0';	//Ngat chuoi~
			bool kt = check_ma_ltc(DSLTC.ds, atoi(ma_lopTC));
			if (kt == true)
			{
				lopTc = Search_LTC(DSLTC.ds,atoi(ma_lopTC)); // lay node LTC 
				Xoa_Khung_FooterLTC();
				Khung_Them_LTC();
				x = 37, y = 27;
				gotoXY(x, y);
				TextColor(14);
				vitri = strlen(lopTc->ma_mh);
				TextColor(14);
				gotoXY(27, 27); cout << lopTc->maloptinchi;
				gotoXY(37, 27); cout << lopTc->ma_mh;
				gotoXY(48, 27); cout << lopTc->nienkhoa;
				gotoXY(63, 27); cout << lopTc->hocky;
				gotoXY(70, 27); cout << lopTc->nhom;
				gotoXY(78, 27); cout << lopTc->so_svmin;
				gotoXY(86, 27); cout << lopTc->so_svmax; // hien thi thong tin cu
				goto MAMH;
				break;
		
			}
			else {
				GhiChu("Ma Mon Hoc Khong Ton Tai!", 50, 3, 79, 700);	TextColor(12);	gotoXY(56 + vitri, y);
			}
		}
		if (key == ESC || key == F2) { 	system("cls");Sua_node_LTC(DSLTC.ds,lopTc->maloptinchi,lopTc); delete(lopTc);	return; }
	}
	MAMH:
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "   MA MON HOC: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU    ";
		TextColor(14);
		gotoXY(37 + vitri, y);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			lopTc->ma_mh[vitri] = char(key);
			lopTc->ma_mh[vitri] = toupper(lopTc->ma_mh[vitri]);
			cout << lopTc->ma_mh[vitri];
			vitri++;
		}
		if (key == ENTER && vitri != 0)
		{
			lopTc->ma_mh[vitri] = '\0';
			int temp;
			temp = KTMH(DSMH, lopTc->ma_mh);
			if (temp != -1) {
				vitri = strlen(lopTc->nienkhoa);
				gotoXY(48 + vitri, y);
				goto NIENKHOA;
			}
			else {
				GhiChu("MON HOC KHONG TON TAI", 47, 3, 79, 700);
				gotoXY(37 + vitri, y);
				continue;
			}
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(37 + vitri, y);
			cout << " ";
			gotoXY(37 + vitri, y);
		}
		if (key == RIGHT)
		{
			lopTc->ma_mh[vitri] = '\0';
			int temp;
			temp = KTMH(DSMH, lopTc->ma_mh);
			if (temp != -1) {
				vitri = strlen(lopTc->nienkhoa);
				gotoXY(48 + vitri, y);
				goto NIENKHOA;
			}
			else {
				GhiChu("MON HOC KHONG TON TAI", 47, 3, 79, 700);
				gotoXY(37 + vitri, y);
				continue;
			}
		}

	
	}
NIENKHOA:
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "      NIEN KHOA: GOM CAC KI TU  (0-9), TOI DA: 9 KI TU          ";
		TextColor(14);
		gotoXY(48 + vitri, y);
		key = GetKey();
		if (lopTc->ma_mh[0] == '\0')		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap ma mon hoc", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(37, y);
			goto MAMH;
		}
			if ((key <= '9' && key >= '0'||key=='-' ) && (vitri < 9))
		{
			
			lopTc->nienkhoa[vitri] = char(key);
			if(lopTc->nienkhoa[vitri]=='-'&&vitri!=4)continue ;
			lopTc->nienkhoa[vitri] = toupper(lopTc->nienkhoa[vitri]);
			cout << lopTc->nienkhoa[vitri];
			vitri++;
		}
		if (key == ENTER && vitri != 0)
		{
			lopTc->nienkhoa[vitri] = '\0';
			if(check_nien_khoa(lopTc->nienkhoa)){
				GhiChu("Nien khoa phai du 8 ki tu va co nghia !", 47, 3, 79, 700);
				continue;
			}
			vitri = 1;
			gotoXY(63 + vitri, y);
			goto HOCKI;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(48 + vitri, y);
			cout << " ";
			gotoXY(48 + vitri, y);
		}
		if (key == LEFT)
		{
			lopTc->nienkhoa[vitri] = '\0';
			vitri = strlen(lopTc->ma_mh);
			gotoXY(37 + vitri, y);
			goto MAMH;
		}
		if (key == RIGHT)
		{
			lopTc->nienkhoa[vitri] = '\0';
			if(check_nien_khoa(lopTc->nienkhoa)){
				GhiChu("Nien khoa phai du 8 ki tu va co nghia !", 47, 3, 79, 700);
				continue;
			}
			vitri = 1;
			gotoXY(63 + vitri, y);
			goto HOCKI;
		}
	
	}
HOCKI:
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "        HOC KI: GOM CAC KI TU  (1-9), TOI DA: 1 KI TU           ";
		TextColor(14);
		gotoXY(63 + vitri, y); // vi tri nhap tiep theo
		key = GetKey();
		if (lopTc->nienkhoa[0] == '\0')		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap Nien Khoa", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(48, y);
			goto NIENKHOA;
		}
		if ((key <= '9' && key >= '1') && (vitri < 1))
		{
			hocki[vitri] = char(key);
			hocki[vitri] = toupper(hocki[vitri]);
			cout <<hocki[vitri];
			vitri++;
			lopTc->hocky = atoi(hocki);
		}
		
		if (key == ENTER && vitri != 0)
		{
			hocki[vitri] = '\0';
			vitri = 1;
			gotoXY(70 + vitri, y);
			goto NHOM;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(63 + vitri, y);
			cout << " ";
			gotoXY(63 + vitri, y);
		}
		if (key == LEFT)
		{
			hocki[vitri] = '\0';
			vitri = strlen(lopTc->nienkhoa);
			gotoXY(48 + vitri, y);
			goto NIENKHOA;
		}
		if (key == RIGHT)
		{
			hocki[vitri] = '\0';
			vitri = 1;
			gotoXY(70 + vitri, y);
			goto NHOM;
		}

		
	}
NHOM:
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "         NHOM : GOM CAC KI TU  (1-9), TOI DA: 1 KI TU           ";
		TextColor(14);
		gotoXY(70 + vitri, y); // vi tri nhap tiep theo
		key = GetKey();
		if (lopTc->hocky == NULL)		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap Hoc Ki", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(63, y);
			goto HOCKI;
		}
		if ((key <= '9' && key >= '1') && (vitri < 1))
		{
			nhom[vitri] = char(key);
			nhom[vitri] = toupper(nhom[vitri]);
			cout << nhom[vitri];
			vitri++;
			lopTc->nhom = atoi(nhom);
		}
		if (key == ENTER && vitri != 0)
		{   
			vitri = dem_ki_tu_so_nguyen(lopTc->so_svmin) + 1 ;
			gotoXY(78 + vitri, y);
			goto SOLUONGMIN;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(70 + vitri, y);
			cout << " ";
			gotoXY(70 + vitri, y);
			
		}
		if (key == LEFT)
		{
			vitri = 1;
			gotoXY(63 + vitri, y);
			goto HOCKI;
		}
		if (key == RIGHT)
		{
		
			vitri = dem_ki_tu_so_nguyen(lopTc->so_svmin)+1 ;
			gotoXY(78 + vitri, y);
			goto SOLUONGMIN;
		}
	
}
SOLUONGMIN:
	while (1)
	{
		itoa(lopTc->so_svmin,nsvmin,10);
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "      SO LUONG MIN: GOM CAC KI TU  (0-9), TOI DA: 3 KI TU       ";
		TextColor(14);
		gotoXY(78 + vitri, y); // vi tri nhap tiep theo
		key = GetKey();
		if (lopTc->nhom == NULL)		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap Nhom", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(70, y);
			goto NHOM;
		}
		if ((key <= '9' && key >= '0') && (vitri < 3))
		{
			nsvmin[vitri] = char(key);
			nsvmin[vitri] = toupper(nsvmin[vitri]);
			cout <<nsvmin[vitri];
			vitri++;
			lopTc->so_svmin = atoi(nsvmin);
		}
	
		if (key == ENTER && vitri != 0)
		{
			nsvmin[vitri] = '\0';
			vitri = dem_ki_tu_so_nguyen(lopTc->so_svmax)+1;
			gotoXY(86 + vitri, y);
			goto SOLUONGMAX;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			nsvmin[vitri-1]='\0';
			vitri--;
			gotoXY(78 + vitri, y);
			cout << " ";
			gotoXY(78 + vitri, y);
			lopTc->so_svmin = atoi(nsvmin);
		}
		if (key == LEFT)
		{
			nsvmin[vitri] = '\0';
			vitri = 1;
			gotoXY(70 + vitri, y);
			goto NHOM;
		}
		if (key == RIGHT)
		{
			nsvmin[vitri] = '\0';
			vitri = dem_ki_tu_so_nguyen(lopTc->so_svmax)+1;
			gotoXY(86 + vitri, y);
			goto SOLUONGMAX;
		}

	
	}
SOLUONGMAX:
	while (1)
	{
		itoa(lopTc->so_svmax,nsvmax,10);
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "      SO LUONG MAX: GOM CAC KI TU  (0-9), TOI DA: 3 KI TU       ";
		TextColor(14);
		gotoXY(86 + vitri, y); // vi tri nhap tiep theo
		key = GetKey();
		if (lopTc->so_svmin == NULL)		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap so luong toi thieu", 47, 3, 79, 700);
			vitri = dem_ki_tu_so_nguyen(lopTc->so_svmin)+1;
			gotoXY(78, y);
			goto NHOM;
		}
		if ((key <= '9' && key >= '0') && (vitri < 3))
		{
			nsvmax[vitri] = char(key);
			nsvmax[vitri]= toupper(nsvmax[vitri]);
			cout << nsvmax[vitri];
			vitri++;
			lopTc->so_svmax = atoi(nsvmax);
		}
		if (key == ENTER && vitri != 0)
		{
			
			if(check_max_min(lopTc->so_svmax,lopTc->so_svmin)==1){
					GhiChu("So luong toi da phai lon hon so luong toi thieu", 30, 3, 79, 1000);
				continue;
			}
			
			nsvmin[vitri] = '\0'; // cai nay de ngat chuoi, chuyen sang ben phai hoac trai nhap tiep
			int check_4;
			check_4 = check_4_ma(DSLTC.ds,lopTc->maloptinchi,lopTc->ma_mh,lopTc->nienkhoa,lopTc->hocky,lopTc->nhom);
			if (check_4 == 1) {
				GhiChu("4 field MAMH , NIEN KHOA, HOC KI, NHOM khong duoc hoan toan giong nhau!", 40, 3, 79, 1000);
				continue;
			}
			else{
				check_change = true;
			Sua_node_LTC(DSLTC.ds,lopTc->maloptinchi,lopTc); // gan node vao 
			GhiChu("Hieu Chinh Thanh Cong", 47, 3, 79, 1000);
			return;
			}
			
		}
		if (key == BACKSPACE && vitri > 0)
		{
			nsvmax[vitri-1]='\0';
			vitri--;
			gotoXY(86 + vitri, y);
			cout << " ";
			gotoXY(86 + vitri, y);
			lopTc->so_svmax = atoi(nsvmax);
		}
		if (key == LEFT)
		{
			nsvmin[vitri] = '\0';
			vitri = dem_ki_tu_so_nguyen(lopTc->so_svmin)+1;
			gotoXY(78 + vitri, y);
			goto SOLUONGMIN;
		}
	
	}
}
//=============================================
sinh_vien* khoi_tao_sv()
{
	sinh_vien *p = new sinh_vien;
	p->pnext = NULL;
	return p;
}
void MangTam_SV(DS_SINH_VIEN ds_sv, SINH_VIEN* mangSV[], char malop[]) {
	int a=check_lop(ds_sv,malop);
	if(a!=0);
	{
		int dem=0;
			for(SINH_VIEN *k=ds_sv.phead;k!=NULL;k=k->pnext)
			{
				if(strcmp(k->ma_lop,malop)==0)
				{
					mangSV[dem]=k;
					dem++;
				}
				if(strcmp(k->ma_lop,malop)>0)
				{
					return;
				}
			}
	}
}
void MangTam_SV_fix(DS_SINH_VIEN ds_sv, SINH_VIEN mangSV[], char malop[]) {
	int a=check_lop(ds_sv,malop);
	if(a!=0);
	{
		int dem=0;
			for(SINH_VIEN *k=ds_sv.phead;k!=NULL;k=k->pnext)
			{
				if(strcmp(k->ma_lop,malop)==0)
				{
					mangSV[dem]=*k;
					dem++;
				}
				if(strcmp(k->ma_lop,malop)>0)
				{
					return;
				}
			}
	}
}
void DocFileSV(DS_SINH_VIEN &dssv){
	ifstream infile;
	string data;
	infile.open("DSSV.txt", ios::in);
	if (!infile)
	{
		GhiChu("Khong tim thay file",45,3,79,700);
	  	return;
	} //Khong tim thay file
	while (infile.good())
	{
		SINH_VIEN *sv = new sinh_vien;
		sv->pnext = NULL;

		getline(infile, data); strcpy(sv->ma_lop, data.c_str());
		
		//if (data.size() == 0) { break; }
		getline(infile, data); strcpy(sv->ma_sv, data.c_str());
		
		getline(infile, data); strcpy(sv->ho, data.c_str());
		getline(infile, data); strcpy(sv->ten, data.c_str());
		getline(infile, data); strcpy(sv->phai, data.c_str());
		getline(infile, data); strcpy(sv->sdt, data.c_str());
		infile >> sv->nam_nhap_hoc;
		getline(infile, data);
		
			
		Insert_TailSV(dssv, sv);	
	}
	infile.close();
	/*
	for (SINH_VIEN *k = dssv.phead; k != NULL; k = k->pnext)
		{
			cout << k->ma_lop << ", " << k->ma_sv <<", " << k->nam_nhap_hoc << endl;
		}*/
}

void GhiFileSV(DS_SINH_VIEN dssv){
	ofstream outfile;
	outfile.open("DSSV.txt", ios::out);
	for (SINH_VIEN *k = dssv.phead; k != NULL; k = k->pnext)
	{
		outfile << k->ma_lop << endl;
		outfile << k->ma_sv << endl;
		outfile << k->ho << endl;
		outfile << k->ten << endl;
		outfile << k->phai << endl;
		outfile << k->sdt << endl;
		outfile << k->nam_nhap_hoc << endl;
	}
	
}

void Insert_TailSV(DS_SINH_VIEN &DSSV, SINH_VIEN *sv) {
	
	
	if (DSSV.phead == NULL) {
		DSSV.phead = sv;
	}
	else {
		for (SINH_VIEN *k = DSSV.phead; k != NULL; k = k->pnext)
		{
			if (k->pnext == NULL)	//Tim ra Node Tail
			{
				k->pnext = sv;	
				break;
			}
		}
		return;
	}
}
int check_sv_khac_lop(DS_SINH_VIEN ds_sv, char masv[])
{
	for(SINH_VIEN *k = ds_sv.phead; k!= NULL; k=k->pnext)
	{
		if(strcmp(k->ma_sv,masv)==0)
		{
			return 1;
		}
		if(strcmp(k->ma_sv,masv)>0)
		{
			break;
		}
	}
	return 0;
}
int check_sv(DS_SINH_VIEN ds_sv, char malop[], char masv[])
{
	for(SINH_VIEN *k = ds_sv.phead; k!= NULL; k=k->pnext)
	{
		if(strcmp(k->ma_lop,malop)==0&&strcmp(k->ma_sv,masv)==0)
		{
			return 1;
		}
		if(strcmp(k->ma_lop,malop)>0||strcmp(k->ma_sv,masv)>0) break;
	}
	return 0;
}
SINH_VIEN* tim_sv(DS_SINH_VIEN ds_sv, char malop[], char masv[])
{
	for(SINH_VIEN *k = ds_sv.phead; k!= NULL; k=k->pnext)
	{
		if(strcmp(k->ma_lop,malop)==0&&strcmp(k->ma_sv,masv)==0)
		{
			return k;
		}
		if(strcmp(k->ma_lop,malop)>0||strcmp(k->ma_sv,masv)>0) break;
	}
	return NULL;
}
SINH_VIEN* tim_sv_khong_malop(DS_SINH_VIEN ds_sv, char masv[])
{
	for(SINH_VIEN *k = ds_sv.phead; k!= NULL; k=k->pnext)
	{
		if(strcmp(k->ma_sv,masv)==0)
		{
			return k;
		}
		if(strcmp(k->ma_sv,masv)>0) break;
	}
	return NULL;
}
int check_lop(DS_SINH_VIEN ds_sv, char malop[])
{
	for(SINH_VIEN *k = ds_sv.phead; k!= NULL; k=k->pnext)
	{
		if(strcmp(k->ma_lop,malop)==0)
		{
			
			return 1;
		}
		if(strcmp(k->ma_lop,malop)>0) break;
	}
	return 0;
}
void ds_lop(DS_SINH_VIEN ds_sv, LOP_HOC listlop[],int &dem)
{
	strcpy(listlop[dem].lop,ds_sv.phead->ma_lop);
	for(SINH_VIEN *k = ds_sv.phead; k!= NULL; k=k->pnext)
	{ 
		if(strcmp(k->ma_lop,listlop[dem].lop)>0)
		{
			dem++;
			strcpy(listlop[dem].lop,k->ma_lop);
		}
	}
}
int dem_SV_lop(DS_SINH_VIEN ds_sv,char malop[])
{
	int sl = 0;
	for(SINH_VIEN *k=ds_sv.phead;k!=NULL;k=k->pnext)
		{
			if(strcmp(k->ma_lop,malop)==0)
			{
				sl++;
			}
			if(strcmp(k->ma_lop,malop)>0) break;
	
		}
		return sl;	
}
void xem_SV_theo_lop(DS_SINH_VIEN ds_sv,DS_LOP_TIN_CHI dsltc,char malop[],bool &checkchange){
		
		int key;
		int sl=dem_SV_lop(ds_sv,malop);
		int trang = 0, tongtrang = 0;
		checkchange=false;
		while(1)
		{
			
		SINH_VIEN *mangtam[MAXSV]; // mang con tro tam
		for(int i = 0;i<sl;i++)
		{
			mangtam[i]=khoi_tao_sv();
		}
		MangTam_SV(ds_sv,mangtam,malop); // do vao mang tam de hien thi , khong dung sort tai vi ds da co thu tu
		int  demdong = 1;
		
		if (sl < 15)
		{
			tongtrang = 1;
			trang = 0;
		}
		else {
			tongtrang = ((sl - 1) / 15 + 1);
			
		}
		
		system("cls");
		Khung_Xuat_SV();
		gotoXY(17,1);cout<<"LOP :"<<malop;
		for (int i = trang * 15; i < 15 + trang * 15 && i < sl; i++)
		{
			TextColor(12); gotoXY(20, 6 + demdong); cout << (i + 1);
			TextColor(14);
			gotoXY(25, 6 + demdong); cout << mangtam[i]->ma_sv;
			gotoXY(43, 6 + demdong); cout << mangtam[i]->ho;
			gotoXY(57, 6 + demdong); cout << mangtam[i]->ten;
			gotoXY(74, 6 + demdong); cout << mangtam[i]->phai;
			gotoXY(82, 6 + demdong); cout << mangtam[i]->sdt;
			gotoXY(96, 6 + demdong); cout << mangtam[i]->nam_nhap_hoc;
			demdong++;
		
		}
		HienThiTrang(trang + 1, tongtrang, 88, 23);
		key = GetKey();
		if ((key == RIGHT || key == DOWN) && trang < tongtrang - 1) { trang++; }
		if ((key == LEFT || key == UP) && trang > 0) { trang--; }
		if (key==ESC) {
			if(checkchange==true)
			{
				int temp = ThongBao_ESC();
				if (temp == -1) { continue; }
				if (temp == 1) {
					GhiChu("Luu Vao File Thanh Cong!", 35, 27, 79, 2000);
					GhiFileSV(ds_sv);
				}
				if (temp == 0) { GhiChu("Luu Vao File Khong Thanh Cong!", 45, 3, 79, 2000); }
				
			}
			system("cls");
			Khung_Xuat_SV();
			Khung_Nhap_Ma_Lop();
			gotoXY(61,26);cout<<malop;
			
			return;	
		}
		if(key==F1)
		{
			them_SV(ds_sv,checkchange,malop,sl);
			
		}
		if(key==F2)
		{
			Khung_Nhap_MSSV();
			int vitri=0;
			char mssv[10]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if(key==ESC) break;
				if (key == ENTER && vitri != 0){
					mssv[vitri]='\0';
					SINH_VIEN *sv = khoi_tao_sv();
					gotoXY(17,25);cout<<"                                                                                                  ";
					gotoXY(17,26);cout<<"                                                                                                  ";
					gotoXY(17,27);cout<<"                                                                                                  ";
					sv = tim_sv(ds_sv,malop,mssv);
					if(sv!=NULL)
					{ 
						gotoXY(25, 26); cout <<sv->ma_sv;
						gotoXY(40, 26); cout <<sv->ho;
						gotoXY(55, 26); cout <<sv->ten;
						gotoXY(74, 26); cout <<sv->phai;
						gotoXY(81, 26); cout <<sv->sdt;
						gotoXY(96, 26); cout <<sv->nam_nhap_hoc;
						sua_Sinh_Vien(ds_sv,sv,mssv,malop,checkchange);
						sl= dem_SV_lop(ds_sv,sv->ma_lop);
						break;
					}
					else 
					{
						GhiChu("Sinh vien khong ton tai !",40,3,79,700);
						sl= dem_SV_lop(ds_sv,malop);
						break;
					}
				}
			}
		}
		if(key==F3){
			Khung_Nhap_MSSV();
			int vitri=0;
			char mssv[10]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if (key == ENTER && vitri != 0){
					mssv[vitri]='\0';
					int demltc=0;
					check_sv_dk_ltc(dsltc.ds,mssv,demltc);
					int check=check_sv(ds_sv,malop,mssv);
					if(demltc!=0)
					{
						GhiChu("SINH VIEN DA DANG KI LTC,VUI LONG HUY LOP TRUOC KHI XOA !",40,3,79,700);
						continue;
					}
					else if(check==1)
					{ 
						xoa_1_sv(ds_sv,malop,mssv);
						ds_sv.sl--;
						GhiChu("Xoa thanh cong !",45,3,79,700);
						sl--;
						checkchange=true;
						break;
					}
					else 
					{
						GhiChu("Sinh vien khong ton tai !",45,3,79,700);
						sl= dem_SV_lop(ds_sv,malop);
						break;
					}
				}
				if(key==ESC) break;
			}
		}
	}
}
void XemSinhVien(DS_SINH_VIEN &DSSV,DS_LOP_TIN_CHI DSLTC)
{
	ShowCur(true);
	int key;
	int x = 61, y = 26, vitri = 0;
	int STT = 1;
	bool check_change = false;
	Khung_Xuat_SV();
	Khung_Nhap_Ma_Lop();
	char malop[12]={};
	gotoXY(x, y);
	while (1)
	{
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z') || (key == '-')) && (vitri < 11))
		{
			malop[vitri] = char(key);
			malop[vitri] = toupper(malop[vitri]);
			cout << malop[vitri];
			vitri++;
		}
		if (key == ENTER && vitri != 0)
		{
			malop[vitri] = '\0';
			int a = check_lop(DSSV,malop); // kiem tra xem lop co ton tai k
			if(a==0){
				GhiChu("Lop Khong Ton Tai ! ",45,3,79,700);
				gotoXY(61+vitri,y);
				continue ; 
			}
			else xem_SV_theo_lop(DSSV,DSLTC,malop,check_change);// dua vao ma lop de xem dssv
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(61 + vitri, y);
			cout << " ";
			malop[vitri]='\0';
			gotoXY(61 + vitri, y);
		}
		if (key == ESC) {	return; }
		if(key==F5 && vitri==0)
		{
			int trang = 0 ,tongtrang = 0;
			while(1)
			{
				int demlop = 0;
				LOP_HOC *list = new LOP_HOC[MAXLOP]; // mang tam
				ds_lop(DSSV,list,demlop); // do vao mang tam de hien thi , khong dung sort tai vi ds da co thu tu
				int  demdong = 1;
				if (demlop < 15)
				{
					tongtrang = 1;
					trang = 0;
				}
				else {
					tongtrang = ((demlop - 1) / 15 + 1);
					
				}
				
				system("cls");
				Khung_xuat_ds_lop();
				for (int i = trang * 15; i < 15 + trang * 15 && i < demlop; i++)
				{
					TextColor(12); gotoXY(46, 6 + demdong); cout << (i + 1);
					TextColor(14);
					gotoXY(50, 6 + demdong); cout << list[i].lop;
					demdong++;
				
				}
				HienThiTrang(trang + 1, tongtrang, 60, 23);
				key = GetKey();
				if ((key == RIGHT || key == DOWN) && trang < tongtrang - 1) { trang++; }
				if ((key == LEFT || key == UP) && trang > 0) { trang--; }
				if(key==ESC) {
					system("cls");
					Khung_Xuat_SV();
					Khung_Nhap_Ma_Lop();
					gotoXY(61, 26);
					break;
				}
				}
			}
		}

}
int check_phai(string phai)
{
	if(phai == "NAM" || phai =="NU")
	{
		return 1;
	}
	return 0;
}
void them_1_sv_vao_dau_ds(DS_SINH_VIEN &l, SINH_VIEN *p)
{
	if(l.phead==NULL)
	{
		l.phead =p;
	}
	else
	{
		p->pnext = l.phead;
		l.phead =p;
	}
	
}
void them_1_sv(DS_SINH_VIEN &l, SINH_VIEN *p)
{
	if(l.phead==NULL) // them vao dau ds khi NULL
	{
		them_1_sv_vao_dau_ds(l,p);
	}
	else if(strcmp(l.phead->ma_lop, p->ma_lop) > 0 || (strcmp(l.phead->ma_lop, p->ma_lop) == 0 && strcmp(l.phead->ma_sv, p->ma_sv) > 0))
	{
		// k = BT002 => p = ATxxx || p=BT001
		them_1_sv_vao_dau_ds(l,p);
	}
	else
	{
	
		SINH_VIEN *q ;
		for(SINH_VIEN *k = l.phead; k!= NULL; k = k->pnext)
		{
		
			if(strcmp(k->ma_lop, p->ma_lop) < 0)
			{
				if(k->pnext == NULL || strcmp(k->pnext->ma_lop, p->ma_lop) > 0) // them sau node k
				{
					//TH1: AT001 AT003 NULL
					// p= BT001
					//TH2: AT001 AT003 CT005
					//p=BT001
					p->pnext = k->pnext;
					k->pnext = p;
					break;
				}
			
			}
		
			else if(strcmp(k->ma_lop, p->ma_lop) == 0)
			{
				if(strcmp(k->ma_sv, p->ma_sv) > 0) // them truoc node k
				{
					
					//AT003 BT005 BT123
					//p = BT001
					p->pnext = q->pnext;
					q->pnext = p;
					break;
				}
				else if(strcmp(k->ma_sv, p->ma_sv) < 0 && (k->pnext == NULL ||strcmp(k->pnext->ma_lop, p->ma_lop) > 0))
				{
				
					//TH1:  AT008 NULL
					//p= AT113
					//TH2:  AT008 CT001
					//p= AT123
					p->pnext = k->pnext;
					k->pnext = p;
					break;
				}
			}						
			q = k;
		}			
	}
}
void NhapDSSinhVien(DS_SINH_VIEN &DSSV)
{
TOP:
	ShowCur(true);
	int trang = 0, tongtrang = 0;//phan trang
	int key;
	int x = 61, y = 26, vitri = 0, dem=0;
	int slsv;
	bool check_change = false;
	Khung_Xuat_SV();
	Khung_Nhap_Ma_Lop();
	char malop[16];
	SINH_VIEN* sv = new SINH_VIEN[MAXSV];
	for(int i =0 ;i<MAXSV;i++){
		sv[i].pnext=NULL;
	}
	gotoXY(x, y);
	while (1)
	{
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z') || (key == '-')) && (vitri < 11))
		{
			malop[vitri] = char(key);
			malop[vitri] = toupper(malop[vitri]);
			cout << malop[vitri];
			vitri++;
		}
		if (key == ENTER && vitri != 0)
		{
			malop[vitri] = '\0';
			slsv = check_lop(DSSV,malop);
			if(slsv==0){
				GhiChu("Lop Khong Ton Tai , Them lop moi ! ",40,3,79,700);
				gotoXY(61+vitri,y);
			}
			else {
				if(dem_SV_lop(DSSV,malop)>=MAXSV) {
					GhiChu("Lop da du sinh vien , Khong the them !",40,3,79,700);
					continue ;
				}
			}
			system("cls");
			Khung_Xuat_SV();
			vitri=0;
			goto START;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(61 + vitri, y);
			cout << " ";
			malop[vitri]='\0';
			gotoXY(61 + vitri, y);
		}
		if(key==F5 && vitri==0)
		{
			int tranglop = 0 ,tongtranglop = 0;
			while(1)
			{
				int demlop = 0;
				LOP_HOC *list = new LOP_HOC[MAXLOP]; // mang tam
				ds_lop(DSSV,list,demlop); // do vao mang tam de hien thi , khong dung sort tai vi ds da co thu tu
				int  demdong = 1;
				if (demlop < 15)
				{
					tongtranglop = 1;
					tranglop = 0;
				}
				else {
					tongtranglop = ((demlop - 1) / 15 + 1);
					
				}
				
				system("cls");
				Khung_xuat_ds_lop();
				for (int i = tranglop * 15; i < 15 + tranglop * 15 && i < demlop; i++)
				{
					TextColor(12); gotoXY(46, 6 + demdong); cout << (i + 1);
					TextColor(14);
					gotoXY(50, 6 + demdong); cout << list[i].lop;
					demdong++;
				
				}
				HienThiTrang(tranglop + 1, tongtranglop, 60, 23);
				key = GetKey();
				if ((key == RIGHT || key == DOWN) && tranglop < tongtranglop - 1) { tranglop++; }
				if ((key == LEFT || key == UP) && tranglop > 0) { tranglop--; }
				if(key==ESC) {
					system("cls");
					Khung_Xuat_SV();
					Khung_Nhap_Ma_Lop();
					gotoXY(61, 26);
					goto TOP;
				}
				}
			}
		if (key == ESC) { TextColor(14);	return; }
	}
START :
	char khoa[5]={},ho[11]={},ten[21]={},phai[4]={},sdt[12]={};
	strcpy(sv[dem].ma_lop,malop);
	Khung_Them_SV();
	gotoXY(17,1);cout<<"Lop : "<<sv[dem].ma_lop;
	gotoXY(25,26);
MSSV:
	Khung_Them_SV();	
	while (1)
	{
		TextColor(252);				//Chu thich
		gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
		TextColor(14);
		gotoXY(25 + vitri, y);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			sv[dem].ma_sv[vitri] = char(key);
			sv[dem].ma_sv[vitri] = toupper(sv[dem].ma_sv[vitri]);
			cout << sv[dem].ma_sv[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(25 + vitri, y);
			cout << " ";
			sv[dem].ma_sv[vitri]='\0';
			gotoXY(25 + vitri, y);
		}
		if(key==F2 && dem > 0){
			gotoXY(17,25);cout<<"                                                                                                  ";
			gotoXY(17,26);cout<<"                                                                                                  ";
			gotoXY(17,27);cout<<"                                                                                                  ";
			Khung_Nhap_MSSV();
			vitri=0;
			char mssv[0]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if(key== ENTER && vitri != 0){
					
					system("cls");
					in_mang_tam_SV(sv,dem,trang,tongtrang);
					sua_mang_tam_SV(DSSV,sv,dem,mssv,malop);
					system("cls");
					in_mang_tam_SV(sv,dem,trang,tongtrang);
					vitri=0;
					goto MSSV;
				}
			}
			}
		if(key==F3 && dem > 0){
			gotoXY(17,25);cout<<"                                                                                                  ";
			gotoXY(17,26);cout<<"                                                                                                  ";
			gotoXY(17,27);cout<<"                                                                                                  ";
			Khung_Nhap_MSSV();
			vitri=0;
			char mssv[0]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if (key == ENTER && vitri != 0){
					int checkxoa=0;
					for(int i = 0 ; i<dem;i++)
					{
						if(strcmp(sv[i].ma_sv,mssv)==0)
						{
							for(int j = i+1;j<dem;j++)
							{
								sv[j-1]=sv[j];
							}
							dem--;
							checkxoa=1;
						}
					}
					if(checkxoa=1)
					{
						GhiChu("Xoa thanh cong ! ",45,3,79,700);
						system("cls");
						Khung_Them_SV();
						in_mang_tam_SV(sv,dem,trang,tongtrang);
						 khoa[5]={},ho[0]={},ten[0]={},phai[0]={},sdt[0]={};
						vitri=0;
						goto MSSV;
					}
					else continue ;
				}
			}
		}
		
		if (key == ENTER && vitri != 0)
		{
			
			sv[dem].ma_sv[vitri]= '\0';
//			int checkmasv = check_sv(DSSV,malop,sv[dem].ma_sv);
			int checkmasvmang = 0;
			int checkngoailop=check_sv_khac_lop(DSSV,sv[dem].ma_sv);
				for(int i=0;i<dem;i++){
					if(strcmp(sv[dem].ma_sv,sv[i].ma_sv)==0){
						checkmasvmang=1;	
					}
				}
			if(checkmasvmang==1||checkngoailop){
				GhiChu("MSSV da ton tai !",45,3,79,700);
				continue;
			}
			else{
				vitri = strlen(ho);
				gotoXY(40 + vitri, y);
				goto HO;
			}		
		}
		if (key == ESC)
		{
			system("cls");
			if(check_change==true)
			{
				for(int i = 0;i<dem;i++)
				{
					them_1_sv(DSSV,&sv[i]);
					DSSV.sl++;
				}
				int temp = ThongBao_ESC();
				if (temp == -1) { continue; }
				if (temp == 1) {
					GhiChu("Luu Vao File Thanh Cong!", 50, 3, 79, 2000);
					GhiFileSV(DSSV);
				}
				if (temp == 0) { GhiChu("Luu Vao File Khong Thanh Cong!", 50, 3, 79, 2000); }
			}
				return;
		}
		if (key == RIGHT)
		{
			sv[dem].ma_sv[vitri]= '\0';
			int checkmasv = check_sv(DSSV,malop,sv[dem].ma_sv);
			int checkmasvmang = 0;
			int checkngoailop=check_sv_khac_lop(DSSV,sv[dem].ma_sv);
				for(int i=0;i<dem;i++){
					if(strcmp(sv[dem].ma_sv,sv[i].ma_sv)==0){
						checkmasvmang=1;	
					}
				}
			if(checkmasv==1||checkmasvmang==1||checkngoailop){
				GhiChu("MSSV da ton tai !",45,3,79,700);
				continue;
			}
			else{
				vitri = strlen(ho);
				gotoXY(40 + vitri, y);
				goto HO;
			}
		}
		if (( key == DOWN) && trang < tongtrang - 1) { trang++; }
		if ((key == UP) && trang > 0) { trang--; }
	}
HO :
	while (1)
	{
		TextColor(252);			//Chu thich
		gotoXY(35, 27); cout << "      HO: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU       ";
		TextColor(14);
		gotoXY(40 + vitri, y);
		key = GetKey();
		if (sv[dem].ma_sv[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Ma Sinh Vien!", 40, 3, 79, 700);
			vitri = 0;
			gotoXY(25, y);
			goto MSSV;
		}
		if (((key >= 'A' && key <= 'Z')  || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			ho[vitri] = char(key);
			ho[vitri] = toupper(ho[vitri]);
			cout << ho[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(40 + vitri, y);
			cout << " ";
			ho[vitri]='\0';
			strcpy(sv[dem].ho,ho);
			gotoXY(40 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			if (ho[vitri-1] == ' ') { vitri--; }//KT khi enter truoc do co phai khoang trang
			ho[vitri] = '\0';
			strcpy(sv[dem].ho,ho);
			vitri = strlen(ten);
			gotoXY(55 + vitri, y);
			goto TEN;
		}
		if(key==F2 && dem > 0){
			gotoXY(17,25);cout<<"                                                                                                  ";
			gotoXY(17,26);cout<<"                                                                                                  ";
			gotoXY(17,27);cout<<"                                                                                                  ";
			Khung_Nhap_MSSV();
			vitri=0;
			char mssv[0]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if(key== ENTER && vitri != 0){
					
					system("cls");
					in_mang_tam_SV(sv,dem,trang,tongtrang);
					sua_mang_tam_SV(DSSV,sv,dem,mssv,malop);
					system("cls");
					in_mang_tam_SV(sv,dem,trang,tongtrang);
					vitri=0;
					goto MSSV;
				}
			}
			}
		if (key == ESC)
		{
		
			system("cls");	return;
		}
		if (key == LEFT)
		{
			sv[dem].ho[vitri] = '\0';
			vitri = strlen(sv[dem].ma_sv);
			gotoXY(25 + vitri, y);
			goto MSSV;
		}
		if (key == RIGHT)
		{
			if (ho[vitri-1] == ' ') { vitri--; }//KT khi enter truoc do co phai khoang trang
			ho[vitri] = '\0';
			strcpy(sv[dem].ho,ho);
			vitri = strlen(ten);
			gotoXY(55 + vitri, y);
			goto TEN;
		}
		if(key==F3 && dem > 0){
			gotoXY(17,25);cout<<"                                                                                                  ";
			gotoXY(17,26);cout<<"                                                                                                  ";
			gotoXY(17,27);cout<<"                                                                                                  ";
			Khung_Nhap_MSSV();
			vitri=0;
			char mssv[0]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if (key == ENTER && vitri != 0){
					int checkxoa=0;
					for(int i = 0 ; i<dem;i++)
					{
						if(strcmp(sv[i].ma_sv,mssv)==0)
						{
							for(int j = i+1;j<dem;j++)
							{
								sv[j-1]=sv[j];
							}
							dem--;
							checkxoa=1;
						}
					}
					if(checkxoa=1)
					{
						GhiChu("Xoa thanh cong ! ",45,3,79,700);
						system("cls");
						Khung_Them_SV();
						in_mang_tam_SV(sv,dem,trang,tongtrang);
						 khoa[5]={},ho[0]={},ten[0]={},phai[0]={},sdt[0]={};
						vitri=0;
						goto MSSV;
					}
					else continue ;
				}
			}
		}
		if (( key == DOWN) && trang < tongtrang - 1) { trang++; }
		if ((key == UP) && trang > 0) { trang--; }
	}
TEN:
	while (1)
	{
		TextColor(252);			//Chu thich
		gotoXY(35, 27); cout << "      TEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU       ";
		TextColor(14); gotoXY(55 + vitri, y);
		key = GetKey();
		if (sv[dem].ho[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Ho!", 35, 27, 79, 700);
			vitri = 0;
			gotoXY(40, y);
			goto HO;
		}
		if (((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z')) && (vitri < 20))
		{
			ten[vitri] = char(key);
			ten[vitri] = toupper(ten[vitri]);
			cout << ten[vitri];
			vitri++;
		}
		if (key == SPACE && sv[dem].ten[vitri - 1] != ' ' && vitri > 0 && vitri < 20)
		{
			gotoXY(55 + vitri, y);
			cout << " ";
			ten[vitri] = ' ';
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(55 + vitri, y);
			cout << " ";
			ten[vitri]='\0';
			strcpy(sv[dem].ten,ten);
			gotoXY(55 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			ten[vitri] = '\0';
			strcpy(sv[dem].ten,ten);
			vitri = strlen(phai);
			gotoXY(74 + vitri, y);
			goto PHAI;
		}
		if (key == ESC)
		{
			system("cls");	return;
		}
		if (key == LEFT)
		{
			sv[dem].ten[vitri] = '\0';
			vitri = strlen(ho);
			gotoXY(40 + vitri, y);
			goto HO;
		}
		if(key==F2 && dem > 0){
			gotoXY(17,25);cout<<"                                                                                                  ";
			gotoXY(17,26);cout<<"                                                                                                  ";
			gotoXY(17,27);cout<<"                                                                                                  ";
			Khung_Nhap_MSSV();
			vitri=0;
			char mssv[0]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if(key== ENTER && vitri != 0){
					
					system("cls");
					in_mang_tam_SV(sv,dem,trang,tongtrang);
					sua_mang_tam_SV(DSSV,sv,dem,mssv,malop);
					system("cls");
					in_mang_tam_SV(sv,dem,trang,tongtrang);
					vitri=0;
					goto MSSV;
				}
			}
			}
		if(key==F3 && dem > 0){
			gotoXY(17,25);cout<<"                                                                                                  ";
			gotoXY(17,26);cout<<"                                                                                                  ";
			gotoXY(17,27);cout<<"                                                                                                  ";
			Khung_Nhap_MSSV();
			vitri=0;
			char mssv[0]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if (key == ENTER && vitri != 0){
					int checkxoa=0;
					for(int i = 0 ; i<dem;i++)
					{
						if(strcmp(sv[i].ma_sv,mssv)==0)
						{
							for(int j = i+1;j<dem;j++)
							{
								sv[j-1]=sv[j];
							}
							dem--;
							checkxoa=1;
						}
					}
					if(checkxoa=1)
					{
						GhiChu("Xoa thanh cong ! ",45,3,79,700);
						system("cls");
						Khung_Them_SV();
						in_mang_tam_SV(sv,dem,trang,tongtrang);
						 khoa[5]={},ho[0]={},ten[0]={},phai[0]={},sdt[0]={};
						vitri=0;
						goto MSSV;
					}
					else continue ;
				}
			}
		}
		if (key == RIGHT)
		{
			ten[vitri] = '\0';
			strcpy(sv[dem].ten,ten);
			vitri = strlen(phai);
			gotoXY(74 + vitri, y);
			goto PHAI;
		}
		if (( key == DOWN) && trang < tongtrang - 1) { trang++; }
		if ((key == UP) && trang > 0) { trang--; }
	}
PHAI:
	while (1)
	{
		TextColor(252);			//Chu thich
		gotoXY(35, 27); cout << "     PHAI: GOM CAC KI TU (A-Z) - NAM/NU, TOI DA: 3 KI TU      ";
		TextColor(14); gotoXY(74 + vitri, y);
		key = GetKey();
		if (sv[dem].ten[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Ten!", 40, 3, 79, 700);
			vitri = 0;
			gotoXY(55, y);
			goto TEN;
		}
		if (((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z')) && (vitri < 3))
		{
			phai[vitri] = char(key);
			phai[vitri] = toupper(phai[vitri]);
			cout << phai[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(74 + vitri, y);
			cout << " ";
			phai[vitri]='/0';
			strcpy(sv[dem].phai,phai);
			gotoXY(74 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			phai[vitri] = '\0';
			strcpy(sv[dem].phai,phai);
			if(check_phai(sv[dem].phai)==0){
			GhiChu("Gioi Tinh phai la Nam/Nu!", 35, 27, 79, 500); continue;	
			}
			else{
			vitri = strlen(sdt);
			gotoXY(81 + vitri, y);
			goto SDT;	
			}
		}
		if(key==F2 && dem > 0){
			gotoXY(17,25);cout<<"                                                                                                  ";
			gotoXY(17,26);cout<<"                                                                                                  ";
			gotoXY(17,27);cout<<"                                                                                                  ";
			Khung_Nhap_MSSV();
			vitri=0;
			char mssv[0]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if(key== ENTER && vitri != 0){
					
					system("cls");
					in_mang_tam_SV(sv,dem,trang,tongtrang);
					sua_mang_tam_SV(DSSV,sv,dem,mssv,malop);
					system("cls");
					in_mang_tam_SV(sv,dem,trang,tongtrang);
					vitri=0;
					goto MSSV;
				}
			}
			}
		if(key==F3 && dem > 0){
			gotoXY(17,25);cout<<"                                                                                                  ";
			gotoXY(17,26);cout<<"                                                                                                  ";
			gotoXY(17,27);cout<<"                                                                                                  ";
			Khung_Nhap_MSSV();
			vitri=0;
			char mssv[0]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if (key == ENTER && vitri != 0){
					int checkxoa=0;
					for(int i = 0 ; i<dem;i++)
					{
						if(strcmp(sv[i].ma_sv,mssv)==0)
						{
							for(int j = i+1;j<dem;j++)
							{
								sv[j-1]=sv[j];
							}
							dem--;
							checkxoa=1;
						}
					}
					if(checkxoa=1)
					{
						GhiChu("Xoa thanh cong ! ",45,3,79,700);
						system("cls");
						Khung_Them_SV();
						in_mang_tam_SV(sv,dem,trang,tongtrang);
						 khoa[5]={},ho[0]={},ten[0]={},phai[0]={},sdt[0]={};
						vitri=0;
						goto MSSV;
					}
					else continue ;
				}
			}
		}
		if (key == ESC)
		{
			
			system("cls"); 	return;
		}
		if (key == LEFT)
		{
			sv[dem].phai[vitri] = '\0';
			vitri = strlen(ten);
			gotoXY(55 + vitri, y);
			goto TEN;
		}
		if (key == RIGHT)
		{
			phai[vitri] = '\0';
			strcpy(sv[dem].phai,phai);
			if(check_phai(sv[dem].phai)==0){
			GhiChu("Gioi Tinh phai la Nam/Nu!", 35, 27, 79, 500); continue;	
			}
			else{
			vitri = strlen(sdt);
			gotoXY(81 + vitri, y);
			goto SDT;	
			}
		}
		if (( key == DOWN) && trang < tongtrang - 1) { trang++; }
		if ((key == UP) && trang > 0) { trang--; }
	}
SDT :	
	while (1)
	{
		TextColor(252);
		gotoXY(20, 27); cout << "    SO DIEN THOAI: GOM CAC KI TU (0-9), TOI DA: 11 KI TU                                ";
		TextColor(14); gotoXY(81 + vitri, y);
		key = GetKey();
		if (sv[dem].phai[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Phai!", 35, 27, 79, 700);
			vitri = 0;
			gotoXY(74, y);
			goto PHAI;
		}
		if ((key <= '9' && key >= '0') && (vitri < 11))
		{
			sdt[vitri] = char(key);
			sdt[vitri]  = toupper(sdt[vitri] );
			cout << sdt[vitri] ;
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(81 + vitri, y);
			cout << " ";
			sdt[vitri]='\0';
			strcpy(sv[dem].sdt,sdt);
			gotoXY(81 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			sdt[vitri] = '\0';
			strcpy(sv[dem].sdt,sdt);
			vitri = strlen(khoa);
			gotoXY(96 + vitri, y);
			goto KHOA;
		}
		if(key==F2 && dem > 0){
			gotoXY(17,25);cout<<"                                                                                                  ";
			gotoXY(17,26);cout<<"                                                                                                  ";
			gotoXY(17,27);cout<<"                                                                                                  ";
			Khung_Nhap_MSSV();
			vitri=0;
			char mssv[0]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU                       ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if(key== ENTER && vitri != 0){
					
					system("cls");
					in_mang_tam_SV(sv,dem,trang,tongtrang);
					sua_mang_tam_SV(DSSV,sv,dem,mssv,malop);
					system("cls");
					in_mang_tam_SV(sv,dem,trang,tongtrang);
					vitri=0;
					goto MSSV;
				}
			}
			}
		if (key == ESC)
		{
			system("cls");	return;
		}
		if(key==F3 && dem > 0){
			gotoXY(17,25);cout<<"                                                                                                  ";
			gotoXY(17,26);cout<<"                                                                                                  ";
			gotoXY(17,27);cout<<"                                                                                                  ";
			Khung_Nhap_MSSV();
			vitri=0;
			char mssv[0]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if (key == ENTER && vitri != 0){
					int checkxoa=0;
					for(int i = 0 ; i<dem;i++)
					{
						if(strcmp(sv[i].ma_sv,mssv)==0)
						{
							for(int j = i+1;j<dem;j++)
							{
								sv[j-1]=sv[j];
							}
							dem--;
							checkxoa=1;
						}
					}
					if(checkxoa=1)
					{
						GhiChu("Xoa thanh cong ! ",45,3,79,700);
						system("cls");
						Khung_Them_SV();
						in_mang_tam_SV(sv,dem,trang,tongtrang);
						 khoa[5]={},ho[0]={},ten[0]={},phai[0]={},sdt[0]={};
						vitri=0;
						goto MSSV;
					}
					else continue ;
				}
			}
		}
		if (key == LEFT)
		{
			sdt[vitri] = '\0';
			vitri = strlen(phai);
			gotoXY(74 + vitri, y);
			goto PHAI;
		}
		if (key == RIGHT && vitri != 0)
		{
			sv[dem].sdt[vitri] = '\0';
			vitri = strlen(khoa);
			gotoXY(96 + vitri, y);
			goto KHOA;
		}
		if (( key == DOWN) && trang < tongtrang - 1) { trang++; }
		if ((key == UP) && trang > 0) { trang--; }
	}
KHOA :
	while(1)
	{
		TextColor(252);
		gotoXY(20, 27); cout << "      NIEN KHOA: GOM CAC KI TU (0-9), TOI DA:  4 KI TU                             ";
		TextColor(14); gotoXY(96 + vitri, y);
		key = GetKey();
		if (sv[dem].sdt[0] == '\0')
		{
			GhiChu("Ban Chua Nhap SDT!", 35, 27, 79, 700);
			vitri = 0;
			gotoXY(81, y);
			goto SDT;
		}
		if ((key <= '9' && key >= '0') && (vitri < 4))
		{
			khoa[vitri] = char(key);
			khoa[vitri]   = toupper(khoa[vitri]  );
			cout << khoa[vitri]  ;
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(96 + vitri, y);
			cout << " ";
			khoa[vitri] ='\0';
			sv[dem].nam_nhap_hoc = atoi(khoa);
			gotoXY(96 + vitri, y);
		}
		if(key==F2 && dem > 0){
			gotoXY(17,25);cout<<"                                                                                                  ";
			gotoXY(17,26);cout<<"                                                                                                  ";
			gotoXY(17,27);cout<<"                                                                                                  ";
			Khung_Nhap_MSSV();
			vitri=0;
			char mssv[0]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if(key== ENTER && vitri != 0){
					
					system("cls");
					in_mang_tam_SV(sv,dem,trang,tongtrang);
					sua_mang_tam_SV(DSSV,sv,dem,mssv,malop);
					system("cls");
					in_mang_tam_SV(sv,dem,trang,tongtrang);
					vitri=0;
					goto MSSV;
				}
			}
			}
		if (key == ENTER && vitri != 0)
		{
			khoa[vitri] = '\0';
			sv[dem].nam_nhap_hoc = atoi(khoa);
			check_change=true;
			dem++;
			system("cls");
			in_mang_tam_SV(sv,dem,trang,tongtrang);
			vitri=0;
			gotoXY(25 + vitri, y);
			goto START;
		}
		if (key == ESC)
		{
			system("cls");	return;
		}
		if(key==F3 && dem > 0){
			gotoXY(17,25);cout<<"                                                                                                  ";
			gotoXY(17,26);cout<<"                                                                                                  ";
			gotoXY(17,27);cout<<"                                                                                                  ";
			Khung_Nhap_MSSV();
			vitri=0;
			char mssv[0]={};
			while(1)
			{
				TextColor(252);				//Chu thich
				gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
				TextColor(14);
				gotoXY(61 + vitri, 26);
				key = GetKey();
				if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
				{
					mssv[vitri] = char(key);
					mssv[vitri] = toupper(	mssv[vitri]);
					cout <<mssv[vitri];
					vitri++;
				}
				if (key == BACKSPACE && vitri > 0)
				{
					vitri--;
					gotoXY(61 + vitri, 26);
					cout << " ";
					mssv[vitri]='\0';
					gotoXY(61 + vitri, 26);
				}
				if (key == ENTER && vitri != 0){
					int checkxoa=0;
					for(int i = 0 ; i<dem;i++)
					{
						if(strcmp(sv[i].ma_sv,mssv)==0)
						{
							for(int j = i+1;j<dem;j++)
							{
								sv[j-1]=sv[j];
							}
							dem--;
							checkxoa=1;
						}
					}
					if(checkxoa=1)
					{
						GhiChu("Xoa thanh cong ! ",45,3,79,700);
						system("cls");
						Khung_Them_SV();
						in_mang_tam_SV(sv,dem,trang,tongtrang);
						 khoa[5]={},ho[0]={},ten[0]={},phai[0]={},sdt[0]={};
						vitri=0;
						goto MSSV;
					}
					else continue ;
				}
			}
		}
		if (key == LEFT)
		{
			khoa[vitri] = '\0';
			strlen(sv[dem].sdt);
			gotoXY(81 + vitri, y);
			goto SDT;
		}
		if (( key == DOWN) && trang < tongtrang - 1) { trang++; }
		if ((key == UP) && trang > 0) { trang--; }	
	}
}
void in_mang_tam_SV(SINH_VIEN sv[],int dem,int trang,int tongtrang)
{
	
	Khung_Xuat_SV();
	int demdong=1;
	if (dem < 15)
	{
		tongtrang = 1;
		trang = 0;
	}
	else {
		tongtrang = ((dem - 1) / 15 + 1);
	}
	if(dem>15) trang++;
	for (int i = trang * 15; i < 15 + trang * 15 && i < dem; i++)
	{
		TextColor(12); gotoXY(20, 6 + demdong); cout << (i + 1);
		TextColor(14);
		gotoXY(25, 6 + demdong); cout << sv[i].ma_sv;
		gotoXY(43, 6 + demdong); cout << sv[i].ho;
		gotoXY(57, 6 + demdong); cout << sv[i].ten;
		gotoXY(74, 6 + demdong); cout << sv[i].phai;
		gotoXY(82, 6 + demdong); cout << sv[i].sdt;
		gotoXY(96, 6 + demdong); cout << sv[i].nam_nhap_hoc;
		demdong++;
	}
	HienThiTrang(trang + 1, tongtrang, 88, 23);
	
}
void in_mang_tam_SV_1(SINH_VIEN* sv[],int dem,int trang,int tongtrang)
{
	
	Khung_Xuat_SV();
	int demdong=1;
	if (dem < 15)
	{
		tongtrang = 1;
		trang = 0;
	}
	else {
		tongtrang = ((dem - 1) / 15 + 1);
	}
	if(dem>15) trang++;
	for (int i = trang * 15; i < 15 + trang * 15 && i < dem; i++)
	{
		TextColor(12); gotoXY(20, 6 + demdong); cout << (i + 1);
		TextColor(14);
		gotoXY(25, 6 + demdong); cout << sv[i]->ma_sv;
		gotoXY(43, 6 + demdong); cout << sv[i]->ho;
		gotoXY(57, 6 + demdong); cout << sv[i]->ten;
		gotoXY(74, 6 + demdong); cout << sv[i]->phai;
		gotoXY(82, 6 + demdong); cout << sv[i]->sdt;
		gotoXY(96, 6 + demdong); cout << sv[i]->nam_nhap_hoc;
		demdong++;
	}
	HienThiTrang(trang + 1, tongtrang, 88, 23);
	
}
void sua_mang_tam_SV(DS_SINH_VIEN DSSV,SINH_VIEN sv[],int dem,char mssv[],char malop[])
{
	int key,y=26,vitri=0;
	for(int i=0;i<dem;i++)
	{
		if(strcmp(sv[i].ma_sv,mssv)==0){
			gotoXY(25, 26); cout <<sv[i].ma_sv;
			gotoXY(40, 26); cout << sv[i].ho;
			gotoXY(55, 26); cout << sv[i].ten;
			gotoXY(74, 26); cout << sv[i].phai;
			gotoXY(81, 26); cout << sv[i].sdt;
			gotoXY(96, 26); cout << sv[i].nam_nhap_hoc;
			dem=i;
		}
		if(strcmp(sv[i].ma_sv,mssv)>0)
		{
			GhiChu("Sinh vien khong ton tai ! ",45,3,79,700);
			return;
		}
	}	
	char khoa[5]={};
	strcpy(sv[dem].ma_lop,malop);
	itoa(sv[dem].nam_nhap_hoc,khoa,10);
	Khung_Them_SV();
	gotoXY(17,1);cout<<"Lop : "<<sv[dem].ma_lop;
	vitri=strlen(sv[dem].ho);

HO:
	while (1)
	{
		TextColor(252);			//Chu thich
		gotoXY(35, 27); cout << "      HO: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU       ";
		TextColor(14);
		
		gotoXY(40 + vitri, y);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z')  || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			sv[dem].ho[vitri] = char(key);
			sv[dem].ho[vitri] = toupper(sv[dem].ho[vitri]);
			cout << sv[dem].ho[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(40 + vitri, y);
			cout << " ";
			sv[dem].ho[vitri]='\0';
			gotoXY(40 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			if (sv[dem].ho[vitri-1] == ' ') { vitri--; }//KT khi enter truoc do co phai khoang trang
			sv[dem].ho[vitri] = '\0';
			vitri = strlen(sv[dem].ten);
			gotoXY(55 + vitri, y);
			goto TEN;
		}
		
		if (key == ESC)
		{
		
				return;
		}
		if (key == RIGHT)
		{
			if (sv[dem].ho[vitri-1] == ' ') { vitri--; }//KT khi enter truoc do co phai khoang trang
			sv[dem].ho[vitri] = '\0';
			vitri = strlen(sv[dem].ten);
			gotoXY(55 + vitri, y);
			goto TEN;
		}
	}
TEN:
	while (1)
	{
		TextColor(252);			//Chu thich
		gotoXY(35, 27); cout << "          TEN: GOM CAC KI TU (A-Z), TOI DA: 20 KI TU           ";
		TextColor(14); gotoXY(55 + vitri, y);
		key = GetKey();
		if (sv[dem].ho[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Ho!", 35, 27, 79, 700);
			vitri = 0;
			gotoXY(40, y);
			goto HO;
		}
		if (((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z')) && (vitri < 20))
		{
			sv[dem].ten[vitri] = char(key);
			sv[dem].ten[vitri] = toupper(sv[dem].ten[vitri]);
			cout << sv[dem].ten[vitri];
			vitri++;
		}
		if (key == SPACE && sv[dem].ten[vitri - 1] != ' ' && vitri > 0 && vitri < 20)
		{
			gotoXY(55 + vitri, y);
			cout << " ";
			sv[dem].ten[vitri] = ' ';
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(55 + vitri, y);
			cout << " ";
			sv[dem].ten[vitri]='\0';
			gotoXY(55 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			sv[dem].ten[vitri] = '\0';
			vitri = strlen(sv[dem].phai);
			gotoXY(74 + vitri, y);
			goto PHAI;
		}
		if (key == ESC)
		{
			system("cls");	return;
		}
		if (key == LEFT)
		{
			sv[dem].ten[vitri] = '\0';
			vitri = strlen(sv[dem].ho);
			gotoXY(40 + vitri, y);
			goto HO;
		}
		if (key == RIGHT)
		{
			sv[dem].ten[vitri]= '\0';
			vitri = strlen(sv[dem].phai);
			gotoXY(74 + vitri, y);
			goto PHAI;
		}
	}
PHAI:
	while (1)
	{
		TextColor(252);			//Chu thich
		gotoXY(35, 27); cout << "      PHAI: GOM CAC KI TU (A-Z) - NAM/NU, TOI DA: 3 KI TU       ";
		TextColor(14); gotoXY(74 + vitri, y);
		key = GetKey();
		if (sv[dem].ten[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Ten!", 40, 3, 79, 700);
			vitri = 0;
			gotoXY(55, y);
			goto TEN;
		}
		if (((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z')) && (vitri < 3))
		{
			sv[dem].phai[vitri] = char(key);
			sv[dem].phai[vitri]  = toupper(sv[dem].phai[vitri] );
			cout << sv[dem].phai[vitri] ;
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(74 + vitri, y);
			cout << " ";
			sv[dem].phai[vitri] ='/0';
			gotoXY(74 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			sv[dem].phai[vitri]  = '\0';
			if(check_phai(sv[dem].phai)==0){
			GhiChu("Gioi Tinh phai la Nam/Nu!", 35, 27, 79, 500); continue;	
			}
			else{
			vitri = strlen(sv[dem].sdt);
			gotoXY(81 + vitri, y);
			goto SDT;	
			}
		}
		if (key == ESC)
		{
			
			system("cls"); 	return;
		}
		if (key == LEFT)
		{
			sv[dem].phai[vitri] = '\0';
			vitri = strlen(sv[dem].ten);
			gotoXY(55 + vitri, y);
			goto TEN;
		}
		if (key == RIGHT)
		{
			sv[dem].phai[vitri] = '\0';
			if(check_phai(sv[dem].phai)==0){
			GhiChu("Gioi Tinh phai la Nam/Nu!", 35, 27, 79, 500); continue;	
			}
			else{
			vitri = strlen(sv[dem].sdt);
			gotoXY(81 + vitri, y);
			goto SDT;	
			}
		}
	}
SDT :	
	while (1)
	{
		TextColor(252);
		gotoXY(20, 27); cout << "      SO DIEN THOAI: GOM CAC KI TU (0-9), TOI DA: 11 KI TU                                  ";
		TextColor(14); gotoXY(81 + vitri, y);
		key = GetKey();
		if (sv[dem].phai[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Phai!", 35, 27, 79, 700);
			vitri = 0;
			gotoXY(74, y);
			goto PHAI;
		}
		if ((key <= '9' && key >= '0') && (vitri < 11))
		{
			sv[dem].sdt[vitri] = char(key);
			sv[dem].sdt[vitri] = toupper(sv[dem].sdt[vitri]);
			cout << sv[dem].sdt[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(81 + vitri, y);
			cout << " ";
			sv[dem].sdt[vitri]='\0';
			gotoXY(81 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			sv[dem].sdt[vitri]= '\0';
			vitri = dem_ki_tu_so_nguyen(sv[dem].nam_nhap_hoc)+1;
			gotoXY(96 + vitri, y);
			goto KHOA;
		}
		if (key == ESC)
		{
			system("cls");	return;
		}
		if (key == LEFT)
		{
			sv[dem].sdt[vitri]= '\0';
			vitri = strlen(sv[dem].phai);
			gotoXY(74 + vitri, y);
			goto PHAI;
		}
		if (key == RIGHT && vitri != 0)
		{
			sv[dem].sdt[vitri] = '\0';
			vitri = dem_ki_tu_so_nguyen(sv[dem].nam_nhap_hoc)+1;
			gotoXY(96 + vitri, y);
			goto KHOA;
		}
	}
KHOA :
	while(1)
	{
		TextColor(252);
		gotoXY(20, 27); cout << "      NIEN KHOA: GOM CAC KI TU (0-9), TOI DA:  4 KI TU                                  ";
		TextColor(14); gotoXY(96 + vitri, y);
		key = GetKey();
		if (sv[dem].sdt[0] == '\0')
		{
			GhiChu("Ban Chua Nhap SDT!", 35, 27, 79, 700);
			vitri = 0;
			gotoXY(81, y);
			goto SDT;
		}
		if ((key <= '9' && key >= '0') && (vitri < 4))
		{
			khoa[vitri] = char(key);
			khoa[vitri]   = toupper(khoa[vitri]  );
			cout << khoa[vitri]  ;
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(96 + vitri, y);
			cout << " ";
			khoa[vitri] ='\0';
			sv[dem].nam_nhap_hoc = atoi(khoa);
			gotoXY(96 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			khoa[vitri] = '\0';
			sv[dem].nam_nhap_hoc = atoi(khoa);
			vitri=0;
			return;
		}
		if (key == ESC)
		{
			system("cls");	return;
		}
		if (key == LEFT)
		{
			khoa[vitri] = '\0';
			vitri = strlen(sv[dem].sdt);
			gotoXY(81 + vitri, y);
			goto SDT;
		}
	}
}
void them_SV(DS_SINH_VIEN &DSSV,bool &check_change,char malop[],int &sl)
{
	ShowCur(true);
	int trang = 0, tongtrang = 0;
	int key;
	int check_trung;
	int x = 25, y = 26, vitri = 0, dem=0;
	char khoa[5]={};
	SINH_VIEN *sv = khoi_tao_sv(); // tao 1 con tro
	strcpy(sv->ma_lop,malop); // gan ma lop vao truoc
	sv->sdt[0]=NULL;// cho sdt = null de dinh vi vi tri 
	gotoXY(17,1);cout<<"Lop : "<<sv->ma_lop;
	gotoXY(25,26);
	Khung_Them_SV();
MSSV:
	while (1)
	{
		TextColor(252);				//Chu thich
		gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
		TextColor(14);
		gotoXY(25 + vitri, y);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			sv->ma_sv[vitri] = char(key);
			sv->ma_sv[vitri]= toupper(sv->ma_sv[vitri]);
			cout << sv->ma_sv[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(25 + vitri, y);
			cout << " ";
			sv->ma_sv[vitri]='\0';
			gotoXY(25 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			
			sv->ma_sv[vitri]= '\0';
//			int checkmasv = check_sv(DSSV,malop,sv->ma_sv);//check mssv trong lop ton tai chua
			int checkmasv=check_sv_khac_lop(DSSV,sv->ma_sv);//check ngoai lop ( co the bo o tren)
			if(checkmasv==1){
				GhiChu("MSSV da ton tai !",45,3,79,700);
				continue;
			}
			else{
				vitri = strlen(sv->ho);
				gotoXY(40 + vitri, y);
				goto HO;
			}		
		}
		if (key == ESC)
		{
			return;
		}
		if (key == RIGHT)
		{
			sv->ma_sv[vitri]= '\0';
//			int checkmasv = check_sv(DSSV,malop,sv->ma_sv);
			int checkmasv=check_sv_khac_lop(DSSV,sv->ma_sv);//check ngoai lop ( co the bo o tren)
			if(checkmasv==1){
				GhiChu("MSSV da ton tai !",45,3,79,700);
				continue;
			}
			else{
				vitri = strlen(sv->ho);
				gotoXY(40 + vitri, y);
				goto HO;
			}	
		}

	}
HO :
	while (1)
	{
		TextColor(252);			//Chu thich
		gotoXY(35, 27); cout << "      HO: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU       ";
		TextColor(14);
		gotoXY(40 + vitri, y);
		key = GetKey();
		if (sv->ma_sv[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Ma Sinh Vien!", 40, 3, 79, 700);
			vitri = 0;
			gotoXY(25, y);
			goto MSSV;
		}
		if (((key >= 'A' && key <= 'Z')  || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			sv->ho[vitri] = char(key);
			sv->ho[vitri] = toupper(sv->ho[vitri]);
			cout << sv->ho[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(40 + vitri, y);
			cout << " ";
			sv->ho[vitri]='\0';
			gotoXY(40 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			if (sv->ho[vitri-1] == ' ') { vitri--; }//KT khi enter truoc do co phai ksv->hoang trang
			sv->ho[vitri] = '\0';
			vitri = strlen(sv->ten);
			gotoXY(55 + vitri, y);
			goto TEN;
		}
		
		if (key == ESC)
		{
		
			return;
		}
		if (key == LEFT)
		{
			sv->ho[vitri] = '\0';
			vitri = strlen(sv->ma_sv);
			gotoXY(25 + vitri, y);
			goto MSSV;
		}
		if (key == RIGHT)
		{
			if (sv->ho[vitri-1] == ' ') { vitri--; }//KT khi enter truoc do co phai ksv->hoang trang
			sv->ho[vitri] = '\0';
			vitri = strlen(sv->ten);
			gotoXY(55 + vitri, y);
			goto TEN;
		}
	}
TEN:
	while (1)
	{
		TextColor(252);			//Chu thich
		gotoXY(35, 27); cout << "         TEN: GOM CAC KI TU (A-Z), TOI DA: 20 KI TU           ";
		TextColor(14); gotoXY(55 + vitri, y);
		key = GetKey();
		if (sv->ho[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Ho!", 35, 27, 79, 700);
			vitri = 0;
			gotoXY(40, y);
			goto HO;
		}
		if (((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z')) && (vitri < 20))
		{
			sv->ten[vitri] = char(key);
			sv->ten[vitri] = toupper(sv->ten[vitri]);
			cout << sv->ten[vitri];
			vitri++;
		}
		if (key == SPACE && sv->ten[vitri - 1] != ' ' && vitri > 0 && vitri < 20)
		{
			gotoXY(55 + vitri, y);
			cout << " ";
			sv->ten[vitri] = ' ';
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(55 + vitri, y);
			cout << " ";
			sv->ten[vitri]='\0';
			gotoXY(55 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			sv->ten[vitri] = '\0';
			vitri = strlen(sv->phai);
			gotoXY(74 + vitri, y);
			goto PHAI;
		}
		if (key == ESC)
		{
			return;
		}
		if (key == LEFT)
		{
			sv->ten[vitri] = '\0';
			vitri = strlen(sv->ho);
			gotoXY(40 + vitri, y);
			goto HO;
		}
		if (key == RIGHT)
		{
			sv->ten[vitri] = '\0';
			vitri = strlen(sv->phai);
			gotoXY(74 + vitri, y);
			goto PHAI;
		}
	}
PHAI:
	while (1)
	{
		TextColor(252);			//Chu thich
		gotoXY(35, 27); cout << "     PHAI: GOM CAC KI TU (A-Z) - NAM/NU, TOI DA: 3 KI TU      ";
		TextColor(14); gotoXY(74 + vitri, y);
		key = GetKey();
		if (sv->ten[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Ten!", 40, 3, 79, 700);
			vitri = 0;
			gotoXY(55, y);
			goto TEN;
		}
		if (((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z')) && (vitri < 3))
		{
			sv->phai[vitri] = char(key);
			sv->phai[vitri] = toupper(sv->phai[vitri]);
			cout << sv->phai[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(74 + vitri, y);
			cout << " ";
			sv->phai[vitri]='/0';
			gotoXY(74 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			sv->phai[vitri] = '\0';
			// check phai phai la NAM hoac NU
			if(check_phai(sv->phai)==0){
			GhiChu("Gioi Tinh phai la Nam/Nu!", 35, 27, 79, 500); continue;	
			}
			else{
			vitri = strlen(sv->sdt);
			gotoXY(81 + vitri, y);
			goto SDT;	
			}
		}
		if (key == ESC)
		{
			
			system("cls"); 	return;
		}
		if (key == LEFT)
		{
			sv->phai[vitri] = '\0';
			vitri = strlen(sv->ten);
			gotoXY(55 + vitri, y);
			goto TEN;
		}
		if (key == RIGHT)
		{
			sv->phai[vitri] = '\0';
			if(check_phai(sv->phai)==0){
			GhiChu("Gioi Tinh phai la Nam/Nu!", 35, 27, 79, 500); continue;	
			}
			else{
			vitri = strlen(sv->sdt);
			gotoXY(81 + vitri, y);
			goto SDT;	
			}
		}
	}
SDT :	
	while (1)
	{
		TextColor(252);
		gotoXY(20, 27); cout << "     SO DIEN THOAI: GOM CAC KI TU (0-9), TOI DA: 11 KI TU                            ";
		TextColor(14); gotoXY(81 + vitri, y);
		key = GetKey();
		if (sv->phai[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Phai!", 35, 27, 79, 700);
			vitri = 0;
			gotoXY(74, y);
			goto PHAI;
		}
		if ((key <= '9' && key >= '0') && (vitri < 11))
		{
			sv->sdt[vitri] = char(key);
			sv->sdt[vitri]  = toupper(sv->sdt[vitri] );
			cout << sv->sdt[vitri] ;
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(81 + vitri, y);
			cout << " ";
			sv->sdt[vitri]='\0';
			gotoXY(81 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			sv->sdt[vitri] = '\0';
			vitri = strlen(khoa);
			gotoXY(96 + vitri, y);
			goto KHOA;
		}
		if (key == ESC)
		{
	     	return;
		}
		if (key == LEFT)
		{
			sv->sdt[vitri] = '\0';
			vitri = strlen(sv->phai);
			gotoXY(74 + vitri, y);
			goto PHAI;
		}
		if (key == RIGHT && vitri != 0)
		{
			sv->sdt[vitri] = '\0';
			
			vitri = strlen(khoa);
			gotoXY(96 + vitri, y);
			goto KHOA;
		}
	}
KHOA :
	while(1)
	{
		TextColor(252);
		gotoXY(20, 27); cout << "      NIEN KHOA: GOM CAC KI TU (0-9), TOI DA:  4 KI TU                            ";
		TextColor(14); gotoXY(96 + vitri, y);
		key = GetKey();
		if (sv->sdt[0] == '\0')
		{
			GhiChu("Ban Chua Nhap SDT!", 35, 27, 79, 700);
			vitri = 0;
			gotoXY(81, y);
			goto SDT;
		}
		if ((key <= '9' && key >= '0') && (vitri < 4))
		{
			khoa[vitri] = char(key);
			khoa[vitri]   = toupper(khoa[vitri]  );
			cout << khoa[vitri]  ;
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(96 + vitri, y);
			cout << " ";
			khoa[vitri] ='\0';
			sv->nam_nhap_hoc = atoi(khoa);
			gotoXY(96 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			khoa[vitri] = '\0';
			sv->nam_nhap_hoc = atoi(khoa);
			check_change=true;// bat co check thay doi
			them_1_sv(DSSV,sv); // sau khi nhap du thi them vao dssv
			DSSV.sl++;//tang sl
			vitri=0;//reset vitri contro
			sl++;//so luong cua mang tam mo rong de hien thi
			return;
		}
		if (key == ESC)
		{
				return;
		}
		if (key == LEFT)
		{
			khoa[vitri] = '\0';
			vitri=strlen(sv->sdt);
			gotoXY(81 + vitri, y);
			goto SDT;
		}
	}
}
void xoa_1_sv_cuoi_ds(DS_SINH_VIEN &l)
{
		if(l.phead==NULL)
		{
			return;
		}
		else
		{
			for(SINH_VIEN *k=l.phead; k!=NULL;k=k->pnext)
			{
				if(k->pnext->pnext==NULL)
				{
					SINH_VIEN *g=k->pnext;
					delete g;
					k->pnext=NULL;
					return;
				}
			}
		}
}
void xoa_1_sv_dau_ds(DS_SINH_VIEN &l)
{
		if(l.phead==NULL)
		{
			return;
		}
		else
		{
			SINH_VIEN *k=l.phead; //k = phead, xoa k
			l.phead =l.phead->pnext;//cap nhat phead
			delete k;
		}
}
void xoa_1_sv(DS_SINH_VIEN &l, char malop[],char mssv[])
{
	if(l.phead==NULL)
	{
		return;
	}
	else{
		if(strcmp(l.phead->ma_lop,malop)==0&&strcmp(l.phead->ma_sv,mssv)==0)
		{
			xoa_1_sv_dau_ds(l);
		}
		else
		{
			SINH_VIEN *q;
		
			for(SINH_VIEN *k=l.phead;k!=NULL;k=k->pnext)
			{
				if(strcmp(k->ma_lop,malop)==0&&(strcmp(k->ma_sv,mssv)==0))
				{
					q->pnext=k->pnext;
					delete k;
				}
				q=k;
			}
		}
	}
}
void sua_Sinh_Vien(DS_SINH_VIEN &DSSV,SINH_VIEN *sv,char mssv[],char malop[],bool &checkchange)
{
	int key,y=26,vitri=0;
	char khoa[5]={};
	strcpy(sv->ma_lop,malop);
	itoa(sv->nam_nhap_hoc,khoa,10);
	Khung_Them_SV();
	gotoXY(17,1);cout<<"Lop : "<<sv->ma_lop;
	vitri=strlen(sv->ho);

HO:
	while (1)
	{
		TextColor(252);			//Chu thich
		gotoXY(35, 27); cout << "           HO: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU              ";
		TextColor(14);
		
		gotoXY(40 + vitri, y);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z')  || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			sv->ho[vitri] = char(key);
			sv->ho[vitri] = toupper(sv->ho[vitri]);
			cout << sv->ho[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(40 + vitri, y);
			cout << " ";
			sv->ho[vitri]='\0';
			gotoXY(40 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			if (sv->ho[vitri-1] == ' ') { vitri--; }//KT khi enter truoc do co phai khoang trang
			sv->ho[vitri] = '\0';
			vitri = strlen(sv->ten);
			gotoXY(55 + vitri, y);
			goto TEN;
		}
		
		if (key == ESC)
		{
		
				return;
		}
		if (key == RIGHT)
		{
			if (sv->ho[vitri-1] == ' ') { vitri--; }//KT khi enter truoc do co phai khoang trang
			sv->ho[vitri] = '\0';
			vitri = strlen(sv->ten);
			gotoXY(55 + vitri, y);
			goto TEN;
		}
	}
TEN:
	while (1)
	{
		TextColor(252);			//Chu thich
		gotoXY(35, 27); cout << "                 TEN: GOM CAC KI TU (A-Z), TOI DA: 20 KI TU               ";
		TextColor(14); gotoXY(55 + vitri, y);
		key = GetKey();
		if (sv->ho[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Ho!", 35, 27, 79, 700);
			vitri = 0;
			gotoXY(40, y);
			goto HO;
		}
		if (((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z')) && (vitri < 20))
		{
			sv->ten[vitri] = char(key);
			sv->ten[vitri] = toupper(sv->ten[vitri]);
			cout << sv->ten[vitri];
			vitri++;
		}
		if (key == SPACE && sv->ten[vitri - 1] != ' ' && vitri > 0 && vitri < 20)
		{
			gotoXY(55 + vitri, y);
			cout << " ";
			sv->ten[vitri] = ' ';
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(55 + vitri, y);
			cout << " ";
			sv->ten[vitri]='\0';
			gotoXY(55 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			sv->ten[vitri] = '\0';
			vitri = strlen(sv->phai);
			gotoXY(74 + vitri, y);
			goto PHAI;
		}
		if (key == ESC)
		{
			system("cls");	return;
		}
		if (key == LEFT)
		{
			sv->ten[vitri] = '\0';
			vitri = strlen(sv->ho);
			gotoXY(40 + vitri, y);
			goto HO;
		}
		if (key == RIGHT)
		{
			sv->ten[vitri]= '\0';
			vitri = strlen(sv->phai);
			gotoXY(74 + vitri, y);
			goto PHAI;
		}
	}
PHAI:
	while (1)
	{
		TextColor(252);			//Chu thich
		gotoXY(35, 27); cout << "            PHAI: GOM CAC KI TU (A-Z) - NAM/NU, TOI DA: 3 KI TU           ";
		TextColor(14); gotoXY(74 + vitri, y);
		key = GetKey();
		if (sv->ten[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Ten!", 40, 3, 79, 700);
			vitri = 0;
			gotoXY(55, y);
			goto TEN;
		}
		if (((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z')) && (vitri < 3))
		{
			sv->phai[vitri] = char(key);
			sv->phai[vitri]  = toupper(sv->phai[vitri] );
			cout << sv->phai[vitri] ;
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(74 + vitri, y);
			cout << " ";
			sv->phai[vitri] ='/0';
			gotoXY(74 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			sv->phai[vitri]  = '\0';
			if(check_phai(sv->phai)==0){
			GhiChu("Gioi Tinh phai la Nam/Nu!", 35, 27, 79, 500); continue;	
			}
			else{
			vitri = strlen(sv->sdt);
			gotoXY(81 + vitri, y);
			goto SDT;	
			}
		}
		if (key == ESC)
		{
			
			system("cls"); 	return;
		}
		if (key == LEFT)
		{
			sv->phai[vitri] = '\0';
			vitri = strlen(sv->ten);
			gotoXY(55 + vitri, y);
			goto TEN;
		}
		if (key == RIGHT)
		{
			sv->phai[vitri] = '\0';
			if(check_phai(sv->phai)==0){
			GhiChu("Gioi Tinh phai la Nam/Nu!", 35, 27, 79, 500); continue;	
			}
			else{
			vitri = strlen(sv->sdt);
			gotoXY(81 + vitri, y);
			goto SDT;	
			}
		}
	}
SDT :	
	while (1)
	{
		TextColor(252);
		gotoXY(20, 27); cout << "          SO DIEN THOAI: GOM CAC KI TU (0-9), TOI DA: 11 KI TU                                 ";
		TextColor(14); gotoXY(81 + vitri, y);
		key = GetKey();
		if (sv->phai[0] == '\0')
		{
			GhiChu("Ban Chua Nhap Phai!", 35, 27, 79, 700);
			vitri = 0;
			gotoXY(74, y);
			goto PHAI;
		}
		if ((key <= '9' && key >= '0') && (vitri < 11))
		{
			sv->sdt[vitri] = char(key);
			sv->sdt[vitri] = toupper(sv->sdt[vitri]);
			cout << sv->sdt[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(81 + vitri, y);
			cout << " ";
			sv->sdt[vitri]='\0';
			gotoXY(81 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			sv->sdt[vitri]= '\0';
			vitri = dem_ki_tu_so_nguyen(sv->nam_nhap_hoc)+1;
			gotoXY(96 + vitri, y);
			goto KHOA;
		}
		if (key == ESC)
		{
			system("cls");	return;
		}
		if (key == LEFT)
		{
			sv->sdt[vitri]= '\0';
			vitri = strlen(sv->phai);
			gotoXY(74 + vitri, y);
			goto PHAI;
		}
		if (key == RIGHT && vitri != 0)
		{
			sv->sdt[vitri] = '\0';
			vitri = dem_ki_tu_so_nguyen(sv->nam_nhap_hoc)+1;
			gotoXY(96 + vitri, y);
			goto KHOA;
		}
	}
KHOA :
	while(1)
	{
		TextColor(252);
		gotoXY(20, 27); cout << "              NIEN KHOA: GOM CAC KI TU (0-9), TOI DA:  4 KI TU                                  ";
		TextColor(14); gotoXY(96 + vitri, y);
		key = GetKey();
		if (sv->sdt[0] == '\0')
		{
			GhiChu("Ban Chua Nhap SDT!", 35, 27, 79, 700);
			vitri = 0;
			gotoXY(81, y);
			goto SDT;
		}
		if ((key <= '9' && key >= '0') && (vitri < 4))
		{
			khoa[vitri] = char(key);
			khoa[vitri]   = toupper(khoa[vitri]  );
			cout << khoa[vitri]  ;
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(96 + vitri, y);
			cout << " ";
			khoa[vitri] ='\0';
			sv->nam_nhap_hoc = atoi(khoa);
			gotoXY(96 + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			khoa[vitri] = '\0';
			sv->nam_nhap_hoc = atoi(khoa);
			vitri=0;
			for(SINH_VIEN *k=DSSV.phead;k!=NULL;k=k->pnext)
						{
							if(strcmp(k->ma_lop,sv->ma_lop)==0&&(strcmp(k->ma_sv,sv->ma_sv)==0))//tim thay sv
							{
								sv->pnext=k->pnext;
								k=sv;
							}	
					
						}
			checkchange=true;
			GhiChu("Sua thanh cong ! ",45,3,79,700);
			return;
		}
		if (key == ESC)
		{
			system("cls");	return;
		}
		if (key == LEFT)
		{
			khoa[vitri] = '\0';
			vitri = strlen(sv->sdt);
			gotoXY(81 + vitri, y);
			goto SDT;
		}
	}
}
//========================DANG KI LTC===================================================
void ds_ltc(tree t,tree ds[] ,char nk[], int hk,int &sl)// tra ve mang ltc can tim theo nien khoa va hoc ki
{
	if(t!=NULL)
	{
		if(t->hocky==hk&&strcmp(t->nienkhoa,nk)==0)
		{
			ds[sl]=t;
			sl++;
		}
		ds_ltc(t->pleft,ds,nk,hk,sl);
		ds_ltc(t->pright,ds,nk,hk,sl);
	}
}

tree check_ma_ltc1(tree t, int ma) { //tra ve node ltc bang ma ltc
	if(t==NULL) { // duyet den cuoi
		return NULL;
	} else {
		if(t->maloptinchi==ma) {
			return t;
		}
		if(t->maloptinchi<ma) { // ma > t => pright
			check_ma_ltc1(t->pright, ma);
		} else if(t->maloptinchi>ma) { // ma < t => pleft
			check_ma_ltc1(t->pleft,ma);
		}
	}
}

//=============================== Them node vao dau dsdk ====================
void them_1_node_vao_dau_ds_ltc(tree t, DANG_KY *p) {
	if(t->danh_sach_dk.phead==NULL) {
		t->danh_sach_dk.phead=p;
	} else {
		p->pnext = t->danh_sach_dk.phead;
		t->danh_sach_dk.phead =p;
	}

}
void DocFileDSDK(DS_LOP_TIN_CHI &ds_ltc){
	ifstream infile;
	string data;
	infile.open("DSDK.txt", ios::in);
	int sldk;
	if (!infile)
	{
		GhiChu("Khong tim thay file ",40,3,70,700);
	} //Khong tim thay file
	
	while (infile.good())
	{
		
		DS_DANG_KY dsdk;
		
		int maloptinchi;
		int soluong;
		infile >> maloptinchi; 
		
		infile >> dsdk.sl; 
		if(dsdk.sl != 0)
		{
				// tim lop tin chi theo ma
			tree t = check_ma_ltc1(ds_ltc.ds, maloptinchi);
				
			for(int i = 0; i < dsdk.sl; i++)
			{
				DANG_KY *p = new dang_ky;
				p->pnext = NULL;
				getline(infile, data);
				getline(infile, data); 	
				strcpy(p->ma_sv, data.c_str());			
				infile >> p->diem; 			
				them_1_node_vao_dau_ds_ltc(t, p);
				t->danh_sach_dk.sl++;			
			}
		}
		
											
	}
		
}
dang_ky* khoi_tao_dk()
{
	dang_ky *p = new dang_ky;
	p->pnext = NULL;
	return p;
}
void them_1_node_vao_dau_ds(tree t, DANG_KY *p)
{
	if(t->danh_sach_dk.phead==NULL)
	{
		t->danh_sach_dk.phead=p;
	}
	else
	{
		p->pnext = t->danh_sach_dk.phead;
		t->danh_sach_dk.phead =p;
	}
	
}
void Sort_mang_tam_SV(SINH_VIEN sv[],int sl) {//do danh sach dk kh co thu tu nen mssv lay ra cung v can phai sort lai
	int i, j;
	SINH_VIEN temp;
	for (i = 1; i < sl; i++) {
		for (j = sl - 1; j >= i; j--) {
			if (strcmp(sv[j-1].ma_sv, sv[j].ma_sv) >0) {
				temp = sv[j - 1];
				sv[j - 1] = sv[j];
				sv[j] = temp;
			}
		}
	}
}
int dang_ky_1_LTC(tree t, char nk[], int hk, int ma_ltc, char masv[])
{
	int check=0;
	dang_ky *p=khoi_tao_dk();
	if(t!=NULL)
	{
		if(t->hocky==hk&&strcmp(t->nienkhoa,nk)==0 && ma_ltc == t->maloptinchi)
		{
				p->diem =0;
				strcpy(p->ma_sv,masv);
				them_1_node_vao_dau_ds(t, p);
				t->danh_sach_dk.sl++;
				check=1;
		}
		dang_ky_1_LTC(t->pleft,nk,hk, ma_ltc,masv);
		dang_ky_1_LTC(t->pright,nk,hk,ma_ltc,masv);
	}
	return check;
}
void Dang_Ki_LTC(tree t, DS_SINH_VIEN ds_sv)
{
	ShowCur(true);
	Khung_DK_LTC();
	gotoXY(10,4);cout<<"                                                                                                  "; //xoa man hinh
	gotoXY(10,5);cout<<"                                                                                                  ";
	gotoXY(10,6);cout<<"                                                                                                  ";
	gotoXY(40,5);cout<<"Nhap vao MSSV : ";
	khung(57,4,1,18);
	int vitri=0, key,trang = 0,tongtrang = 0,sl=0;
	int trang1=0,tongtrang1=0;
	tree ds[MAXLOP];
	tree dsdk[MAXLOP];
	for(int i=0;i<MAXLOP;i++)
	{
		ds[i] = khoi_tao_ltc();
		dsdk[i]=khoi_tao_ltc();
	}
	char mssv[11]={},nienkhoa[11]={},hocki[2]={};
	while(1)
	{
		TextColor(252);				//Chu thich
		gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
		TextColor(14);
		gotoXY(58 + vitri, 5);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			mssv[vitri] = char(key);
			mssv[vitri] = toupper(mssv[vitri]);
			cout <<mssv[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(58 + vitri, 5);
			cout << " ";
			mssv[vitri]='\0';
			gotoXY(58 + vitri, 5);
		}
		if(key == ENTER && vitri !=0)
		{
			mssv[vitri]='\0';
			int check = check_sv_khac_lop(ds_sv,mssv);
			if(check==1)
			{
				system("cls");
				vitri=0;
				break;
			}
			else{
				GhiChu("Khong tim thay MSSV ! ",45,3,79,1000);
				continue;
			}
		}
		if(key == ESC ) return;
	}
	Khung_DK_LTC();
NIENKHOA :
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "      NIEN KHOA: GOM CAC KI TU  (0-9), TOI DA: 9 KI TU          ";
		TextColor(14);
		gotoXY(38+vitri, 5);
		key = GetKey();
		if ((key <= '9' && key >= '0'||key=='-' ) && (vitri < 9))
		{
			
			nienkhoa[vitri] = char(key);
			if(nienkhoa[vitri]=='-'&&vitri!=4)continue ;
			nienkhoa[vitri] = toupper(nienkhoa[vitri]);
			cout << nienkhoa[vitri];
			vitri++;
		}
		if (key == ENTER && vitri != 0)
		{
			
			nienkhoa[vitri] = '\0';
			if(check_nien_khoa(nienkhoa)){
				GhiChu("Nien khoa phai du 9 ki tu va co nghia !", 47, 3, 79, 700);
				continue;
			}
			vitri = strlen(hocki);
			gotoXY(60 + vitri, 5);
			goto HOCKI;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(38 + vitri, 5);
			cout << " ";
			nienkhoa[vitri]='\0';
			gotoXY(38 + vitri, 5);
		}
		if (key == RIGHT)
		{
			nienkhoa[vitri] = '\0';
			if(check_nien_khoa(nienkhoa)){
				GhiChu("Nien khoa phai du 9 ki tu va co nghia !", 47, 3, 79, 700);
				continue;
			}
			vitri = strlen(hocki);
			gotoXY(60 + vitri, 5);
			goto HOCKI;
		}
		if (key == ESC)
		{
			
			return;
		}
	}
HOCKI:
	while (1)
	{
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "        HOC KI: GOM CAC KI TU  (1-9), TOI DA: 1 KI TU           ";
		TextColor(14);
		gotoXY(60 + vitri, 5); // vi tri nhap tiep theo
		key = GetKey();
		if (nienkhoa[0] == '\0')		//Kiem tra ÅEph˙} truoc cÅEdu~ lieu chua
		{
			GhiChu("Ban chua nhap Nien Khoa", 47, 3, 79, 700);
			vitri = 0;
			gotoXY(38,5);
			goto NIENKHOA;
		}
		if ((key <= '9' && key >= '1') && (vitri < 1))
		{
			hocki[vitri] = char(key);
			hocki[vitri] = toupper(hocki[vitri]);
			cout <<hocki[vitri];
			vitri++;
		}

		if (key == ENTER && vitri != 0)
		{
			hocki[vitri] = '\0';
			vitri=0;
			ds_ltc(t,ds,nienkhoa,atoi(hocki),sl);
			goto INDS ;
			
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(60 + vitri, 5);
			cout << " ";
			gotoXY(60 + vitri, 5);
		}
		if (key == LEFT)
		{
			hocki[vitri] = '\0';
			vitri = strlen(nienkhoa);
			gotoXY(38 + vitri, 5);
			goto NIENKHOA;
		}
			
		if (key == ESC)
		{
		
			return;
		}
	}
INDS :
	int dem = 0;
	
	char maLTC[4]={};
	while (1)
	{
		
		Khung_DK_LTC();
		gotoXY(38,5);cout<<nienkhoa;
		gotoXY(60,5);cout<<hocki;
		gotoXY(10,2);cout<<"MSSV :"<<mssv;
		
		if (sl == 0)
		{
			GhiChu("Chua co du lieu ", 50, 3, 79, 500);
			vitri = 1;
			goto HOCKI;
		}
		else {
			if (sl < 15)
			{
				tongtrang = 1;
				trang = 0;
			}
			else {
				tongtrang = ((sl - 1) / 15 + 1);
			}
		}
		int demdong = 0;
		int checkma=0;
		for (int i = trang * 15; i < 15 + trang * 15 && i < sl; i++)
		{
			
			TextColor(15);
			gotoXY(15, 10 + demdong); cout << ds[i]->maloptinchi;
			gotoXY(27, 10 + demdong); cout << ds[i]->ma_mh;
			gotoXY(41, 10 + demdong); cout << ds[i]->nhom;
			gotoXY(54, 10 + demdong); cout << ds[i]->so_svmax - so_luong_sv_1_LTC(t,ds[i]->maloptinchi);
			demdong++;
		}
		TextColor(244);				//Chu thich
		gotoXY(24, 28); cout << "      MA LOP TIN CHI: GOM CAC KI TU  (0-9), TOI DA: 3 KI TU       ";
		TextColor(14);
		gotoXY(83 + vitri, 5); // vi tri nhap tiep theo
		key = GetKey();
		if ((key <= '9' && key >= '0') && (vitri < 3))
		{
			maLTC[vitri] = char(key);
			maLTC[vitri] = toupper(maLTC[vitri]);
			cout <<maLTC[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(83 + vitri, 5);
			cout << " ";
			gotoXY(83 + vitri, 5);
		}
		if (key == ENTER && vitri != 0)
		{
			maLTC[vitri] = '\0';
			vitri=0;
			if(dem==15)
			{
				GhiChu("KHONG THE DANG KI THEM !",45,3,79,1000);
				continue;
			}
			for(int i=0;i<dem;i++)
			{
				if(atoi(maLTC)==dsdk[i]->maloptinchi)
				{
					GhiChu("LTC DA DANG KI !",45,3,79,1000);
					gotoXY(83, 5); cout<<"   ";
					checkma=1;
				}
			}
			if(checkma==0)
			{
				for(int i=0;i<sl;i++)
				{
					if(atoi(maLTC)==ds[i]->maloptinchi)
					{
						dsdk[dem]=ds[i];
						dem++;
						gotoXY(83, 5); cout<<"   ";
					}
				}
			}
			hienthi_DS_LTC_DK(dsdk,dem,trang1,tongtrang1);
		}
		if ((key == RIGHT || key == DOWN ) && trang < tongtrang - 1 &&vitri==0) { trang++;system("cls");gotoXY(83,5); }
		if ((key == LEFT || key==UP ) && trang > 0 && vitri ==0) { trang--;system("cls");gotoXY(83,5); }
		if(key==ESC) return;
		
		if(key==F1 &&dem >0&&vitri!=0)
		{
			maLTC[vitri] = '\0';
			vitri=0;
			for(int i=0;i<dem;i++)
				{
					if(atoi(maLTC)==dsdk[i]->maloptinchi)
					{
						dsdk[i]=dsdk[i+1];
						for(int j=i;j<dem;j++)
						{
							dsdk[j]=dsdk[j+1];	
						}
						GhiChu("XOA THANH CONG !",45,3,79,1000);
						
					}
				}
			dem--;
			gotoXY(67, 10+dem ); cout << "   ";
			gotoXY(79, 10+dem ); cout << "          ";
			gotoXY(93, 10+dem ); cout << " ";
			gotoXY(83, 5); cout<<"   ";
			hienthi_DS_LTC_DK(dsdk,dem,trang1,tongtrang1);
		}
		if(key==F2 && dem > 0)
		{
			for(int i=0;i<dem;i++)
			{
				if(kiem_tra_sv_dang_ky_LTC_2_lan(t,dsdk[i]->maloptinchi,mssv)==1)
				{
					continue;
				}
				if(dsdk[i]->so_svmax-so_luong_sv_1_LTC(t,dsdk[i]->maloptinchi)==0)
					{
						GhiChu("Lop TC DA DAY KHONG THE DANG KI !",40,3,79,1000);
						break;
					}
				else {
					dang_ky_1_LTC(t,nienkhoa,atoi(hocki),dsdk[i]->maloptinchi,mssv);
					gotoXY(106,10+i);cout<<"X";
					GhiChu("LUU DANG KI LOP TIN CHI THANH CONG ! ",40,3,79,200);
					
				} 
			}
			GhiFileDSDK(t);
			GhiChu("LUU DANG KI LOP TIN CHI THANH CONG ! ",40,3,79,1000);
		}
	}	
}
int so_luong_sv_1_LTC(tree t, int maltc)
{
	if(t!=NULL)
	{
		if(t->maloptinchi == maltc)
		{
			int dem =0;
			for(DANG_KY *k = t->danh_sach_dk.phead;k!=NULL;k=k->pnext)
			{
				dem++;
			}
			return dem;
		}
		so_luong_sv_1_LTC(t->pleft, maltc);
		so_luong_sv_1_LTC(t->pright,maltc);
	}

	
}
int kiem_tra_sv_dang_ky_LTC_2_lan(tree t,int maltc, char masv[])
{
	if(t!=NULL)
	{
		if(t->maloptinchi == maltc)
		{
			for(DANG_KY *k = t->danh_sach_dk.phead;k!=NULL;k=k->pnext)
			{
				if(strcmp(k->ma_sv,masv)==0)
				{
					return 1; //sv da ton tai
				}
			}
		}
		kiem_tra_sv_dang_ky_LTC_2_lan(t->pleft,maltc,masv);
		kiem_tra_sv_dang_ky_LTC_2_lan(t->pright,maltc,masv);
	}
}
float diem_sv_LTC(tree t,int maltc, char masv[])
{
	if(t!=NULL)
	{
		if(t->maloptinchi == maltc)
		{
			for(DANG_KY *k = t->danh_sach_dk.phead;k!=NULL;k=k->pnext)
			{
				if(strcmp(k->ma_sv,masv)==0)
				{
					return k->diem;
				}
			}
		}
		diem_sv_LTC(t->pleft,maltc,masv);
		diem_sv_LTC(t->pright,maltc,masv);
	}
}
void hienthi_DS_LTC_DK(tree ds[],int dem,int trang,int tongtrang)
{

		if (dem < 15)
		{
			tongtrang = 1;
			trang = 0;
		}
		else {
			tongtrang = ((dem - 1) / 15 + 1);
		}
		
		int demdong = 0;
		int checkma=0;
		for (int i = trang * 15; i < 15 + trang * 15 && i < dem; i++)
		{
			
			TextColor(14);
			gotoXY(67, 10 + demdong); cout << ds[i]->maloptinchi;
			gotoXY(79, 10 + demdong); cout << ds[i]->ma_mh;
			gotoXY(93, 10 + demdong); cout << ds[i]->nhom;
			demdong++;
		}
}
void FileDK(tree t, ofstream &outfile1){
	if(t!=NULL) {
		outfile1<<t->maloptinchi<<endl;
		outfile1 << t->danh_sach_dk.sl << endl;
		for(DANG_KY *p = t->danh_sach_dk.phead; p != NULL; p = p->pnext)
		{
			outfile1<< p->ma_sv << endl;
			outfile1 << p->diem << endl; 
		}		
		FileDK(t->pleft, outfile1);
		FileDK(t->pright, outfile1);
	}
}
void GhiFileDSDK(tree t){
	ofstream outfile;
	outfile.open("DSDK.txt", ios::out);
	FileDK(t,outfile);
	outfile.close();  
}
void ds_sv_dang_ky_LTC_theo_maLTC(tree t, int maltc,SINH_VIEN mangsv[],int &dem)
{
	if(t!=NULL)
	{
		if(maltc == t->maloptinchi)
		{
			for(DANG_KY *k = t->danh_sach_dk.phead;k!=NULL;k=k->pnext)
			{
				strcpy(mangsv[dem].ma_sv,k->ma_sv);
				dem++;
			}
		}
		ds_sv_dang_ky_LTC_theo_maLTC(t->pleft,maltc,mangsv,dem);
		ds_sv_dang_ky_LTC_theo_maLTC(t->pright,maltc,mangsv,dem);
	}
}
void xem_sv_theo_LTC(DS_SINH_VIEN dssv,DS_LOP_TIN_CHI dsltc,DS_MON_HOC dsmh)
{
	ShowCur(true);
	int key;
	int x = 61, y = 26, vitri = 0;
	int STT = 1;
	char malop[4]={};
	int sl ,dem=0,trang=0,tongtrang=0;
	
	while (1)
	{
		Khung_xuat_SV_LTC();
		Khung_Nhap_Ma_Lop();
		gotoXY(x+vitri, y);
		key = GetKey();
		if ((key <= '9' && key >= '0') && (vitri < 4))
		{
			malop[vitri] = char(key);
			malop[vitri] = toupper(malop[vitri]);
			cout << malop[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(x + vitri, y);
			cout << " ";
			gotoXY(x + vitri, y);
		}
		if(key==F1)
		{
			XemLopTC(dsltc,dsmh,1);
			system("cls");
		}
		if (key == ENTER && vitri != 0)
		{
			ShowCur(false);
			malop[vitri] = '\0';
			sl = so_luong_sv_1_LTC(dsltc.ds,atoi(malop)); // lay sl cua lop do
			if(check_ma_ltc(dsltc.ds,atoi(malop))==0)
			{
				GhiChu("LOP TIN CHI KHONG TON TAI !",40,3,79,700);
				break;
			}
			if(sl==0)
			{
				GhiChu("LOP TIN CHI CHUA CO SV DANG KI !",40,3,79,700);
				break;
			}
			else
			{
				SINH_VIEN* sv = new SINH_VIEN[sl]; // khoi tao mang tam 
				ds_sv_dang_ky_LTC_theo_maLTC(dsltc.ds,atoi(malop),sv,dem);// lay mssv tu danh sach dang ki
				for(int i=0;i<sl;i++)
				{
					sv[i] = *tim_sv_khong_malop(dssv,sv[i].ma_sv); // dua vao mssv lay gia tri cua sv do ,do ham tim_sv tra ve con tro nen dung dau *
				}
				Sort_mang_tam_SV(sv,sl); // sap xep lai mang tam
				while(1)
				{
					Khung_xuat_SV_LTC();
					Khung_Nhap_Ma_Lop();
					gotoXY(5,0);cout<<"MA LTC: "<<malop;
					gotoXY(5,1);cout<<"MA MON HOC: "<<Search_LTC(dsltc.ds,atoi(malop))->ma_mh;
					gotoXY(5,2);cout<<"NIEN KHOA: "<<Search_LTC(dsltc.ds,atoi(malop))->nienkhoa;
					gotoXY(5,3);cout<<"HOC KI: "<<Search_LTC(dsltc.ds,atoi(malop))->hocky;
					gotoXY(5,4);cout<<"NHOM: "<<Search_LTC(dsltc.ds,atoi(malop))->nhom;
					if (sl < 15)
					{
						tongtrang = 1;
						trang = 0;
					}
					else {
						tongtrang = ((sl - 1) / 15 + 1);
					}
					
					int demdong = 0;
					int checkma=0;
					for (int i = trang * 15; i < 15 + trang * 15 && i < sl; i++)
					{
						TextColor(12); gotoXY(27, 7 + demdong); cout << (i + 1);
						TextColor(14);
						gotoXY(32, 7 + demdong); cout << sv[i].ma_sv;
						gotoXY(47, 7 + demdong); cout << sv[i].ho;
						gotoXY(62, 7 + demdong); cout << sv[i].ten;
						gotoXY(81, 7 + demdong); cout << sv[i].phai;
						demdong++;
					}
					key=GetKey();
					if ((key == RIGHT || key == DOWN ) && trang < tongtrang - 1) { trang++;system("cls"); }
					if ((key == LEFT || key==UP ) && trang > 0 ) { trang--;system("cls"); }
					if(key==ESC) return;
				}
			}
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(x + vitri, y);
			cout << " ";
			malop[vitri]='\0';
			gotoXY(x + vitri, y);
		}
		if (key == ESC) {	return; }
	}	
}
//============================= In danh sach lop tin chi sinh vien da dang ky ======
void in_ds_LTC_sv_dang_ky(tree t,char masv[],tree mangLTC[],int &dem)
{
	if(t!=NULL)
	{
		if(t->danh_sach_dk.sl>0)
		{
			for(DANG_KY *k=t->danh_sach_dk.phead; k!=NULL;k=k->pnext)
			{
				if(strcmp(k->ma_sv,masv)==0)
				{
					mangLTC[dem]=t;
					dem++;
				}
			}
		}
		in_ds_LTC_sv_dang_ky(t->pleft, masv,mangLTC,dem);
		in_ds_LTC_sv_dang_ky(t->pright,masv,mangLTC,dem);
	}
}
void check_sv_dk_ltc(tree t,char masv[],int &dem)
{
	if(t!=NULL)
	{
		if(t->danh_sach_dk.sl>0)
		{
			for(DANG_KY *k=t->danh_sach_dk.phead; k!=NULL;k=k->pnext)
			{
				if(strcmp(k->ma_sv,masv)==0)
				{
					dem++;
				}
			}
		}
		check_sv_dk_ltc(t->pleft, masv,dem);
		check_sv_dk_ltc(t->pright,masv,dem);
	}
}
void xoa_1_node_dau_tien_trong_ds_dang_ky(DS_DANG_KY &ds , char masv[])
{
		if(ds.phead==NULL) //ds rong
		{
			return;
		}
		else
		{
			DANG_KY *k=ds.phead;//k =phead, xoa k
			ds.phead=ds.phead->pnext; //cap nhat lai phead
			delete k;
			
		}
}
void xoa_1_node_trong_ds_dang_ky(DS_DANG_KY &ds , char masv[])
{
	if(ds.phead==NULL)//ds rong
	{
		return;
	}
	else{
		if(strcmp(ds.phead->ma_sv,masv)==0)
		{
			xoa_1_node_dau_tien_trong_ds_dang_ky(ds,masv);
			ds.sl--;
		}
		else
		{
			DANG_KY *q;
			for(DANG_KY *k=ds.phead;k!=NULL;k=k->pnext)
			{
				if(strcmp(k->ma_sv,masv)==0)
				{
					q->pnext=k->pnext;
					delete k;
				}
				q=k;
			}
			ds.sl--;
		}
	}
}
void huy_dang_ky_1_LTC(tree &t, int maltc, char masv[],int &check)
{
	if(t!=NULL)
	{
		if(t->maloptinchi==maltc)
		{
			for(DANG_KY *k=t->danh_sach_dk.phead;k!=NULL;k=k->pnext)
			{
				if(strcmp(k->ma_sv,masv)==0)
				{
					check=1;
					xoa_1_node_trong_ds_dang_ky(t->danh_sach_dk,masv);
					
				}
			}
		}
		huy_dang_ky_1_LTC(t->pleft,maltc,masv,check);
		huy_dang_ky_1_LTC(t->pright,maltc,masv,check);
	}
}
void hieu_chinh_danh_sach_DK(DS_LOP_TIN_CHI &dsltc,DS_SINH_VIEN ds_sv)
{
	ShowCur(true);
	bool checkchange=false;
	int vitri=0, key,trang = 0,tongtrang = 0,sl=0;
	char mssv[11]={},malop[4]={};
	tree t;
	khung_hieu_chinh_DK();
	while(1)
	{
		TextColor(252);				//Chu thich
		gotoXY(35, 27); cout << " MA SINH VIEN: GOM CAC KI TU (A-Z) & (0-9), TOI DA: 10 KI TU  ";
		TextColor(14);
		gotoXY(48 + vitri, 5);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z')) && (vitri < 10))
		{
			mssv[vitri] = char(key);
			mssv[vitri] = toupper(mssv[vitri]);
			cout <<mssv[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(48 + vitri, 5);
			cout << " ";
			mssv[vitri]='\0';
			gotoXY(48 + vitri, 5);
		}
		if(key == ENTER && vitri !=0)
		{
			mssv[vitri]='\0';
			int check = check_sv_khac_lop(ds_sv,mssv);
			if(check==1)
			{
				system("cls");
				vitri=0;
				break;
			}
			else{
				GhiChu("Khong tim thay MSSV ! ",45,3,79,1000);
				continue;
			}
		}
		if(key == ESC ) return;
	}
INDS:
	int check=0;
	tree dsdk[MAXLOP];

	for(int i=0;i<MAXLOP;i++)
	{
		dsdk[i]=khoi_tao_ltc();
	}
	khung_hieu_chinh_DK();
	in_ds_LTC_sv_dang_ky(dsltc.ds,mssv,dsdk,sl);
	while(1)
	{
		
		if(sl==0)
		{
			GhiChu("SV chua dang ki mon",40,3,79,1000);
			break;
		}
		else if (sl < 15)
		{
			tongtrang = 1;
			trang = 0;
		}
		else {
			tongtrang = ((sl - 1) / 15 + 1);
		}
		int demdong = 0;
		int checkma=0;
		for (int i = trang * 15; i < 15 + trang * 15 && i < sl; i++)
		{
			TextColor(12); gotoXY(32, 10 + demdong); cout << (i + 1);
			TextColor(14);
			gotoXY(37, 10 + demdong); cout << dsdk[i]->maloptinchi;
			gotoXY(49, 10 + demdong); cout << dsdk[i]->ma_mh;
			gotoXY(61, 10 + demdong); cout << dsdk[i]->nienkhoa;
			gotoXY(75, 10 + demdong); cout << dsdk[i]->hocky;
			gotoXY(83, 10 + demdong); cout << dsdk[i]->nhom;
			gotoXY(90, 10 + demdong); cout << "X";
			demdong++;
		}
		gotoXY(80+vitri,5);
		key=GetKey();
		if ((key == RIGHT || key == DOWN ) && trang < tongtrang - 1) { trang++;system("cls"); }
		if ((key == LEFT || key==UP ) && trang > 0 ) { trang--;system("cls"); }
		if ((key <= '9' && key >= '0') && (vitri < 4))
		{
			malop[vitri] = char(key);
			malop[vitri] = toupper(malop[vitri]);
			cout << malop[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(80 + vitri, 5);
			cout << " ";
			gotoXY(80 + vitri, 5);
		}
		if(key==ENTER && vitri!=0)
		{
			malop[vitri]='\0';
			huy_dang_ky_1_LTC(dsltc.ds,atoi(malop),mssv,check);
			if(check==0)
			{
				GhiChu("MA LOP TIN CHI SAI",40,3,79,1000);
				system("cls");
				sl=0;
				vitri=0;
				goto INDS;
				
			}
			else{
				GhiChu("HUY DANG KI THANH CONG",40,3,79,1000);
				system("cls");
				sl=0;
				vitri=0;
				checkchange=true;
				goto INDS;
				
			}
		}
		if(key==ESC) 
		{
			if (checkchange == true)
			{
				
				int temp = ThongBao_ESC();
				if (temp == -1) { continue; }
				if (temp == 1) {
					GhiChu("Luu Vao File Thanh Cong!", 45, 3, 79, 2000);
					GhiFileDSDK(dsltc.ds);
				}
				if (temp == 0) { GhiChu("Luu Vao File Khong Thanh Cong!", 45, 3, 79, 2000); }
			}
			return;
		}
	}
}
void nhap_diem_1_sv(tree &t, int maltc, char masv[],float diem)
{
	if(t!=NULL)
	{
		if(t->maloptinchi == maltc)
		{
			for(DANG_KY *k=t->danh_sach_dk.phead; k!=NULL;k=k->pnext)
			{
				if(strcmp(k->ma_sv,masv)==0)
				{
					k->diem=diem;
				}
			}
		}
		nhap_diem_1_sv(t->pleft,maltc,masv,diem);
		nhap_diem_1_sv(t->pright,maltc,masv,diem);
	}
}
void nhap_diem_theo_LTC(DS_SINH_VIEN dssv,DS_LOP_TIN_CHI &dsltc,DS_MON_HOC dsmh)
{
	ShowCur(true);
	int key;
	int x = 61, y = 26, vitri = 0, temp;
	int STT = 1;
	char malop[4]={};
	int sl ,dem=0,trang=0,tongtrang=0;
	int checklinhtinh = 0;
	while (1)
	{
		Khung_nhap_diem_LTC();
		Khung_Nhap_Ma_Lop();
		gotoXY(x+vitri, y);
		key = GetKey();
		if ((key <= '9' && key >= '0') && (vitri < 4))
		{
			malop[vitri] = char(key);
			malop[vitri] = toupper(malop[vitri]);
			cout << malop[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(x + vitri, y);
			cout << " ";
			gotoXY(x + vitri, y);
		}
		if(key==F1)
		{
			XemLopTC(dsltc,dsmh,1);
			system("cls");
		}
		if (key == ENTER && vitri != 0)
		{
			ShowCur(true);
			malop[vitri] = '\0';
			sl = so_luong_sv_1_LTC(dsltc.ds,atoi(malop));
			if(check_ma_ltc(dsltc.ds,atoi(malop))==0)
			{
				GhiChu("LOP TIN CHI KHONG TON TAI !",40,3,79,700);
				break;
			}
			if(sl==0)
			{
				GhiChu("LOP TIN CHI CHUA CO SV DANG KI !",40,3,79,700);
				break;
			}
			else
			{
				SINH_VIEN* sv = new SINH_VIEN[sl];
				ds_sv_dang_ky_LTC_theo_maLTC(dsltc.ds,atoi(malop),sv,dem);
				for(int i=0;i<sl;i++)
				{
					sv[i] = *tim_sv_khong_malop(dssv,sv[i].ma_sv);
				}
				Sort_mang_tam_SV(sv,sl);
				for (int i = trang * 15; i < 15 + trang * 15 && i < sl; i++)
					{
						char mssv[11]={};
						strcpy(mssv,sv[i].ma_sv);
						float diem = diem_sv_LTC(dsltc.ds,atoi(malop),mssv);
						gotoXY(81,7+i);printf("%.1f",diem);
					}
				
				int demnhap = 0;
				int demthaydoi=0;
				float diem = diem_sv_LTC(dsltc.ds,atoi(malop),sv[demnhap].ma_sv);
				char diemtam[3]={};
				ftoa(diem,diemtam,1);
				vitri=strlen(diemtam)+1;
				while(1)
				{
					Khung_nhap_diem_LTC();
					Khung_Nhap_Ma_Lop();
					gotoXY(5,0);cout<<"MA LTC: "<<malop;
					gotoXY(5,1);cout<<"MA MON HOC: "<<Search_LTC(dsltc.ds,atoi(malop))->ma_mh;
					gotoXY(5,2);cout<<"NIEN KHOA: "<<Search_LTC(dsltc.ds,atoi(malop))->nienkhoa;
					gotoXY(5,3);cout<<"HOC KI: "<<Search_LTC(dsltc.ds,atoi(malop))->hocky;
					gotoXY(5,4);cout<<"NHOM: "<<Search_LTC(dsltc.ds,atoi(malop))->nhom;
					if (sl < 15)
					{
						tongtrang = 1;
						trang = 0;
					}
					else {
						tongtrang = ((sl - 1) / 15 + 1);
					}
					
					int demdong = 0;
					int checkma=0;
					
					for (int i = trang * 15; i < 15 + trang * 15 && i < sl; i++)
					{
						char mssv[11]={};
						strcpy(mssv,sv[i].ma_sv);
						float diem = diem_sv_LTC(dsltc.ds,atoi(malop),mssv);
						TextColor(12); gotoXY(27, 7 + demdong); cout << (i + 1);
						TextColor(14);
						gotoXY(32, 7 + demdong); cout << sv[i].ma_sv;
						gotoXY(47, 7 + demdong); cout << sv[i].ho;
						gotoXY(62, 7 + demdong); cout << sv[i].ten;
						demdong++;
					}
					TextColor(244);	gotoXY(43,27);
					cout << "Ki tu: (0-9) va dau '.' . Toi da: 3 ki tu              ";
					gotoXY(81+vitri,7+demthaydoi);
					key=GetKey();
					TextColor(14);
					if ((key <= '9' && key >= '0'||key==DOT) && (vitri < 3))
					{
						
						diemtam[vitri]=char(key);
						if(diemtam[vitri]=='.'&&vitri!=1){
							continue;
						}
						diemtam[vitri] = toupper(diemtam[vitri]);
						cout << diemtam[vitri];
						vitri++;
						
					}
					if (key == BACKSPACE && vitri > 0)
					{
						vitri--;
						gotoXY(81 + vitri, 7+demthaydoi);
						cout << " ";
						gotoXY(81 + vitri, 7+demthaydoi);
						
					}
					if(key==UP&&vitri!=0&&demnhap>0)
					{
						diemtam[vitri]='\0';
						if(atof(diemtam)<0||atof(diemtam)>10)
						{
							GhiChu("DIEM NHAP SAI , VUI LONG NHAP LAI !",40,3,79,1000);
							continue;		
						}
						nhap_diem_1_sv(dsltc.ds,atoi(malop),sv[demnhap].ma_sv,atof(diemtam));
						float diem = diem_sv_LTC(dsltc.ds,atoi(malop),sv[demnhap].ma_sv);
						gotoXY(81,7+demthaydoi);printf("%.1f",diem);
						diemtam[0]='\0';
						demnhap--;
						ftoa(diem_sv_LTC(dsltc.ds,atoi(malop),sv[demnhap].ma_sv),diemtam,1);
						vitri=strlen(diemtam)+1;
						if(demthaydoi==0 && trang >0)
						{
							checklinhtinh=0;
							demthaydoi=14;
							trang--;
							if(checklinhtinh==0)
							{
								system("cls");
								for (int i = trang * 15; i < 15 + trang * 15 && i < sl; i++)
								{
									TextColor(15);
									char mssv[11]={};
									strcpy(mssv,sv[i].ma_sv);
									float diem = diem_sv_LTC(dsltc.ds,atoi(malop),mssv);
									gotoXY(81,7+i-trang*15);printf("%.1f",diem);
								}
								checklinhtinh=1;
							}
						}
						else{
							demthaydoi--;
						}		
					}
					if(key==ENTER&&vitri!=0||key==DOWN&&vitri!=0)
					{
						diemtam[vitri]='\0';
						if(atof(diemtam)<0||atof(diemtam)>10)
						{
							GhiChu("DIEM NHAP SAI , VUI LONG NHAP LAI !",40,3,79,1000);
							continue;		
						}
						nhap_diem_1_sv(dsltc.ds,atoi(malop),sv[demnhap].ma_sv,atof(diemtam));
						float diem = diem_sv_LTC(dsltc.ds,atoi(malop),sv[demnhap].ma_sv);
						gotoXY(81,7+demthaydoi);printf("%.1f",diem);
						demnhap++;
						if(demnhap==sl) {
							GhiChu("DA NHAP XONG",48,3,79,1000);
							GhiFileDSDK(dsltc.ds);
							return;
						}
						demthaydoi++;
						diemtam[0]='\0';
						ftoa(diem_sv_LTC(dsltc.ds,atoi(malop),sv[demnhap].ma_sv),diemtam,1);
						vitri=strlen(diemtam)+1;
						if(demthaydoi%15==0&& trang < tongtrang - 1)
						{
							demthaydoi=0;
							trang++;
							checklinhtinh=0;
							if(checklinhtinh==0)
							{
								system("cls");
								for (int i = 0; i <sl-trang*15; i++)
								{
									TextColor(15);
									char mssv[11]={};
									strcpy(mssv,sv[i+15*trang].ma_sv);
									float diem = diem_sv_LTC(dsltc.ds,atoi(malop),mssv);
									gotoXY(81,7+i);printf("%.1f",diem);
								}
								checklinhtinh=1;
							}
						}		
					}
					if ((key == RIGHT  ) && trang < tongtrang - 1) 
					{
						 trang++;system("cls");
						 demthaydoi=0;
						demnhap=trang*15;
						 checklinhtinh=0;
						if(checklinhtinh==0)
						{
							system("cls");
							for (int i = trang * 15; i < 15 + trang * 15 && i < sl; i++)
							{
								TextColor(15);
								char mssv[11]={};
								strcpy(mssv,sv[i].ma_sv);
								float diem = diem_sv_LTC(dsltc.ds,atoi(malop),mssv);
								gotoXY(81,7+i-trang*15);printf("%.1f",diem);
							}
							checklinhtinh=1;
						} 
					}
					if ((key == LEFT  ) && trang > 0 ) 
					{ 
						trang--;
						system("cls");
						checklinhtinh=0;
						demthaydoi=0;
						demnhap=trang*15;
						if(checklinhtinh==0)
						{
							system("cls");
							for (int i = trang * 15; i < 15 + trang * 15 && i < sl; i++)
							{
								TextColor(15);
								char mssv[11]={};
								strcpy(mssv,sv[i].ma_sv);
								float diem = diem_sv_LTC(dsltc.ds,atoi(malop),mssv);
								gotoXY(81,7+i-trang*15);printf("%.1f",diem);
							}
							checklinhtinh=1;
						} 
					}
					if(key==ESC){
						GhiFileDSDK(dsltc.ds);
						return;
					} 
				}
			}
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(x + vitri, y);
			cout << " ";
			malop[vitri]='\0';
			gotoXY(x + vitri, y);	
		}
		if (key == ESC) {	return; }
	}	
}
void xem_diem_theo_LTC(DS_SINH_VIEN dssv,DS_LOP_TIN_CHI dsltc,DS_MON_HOC dsmh)
{
	ShowCur(true);
	int key;
	int x = 61, y = 26, vitri = 0;
	int STT = 1;
	char malop[4]={};
	int sl ,dem=0,trang=0,tongtrang=0;
	int checklinhtinh = 0;
	while (1)
	{
		Khung_nhap_diem_LTC();
		Khung_Nhap_Ma_Lop();
		gotoXY(x+vitri, y);
		key = GetKey();
		if ((key <= '9' && key >= '0') && (vitri < 4))
		{
			malop[vitri] = char(key);
			malop[vitri] = toupper(malop[vitri]);
			cout << malop[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(x + vitri, y);
			cout << " ";
			gotoXY(x + vitri, y);
		}
		if(key==F1)
		{
			XemLopTC(dsltc,dsmh,1);
			system("cls");
		}
		if (key == ENTER && vitri != 0)
		{
			ShowCur(false);
			malop[vitri] = '\0';
			sl = so_luong_sv_1_LTC(dsltc.ds,atoi(malop)); // so luong sv
			if(check_ma_ltc(dsltc.ds,atoi(malop))==0)
			{
				GhiChu("LOP TIN CHI KHONG TON TAI !",40,3,79,700);
				break;
			}
			if(sl==0)
			{
				GhiChu("LOP TIN CHI CHUA CO SV DANG KI !",40,3,79,700);
				break;
			}
			else
			{
				SINH_VIEN* sv = new SINH_VIEN[sl]; //tao mang tam
				ds_sv_dang_ky_LTC_theo_maLTC(dsltc.ds,atoi(malop),sv,dem); //lay mssv tu dsdk
				for(int i=0;i<sl;i++)
				{
					sv[i] = *tim_sv_khong_malop(dssv,sv[i].ma_sv); //lay thong tin sv
				}
				Sort_mang_tam_SV(sv,sl); //sort lai mang
				char mmh[10]={};
				strcpy(mmh,Search_LTC(dsltc.ds,atoi(malop))->ma_mh);// gan ma mh vao bien mmh
				while(1)
				{
					Khung_nhap_diem_LTC();
					Khung_Nhap_Ma_Lop();
					TextColor(11);
					gotoXY(43,2);cout<<"BANG DIEM MON HOC : "<<Search_MH(dsmh,mmh);//dua vao mmh lay ten mon hoc
					gotoXY(39,3);cout<<"NIEN KHOA : "<<Search_LTC(dsltc.ds,atoi(malop))->nienkhoa;//dua vao ma ltc lay cac thong tin con lai
					gotoXY(61,3);cout<<"HOC KI : "<<Search_LTC(dsltc.ds,atoi(malop))->hocky;
					gotoXY(72,3);cout<<"NHOM : "<<Search_LTC(dsltc.ds,atoi(malop))->nhom;
					if (sl < 15)
					{
						tongtrang = 1;
						trang = 0;
					}
					else {
						tongtrang = ((sl - 1) / 15 + 1);
					}
					
					int demdong = 0;
					int checkma=0;
					
					for (int i = trang * 15; i < 15 + trang * 15 && i < sl; i++)
					{
						char mssv[11]={};
						strcpy(mssv,sv[i].ma_sv);
						float diem = diem_sv_LTC(dsltc.ds,atoi(malop),mssv);
						TextColor(12); gotoXY(27, 7 + demdong); cout << (i + 1);
						TextColor(14);
						gotoXY(32, 7 + demdong); cout << sv[i].ma_sv;
						gotoXY(47, 7 + demdong); cout << sv[i].ho;
						gotoXY(62, 7 + demdong); cout << sv[i].ten;
						gotoXY(81,7+demdong);printf("%.1f",diem);
						demdong++;
					}
					
					key=GetKey();
					if ((key == RIGHT || key == DOWN ) && trang < tongtrang - 1) { trang++;system("cls"); }
					if ((key == LEFT || key==UP ) && trang > 0 ) { trang--;system("cls"); }
					if(key==ESC) return;
				}
			}
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(x + vitri, y);
			cout << " ";
			malop[vitri]='\0';
			gotoXY(x + vitri, y);	
		}
		if (key == ESC) {	return; }
	}	
}
void tinh_diem_trung_binh(tree t,DS_MON_HOC dsmh, char masv[],float S, float tong_so_tin_chi,float &tb)
{
	
	if(t!=NULL)
	{
		for(DANG_KY *k=t->danh_sach_dk.phead; k!=NULL;k=k->pnext)
		{
			if(strcmp(k->ma_sv,masv)==0)
			{
				
				char ma_mh_tam[10]={};
				
				strcpy(ma_mh_tam,t->ma_mh);
				for(int i = 0;i<dsmh.sl;i++)
				{
					if(strcmp(dsmh.ds[i]->ma_mh,ma_mh_tam)==0)
					{
						float tong_so_tin_chi_1_mon = dsmh.ds[i]->so_tclt+dsmh.ds[i]->so_tcth;
						S=S+(tong_so_tin_chi_1_mon * k->diem);
						tong_so_tin_chi=tong_so_tin_chi+tong_so_tin_chi_1_mon;
					}
					
				}
				tb=S/tong_so_tin_chi;
			}
			
		}
		tinh_diem_trung_binh(t->pleft,dsmh,masv,S,tong_so_tin_chi,tb);
		tinh_diem_trung_binh(t->pright,dsmh,masv,S,tong_so_tin_chi,tb);		
	}
	else if(tong_so_tin_chi==0)	tb=0;
}		
void xem_diem_TB_theo_lop(DS_SINH_VIEN dssv,DS_LOP_TIN_CHI dsltc,DS_MON_HOC dsmh)
{
	ShowCur(true);
	int key;
	int x = 61, y = 26, vitri = 0;
	int STT = 1;
	char malop[10]={};
	int sl ,dem=0,trang=0,tongtrang=0;
	int checklinhtinh = 0;
	while (1)
	{
		Khung_nhap_diem_LTC();
		Khung_Nhap_Ma_Lop();
		gotoXY(x+vitri, y);
		key = GetKey();
		if (((key >= 'A' && key <= 'Z') || (key <= '9' && key >= '0') || (key >= 'a' && key <= 'z') || (key == '-')) && (vitri < 11))
		{
			malop[vitri] = char(key);
			malop[vitri] = toupper(malop[vitri]);
			cout << malop[vitri];
			vitri++;
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(x + vitri, y);
			cout << " ";
			malop[vitri]='\0';
			gotoXY(x + vitri, y);
		}
		if (key == ENTER && vitri != 0)
		{
			ShowCur(false);
			malop[vitri] = '\0';
			sl = dem_SV_lop(dssv,malop);//so luong sv cua lop do
			if(check_lop(dssv,malop)==0)
			{
				GhiChu("LOP TIN CHI KHONG TON TAI !",40,3,79,700);
				break;
			}
			else
			{
				SINH_VIEN* sv = new SINH_VIEN[sl];// mang tam 
				MangTam_SV_fix(dssv,sv,malop);// do sv vao mang tam
				while(1)
				{
					Khung_nhap_diem_LTC();
					Khung_Nhap_Ma_Lop();
					gotoXY(37, 23);		TextColor(14);		cout << "  ";
					TextColor(14);		cout << "            ";
					float S = 0,tongso=0,tb=0;// dung de tinh diem tb
					TextColor(11);
					gotoXY(43,2);cout<<"BANG THONG KE TRUNG BINH MOT KHOA HOC";
					gotoXY(43,3);cout<<"LOP :"<<malop;
					gotoXY(61,3);cout<<"NAM NHAP HOC :"<<sv[0].nam_nhap_hoc;
					if (sl < 15)
					{
						tongtrang = 1;
						trang = 0;
					}
					else {
						tongtrang = ((sl - 1) / 15 + 1);
					}
					
					int demdong = 0;
					int checkma=0;
					
					for (int i = trang * 15; i < 15 + trang * 15 && i < sl; i++)
					{
						char mssv[11]={};
						strcpy(mssv,sv[i].ma_sv);
						tinh_diem_trung_binh(dsltc.ds,dsmh,mssv,S,tongso,tb);
						TextColor(12); gotoXY(27, 7 + demdong); cout << (i + 1);
						TextColor(14);
						gotoXY(32, 7 + demdong); cout << sv[i].ma_sv;
						gotoXY(47, 7 + demdong); cout << sv[i].ho;
						gotoXY(62, 7 + demdong); cout << sv[i].ten;
						gotoXY(81,7+demdong);printf("%.1f",tb);
						demdong++;
					}
					
					key=GetKey();
					if ((key == RIGHT || key == DOWN ) && trang < tongtrang - 1) { trang++;system("cls"); }
					if ((key == LEFT || key==UP ) && trang > 0 ) { trang--;system("cls"); }
					if(key==ESC) return;
				}
			}
		}
		if (key == BACKSPACE && vitri > 0)
		{
			vitri--;
			gotoXY(x + vitri, y);
			cout << " ";
			malop[vitri]='\0';
			gotoXY(x + vitri, y);	
		}
		if (key == ESC) {	return; }
	}	
}		

