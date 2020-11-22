#include <iostream>
#include <time.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
using namespace std;

int main ()
{
    float a; //khai bao so ngay
    cin >> a;
    int y = 1900;// y la nam moc theo quy uoc
    float n = 365.24217; // n so ngay cua 1 nam
    int d;
    d = y + (int)(a/n);// so nam lay phan nguyen
    float b; // so nam lay ca phan du chua + voi 1900
    b = static_cast<float>(a) / static_cast<float>(n);
    float z;
    z = fabs((b - (int)(a/n)) * 366); // lay gia tri tuyet doi cua ngay
    int t;
    t = 1 + z; //  t >= 1; t <= 366;
    float i; // so ngay trong nam lay ca phan du
    i = 1 + z;
    int gio;
    gio = (i - t) * 24 ;
    float GIO;
    GIO = (i -t) * 24 ;
    int phut;
    phut = (GIO - gio) * 60 ;
    float PHUT;
    PHUT = (GIO - gio) * 60 ;
    int giay;
    giay = (PHUT - phut) * 60 ;
    int ngay ;
    gio = (i - t) * 24 ;
    phut = (GIO - gio)*60 ;
    giay = (PHUT - phut) * 60 ;
   // tim nam nhuan va nam ko nhuan
    if(d>=0)
    {
      if ((d % 4 == 0) && (d % 100 !=0) || (d % 400 == 0))
      {
          if( t>=1 && t<=31)
        {
            ngay = t;
            cout << "ngay=="  << ngay << " thang 1" << " nam "<< d << endl;
            cout << gio<<":"<< phut<<":"<<giay<< endl;
            
        }
        if( t>31 && t<=60)
        {
            ngay = t - 31;
            
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 2" << " nam "<< d << endl;
        }
         if( t>60 && t<=91)
        {
            ngay = t - 60;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 3" << " nam "<< d << endl;
        }
        if( t>91 && t<=121)
        {
            ngay = t - 91;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 4" << " nam "<< d << endl;
        }
        if( t>121 && t<=152)
        {
            ngay = t - 121;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 5" << " nam "<< d << endl;
        }
        if( t>152 && t<=182)
        {
            ngay = t - 152;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 6" << " nam "<< d << endl;
        }
        if( t>182 && t<=213)
        {
            ngay = t - 182;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang7 " << " nam "<< d << endl;
        }
        if( t>213 && t<=244)
        {
            ngay = t - 213;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 8" << " nam "<< d << endl;
        }
        if( t>244 && t<=274)
        {
            ngay = t - 244;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay==" << ngay << " thang 9" << " nam "<< d << endl;
        }
        if( t>274 && t<=305)
        {
            ngay = t - 274;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay==" << ngay << " thang 10" << " nam "<< d << endl;
        }
        if( t>305 && t<=335)
        {
            ngay = t - 305;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay==" << ngay << " thang 11" << " nam "<< d << endl;
        }
        if( t>335 && t<=366)
        {
            ngay = t - 335;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 12" << " nam "<< d << endl;
        }
      }
      else
      {
        if( t>=1 && t<=31)
        {
            ngay = t;
            cout << "ngay=="  << ngay << " thang 1" << " nam "<< d << endl;
            cout << gio<<":"<< phut<<":"<<giay<< endl;
            
        }
        if( t>31 && t<=59)
        {
            ngay = t - 31;
            
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 2" << " nam "<< d << endl;
        }
         if( t>59 && t<=90)
        {
            ngay = t - 59;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 3" << " nam "<< d << endl;
        }
        if( t>90 && t<=120)
        {
            ngay = t - 90;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 4" << " nam "<< d << endl;
        }
        if( t>120 && t<=151)
        {
            ngay = t - 120;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 5" << " nam "<< d << endl;
        }
        if( t>151 && t<=181)
        {
            ngay = t - 151;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 6" << " nam "<< d << endl;
        }
        if( t>181 && t<=212)
        {
            ngay = t - 181;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang7 " << " nam "<< d << endl;
        }
        if( t>212 && t<=243)
        {
            ngay = t - 212;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 8" << " nam "<< d << endl;
        }
        if( t>243 && t<=273)
        {
            ngay = t - 243;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay==" << ngay << " thang 9" << " nam "<< d << endl;
        }
        if( t>273 && t<=304)
        {
            ngay = t - 273;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay==" << ngay << " thang 10" << " nam "<< d << endl;
        }
        if( t>304 && t<=334)
        {
            ngay = t - 304;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay==" << ngay << " thang 11" << " nam "<< d << endl;
        }
        if( t>334 && t<=365)
        {
            ngay = t - 334;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 12" << " nam "<< d << endl;
        }
      };
      
    }
    else // neu d < 0
    {
      if ((d % 4 == 0) && (d % 100 != 0) || (d % 400 == 0))
      {
        if( t>=1 && t<=31)
        {
            ngay = t;
            cout << "ngay=="  << ngay << " thang 1" << " nam "<< -d <<" TCN"<<endl;
            cout << gio<<":"<< phut<<":"<<giay<< endl;
            
        }
        if( t>31 && t<=60)
        {
            ngay = t - 31;
            
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 2" << " nam "<< -d <<" TCN"<< endl;
        }
         if( t>60 && t<=91)
        {
            ngay = t - 60;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 3" << " nam "<< -d <<" TCN"<< endl;
        }
        if( t>91 && t<=121)
        {
            ngay = t - 91;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 4" << " nam "<< -d <<" TCN"<< endl;
        }
        if( t>121 && t<=152)
        {
            ngay = t - 121;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 5" << " nam "<< -d << " TCN" << endl;
        }
        if( t>152 && t<=182)
        {
            ngay = t - 152;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 6" << " nam "<< -d << " TCN" <<endl;
        }
        if( t>182 && t<=213)
        {
            ngay = t - 182;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang7 " << " nam "<< -d << " TCN"<< endl;
        }
        if( t>213 && t<=244)
        {
            ngay = t - 213;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 8" << " nam "<< -d <<" TCN"<< endl;
        }
        if( t>244 && t<=274)
        {
            ngay = t - 244;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay==" << ngay << " thang 9" << " nam "<< -d <<" TCN"<< endl;
        }
        if( t>274 && t<=305)
        {
            ngay = t - 274;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay==" << ngay << " thang 10" << " nam "<< -d <<" TCN"<< endl;
        }
        if( t>305 && t<=335)
        {
            ngay = t - 305;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay==" << ngay << " thang 11" << " nam "<< -d << " TCN"<< endl;
        }
        if( t>335 && t<=366)
        {
            ngay = t - 335;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 12" << " nam "<< -d <<" TCN"<< endl;
        }
      }
      
      else
      {
        if( t>=1 && t<=31)
        {
            ngay = t;
            cout << "ngay=="  << ngay << " thang 1" << " nam "<< -d <<" TCN" << endl;
            cout << gio<<":"<< phut<<":"<<giay<< endl;
            
        }
        if( t>31 && t<=59)
        {
            ngay = t - 31;
            
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 2" << " nam "<< -d << " TCN"<<endl;
        }
         if( t>59 && t<=90)
        {
            ngay = t - 59;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 3" << " nam "<< -d <<" TCN"<<endl;
        }
        if( t>90 && t<=120)
        {
            ngay = t - 90;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 4" << " nam "<< -d <<" TCN" << endl;
        }
        if( t>120 && t<=151)
        {
            ngay = t - 120;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 5" << " nam "<< -d << " TCN"<< endl;
        }
        if( t>151 && t<=181)
        {
            ngay = t - 151;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 6" << " nam "<< -d << " TCN"<< endl;
        }
        if( t>181 && t<=212)
        {
            ngay = t - 181;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang7 " << " nam "<< -d <<" TCN"<< endl;
        }
        if( t>212 && t<=243)
        {
            ngay = t - 212;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 8" << " nam "<< -d << " TCN" << endl;
        }
        if( t>243 && t<=273)
        {
            ngay = t - 243;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay==" << ngay << " thang 9" << " nam "<< -d << " TCN"<< endl;
        }
        if( t>273 && t<=304)
        {
            ngay = t - 273;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay==" << ngay << " thang 10" << " nam "<< -d << " TCN" <<endl;
        }
        if( t>304 && t<=334)
        {
            ngay = t - 304;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay==" << ngay << " thang 11" << " nam "<< -d << " TCN"<<endl;
        }
        if( t>334 && t<=365)
        {
            ngay = t - 334;
            cout<< gio<<":"<< phut<<":"<<giay<< endl;
            cout<< "ngay=="  << ngay << " thang 12" << " nam "<<- d << " TCN"<< endl;
        }
      }
      
        
    }
    

  
    
     



    return 0;
}