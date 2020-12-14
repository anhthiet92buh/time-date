#include <iostream>
#include <time.h>
#include <fstream>
#include <ctime>
#include "vntime.h"
using namespace std;
using namespace vn;

vntime thoi_gian_moc(vntime *pt, int a, int b){
            pt->sec_vn = 0;
            pt->min_vn = 0;
            pt->hour_vn = 0;
            pt->mday_vn = 1;
            pt->mon_vn = 1;
            pt->year_vn = b;
            pt->wday_vn = 7;
            pt->yday_vn = 1;
            return *pt;

};
const char *ThuTrongTuan_Duong(int *x){
        switch (*x)
        {
        case 0:{
            return "Thu7";
            break;
        }
        case 1: {
            return "CN";
            break;
        }case 2: {
            return "Thu2";
            break;
        }case 3: {
            return "Thu3";
            break;
        }case 4: {
            return "Thu4";
            break;
        }case 5: {
            return "Thu5";
            break;
        }case 6: {
            return "Thu6";
            break;
        }
        default:
            return "Fail Duong";
            break;
        }
    };
const char *ThuTrongTuan_Am(int *x){
        switch (*x)
        {
        case 0:{
            return "Thu6";
            break;
        }
        case -1: {
            return "Thu5";
            break;
        }case -2: {
            return "Thu4";
            break;
        }case -3: {
            return "Thu3";
            break;
        }case -4: {
            return "Thu2";
            break;
        }case -5: {
            return "CN";
            break;
        }case -6: {
            return "Thu7";
            break;
        }
        default:
            return "Fail Am";
            break;
        }
    };

void chuyen_doi_trong_nam_nhuan_duong(vntime *pt, int *ngay_trong_4nam, int *nam, int *ngay_trong_tuan, int *gio, int *phut, int *giay){
    pt->year_vn = *nam;
    pt->yday_vn = *ngay_trong_4nam;
    pt->wday_vn = *ngay_trong_tuan;
    pt->hour_vn = *gio;
    pt->min_vn = *phut;
    pt->sec_vn = *giay;
    if(*ngay_trong_4nam<=31){
        pt->mday_vn = *ngay_trong_4nam ;
        pt->mon_vn = 1;
    };
    if((*ngay_trong_4nam>31)&&(*ngay_trong_4nam<=60)){
        pt->mday_vn = *ngay_trong_4nam - 31;
        pt->mon_vn = 2;
    };
    if((*ngay_trong_4nam>60)&&(*ngay_trong_4nam<=91)){
        pt->mday_vn = *ngay_trong_4nam - 60;
        pt->mon_vn = 3;
    };
    if((*ngay_trong_4nam>91)&&(*ngay_trong_4nam<=121)){
        pt->mday_vn = *ngay_trong_4nam - 91;
        pt->mon_vn = 4;
    };
    if((*ngay_trong_4nam>121)&&(*ngay_trong_4nam<=152)){
        pt->mday_vn = *ngay_trong_4nam - 121;
        pt->mon_vn = 5;
    };
    if((*ngay_trong_4nam>152)&&(*ngay_trong_4nam<=182)){
        pt->mday_vn = *ngay_trong_4nam - 152;
        pt->mon_vn = 6;
    };
    if((*ngay_trong_4nam>182)&&(*ngay_trong_4nam<=213)){
        pt->mday_vn = *ngay_trong_4nam - 182;
        pt->mon_vn = 7;
    };
    if((*ngay_trong_4nam>213)&&(*ngay_trong_4nam<=244)){
        pt->mday_vn = *ngay_trong_4nam - 213;
        pt->mon_vn = 8;
    };
     if((*ngay_trong_4nam>244)&&(*ngay_trong_4nam<=274)){
        pt->mday_vn = *ngay_trong_4nam - 244;
        pt->mon_vn = 9;
    };
    if((*ngay_trong_4nam>274)&&(*ngay_trong_4nam<=305)){
        pt->mday_vn = *ngay_trong_4nam - 274;
        pt->mon_vn = 10;
    };
    if((*ngay_trong_4nam>305)&&(*ngay_trong_4nam<=335)){
        pt->mday_vn = *ngay_trong_4nam - 305;
        pt->mon_vn = 11;
    };
     if((*ngay_trong_4nam>335)&&(*ngay_trong_4nam<=366)){
        pt->mday_vn = *ngay_trong_4nam - 335;
        pt->mon_vn = 12;
    };

};
void chuyen_doi_trong_nam_thuong_duong(vntime *pt, int *ngay_trong_nam_konhuan,int *nam, int *ngay_trong_4nam, int *ngay_trong_tuan, int *gio, int *phut, int *giay){ 
    if((*ngay_trong_4nam>366)&&(*ngay_trong_4nam<=731)) pt->year_vn = *nam + 1;
    if((*ngay_trong_4nam>731)&&(*ngay_trong_4nam<=1096)) pt->year_vn = *nam + 2;
    if((*ngay_trong_4nam>1096)&&(*ngay_trong_4nam<=1461)) pt->year_vn = *nam + 3;
    pt->yday_vn = *ngay_trong_nam_konhuan;
    pt->wday_vn = *ngay_trong_tuan;
    pt->hour_vn = *gio;
    pt->min_vn = *phut;
    pt->sec_vn = *giay;
    if(*ngay_trong_nam_konhuan<=31){
        pt->mday_vn = *ngay_trong_nam_konhuan;
        pt->mon_vn = 1;
    };
    if((*ngay_trong_nam_konhuan>31)&&(*ngay_trong_nam_konhuan<=59)){
        pt->mday_vn = *ngay_trong_nam_konhuan - 31;
        pt->mon_vn = 2;
    };
    if((*ngay_trong_nam_konhuan>59)&&(*ngay_trong_nam_konhuan<=90)){
        pt->mday_vn = *ngay_trong_nam_konhuan - 59;
        pt->mon_vn = 3;
    };
    if((*ngay_trong_nam_konhuan>90)&&(*ngay_trong_nam_konhuan<=120)){
        pt->mday_vn = *ngay_trong_nam_konhuan - 90;
        pt->mon_vn = 4;
    };
    if((*ngay_trong_nam_konhuan>120)&&(*ngay_trong_nam_konhuan<=151)){
        pt->mday_vn = *ngay_trong_nam_konhuan - 120;
        pt->mon_vn = 5;
    };
    if((*ngay_trong_nam_konhuan>151)&&(*ngay_trong_nam_konhuan<=181)){
        pt->mday_vn = *ngay_trong_nam_konhuan - 151;
        pt->mon_vn = 6;
    };
    if((*ngay_trong_nam_konhuan>181)&&(*ngay_trong_nam_konhuan<=212)){
        pt->mday_vn = *ngay_trong_nam_konhuan - 181;
        pt->mon_vn = 7;
    };
    if((*ngay_trong_nam_konhuan>212)&&(*ngay_trong_nam_konhuan<=243)){
        pt->mday_vn = *ngay_trong_nam_konhuan - 212;
        pt->mon_vn = 8;
    };
     if((*ngay_trong_nam_konhuan>243)&&(*ngay_trong_nam_konhuan<=273)){
        pt->mday_vn = *ngay_trong_nam_konhuan - 243;
        pt->mon_vn = 9;
    };
    if((*ngay_trong_nam_konhuan>273)&&(*ngay_trong_nam_konhuan<=304)){
        pt->mday_vn = *ngay_trong_nam_konhuan - 273;
        pt->mon_vn = 10;
    };
    if((*ngay_trong_nam_konhuan>304)&&(*ngay_trong_nam_konhuan<=334)){
        pt->mday_vn = *ngay_trong_nam_konhuan - 304;
        pt->mon_vn = 11;
    };
     if((*ngay_trong_nam_konhuan>334)&&(*ngay_trong_nam_konhuan<=365)){
        pt->mday_vn = *ngay_trong_nam_konhuan - 334;
        pt->mon_vn = 12;
    };


};
void chuyen_doi_nam_thuong_am(vntime *pt, int *ngay_tuong_ung,int *nam, int *ngay_trong_4nam, int *ngay_trong_tuan, int *gio, int *phut, int *giay){
    if((*ngay_trong_4nam>366)&&(*ngay_trong_4nam<=731)) pt->year_vn=*nam-3;
    if((*ngay_trong_4nam>731)&&(*ngay_trong_4nam<=1096)) pt->year_vn=*nam-2;
    if((*ngay_trong_4nam>1096)&&(*ngay_trong_4nam<=1461)) pt->year_vn=*nam-1;
    pt->yday_vn = *ngay_tuong_ung;
    pt->wday_vn = *ngay_trong_tuan;
    pt->hour_vn = *gio;
    pt->min_vn = *phut;
    pt->sec_vn = *giay;
    if(*ngay_tuong_ung<=31){
        pt->mday_vn = *ngay_tuong_ung;
        pt->mon_vn = 1;
    };
    if((*ngay_tuong_ung>31)&&(*ngay_tuong_ung<=59)){
        pt->mday_vn = *ngay_tuong_ung - 31;
        pt->mon_vn = 2;
    };
    if((*ngay_tuong_ung>59)&&(*ngay_tuong_ung<=90)){
        pt->mday_vn = *ngay_tuong_ung - 59;
        pt->mon_vn = 3;
    };
    if((*ngay_tuong_ung>90)&&(*ngay_tuong_ung<=120)){
        pt->mday_vn = *ngay_tuong_ung - 90;
        pt->mon_vn = 4;
    };
    if((*ngay_tuong_ung>120)&&(*ngay_tuong_ung<=151)){
        pt->mday_vn = *ngay_tuong_ung - 120;
        pt->mon_vn = 5;
    };
    if((*ngay_tuong_ung>151)&&(*ngay_tuong_ung<=181)){
        pt->mday_vn = *ngay_tuong_ung - 151;
        pt->mon_vn = 6;
    };
    if((*ngay_tuong_ung>181)&&(*ngay_tuong_ung<=212)){
        pt->mday_vn = *ngay_tuong_ung - 181;
        pt->mon_vn = 7;
    };
    if((*ngay_tuong_ung>212)&&(*ngay_tuong_ung<=243)){
        pt->mday_vn = *ngay_tuong_ung - 212;
        pt->mon_vn = 8;
    };
     if((*ngay_tuong_ung>243)&&(*ngay_tuong_ung<=273)){
        pt->mday_vn = *ngay_tuong_ung - 243;
        pt->mon_vn = 9;
    };
    if((*ngay_tuong_ung>273)&&(*ngay_tuong_ung<=304)){
        pt->mday_vn = *ngay_tuong_ung - 273;
        pt->mon_vn = 10;
    };
    if((*ngay_tuong_ung>304)&&(*ngay_tuong_ung<=334)){
        pt->mday_vn = *ngay_tuong_ung - 304;
        pt->mon_vn = 11;
    };
     if((*ngay_tuong_ung>334)&&(*ngay_tuong_ung<=365)){
        pt->mday_vn = *ngay_tuong_ung - 334;
        pt->mon_vn = 12;
    };

};
void chuyen_doi_nam_nhuan_am(vntime *pt, int *ngay_trong_4nam, int *nam, int *ngay_trong_tuan, int *gio, int *phut, int *giay){
    pt->year_vn = *nam-4;
    pt->yday_vn = *ngay_trong_4nam;
    pt->wday_vn = *ngay_trong_tuan;
    pt->hour_vn = *gio;
    pt->min_vn = *phut;
    pt->sec_vn = *giay;
    if(*ngay_trong_4nam<=31){
        pt->mday_vn = *ngay_trong_4nam;
        pt->mon_vn = 1;
    };
    if((*ngay_trong_4nam>31)&&(*ngay_trong_4nam<=60)){
        pt->mday_vn = *ngay_trong_4nam - 31;
        pt->mon_vn = 2;
    };
    if((*ngay_trong_4nam>60)&&(*ngay_trong_4nam<=91)){
        pt->mday_vn = *ngay_trong_4nam - 60;
        pt->mon_vn = 3;
    };
    if((*ngay_trong_4nam>91)&&(*ngay_trong_4nam<=121)){
        pt->mday_vn = *ngay_trong_4nam - 91;
        pt->mon_vn = 4;
    };
    if((*ngay_trong_4nam>121)&&(*ngay_trong_4nam<=152)){
        pt->mday_vn = *ngay_trong_4nam - 121;
        pt->mon_vn = 5;
    };
    if((*ngay_trong_4nam>152)&&(*ngay_trong_4nam<=182)){
        pt->mday_vn = *ngay_trong_4nam - 152;
        pt->mon_vn = 6;
    };
    if((*ngay_trong_4nam>182)&&(*ngay_trong_4nam<=213)){
        pt->mday_vn = *ngay_trong_4nam - 182;
        pt->mon_vn = 7;
    };
    if((*ngay_trong_4nam>213)&&(*ngay_trong_4nam<=244)){
        pt->mday_vn = *ngay_trong_4nam - 213;
        pt->mon_vn = 8;
    };
     if((*ngay_trong_4nam>244)&&(*ngay_trong_4nam<=274)){
        pt->mday_vn = *ngay_trong_4nam - 244;
        pt->mon_vn = 9;
    };
    if((*ngay_trong_4nam>274)&&(*ngay_trong_4nam<=305)){
        pt->mday_vn = *ngay_trong_4nam - 274;
        pt->mon_vn = 10;
    };
    if((*ngay_trong_4nam>305)&&(*ngay_trong_4nam<=335)){
        pt->mday_vn = *ngay_trong_4nam - 305;
        pt->mon_vn = 11;
    };
     if((*ngay_trong_4nam>335)&&(*ngay_trong_4nam<=366)){
        pt->mday_vn = *ngay_trong_4nam - 335;
        pt->mon_vn = 12;
    };


};
void so_ngay_trong_tung_nam(vntime *pt, int *nam, int *ngay_trong_4nam, int * ngay_trong_tuan, int a, int *gio, int *phut, int *giay, int b){
    int ngaycuanam;
    if (a>0){
        if(*ngay_trong_4nam <= 366) chuyen_doi_trong_nam_nhuan_duong(pt,ngay_trong_4nam,nam,ngay_trong_tuan,gio,phut,giay);
        if((*ngay_trong_4nam > 366) && (*ngay_trong_4nam <=731)){
            ngaycuanam = *ngay_trong_4nam - 366;
            chuyen_doi_trong_nam_thuong_duong(pt,&ngaycuanam, nam, ngay_trong_4nam, ngay_trong_tuan, gio, phut, giay);
        };
        if ((*ngay_trong_4nam > 731) && (*ngay_trong_4nam<=1096)){
            ngaycuanam = *ngay_trong_4nam - 731;
            chuyen_doi_trong_nam_thuong_duong(pt,&ngaycuanam, nam, ngay_trong_4nam, ngay_trong_tuan, gio, phut, giay);
        };
        if ((*ngay_trong_4nam>1096) && (*ngay_trong_4nam <= 1461)){
            ngaycuanam = *ngay_trong_4nam - 1096;
            chuyen_doi_trong_nam_thuong_duong(pt,&ngaycuanam, nam, ngay_trong_4nam, ngay_trong_tuan, gio, phut, giay);
        };
    };
    if (a<0){
        if(*ngay_trong_4nam <= 366) chuyen_doi_nam_nhuan_am(pt,ngay_trong_4nam, nam, ngay_trong_tuan, gio, phut, giay);
        if((*ngay_trong_4nam > 366) && (*ngay_trong_4nam <=731)){
            ngaycuanam = *ngay_trong_4nam - 366;
            chuyen_doi_nam_thuong_am(pt,&ngaycuanam, nam, ngay_trong_4nam, ngay_trong_tuan, gio, phut, giay);
        };
        if ((*ngay_trong_4nam>731)&&(*ngay_trong_4nam<=1096)){
            ngaycuanam = *ngay_trong_4nam - 731;
            chuyen_doi_nam_thuong_am(pt,&ngaycuanam, nam, ngay_trong_4nam, ngay_trong_tuan, gio, phut, giay);
        };
        if((*ngay_trong_4nam>1096)&&(*ngay_trong_4nam<=1461)){
            ngaycuanam = *ngay_trong_4nam - 1096;
            chuyen_doi_nam_thuong_am(pt,&ngaycuanam, nam, ngay_trong_4nam, ngay_trong_tuan, gio, phut, giay);
        };
        
    };
    if (a==0) thoi_gian_moc(pt, a, b);
    
};
  void Chuyen_doi_trong_nam_nhuan(vntime *pt, int *ngaytrongnam, int *yearMoc, int *weekday){
        pt->year_vn=*yearMoc;
        pt->yday_vn=*ngaytrongnam;
        pt->wday_vn=*weekday;

        if (*ngaytrongnam<=31)
        {
            pt->mday_vn=*ngaytrongnam;
            pt->mon_vn = 1;            
        };
        if ((*ngaytrongnam>31)&&(*ngaytrongnam<=60))
        {
            pt->mday_vn=*ngaytrongnam-31;
            pt->mon_vn = 2;
        };
        if ((*ngaytrongnam>60)&&(*ngaytrongnam<=91))
        {
            pt->mday_vn=*ngaytrongnam-60;
            pt->mon_vn = 3;
        };
        if ((*ngaytrongnam>91)&&(*ngaytrongnam<=121))
        {
            pt->mday_vn=*ngaytrongnam-91;
            pt->mon_vn = 4;
        };
        if ((*ngaytrongnam>121)&&(*ngaytrongnam<=152))
        {
            pt->mday_vn=*ngaytrongnam-121;
            pt->mon_vn = 5;
        };
        if ((*ngaytrongnam>152)&&(*ngaytrongnam<=182))
        {
            pt->mday_vn=*ngaytrongnam-152;
            pt->mon_vn = 6;
        };
        if ((*ngaytrongnam>182)&&(*ngaytrongnam<=213))
        {
            pt->mday_vn=*ngaytrongnam-182;
            pt->mon_vn = 7;
        };
        if ((*ngaytrongnam>213)&&(*ngaytrongnam<=244))
        {
            pt->mday_vn=*ngaytrongnam-213;
            pt->mon_vn = 8;
        };
        if ((*ngaytrongnam>244)&&(*ngaytrongnam<=274))
        {
            pt->mday_vn=*ngaytrongnam-244;
            pt->mon_vn = 9;
        };
        if ((*ngaytrongnam>274)&&(*ngaytrongnam<=305))
        {
            pt->mday_vn=*ngaytrongnam-274;
            pt->mon_vn = 10;
        };
        if ((*ngaytrongnam>305)&&(*ngaytrongnam<=335))
        {
            pt->mday_vn=*ngaytrongnam-305;
            pt->mon_vn = 11;
        };
        if ((*ngaytrongnam>335)&&(*ngaytrongnam<=366))
        {
            pt->mday_vn=*ngaytrongnam-335;
            pt->mon_vn = 12;
        };
    };
    void Chuyen_doi_trong_nam_thuong(vntime *pt, int *ngaytrongnam, int *yearMoc, int *weekday,int *ngaytrongchuky){
        if((*ngaytrongchuky>366)&&(*ngaytrongchuky<=731)) pt->year_vn=*yearMoc+1;
        if((*ngaytrongchuky>731)&&(*ngaytrongchuky<=1096)) pt->year_vn=*yearMoc+2;
        if((*ngaytrongchuky>1096)&&(*ngaytrongchuky<=1461)) pt->year_vn=*yearMoc+3; 
        //pt->year_vn=*yearMoc;
        pt->yday_vn=*ngaytrongnam;
        pt->wday_vn=*weekday;

        if (*ngaytrongnam<=31)
        {
            pt->mday_vn=*ngaytrongnam;
            pt->mon_vn = 1;            
        };
        if ((*ngaytrongnam>31)&&(*ngaytrongnam<=59))
        {
            pt->mday_vn=*ngaytrongnam-31;
            pt->mon_vn = 2;
        };
        if ((*ngaytrongnam>59)&&(*ngaytrongnam<=90))
        {
            pt->mday_vn=*ngaytrongnam-59;
            pt->mon_vn = 3;
        };
        if ((*ngaytrongnam>90)&&(*ngaytrongnam<=120))
        {
            pt->mday_vn=*ngaytrongnam-90;
            pt->mon_vn = 4;
        };
        if ((*ngaytrongnam>120)&&(*ngaytrongnam<=151))
        {
            pt->mday_vn=*ngaytrongnam-120;
            pt->mon_vn = 5;
        };
        if ((*ngaytrongnam>151)&&(*ngaytrongnam<=181))
        {
            pt->mday_vn=*ngaytrongnam-151;
            pt->mon_vn = 6;
        };
        if ((*ngaytrongnam>181)&&(*ngaytrongnam<=212))
        {
            pt->mday_vn=*ngaytrongnam-181;
            pt->mon_vn = 7;
        };
        if ((*ngaytrongnam>212)&&(*ngaytrongnam<=243))
        {
            pt->mday_vn=*ngaytrongnam-212;
            pt->mon_vn = 8;
        };
        if ((*ngaytrongnam>243)&&(*ngaytrongnam<=273))
        {
            pt->mday_vn=*ngaytrongnam-243;
            pt->mon_vn = 9;
        };
        if ((*ngaytrongnam>273)&&(*ngaytrongnam<=304))
        {
            pt->mday_vn=*ngaytrongnam-273;
            pt->mon_vn = 10;
        };
        if ((*ngaytrongnam>304)&&(*ngaytrongnam<=334))
        {
            pt->mday_vn=*ngaytrongnam-304;
            pt->mon_vn = 11;
        };
        if ((*ngaytrongnam>334)&&(*ngaytrongnam<=365))
        {
            pt->mday_vn=*ngaytrongnam-334;
            pt->mon_vn = 12;
        };
    };
    void TimNgay(vntime *pt,int *yearMoc, int *weekDay, int *ngaytrongchuky){
        int dayofyear;
        if(*ngaytrongchuky<=366) Chuyen_doi_trong_nam_nhuan(pt,ngaytrongchuky,yearMoc,weekDay);
        if((*ngaytrongchuky>366)&&(*ngaytrongchuky<=731)) {
            dayofyear=*ngaytrongchuky-366;
            Chuyen_doi_trong_nam_thuong(pt,&dayofyear,yearMoc,weekDay,ngaytrongchuky);
        };
        if((*ngaytrongchuky>731)&&(*ngaytrongchuky<=1096)){
            dayofyear=*ngaytrongchuky-731;
            Chuyen_doi_trong_nam_thuong(pt,&dayofyear,yearMoc,weekDay,ngaytrongchuky);
        };
        if((*ngaytrongchuky>1096)&&(*ngaytrongchuky<=1461)){
            dayofyear=*ngaytrongchuky-1096;
            Chuyen_doi_trong_nam_thuong(pt,&dayofyear,yearMoc,weekDay,ngaytrongchuky);
        };
    };
void in_ca_gio_phut_giay(int a){
    vntime *pt,t;
    pt = &t;
    int b = 2000;
    if (a==0)
    {
        thoi_gian_moc(pt, a, b);
        cout << "Thu "<< pt->wday_vn<< "  "<< pt->mday_vn<<"/"<<pt->mon_vn<<"/ "<<pt->year_vn<<endl;
        cout<< pt->hour_vn<<": "<<pt->min_vn<<": "<<pt->sec_vn<<endl;
    }
    else
    {
        if (a>0)
        {       int *slck4n, solanchuky4nam = int (a / 126230400);
                slck4n = &solanchuky4nam;
                int *ngaytrong4nam, ngay_trong_4nam = int (1461*a/126230400 - *slck4n*1461) + 1;
                ngaytrong4nam = &ngay_trong_4nam;
                int *namtuongung, nam = b + *slck4n*4;
                namtuongung = &nam;
                int *ngaytrongtuan, ngay_trong_tuan = int(a/86400) % 7;
                ngaytrongtuan = &ngay_trong_tuan;
                int *ngaycuanam, dayofyear;
                ngaycuanam = &dayofyear;
                int *h, gio = (a%86400)/3600;
                h = &gio;
                int *m, phut = (a%3600)/60;
                m = &phut;
                int *s, giay = a%60;
                s = &giay;
                so_ngay_trong_tung_nam(pt,namtuongung,ngaytrong4nam,ngaytrongtuan,a,h,m,s,b);
                cout<<ThuTrongTuan_Duong(ngaytrongtuan)<< "  "<< pt->mday_vn<<"/"<<pt->mon_vn<<"/ "<<pt->year_vn<<endl;
                cout<< pt->hour_vn<<": "<<pt->min_vn<<": "<<pt->sec_vn<<endl;

        }
        else if (a < 0)
        {
                int *slck4n, solanchuky4nam = int (a / -126230400);
                slck4n = &solanchuky4nam;
                int *ngaytrong4nam, ngay_trong_4nam = 1+ ((a+(126230400*(*slck4n+1)))%126230400)/86400;
                ngaytrong4nam = &ngay_trong_4nam;
                int *namtuongung, nam = b - *slck4n*4;
                namtuongung = &nam;
                int *ngaytrongtuan, ngay_trong_tuan = int(a/86400) %7 ;
                ngaytrongtuan = &ngay_trong_tuan;
                int *ngaycuanam, dayofyear;
                ngaycuanam = &dayofyear;
                int *h, gio = ((a+126230400*(*slck4n +1))%86400)/3600;
                h = &gio;
                int *m, phut = ((a+126230400*(*slck4n+1))%3600)/60 ;
                m =&phut;
                int *s, giay = (a+126230400*(*slck4n+1))%60;
                s = &giay;
                so_ngay_trong_tung_nam(pt,namtuongung,ngaytrong4nam,ngaytrongtuan,a,h,m,s,b);
                cout<<ThuTrongTuan_Am(ngaytrongtuan)<<" "<< pt->mday_vn<<"/ "<<pt->mon_vn<<"/ "<<pt->year_vn<<endl;
                cout<<pt->hour_vn<<": "<<pt->min_vn<<": "<<pt->sec_vn<<endl;

        }
        else
        {
            cout<<"====chuong trinh bi loi===="<< endl;
        };

    };
    
    
};
int ngay_theo_giay(int a){
    int ngay_theo_giay = a/86400;
    return ngay_theo_giay;
};
void ko_in_gio_phut_giay(int c){
    vntime *pt, t;
    pt = &t;
    int b = 2000;
    if (c==0){
            thoi_gian_moc(pt,c,b);
            cout << "Thu "<< pt->wday_vn<< "  "<< pt->mday_vn<<"/"<<pt->mon_vn<<"/ "<<pt->year_vn<<endl;
        }
        else {
            int *slck4n, solanchuky4nam      = int(c/1461); // Lay chu ky 4 nam de tinh toan tim ra Time
            //cout<<"Solanchu ky 4 nam: "<<solanchuky4nam<<" - sizeo int: "<<sizeof(int)<<endl;
            slck4n=&solanchuky4nam;

            int *day_Moc,ngayMoc;
            day_Moc=&ngayMoc;
            //cout<<"Ngay Moc: "<<*day_Moc<<endl;

            int *year_Moc, namMoc;
            year_Moc = &namMoc;
            //cout<<"Nam Moc: "<<*year_Moc<<endl;

            int *day_chuky, ngaytrongchuky;
            day_chuky = &ngaytrongchuky;
            //cout<<"So ngay trong chu ky: "<<*day_chuky<<endl;
            
            int *week_day, dayofweek=c%7;
            week_day = &dayofweek;
            //cout<<"Ngay trong Tuan: "<<*week_day<<endl;

            int *DayOfYear,ngaytrognam;
            DayOfYear=&ngaytrognam;

            if (c >0){
                *day_Moc = int(*slck4n*1461);
            
            
                if (c==*day_Moc)
                {
                    *year_Moc = int(b+*slck4n*4-4);
                    *day_Moc=*day_Moc-1461;
                }else
                {
                    *year_Moc = int(b+*slck4n*4);
                };
                ngaytrongchuky = int(c-*day_Moc+1);
                TimNgay(pt,year_Moc,week_day,day_chuky);
                cout<<ThuTrongTuan_Duong(week_day)<< "  "<< pt->mday_vn<<"/"<<pt->mon_vn<<"/ "<<pt->year_vn<<endl;
            }
            else if (c<0) {
                ngayMoc = int(*slck4n*1461-1461);
                //cout<<"Ngay Moc: "<<*day_Moc<<endl;

                
                if (c-*day_Moc==1461)
                {
                *day_Moc=*day_Moc+1461;
                namMoc = int(b+*slck4n*4);
                }else
                {
                    namMoc = int(b+*slck4n*4-4);
                };
                
                //namMoc = int(b+*slck4n*4-4);
                //cout<<"Nam Moc: "<<*year_Moc<<endl;

                ngaytrongchuky = int(c-*day_Moc);
                //cout<<"So ngay trong chu ky: "<<*day_chuky<<endl;
                //ffull<<a<<" "<<*day_Moc<<" "<<*year_Moc<<" "<<*day_chuky<<" "<<*week_day<<" "<<ThuTrongTuan_Am(week_day)<<endl;

                TimNgay(pt,year_Moc,week_day,day_chuky);
                cout<<ThuTrongTuan_Am(week_day)<<" "<< pt->mday_vn<<"/ "<<pt->mon_vn<<"/ "<<pt->year_vn<<endl;
            }
            else
            {
                cout<<"Chương Trình Bị Lỗi"<<endl;
            };
            
        
            
        };
};
int main()
{
   // vntime *pt, t;
   // pt = &t;
    //int a=time(0)-946684800, b = 2000;
    int a;
    cin >> a;

    ofstream ffull;
    ffull.open("Full.txt",ios::out);
    //in_ca_gio_phut_giay(a);
    //ko_in_gio_phut_giay(ngay_theo_giay(a));
    bool isExc = false;
    int number;
    do{
        cout << "__________Chon kieu ban muon in__________"<< endl;
        cout<<"1. in ngay/thang/nam/gio/phut/giay."<<endl;
        cout<<"2. in ngay/thang/nam."<<endl;
        cout<<"3. Thoat."<<endl;
        cout<<"Moi ban chon:"<<endl;
        cin>>number;
        cout<<"ban chon: "<< number<<endl;
        switch (number)
        {
        case 1:
            in_ca_gio_phut_giay(a);
            break;
        case 2:
            ko_in_gio_phut_giay(ngay_theo_giay(a));
            break;
        case 3:
            isExc = true;
            break;
        default:
            cout<<"======Lua chon cua ban toi bo tay. Chon lai nao ======= "<< endl;
            break;
        }

    }
    while (!isExc);

   


    return 0;
}