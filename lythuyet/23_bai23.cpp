// Tiền khai báo và nguyên mẫu hàm
//Tiền khai báo thông báo một compiler về sự tốn tại của một định danh trước khi định nghĩa
//Với hàm , compiler nhận biết lời gọi , kiểm tra tính hợp lệ dù chưa biết thân hàm
#include <iostream>
using namespace std;
// Không có thân hàm
void printValue(int x) ;
int add(int x , int y) ;
int main()
{
  printValue(add(6,9)) ;
  return 0 ;
}

// Mặc dù thân hàm printValue() chưa được định nghĩa tới đây
void printValue(int x) 
{
  cout<<x<<endl;
}
// Mặc dù thân hàm add() chưa được định nghĩa tới đây
int add(int x , int y) 
{
  return x+y ;
}



// Khai báo và định nghĩa trong c++
//Khai báo giới thiệu sự tốn tại và mô tả định danh mà không cần bộ nhớ
extern int n ;
extern int add(int , int);
double div(int , double)
class foo ;
//Định nghĩa xác định kiểu dữ liệu , giá trị khởi tạo ( biến ) , nội dung(hàm) , hoặc cầu trúc , và cần cấp bộ nhớ
int n ;
int add(int x , int y) {return a + b;}
double div(int i , double d) {return i/d ;}
class foo{}
