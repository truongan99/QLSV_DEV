#include"xuly.h"

int main()
{  
	srand(time(NULL)); //reset gia tri cho ham random ;
	DS_MON_HOC ds_mh;
	DS_LOP_TIN_CHI ds_ltc;
	DS_SINH_VIEN ds_sv;
	DocFileSV(ds_sv);
	DocFileMH(ds_mh);
	DocFileDSLTC(ds_ltc);
	DocFileDSDK(ds_ltc);
	MenuKT(ds_ltc,ds_mh,ds_sv);
	return 0;
}
