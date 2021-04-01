#pragma once
#include "cautruc.h"
#include <math.h> 


#define LEFT -75	
#define RIGHT -77	
#define ENTER 13 
#define ESC 27
using namespace std;

void reverse(char* str, int len) 
{ 
    int i = 0, j = len - 1, temp; 
    while (i < j) { 
        temp = str[i]; 
        str[i] = str[j]; 
        str[j] = temp; 
        i++; 
        j--; 
    } 
} 
  
// Converts a given integer x to string str[].  
// d is the number of digits required in the output.  
// If d is more than the number of digits in x,  
// then 0s are added at the beginning. 
int intToStr(int x, char str[], int d) 
{ 
    int i = 0; 
    while (x) { 
        str[i++] = (x % 10) + '0'; 
        x = x / 10; 
    } 
  
    // If number of digits required is more, then 
    // add 0s at the beginning 
    while (i < d) 
        str[i++] = '0'; 
  
    reverse(str, i); 
    str[i] = '\0'; 
    return i; 
} 
  
// Converts a floating-point/double number to a string. 
void ftoa(float n, char* res, int afterpoint) 
{ 
    // Extract integer part 
    int ipart = (int)n; 
  
    // Extract floating part 
    float fpart = n - (float)ipart; 
  
    // convert integer part to string 
    int i = intToStr(ipart, res, 0); 
  
    // check for display option after point 
    if (afterpoint != 0) { 
        res[i] = '.'; // add dot 
  
        // Get the value of fraction part upto given no. 
        // of points after dot. The third parameter  
        // is needed to handle cases like 233.007 
        fpart = fpart * pow(10, afterpoint); 
  
        intToStr((int)fpart, res + i + 1, afterpoint); 
    } 
} 
void gotoXY(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void TextColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int  GetKey1() {
	char key; key = _getch();
	if (key == -32 || key == 0)
		return -(_getch());
	else return key;
}
void SetBGColor(WORD color)
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    color <<= 4;
    wAttributes &= 0xff0f;
    wAttributes |= color;

    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
int wherex( void )
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
    return screen_buffer_info.dwCursorPosition.X;
}
int dem_ki_tu_so_nguyen(int n){
    int dem=0;
    while(n>=10){
        n/=10; // hay n = n /10;
        dem++;
    }
    return dem;
}
int wherey( void )
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
    return screen_buffer_info.dwCursorPosition.Y;
}
void HienThiTrang(int trang, int tongtrang, int x, int y) {
	TextColor(174);	gotoXY(x, y); cout << " Trang:        ";
	gotoXY(x + 8, y); cout << trang << "/" << tongtrang;
	TextColor(14);
}
void ShowCur(bool CursorVisibility)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor = { 1, CursorVisibility };
	SetConsoleCursorInfo(handle, &cursor);
}
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}
void khung(int x,int y,int dai, int rong){
	gotoXY(x,y);
	printf("%c",char(201));
	for(int i=1;i<=rong;i++)
	{
		printf("%c",char(205));	
	}
	printf("%c",char(187));
	gotoXY(x,y+1);
	for(int j=1;j<=dai;j++)
	{
		gotoXY(x,y+j);printf("%c",char(186));
		gotoXY(x+rong+1,y+j);printf("%c",char(186));
	}
	gotoXY(x,y+dai+1);printf("%c",char(200));
	for(int k=1;k<=rong;k++)
	{
		printf("%c",char(205));
	}	
	printf("%c",char(188));
	
}
void Thanh_I(int x,int y,int len){
	gotoXY(x,y);printf("%c",char(203));	
	for(int i=1;i<=len;i++)
	{
		gotoXY(x,y+i);printf("%c",char(186));		
	}
	gotoXY(x,y+len+1);printf("%c",char(202));	
}
void Thanh_H(int x,int y,int len){
	gotoXY(x,y);printf("%c",char(204));	
	for(int i=1;i<=len;i++)
	{
		gotoXY(x+i,y);printf("%c",char(205));		
	}
	gotoXY(x+len+1,y);printf("%c",char(185));	
}
//--------------LTC----------------
void Khung_Xuat_LTC() {
	TextColor(15);
	khung(17,4,20,77);
	Thanh_H(17,6,77);
	Thanh_H(17,23,77);
	Thanh_I(24,4,18);
	Thanh_I(34,4,18);
	Thanh_I(46,4,18);
	Thanh_I(59,4,18);
	Thanh_I(68,4,18);
	Thanh_I(75,4,18);
	Thanh_I(83,4,18);
	TextColor(240);	
	gotoXY(46, 0);	cout << "                         ";
	gotoXY(46, 1);	cout << "  DANH SACH LOP TIN CHI  ";
	TextColor(14);
	gotoXY(20, 5);    	cout << "STT";
	gotoXY(26, 5);    	cout << "MA LOP";
	gotoXY(35, 5);		cout << "MA MON HOC";
	gotoXY(47, 5);		cout << "NIEN KHOA";
	gotoXY(60, 5);		cout << "HOC KI";
	gotoXY(69, 5);		cout << "NHOM";
	gotoXY(76, 5);		cout << "SL MIN";
	gotoXY(84, 5);		cout << "SL MAX";
	gotoXY(18, 24);		TextColor(252);		cout << "ESC";
	TextColor(14);		cout << ": Exit";
	gotoXY(29, 24);		TextColor(252);		cout << "F1";
	TextColor(14);		cout << ": Insert";
	gotoXY(45, 24);		TextColor(252);		cout << "F2";
	TextColor(14);		cout << ": Edit";
	gotoXY(55, 24);		TextColor(252);		cout << "F3";
	TextColor(14);		cout << ": Delete";
	gotoXY(67, 24);		TextColor(252);		cout << "F5";
	TextColor(14);		cout << ": List MH";
	gotoXY(0, 24);
}
void Khung_Them_LTC() {
	TextColor(15);
	khung(17,26,1,77);
	Thanh_I(24,26,1);
	Thanh_I(34,26,1);
	Thanh_I(46,26,1);
	Thanh_I(59,26,1);
	Thanh_I(68,26,1);
	Thanh_I(75,26,1);
	Thanh_I(83,26,1);
}
void Xoa_Khung_FooterLTC(){
	TextColor(0);
	gotoXY(14,26);cout<<"                                                                                      ";
	gotoXY(14,27);cout<<"                                                                                      ";
}
void Khung_Xoa_LTC() {
	TextColor(14);
	gotoXY(34, 27); cout << "Nhap Ma Lop Can Xoa : ";
	TextColor(15);
	khung(55,26,1,20);                   
}
void Khung_Nhap_NK_HK_LTC() {
	TextColor(14);
	gotoXY(32, 27); cout << "Nien Khoa : ";
	TextColor(15);
	khung(44,26,1,12);
	TextColor(14);
	gotoXY(60, 27); cout << "Hoc Ki : ";
	TextColor(15);
	khung(70,26,1,12);                    
}
void Khung_Sua_LTC() {
	TextColor(14);
	gotoXY(34, 27); cout << "Nhap Ma Lop Can Sua : ";
	TextColor(15);
	khung(55,26,1,20);  
}


//-------------DSMH--------------
void Khung_Them_MonHoc() {
	TextColor(9);
	khung(16,25,1,88);
	Thanh_I(25,25,1);
	Thanh_I(85,25,1);
	Thanh_I(94,25,1);
	Thanh_I(43,25,1);
}
void Khung_Sua_MonHoc() {
	TextColor(14);
	gotoXY(35, 26); cout << "Nhap Ma Mon Hoc Can Sua : ";
	TextColor(15);
	khung(60,25,1,20);   
}
void Khung_Xoa_MonHoc() {
	TextColor(14);
	gotoXY(35, 26); cout << "Nhap Ma Mon Hoc Can Xoa : ";
	TextColor(15);
	khung(60,25,1,20);                   
}

void Khung_Xuat_MH() {
	TextColor(9);
	Thanh_H(16,5,88);
	Thanh_H(16,7,88);
	Thanh_I(16,5,17);
	Thanh_I(105,5,17);
	Thanh_H(16,23,88);
	Thanh_I(25,5,17);
	Thanh_I(85,5,17);
	Thanh_I(94,5,17);
	Thanh_I(43,5,17);
	TextColor(240);	
	gotoXY(48, 0);	cout << "                         ";
	gotoXY(48, 1);	cout << "    DANH SACH MON HOC    ";
	TextColor(15);	gotoXY(20, 6);    cout << "STT";
	gotoXY(30, 6);	cout << "MA MON HOC";
	
	gotoXY(61, 6);	cout << "TEN MON HOC";
	
	gotoXY(88, 6);	cout << "STCLT";
	
	gotoXY(96, 6);	cout << "STCTH";
	gotoXY(19, 24);	TextColor(252);	cout << "ESC";
	TextColor(15);	cout << ": Exit";
	gotoXY(33, 24);	TextColor(252);	cout << "F1";
	TextColor(15);	cout << ": Insert";
	gotoXY(45, 24);	TextColor(252);	cout << "F2";
	TextColor(15);	cout << ": Edit";
	gotoXY(60, 24);	TextColor(252);	cout << "F3";
	TextColor(15);	cout << ": Delete";
	gotoXY(15, 27);
}
void Khung_Nhap_Ma_Lop() {
	TextColor(14);
	gotoXY(45, 26); cout << "Nhap Ma Lop : ";
	TextColor(15);
	khung(60,25,1,20); 
}
void Khung_Nhap_MSSV() {
	TextColor(14);
	gotoXY(47, 26); cout << "Nhap MSSV  : ";
	TextColor(15);
	khung(60,25,1,20); 
}
int  ThongBao_tao_lop() {
	int key, count = 0;
	TextColor(158);
	gotoXY(43, 12);
	cout << "LOP HOC CHUA CO,BAN CO MUON THEM ?";
	gotoXY(43, 13);	cout << "   ";
	gotoXY(73, 13);	cout << "   ";
	gotoXY(43, 14);	cout << "   ";
	gotoXY(73, 14);	cout << "   ";
	gotoXY(43, 15);	cout << "   ";
	gotoXY(73, 15);	cout << "   ";
	gotoXY(43, 16);	cout << "                                 ";
	TextColor(240);
	gotoXY(46, 13); cout << "                            ";
	gotoXY(46, 14); cout << "                            ";
	gotoXY(46, 15); cout << "                            ";
	TextColor(158);	gotoXY(51, 14);	cout << " YES ";
	TextColor(252);	gotoXY(63, 14);	cout << " NO ";
	gotoXY(52, 14);
	while (1) {
		key = GetKey1();
		if (key == LEFT || key == RIGHT) {
			count++;
			if (count % 2 == 1) {
				TextColor(252);		gotoXY(51, 14); cout << " YES ";
				TextColor(158);		gotoXY(63, 14); cout << " NO ";
				gotoXY(64, 14);
			}
			else {
				TextColor(158);		gotoXY(51, 14); cout << " YES ";
				TextColor(252);		gotoXY(63, 14); cout << " NO ";
				gotoXY(52, 14);
			}
		}
		if (key == ENTER) {
			if (count == 0) {
				return 1;
			}
			else {
				if (count % 2 == 1) {
					return 0;
				}
				else {
					return 1;
				}
			}
		}
		if (key == ESC) {
			return -1;
		}
	}
}
void Khung_Them_SV(){
	TextColor(15);
	khung(17,25,1,85);
	Thanh_I(24,25,1);
	Thanh_I(39,25,1);
	Thanh_I(54,25,1);
	Thanh_I(73,25,1);
	Thanh_I(80,25,1);
	Thanh_I(95,25,1);	
}
void Khung_Xuat_SV() {
	TextColor(15);
	khung(17,4,19,85);
	Thanh_H(17,6,85);
	Thanh_H(17,22,85);
	Thanh_I(24,4,17);
	Thanh_I(39,4,17);
	Thanh_I(54,4,17);
	Thanh_I(73,4,17);
	Thanh_I(80,4,17);
	Thanh_I(95,4,17);
	TextColor(240);	
	gotoXY(46, 0);	cout << "                          ";
	gotoXY(46, 1);	cout << "   DANH SACH SINH VIEN    ";
	TextColor(14);
	gotoXY(20, 5);    	cout << "STT";
	gotoXY(29, 5);    	cout << "MSSV";
	gotoXY(45, 5);		cout << "HO";
	gotoXY(62, 5);		cout << "TEN";
	gotoXY(75, 5);		cout << "PHAI";
	gotoXY(86, 5);		cout << "SDT";
	gotoXY(96, 5);		cout << "KHOA";
	gotoXY(18, 23);		TextColor(252);		cout << "ESC";
	TextColor(14);		cout << ": Exit";
	gotoXY(29, 23);		TextColor(252);		cout << "F1";
	TextColor(14);		cout << ": Insert";
	gotoXY(45, 23);		TextColor(252);		cout << "F2";
	TextColor(14);		cout << ": Edit";
	gotoXY(55, 23);		TextColor(252);		cout << "F3";
	TextColor(14);		cout << ": Delete";
	gotoXY(70, 23);		TextColor(252);		cout << "F5";
	TextColor(14);		cout << ": LIST LOP";
	gotoXY(0, 23);
}
void Khung_xuat_ds_lop()
{
	TextColor(240);	
	gotoXY(46, 0);	cout << "                          ";
	gotoXY(46, 1);	cout << "      DANH SACH LOP       ";
	TextColor(15);
	khung(45,5,16,26);
	gotoXY(45,23);cout<<"ESC : DE THOAT";
}
void Khung_xuat_SV_LTC()
{
	TextColor(15);
	khung(24,4,19,70);
	Thanh_H(24,6,70);
	Thanh_H(24,22,70);
	Thanh_I(31,4,17);
	Thanh_I(46,4,17);
	Thanh_I(61,4,17);
	Thanh_I(80,4,17);
	TextColor(240);	
	gotoXY(46, 0);	cout << "                          ";
	gotoXY(46, 1);	cout << "   DANH SACH SINH VIEN    ";
	TextColor(14);
	gotoXY(27, 5);    	cout << "STT";
	gotoXY(36, 5);    	cout << "MSSV";
	gotoXY(52, 5);		cout << "HO";
	gotoXY(69, 5);		cout << "TEN";
	gotoXY(82, 5);		cout << "PHAI";
	gotoXY(26, 23);		TextColor(252);		cout << "ESC";
	TextColor(14);		cout << ": Exit";
	gotoXY(37, 23);		TextColor(252);		cout << "F1";
	TextColor(14);		cout << ": LIST LTC";
}
void Khung_nhap_diem_LTC()
{
	TextColor(15);
	khung(24,4,19,70);
	Thanh_H(24,6,70);
	Thanh_H(24,22,70);
	Thanh_I(31,4,17);
	Thanh_I(46,4,17);
	Thanh_I(61,4,17);
	Thanh_I(80,4,17);
	TextColor(240);	
	gotoXY(46, 0);	cout << "                          ";
	gotoXY(46, 1);	cout << "   DANH SACH SINH VIEN    ";
	TextColor(14);
	gotoXY(27, 5);    	cout << "STT";
	gotoXY(36, 5);    	cout << "MSSV";
	gotoXY(52, 5);		cout << "HO";
	gotoXY(69, 5);		cout << "TEN";
	gotoXY(82, 5);		cout << "DIEM";
	gotoXY(26, 23);		TextColor(252);		cout << "ESC";
	TextColor(14);		cout << ": Exit";
	gotoXY(37, 23);		TextColor(252);		cout << "F1";
	TextColor(14);		cout << ": LIST LTC";
}
int	 ThongBao_ESC() {
int key, count = 0;
	TextColor(158);
	gotoXY(43, 12);
	cout << "        BAN CO MUON LUU?       ";
	gotoXY(43, 13);	cout << "   ";
	gotoXY(73, 13);	cout << "   ";
	gotoXY(43, 14);	cout << "   ";
	gotoXY(73, 14);	cout << "   ";
	gotoXY(43, 15);	cout << "   ";
	gotoXY(73, 15);	cout << "   ";
	gotoXY(43, 16);	cout << "                                 ";
	TextColor(240);
	gotoXY(46, 13); cout << "                           ";
	gotoXY(46, 14); cout << "                           ";
	gotoXY(46, 15); cout << "                           ";
	TextColor(158);	gotoXY(51, 14);	cout << " YES ";
	TextColor(252);	gotoXY(63, 14);	cout << " NO ";
	gotoXY(52, 14);
	while (1) {
		key = GetKey1();
		if (key == LEFT || key == RIGHT) {
			count++;
			if (count % 2 == 1) {
				TextColor(252);		gotoXY(51, 14); cout << " YES ";
				TextColor(158);		gotoXY(63, 14); cout << " NO ";
				gotoXY(64, 14);
			}
			else {
				TextColor(158);		gotoXY(51, 14); cout << " YES ";
				TextColor(252);		gotoXY(63, 14); cout << " NO ";
				gotoXY(52, 14);
			}
		}
		if (key == ENTER) {
			if (count == 0) {
				return 1;
			}
			else {
				if (count % 2 == 1) {
					return 0;
				}
				else {
					return 1;
				}
			}
		}
		if (key == ESC) {
			return -1;
		}
	}
}
int	 ThongBao_Thoat() {
	int key, count = 0;
	TextColor(158);
	gotoXY(43, 12);
	cout << "        BAN CO MUON THOAT?       ";
	gotoXY(43, 13);	cout << "   ";
	gotoXY(73, 13);	cout << "   ";
	gotoXY(43, 14);	cout << "   ";
	gotoXY(73, 14);	cout << "   ";
	gotoXY(43, 15);	cout << "   ";
	gotoXY(73, 15);	cout << "   ";
	gotoXY(43, 16);	cout << "                                 ";
	TextColor(240);
	gotoXY(46, 13); cout << "                           ";
	gotoXY(46, 14); cout << "                           ";
	gotoXY(46, 15); cout << "                           ";
	TextColor(158);	gotoXY(51, 14);	cout << " YES ";
	TextColor(252);	gotoXY(63, 14);	cout << " NO ";
	gotoXY(52, 14);
	while (1) {
		key = GetKey1();
		if (key == LEFT || key == RIGHT) {
			count++;
			if (count % 2 == 1) {
				TextColor(252);		gotoXY(51, 14); cout << " YES ";
				TextColor(158);		gotoXY(63, 14); cout << " NO ";
				gotoXY(64, 14);
			}
			else {
				TextColor(158);		gotoXY(51, 14); cout << " YES ";
				TextColor(252);		gotoXY(63, 14); cout << " NO ";
				gotoXY(52, 14);
			}
		}
		if (key == ENTER) {
			if (count == 0) {
				return 1;
			}
			else {
				if (count % 2 == 1) {
					return 0;
				}
				else {
					return 1;
				}
			}
		}
		if (key == ESC) {
			return -1;
		}
	}
}
int  ThongBao_XoaLTC() {
	int key, count = 0;
	TextColor(158);
	gotoXY(43, 12);
	cout << "MON HOC DA MO LOP,BAN CO MUON XOA ";
	gotoXY(43, 13);	cout << "   ";
	gotoXY(73, 13);	cout << "   ";
	gotoXY(43, 14);	cout << "   ";
	gotoXY(73, 14);	cout << "   ";
	gotoXY(43, 15);	cout << "   ";
	gotoXY(73, 15);	cout << "   ";
	gotoXY(43, 16);	cout << "                                 ";
	TextColor(240);
	gotoXY(46, 13); cout << "                            ";
	gotoXY(46, 14); cout << "                            ";
	gotoXY(46, 15); cout << "                            ";
	TextColor(158);	gotoXY(51, 14);	cout << " YES ";
	TextColor(252);	gotoXY(63, 14);	cout << " NO ";
	gotoXY(52, 14);
	while (1) {
		key = GetKey1();
		if (key == LEFT || key == RIGHT) {
			count++;
			if (count % 2 == 1) {
				TextColor(252);		gotoXY(51, 14); cout << " YES ";
				TextColor(158);		gotoXY(63, 14); cout << " NO ";
				gotoXY(64, 14);
			}
			else {
				TextColor(158);		gotoXY(51, 14); cout << " YES ";
				TextColor(252);		gotoXY(63, 14); cout << " NO ";
				gotoXY(52, 14);
			}
		}
		if (key == ENTER) {
			if (count == 0) {
				return 1;
			}
			else {
				if (count % 2 == 1) {
					return 0;
				}
				else {
					return 1;
				}
			}
		}
		if (key == ESC) {
			return -1;
		}
	}
}
int  ThongBao_ESC_Nhap() {
	int key, count = 0;	TextColor(206);
	gotoXY(25, 26);	cout << "     Ban Co Muon Luu Vao File!   ";
	gotoXY(25, 27);	cout << "   ";	gotoXY(55, 27);	cout << "   ";
	gotoXY(25, 28);	cout << "   ";	gotoXY(55, 28);	cout << "   ";
	gotoXY(25, 29);	cout << "   ";	gotoXY(55, 29);	cout << "   ";
	gotoXY(25, 30);	cout << "                                 ";
	TextColor(238);	gotoXY(28, 27); cout << "                           ";
	gotoXY(28, 28); cout << "                           ";
	gotoXY(28, 29); cout << "                           ";
	TextColor(252);	gotoXY(33, 28);	cout << " YES ";
	TextColor(233);	gotoXY(45, 28);	cout << " NO ";
	gotoXY(34, 28);
	while (1) {
		key = GetKey1();
		if (key == LEFT || key == RIGHT) {
			count++;
			if (count % 2 == 1) {
				TextColor(233);				gotoXY(33, 28); cout << " YES ";
				TextColor(252);				gotoXY(45, 28); cout << " NO ";
				gotoXY(46, 28);
			}
			else {
				TextColor(252);				gotoXY(33, 28); cout << " YES ";
				TextColor(233);				gotoXY(45, 28); cout << " NO ";
				gotoXY(34, 28);
			}
		}
		if (key == ENTER) {
			if (count == 0) {
				return 1;
			}
			else {
				if (count % 2 == 1) {
					return 0;
				}
				else {
					return 1;
				}
			}
		}
		if (key == ESC) {
			TextColor(91);			gotoXY(24, 26);	cout << "                                   ";
			gotoXY(24, 27);	cout << "                                   ";
			gotoXY(24, 28);	cout << "                                   ";
			gotoXY(24, 29);	cout << "                                   ";
			gotoXY(24, 30);	cout << "                                   ";
			return -1;
		}
	}
}
void khung_hieu_chinh_DK(){
	TextColor(240);	
	gotoXY(48, 0);	cout << "                          ";
	gotoXY(48, 1);	cout << "  HIEU CHINH LOP TIN CHI  ";
	TextColor(15);
	gotoXY(30,5);cout<<"Nhap vao MSSV : ";
	khung(47,4,1,18);
	gotoXY(69,5);cout<<"Ma LTC : ";
	khung(79,4,1,5);
	khung(30,7,17,65);
	Thanh_H(30,9,65);
	gotoXY(31,8);cout<<"STT";
	Thanh_I(35,7,17);
	gotoXY(37,8);cout<<"MA LTC";
	Thanh_I(45,7,17);
	gotoXY(49,8);cout<<"MA MON";
	Thanh_I(60,7,17);
	gotoXY(61,8);cout<<"NIEN KHOA";
	Thanh_I(71,7,17);
	gotoXY(72,8);cout<<"HOC KI";
	Thanh_I(80,7,17);
	gotoXY(81,8);cout<<"NHOM";
	Thanh_I(86,7,17);
	gotoXY(87,8);cout<<"DA LUU";
	TextColor(11);
	gotoXY(31,26);cout<<"NHAP MA LTC , AN ENTER DE HUY DANG KI";
	TextColor(15);
}
void Khung_DK_LTC(){
	TextColor(240);	
	gotoXY(48, 0);	cout << "                         ";
	gotoXY(48, 1);	cout << "   DANG KI LOP TIN CHI   ";
	TextColor(15);
	gotoXY(25,5);cout<<"Nien Khoa : ";
	khung(37,4,1,10);
	gotoXY(50,5);cout<<"Hoc Ki : ";
	khung(59,4,1,10);
	gotoXY(72,5);cout<<"Ma LTC : ";
	khung(82,4,1,5);
	khung(13,7,17,45);
	Thanh_H(13,9,45);
	gotoXY(15,8);cout<<"MA LTC";
	Thanh_I(23,7,17);
	gotoXY(27,8);cout<<"MA MON";
	Thanh_I(38,7,17);
	gotoXY(41,8);cout<<"NHOM";
	Thanh_I(48,7,17);
	gotoXY(54,8);cout<<"CL";
	khung(65,7,17,45);
	Thanh_H(65,9,45);
	gotoXY(67,8);cout<<"MA LTC";
	Thanh_I(75,7,17);
	gotoXY(79,8);cout<<"MA MON";
	Thanh_I(90,7,17);
	gotoXY(93,8);cout<<"NHOM";
	Thanh_I(100,7,17);
	gotoXY(103,8);cout<<"DA LUU";
	gotoXY(13, 26);		TextColor(252);		cout << "ESC";
	TextColor(14);		cout << ": THOAT";
	gotoXY(24, 26);		TextColor(252);		cout << "ENTER";
	TextColor(14);		cout << ": DE DANG KI";
	gotoXY(44, 26);		TextColor(252);		cout << "F1";
	TextColor(14);		cout << ": DE XOA";
	gotoXY(58, 26);		TextColor(252);		cout << "F2";
	TextColor(14);		cout << ": LUU DANG KI";
}
void ThongTinChung() {
	TextColor(14);
	int y = 2;
	gotoXY(42, y++); cout << "_|_|_|    _|_|_|_|_|  _|_|_|  _|_|_|_|_| ";
	gotoXY(42, y++); cout << "_|    _|      _|        _|        _|     ";
	gotoXY(42, y++); cout << "_|_|_|        _|        _|        _|    ";
	gotoXY(42, y++); cout << "_|            _|        _|        _|    ";
	gotoXY(42, y++); cout << "_|            _|      _|_|_|      _| ";
	TextColor(240);
	ShowCur(FALSE);
	char s[] = { "    CHUONG TRINH QUAN LY DIEM SINH VIEN THEO HE TIN CHI     " };
	int m = strlen(s) - 1;	TextColor(79);
	while (!_kbhit()) {
		for (int i = m; i > 0; i--) {
			s[i] = s[i - 1];
			s[0] = s[m - 1];
		}
		gotoXY(30, 7);       cout << s;
		gotoXY(30, 7); cout << " ";	   Sleep(200);
	}
	TextColor(14);
}

