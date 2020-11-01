#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    clock_t start, end;
    float total;
    start = clock();
    cout<<"thoi gian bat dau chay truong tring:" << start<< endl;
    time_t ht = time (0);
    
    tm*ltm = localtime(&ht);
    printf("++++%c\n",ltm->tm_year=100);
    cout<<ht<<endl;
    end = clock();
    cout<<"thoi gian ket thuc la:" << end<< endl;
    total = (double)(end - start);
    cout << "tong thoi gian CPU chay la:" << total<< endl;

    // in gioi han nam trong C
       








       





    return 0;
}
