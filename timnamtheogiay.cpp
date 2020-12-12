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
int main()
{
    vntime *pt, t;
    pt = &t;
    int a=time(0)-946684800, b = 2000;
    //cin >> a;

    ofstream ffull;
    ffull.open("Full.txt",ios::out);

    for (int i = -2000; i < 0; i++)
    {
        a=i*86000; 

        if (a==0)
        {
            thoi_gian_moc(pt, a, b);
            cout << "Thu "<< pt->wday_vn<< "  "<< pt->mday_vn<<"/"<<pt->mon_vn<<"/ "<<pt->year_vn<<endl;
            cout<< pt->hour_vn<<": "<<pt->min_vn<<": "<<pt->sec_vn<<endl;
            ffull<<a<<" "<<pt->mday_vn<<" "<<pt->mon_vn<<" "<<pt->year_vn<<" "<<pt->hour_vn<<" "<<pt->min_vn<<" "<<pt->sec_vn<<endl;
        }
        else
        {
            if (a>0)
            {
                int *slck4n, solanchuky4nam = int (a / 126230400);
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
               // cout << "slck4n = " << solanchuky4nam<<endl;
               // cout << "ngaytrong4nam = "<< *ngaytrong4nam<<endl;
                //cout <<"ngaytrongtuan = "<<ngay_trong_tuan<<endl;
                ffull<<a<<" "<<ThuTrongTuan_Duong(ngaytrongtuan)<<" "<<pt->mday_vn<<" "<<pt->mon_vn<<" "<<pt->year_vn<<" "<<pt->hour_vn<<" "<<pt->min_vn<<" "<<pt->sec_vn<<endl;
               // cout << "nam = "<< nam<< endl;
            }
            else if (a<0)
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
               // cout << "slck4n " << solanchuky4nam<< endl;
               // cout << "ngay trong 4 nam "<< ngay_trong_4nam<<endl;
               // cout << "nam tuong ung "<< nam<<endl;
               // cout <<"ngay trong tuan "<< ngay_trong_tuan<< endl;
                ffull<<a<<" "<<ThuTrongTuan_Am(ngaytrongtuan)<<"  "<<pt->mday_vn<<" "<<pt->mon_vn<<" "<<pt->year_vn<<" "<<pt->hour_vn<<" "<<pt->min_vn<<" "<<pt->sec_vn<<std::endl;


            }
            else 
            {
                cout<<"Chương Trình Bị Lỗi"<<endl;
            };
            
            

        };
        
    

    };



    return 0;
}