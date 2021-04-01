#include "cautruc.h"

/*
	Doi net quay xung quanh van de ban phao hoa :
   	1, Vi tri ban phao hoa & phuong huong ban phao & khoang cach ban no
      2, Kieu no phao, mau phao no, ket thuc qua trinh no thi cho phao roi the nao?
   Chi tiet hoa van de :
   	1.1, vi tri ban
      		duoc xac dinh random o dong thu 49 , tai toa do x bat ky
      1.2, phuong huong ban
      		duoc random boi 3 kieu ban co ban
            	-> phuong thang dung
               -> phuong cheo sang phai < neu nhu toa do o ben trai>
               -> phuong cheo sang trai < neu nhu toa do o ben phai>
      1.3, khoang cach ban phao no
      		duoc han che random cho den toa do y bat ky nhung phai nho hon 35
      2.1, Kieu no phao, gom cac kieu co ban sau :
      		-> kieu hinh tron
            -> kieu hinh chu thap kep (8 huong)
            -> kieu mang luoi
      2,2, Mau phao no , duoc random boi 2 loai co ban:
      		-> loai 1 mau duy nhat
            -> loai da mau sac
      2,3, Ket thuc qua trinh phao no, cac loai phao duoc quy dinh quay tro ve trang thai
      		chi con la mot dau cham va roi xuong theo phuong thang dung va bien mat
            bat ky o vi tri nao do
*/
/*
	Suy nghi chung ve ket cau cua mot qua phao :
   	- mot qua phao luc ban dau moi xuat hien thi chi la 1 diem;
      - ta xac dinh su di chuyen cua no dua vao su cap nhat thoi gian
      - den khi no, ta se cho no random kieu no va tu dong sinh ra cac qua phao con
      - sau khi no, roi xuong va mat di bat ky
*/
#define minx 1
#define maxx 79
#define miny 1
#define maxy 50
void del_display_star(int x,int y)
{
	gotoXY(x,y);
   cout<<" ";
}
void del_display_star(int a[],int b[],int spt)
{
	for(int i=0;i<spt;i++)
   {
   	gotoXY(a[i],b[i]);
      cout<<" ";
   }
}
void display_star(int x,int y,int type,int color)
{
	if(color==0)
 		randomize();
	if(color==-1||color==0)
   {
   	do{color=random(16);}while(color<1);
   }
	textcolor(color);
	gotoXY(x,y);
   cprintf("%c",type);
}
void display_star(int a[],int b[],int spt)
{
	for(int i=0;i<spt;i++)
   	display_star(a[i],b[i],15,11);
}
bool move_star_left(int &x,int &y,int i)
	{del_display_star(x,y);if(x-i>minx){x-=i;y;return true;}return false;}
bool move_star_right(int &x,int &y,int i)
	{del_display_star(x,y);if(x+i<maxx){x+=i;y;return true;}return false;}
bool move_star_down(int &x,int &y,int i)
	{del_display_star(x,y);if(y+i<maxy){x;y+=i;return true;}return false;}
bool move_star_up(int &x,int &y,int i)
	{del_display_star(x,y);if(y-i>miny){x;y-=i;return true;}return false;}
bool move_star_up_left(int &x,int &y,int i,int k=0)
	{del_display_star(x,y);if(x-(i+k)>minx&&y-i>miny){x-=(i+k);y-=i;return true;}return false;}
bool move_star_up_right(int &x,int &y,int i,int k=0)
	{del_display_star(x,y);if(x+(i+k)<maxx&&y-i>miny){x+=(i+k);y-=i;return true;}return false;}
bool move_star_down_left(int &x,int &y,int i,int k=0)
	{del_display_star(x,y);if(x-(i+k)>minx&&y+i<maxy){x-=(i+k);y+=i;return true;}return false;}
bool move_star_down_right(int &x,int &y,int i,int k=0)
	{del_display_star(x,y);if(x+(i+k)<maxx&&y+i<maxy){x+=(i+k);y+=i;return true;}return false;}
void start_star(int &x,int &y)
{
	randomize();
	do{x=random(80);}while(x<1);
   y=25;
}
void start_star(int a[],int b[],int k[],int &spt,int x,int y)
{
	spt=0;
   if(x+1<maxx){a[spt]=x+1;	b[spt++]=y;}       //0
   if(x-1>minx){a[spt]=x-1;	b[spt++]=y;}       //1
   if(y+1<maxy){a[spt]=x;	b[spt++]=y+1; }    //2
   if(y-1>miny){a[spt]=x;	b[spt++]=y-1; }    //3
   if(x+1<maxx&&y-1>miny){a[spt]=x+1;	b[spt++]=y-1;}     // 4
   if(x-1>minx&&y-1>miny){a[spt]=x-1;	b[spt++]=y-1;}     // 5
   if(x-1>minx&&y+1<maxy){a[spt]=x-1;	b[spt++]=y+1;}     // 6
   if(x+1<maxx&&y+1<maxy){a[spt]=x+1;	b[spt++]=y+1;}     // 7
   if(x-1>minx&&y-1>miny){a[spt]=x-2;	b[spt++]=y-1;}     // 8
   if(x+1<maxx&&y-1>miny){a[spt]=x+2;	b[spt++]=y-1;}     //  9
   if(x-1>minx&&y+1<maxy){a[spt]=x-2;	b[spt++]=y+1;}      // 10
   if(x+1<maxx&&y+1<maxy){a[spt]=x+2;	b[spt++]=y+1;}      //  11
   for(int i=0;i<spt;i++)
   	k[i]=0;
}

bool move_type_one(int a[],int b[],int k[],int spt,int c,int space,bool lock)
{
	int type=15;
	for(int i=0;i<spt;i++)
   {
   	del_display_star(a[i],b[i]);
      if(k[i]<space)
      {
      	if(k[i]>=space*40/100)
         	type=42;
      	if(k[i]>=space*60/100)
         	type=-7;
      	if(k[i]>=space*80/100)
         	type=-6;
   	switch(i)
      {
      	case 0:if( move_star_right(a[i],b[i],4)&&lock)display_star(a[i],b[i],type,c);else del_display_star(a[i],b[i]); break;
         case 1:if( move_star_left(a[i],b[i],4)&&lock)display_star(a[i],b[i],type,c);else del_display_star(a[i],b[i]);break;
         case 2:if( move_star_down(a[i],b[i],2)&&lock)display_star(a[i],b[i],type,c);else del_display_star(a[i],b[i]);break;
         case 3:if( move_star_up(a[i],b[i],2)&&lock)display_star(a[i],b[i],type,c);else del_display_star(a[i],b[i]);break;
			case 4:if( move_star_up_right(a[i],b[i],2)&&lock)display_star(a[i],b[i],type,c);else del_display_star(a[i],b[i]);break;
         case 5:if( move_star_up_left(a[i],b[i],2)&&lock)display_star(a[i],b[i],type,c);else del_display_star(a[i],b[i]);break;
         case 6:if( move_star_down_left(a[i],b[i],2)&&lock)display_star(a[i],b[i],type,c);else del_display_star(a[i],b[i]);break;
         case 7:if( move_star_down_right(a[i],b[i],2)&&lock)display_star(a[i],b[i],type,c);else del_display_star(a[i],b[i]);break;
         case 8:if( move_star_up_left(a[i],b[i],1,2)&&lock)display_star(a[i],b[i],type,c);else del_display_star(a[i],b[i]);break;
         case 9:if( move_star_up_right(a[i],b[i],1,2)&&lock)display_star(a[i],b[i],type,c);else del_display_star(a[i],b[i]);break;
         case 10:if( move_star_down_left(a[i],b[i],1,2)&&lock)display_star(a[i],b[i],type,c);else del_display_star(a[i],b[i]);break;
         case 11:if( move_star_down_right(a[i],b[i],1,2)&&lock)display_star(a[i],b[i],type,c);else del_display_star(a[i],b[i]);break;
      }
      	k[i]++;
      }
   }
   if(k[spt-1]>=space)
   	return false;
   return true;
}
void ()
{
	textmode(C4350);
   _setcursortype(0);
	int star[100],star1[100],k[100],star2[100],star3[100],k1[100],spt1=1,spt=1;
	int x,y;
   start_star(x,y);
   display_star(x,y,15,14);
   start_star(star,star1,k,spt,x,y);
   start_star(star2,star3,k1,spt1,x,y);
   display_star(star,star1,spt);
   clock_t start,end,lower;
   start=clock();
   lower=clock();
   int lock;
   randomize();
   bool co=true,co1=true;
   while(1)
   {
   	end=clock();
      if(((end-start)/CLK_TCK)>=.1)
      {
      	start=end;
         del_display_star(star,star1,spt);
         move_type_one(star,star1,k,spt,-1,12,true);
         if(((end-lower)/CLK_TCK)>=.4)
      	{
         	if(co1)
            {
         		lock=random(11);
   				if(lock%2==0)
   					co=true;
               else
               	co=false;
               co1=false;
            }
         	del_display_star(star2,star3,spt1);
         	if(!move_type_one(star2,star3,k1,spt1,-1,12,co))
            {
            	co1=true;
            	lower=end;
            	start_star(x,y);
   				display_star(x,y,15,14);
   				start_star(star,star1,k,spt,x,y);
   				start_star(star2,star3,k1,spt1,x,y);
               clrscr();continue;
            }
            del_display_star(x,y);
      	}
      }

   }
}
