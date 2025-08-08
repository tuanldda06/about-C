// độ chính xác số chấm động
/*#include <iostream>
using namespace std;
int main()
{
    double d ;
    d = 9.87654321 ;
    cout << d <<endl;
    d = 987.654321;
    cout << d << endl ;
    d = 987654.321 ;
    cout << d << endl ;
    d = 9876543.21;
    cout<<d << endl ;
    d = 0.0000987654321;
    cout << d << endl ;
    d = 1.23456789;
    cout << d << endl ;
    return 0 ;
}*/
// độ chính xác của kiểu dữ liệu
#include <iostream>
#include <iomanip>
using namespace std ;

int main()
{
    cout<< setprecision(20) ;
    float f{9.6666666666f};
    cout << f << endl; // float ~ 7 chữ số và có rác sau 7 chữ số

    double d{9.6666666666666666666666666666666};
    cout << d << endl; // double ~ 16 chữ số và có rác sau 17 chữ số 
    return 0 ;
}