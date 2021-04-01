#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<conio.h>
#include<windows.h>
#include<fstream>
#include "mylib.h"
#define MAXMON 300
#define MAXLOP 100
#define MAXSV  100
using namespace std;

//======================================== Danh sach mon hoc ============================================

struct mon_hoc
{
	char ma_mh[10];
	char ten_mh[30];
	float so_tclt;//so thuc
	float so_tcth;
};
typedef struct mon_hoc MON_HOC;
struct ds_mon_hoc
{
	MON_HOC *ds[MAXMON];
	int sl=0;
};
typedef struct ds_mon_hoc DS_MON_HOC;
//=========================================== Danh sach sinh vien ==========================================
struct sinh_vien
{	
	//data
	char ma_sv[13];
	char ma_lop[15];
	char ho[11];
	char ten[21];
	char phai[4]; //Nam - Nu
	char sdt[12];
	int nam_nhap_hoc;
	//pointer
	sinh_vien *pnext;
};
typedef struct sinh_vien SINH_VIEN;
struct ds_sinh_vien
{
	SINH_VIEN *phead=NULL;
	int sl=0;
};
typedef struct ds_sinh_vien DS_SINH_VIEN;
//=========================================== Danh sach dang ky ============================================
struct dang_ky
{
	//data
	char ma_sv[13];
	float diem;

	//pointer
	dang_ky *pnext;
};
typedef struct dang_ky DANG_KY;
struct ds_dang_ky
{
	DANG_KY *phead=NULL;
	int sl=0;
};
typedef struct ds_dang_ky DS_DANG_KY;

//=========================================== Danh sach lop tin chi ========================================
struct lop_tin_chi
{
	//data
	int maloptinchi;
	char ma_mh[10];
	char nienkhoa[10];
	int hocky;
	int nhom;
	int so_svmax;
	int so_svmin;
	// con tro tro dsdk
	DS_DANG_KY danh_sach_dk;
	//pointer
	lop_tin_chi *pleft;
	lop_tin_chi *pright;
};
typedef struct lop_tin_chi* tree;
struct ds_lop_tin_chi
{
	tree ds = NULL;
	int sl=0;
};
typedef struct ds_lop_tin_chi DS_LOP_TIN_CHI;

