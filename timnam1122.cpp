#include <iostream>
#include <time.h>
using namespace std;

int main()
{   
    time_t baygio = time(0);
    cout << baygio<< endl;
    //int a = baygio+25200; // khai bao a la so giay nhap vao 
    int a;
    cin >>a;
    //int s = a%60;
    //cout << "s = "<< s << endl;
    //int h = a/3600;
    //cout << "h = "<< h<< endl;
    int x = 126230400; //so giay trong chu ky 4 nam nhuan 1 lan
    if (a >= 1)
    {   
        int b = static_cast<double>(a) / static_cast<double>(x);
        //cout << "b = "<<b<< endl;
        long double B = static_cast<double>(a) / static_cast<double>(x);
        //cout << "B = "<< B<<endl;
        //cout << "B -b: "<< B - b << endl;
        //cout << "(B - b)*1461(: "<< (B - b)*1461 << endl;
        int ngay_trong4nam = (1461*B - 1461*b)+0.000001;
        //cout<<"So sanh cac kieu nhan: "<<endl<<"(1641*B - 1641*b): "<<(1461*B - 1461*b)<<endl;
        //cout<<"(B*1641 - b*1641): "<<(B*1461 - b*1461)<<endl;
        //cout<<"(B - b)*1641: "<<(B - b)*1461<<endl;
        //cout<<"(B - b)*1641: "<<1461*(B - b)<<endl;
        int *n;//= &ngay_trong4nam;
        n=&ngay_trong4nam;
        //cout <<"ngay 4 nam int"<< ngay_trong4nam << endl;
        //cout<<"In theo *n: "<<*n<<endl;
        //cout<<"In theo n: "<<n<<endl;
        //cout<<"....: "<<&ngay_trong4nam<<"   :"<<ngay_trong4nam<<endl;
        long double Ngay_trong4nam = (B*1461 - b*1461);
        //cout << "Ngay trong 4 nam: "<< Ngay_trong4nam<< endl;
        //cout << "Ngay trong 4 nam int theo double: "<< (int)(Ngay_trong4nam+0.0000001)*10000<< endl;
        long double *N = &Ngay_trong4nam;
        int gio = (*N - *n)*24 + 0.000001;
        int *g = &gio;
        long double Gio = (*N - *n)*24 + 0.000001;
        long double *G = &Gio;
        int phut = (*G - *g)*60;
        //int *p = &phut;
        //long double Phut = (*G - *g)*60;
        //long double *P = &Phut;

        //int giay = a%60;
        //cout<< "giay = "<< giay<<endl;
        //int giay = (*P - *p)*60;
        int giay;
        int y; // nam tuong ung
        int ngay_trongthang;
        int giaykochia60 = a%60;
        //int giay;
        if  (a % 86400==0)
        {
            gio = 00;
            phut = 00;
            giay = 00;
            //giay = Giay;
            if ((ngay_trong4nam >= 0) && (ngay_trong4nam<31))
            {
                ngay_trongthang = 1 + ngay_trong4nam;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
                cout << "chay het nhanh:" <<endl;
            }
            if ((ngay_trong4nam >=31) && (ngay_trong4nam<60))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 31;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 60) && (ngay_trong4nam < 91))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 60;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 91) && (ngay_trong4nam < 121))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 91;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 121) && (ngay_trong4nam < 152))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 121;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 152) && (ngay_trong4nam < 182))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 152;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 182) && (ngay_trong4nam < 213))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 182;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 213) && (ngay_trong4nam < 244))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 213;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 244) && (ngay_trong4nam < 274))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 244;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 274) && (ngay_trong4nam < 305))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 274;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >=305) && (ngay_trong4nam < 335))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 305;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 335) && (ngay_trong4nam<366))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 335;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 366) && (ngay_trong4nam<397))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 366;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 397) && (ngay_trong4nam<425))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 397;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 425) && (ngay_trong4nam<456))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 425;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 456) && (ngay_trong4nam<486))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 456;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 486) && (ngay_trong4nam < 517))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 486;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 517) && (ngay_trong4nam<547))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 517;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 547) && (ngay_trong4nam<578))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 547;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 578) && (ngay_trong4nam<609))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 578;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 609) && (ngay_trong4nam<639))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 609;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 639) && (ngay_trong4nam<670))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 639;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 670) && (ngay_trong4nam<700))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 670;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 700) && (ngay_trong4nam<731))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 700;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 731) && (ngay_trong4nam<762))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 731;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 762) && (ngay_trong4nam<790))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 762;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 790) && (ngay_trong4nam<821))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 790;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 821) && (ngay_trong4nam<851))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 821;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 851) && (ngay_trong4nam<882))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 851;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 882) && (ngay_trong4nam<912))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 882;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 912) && (ngay_trong4nam<943))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 912;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 943) && (ngay_trong4nam < 974))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 943;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 974) && (ngay_trong4nam<1004))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 974;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1004) && (ngay_trong4nam<1035))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1004;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1035) && (ngay_trong4nam<1065))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1035;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1065) && (ngay_trong4nam<1096))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1065;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1096) && (ngay_trong4nam<1127))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1096;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1127) && (ngay_trong4nam<1155))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1127;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1155) && (ngay_trong4nam<1186))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1155;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1186) && (ngay_trong4nam<1216))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1186;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1216) && (ngay_trong4nam<1247))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1216;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }if ((ngay_trong4nam >= 1247) && (ngay_trong4nam<1277))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1247;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1277) && (ngay_trong4nam<1308))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1277;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1308) && (ngay_trong4nam<1339))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1308;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1339) && (ngay_trong4nam<1369))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1339;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1369) && (ngay_trong4nam<1400))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1369;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1400) && (ngay_trong4nam<1430))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1400;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1430) && (ngay_trong4nam<1461))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1430;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
        }
        else
        {
            //giaykochia60 =  giay;
            if ((ngay_trong4nam >= 0) && (ngay_trong4nam<31))
            {
                ngay_trongthang = 1 + ngay_trong4nam;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout <<gio<<": "<< phut <<": "<<giaykochia60<<endl;
            }
            if ((ngay_trong4nam >=31) && (ngay_trong4nam<60))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 31;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60<<endl;
            }
            if ((ngay_trong4nam >= 60) && (ngay_trong4nam < 91))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 60;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60<<endl;
            }
            if ((ngay_trong4nam >= 91) && (ngay_trong4nam < 121))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 91;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60<<endl;
            }
            if ((ngay_trong4nam >= 121) && (ngay_trong4nam < 152))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 121;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60<<endl;
            }
            if ((ngay_trong4nam >= 152) && (ngay_trong4nam < 182))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 152;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60<<endl;
            }
            if ((ngay_trong4nam >= 182) && (ngay_trong4nam < 213))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 182;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60<<endl;
            }
            if ((ngay_trong4nam >= 213) && (ngay_trong4nam < 244))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 213;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60<<endl;
            }
            if ((ngay_trong4nam >= 244) && (ngay_trong4nam < 274))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 244;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60<<endl;
            }
            if ((ngay_trong4nam >= 274) && (ngay_trong4nam < 305))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 274;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60<<endl;
            }
            if ((ngay_trong4nam >=305) && (ngay_trong4nam < 335))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 305;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60<<endl;
            }
            if ((ngay_trong4nam >= 335) && (ngay_trong4nam<366))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 335;
                y = 2000 + (4*b);
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60<<endl;
            }
            if ((ngay_trong4nam >= 366) && (ngay_trong4nam<397))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 366;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 397) && (ngay_trong4nam<425))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 397;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 425) && (ngay_trong4nam<456))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 425;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 456) && (ngay_trong4nam<486))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 455;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 486) && (ngay_trong4nam < 517))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 486;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 517) && (ngay_trong4nam<547))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 517;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 547) && (ngay_trong4nam<578))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 547;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 578) && (ngay_trong4nam<609))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 578;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 609) && (ngay_trong4nam<639))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 609;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 639) && (ngay_trong4nam<670))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 639;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 670) && (ngay_trong4nam<700))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 670;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 700) && (ngay_trong4nam<731))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 700;
                y = 2000 + (4*b) +1;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 731) && (ngay_trong4nam<762))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 731;
                y = 1970 + (4*b) +2;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 762) && (ngay_trong4nam<790))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 762;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 790) && (ngay_trong4nam<821))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 790;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 821) && (ngay_trong4nam<851))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 821;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 851) && (ngay_trong4nam<882))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 851;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 882) && (ngay_trong4nam<912))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 882;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 912) && (ngay_trong4nam<943))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 912;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 943) && (ngay_trong4nam < 974))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 943;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 974) && (ngay_trong4nam<1004))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 974;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1004) && (ngay_trong4nam<1035))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1004;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1035) && (ngay_trong4nam<1065))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1035;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1065) && (ngay_trong4nam<1096))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1065;
                y = 2000 + (4*b) +2;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1096) && (ngay_trong4nam<1127))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1096;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1127) && (ngay_trong4nam<1155))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1127;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1155) && (ngay_trong4nam<1186))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1155;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1186) && (ngay_trong4nam<1216))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1186;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1216) && (ngay_trong4nam<1247))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1216;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }if ((ngay_trong4nam >= 1247) && (ngay_trong4nam<1277))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1247;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1277) && (ngay_trong4nam<1308))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1277;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1308) && (ngay_trong4nam<1339))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1308;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1339) && (ngay_trong4nam<1369))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1339;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1369) && (ngay_trong4nam<1400))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1369;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1400) && (ngay_trong4nam<1430))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1400;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
            if ((ngay_trong4nam >= 1430) && (ngay_trong4nam<1461))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1430;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giaykochia60 <<endl;
            }
        };
        
    } 
    if (a < 0)
    {
        int b = static_cast<double>(a) / static_cast<double>(x);
        long double B = static_cast<double>(a) / static_cast<double>(x);
        int ngay = (1461*B - 1461*b)-0.000001;
        int *n;//= &ngay_trong4nam;
        n=&ngay;
        long double Ngay = (B*1461 - b*1461);
        long double *N = &Ngay;
        long double Ngay_trong4nam = *N + 1461;
        //cout <<"ngay..Ngay:   "<< ngay<< "...."<< Ngay<< endl;
        int gio = (*N - *n)*24 - 0.000001 + 24;
        int *g = &gio;
        long double Gio = (*N - *n)*24 - 0.000001 + 24;
        long double *G = &Gio;
        int phut = (*G - *g)*60 ;
        int y; // nam tuong ung
        int ngay_trongthang;
        int giay;
        int ngay_trong4nam;
        if (a % -126230400 == 0)
        {
            y = 2000 + 4*b;
            ngay_trongthang = Ngay + 1;
            gio = 0;
            phut = 0;
            giay = a%60;
            cout << ngay_trongthang << "/ 01/ "<< y<< endl;
            cout << gio<<": "<< phut << ": " << giay<< endl;
        }
        if ((a % -86400 == 0) && (a %-126230400 != 0))
        {
            ngay_trong4nam = Ngay + 1461;
            gio = 0;
            phut = 0;
            giay = a%60;

            if ((ngay_trong4nam >= 0) && (ngay_trong4nam<31))
            {
                ngay_trongthang = 1 + ngay_trong4nam;
                y = 2000 + (4*b)-4;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
                cout << "chay het nhanh:" <<endl;
            }
            if ((ngay_trong4nam >=31) && (ngay_trong4nam<60))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 31;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 60) && (ngay_trong4nam < 91))
            {
                ngay_trongthang = 1 +ngay_trong4nam - 60;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 91) && (ngay_trong4nam < 121))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 91;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 121) && (ngay_trong4nam < 152))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 120;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 152) && (ngay_trong4nam < 182))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 152;
                y = 2000 + (4*b) -4 ;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 182) && (ngay_trong4nam < 213))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 182;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 213) && (ngay_trong4nam < 244))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 213;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 244) && (ngay_trong4nam < 274))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 244;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 274) && (ngay_trong4nam < 305))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 274;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >=305) && (ngay_trong4nam < 335))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 305;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 335) && (ngay_trong4nam<366))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 335;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 366) && (ngay_trong4nam<397))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 366;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 397) && (ngay_trong4nam<425))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 397;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 425) && (ngay_trong4nam<456))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 425;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 456) && (ngay_trong4nam<486))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 456;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 486) && (ngay_trong4nam < 517))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 486;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 517) && (ngay_trong4nam<547))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 517;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 547) && (ngay_trong4nam<578))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 547;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 578) && (ngay_trong4nam<609))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 578;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 609) && (ngay_trong4nam<639))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 609;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 639) && (ngay_trong4nam<670))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 639;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 670) && (ngay_trong4nam<700))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 670;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 700) && (ngay_trong4nam<731))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 700;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 731) && (ngay_trong4nam<762))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 731;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 762) && (ngay_trong4nam<790))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 762;
                y = 2000 + (4*b) - 2;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 790) && (ngay_trong4nam<821))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 790;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 821) && (ngay_trong4nam<851))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 821;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 851) && (ngay_trong4nam<882))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 851;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 882) && (ngay_trong4nam<912))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 882;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 912) && (ngay_trong4nam<943))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 912;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 943) && (ngay_trong4nam < 974))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 943;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 974) && (ngay_trong4nam<1004))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 974;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1004) && (ngay_trong4nam<1035))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1004;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1035) && (ngay_trong4nam<1065))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1035;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1065) && (ngay_trong4nam<1096))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1065;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1096) && (ngay_trong4nam<1127))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1096;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1127) && (ngay_trong4nam<1155))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1127;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1155) && (ngay_trong4nam<1186))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1155;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1186) && (ngay_trong4nam<1216))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1186;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1216) && (ngay_trong4nam<1247))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1216;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }if ((ngay_trong4nam >= 1247) && (ngay_trong4nam<1277))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1247;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1277) && (ngay_trong4nam<1308))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1277;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1308) && (ngay_trong4nam<1339))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1308;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1339) && (ngay_trong4nam<1369))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1339;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1369) && (ngay_trong4nam<1400))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1369;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1400) && (ngay_trong4nam<1430))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1400;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1430) && (ngay_trong4nam<1461))
            {
                ngay_trongthang = 1 + ngay_trong4nam -1430 ;
                y = 2000 + (4*b) - 1;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }

        }
        else
        {
            giay = 60 + a%60;
            ngay_trong4nam = Ngay + 1461;
            cout << "giay"<< giay<< endl;
            if ((ngay_trong4nam >= 0) && (ngay_trong4nam<31))
            {
                ngay_trongthang = 1 + ngay_trong4nam;
                y = 2000 + (4*b)-4;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
                cout << "chay het nhanh:" <<endl;
            }
            if ((ngay_trong4nam >=31) && (ngay_trong4nam<60))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 31;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 60) && (ngay_trong4nam < 91))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 60;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 91) && (ngay_trong4nam < 121))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 91;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 121) && (ngay_trong4nam < 152))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 121;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 152) && (ngay_trong4nam < 182))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 152;
                y = 2000 + (4*b) -4 ;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 182) && (ngay_trong4nam < 213))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 182;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 213) && (ngay_trong4nam < 244))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 213;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 244) && (ngay_trong4nam < 274))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 244;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 274) && (ngay_trong4nam < 305))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 274;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >=305) && (ngay_trong4nam < 335))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 305;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 335) && (ngay_trong4nam<366))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 335;
                y = 2000 + (4*b) -4;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay<<endl;
            }
            if ((ngay_trong4nam >= 366) && (ngay_trong4nam<397))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 366;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 397) && (ngay_trong4nam<425))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 397;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 425) && (ngay_trong4nam<456))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 425;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 456) && (ngay_trong4nam<486))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 456;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 486) && (ngay_trong4nam < 517))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 486;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 517) && (ngay_trong4nam<547))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 517;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 547) && (ngay_trong4nam<578))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 547;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 578) && (ngay_trong4nam<609))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 578;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 609) && (ngay_trong4nam<639))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 609;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 639) && (ngay_trong4nam<670))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 639;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 670) && (ngay_trong4nam<700))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 670;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 700) && (ngay_trong4nam<731))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 700;
                y = 2000 + (4*b) -3;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 731) && (ngay_trong4nam<762))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 731;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 762) && (ngay_trong4nam<790))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 762;
                y = 2000 + (4*b) - 2;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 790) && (ngay_trong4nam<821))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 790;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 821) && (ngay_trong4nam<851))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 821;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 851) && (ngay_trong4nam<882))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 851;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 882) && (ngay_trong4nam<912))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 882;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 912) && (ngay_trong4nam<943))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 912;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 943) && (ngay_trong4nam < 974))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 943;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 974) && (ngay_trong4nam<1004))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 974;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1004) && (ngay_trong4nam<1035))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1004;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1035) && (ngay_trong4nam<1065))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1035;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1065) && (ngay_trong4nam<1096))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1065;
                y = 2000 + (4*b) -2;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1096) && (ngay_trong4nam<1127))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1096;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 01/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1127) && (ngay_trong4nam<1155))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1127;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 02/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1155) && (ngay_trong4nam<1186))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1155;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 03/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1186) && (ngay_trong4nam<1216))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1186;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 04/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1216) && (ngay_trong4nam<1247))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1216;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 05/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }if ((ngay_trong4nam >= 1247) && (ngay_trong4nam<1277))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1247;
                y = 2000 + (4*b) +3;
                cout << ngay_trongthang<<"/ 06/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1277) && (ngay_trong4nam<1308))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1277;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 07/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1308) && (ngay_trong4nam<1339))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1308;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 08/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1339) && (ngay_trong4nam<1369))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1339;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 09/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1369) && (ngay_trong4nam<1400))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1369;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 10/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1400) && (ngay_trong4nam<1430))
            {
                ngay_trongthang = 1 + ngay_trong4nam - 1400;
                y = 2000 + (4*b) -1;
                cout << ngay_trongthang<<"/ 11/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }
            if ((ngay_trong4nam >= 1430) && (ngay_trong4nam<1461))
            {
                ngay_trongthang = 1 + ngay_trong4nam -1430 ;
                y = 2000 + (4*b) - 1;
                cout << ngay_trongthang<<"/ 12/ "<<y<<endl;
                cout << gio<<": "<<phut<<": "<<giay <<endl;
            }

        };
        

        
    
    }
    if (a==0)
    {
        cout << "00: 00: 00 "<< endl;
        cout << "01/ 01/ 2000" << endl;
    }
   return 0;
}