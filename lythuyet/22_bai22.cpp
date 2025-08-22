//Truyền tham chiếu cho hàm 
//Tham chiếu là một laoij biến họat động như một bí danh của biến khác
//Khai báo dùng & trước kiểu dữ liệu và tên biến , và mọi thay đổi trên biến tham chiếu cũng là thay đổi trên biến được tham chiếu
#include <iostream> 
using namespace std ;

void callByReference(int &y) // y là biến tham chiều
{
  cout<<"y="<<y<<endl;
  y = 69;
  cout<"y="<<y<<endl;
}
int main()
{
  x = 1;
  cout<<"x="<<x<<endl;
  callByReference(x);
  cout<<"x="<<x<<endl;
  return 0;
}

//Trả về nhiều giá trị thông qua tham số đấu ra : --> dùng tham số tham chiếu 
#include <iostream>
using namespace std;

void caculator(x,y , int &addout , int &subout) 
{
  addout = x + y;
  subout = x-y;
}

int main()
{
  int a(6) , b(9) ;
  int add , sub ;

  caculator(a , b , add , sub) ;

  cout<<"a + b = "<< add<<endl;
  cout<<"a - b = "<< sub<<endl;
  return 0;
}


//Truyền tham chiếu hằng ( const reference) là một tham chiếu mà không cho phép biến được tham chiếu thay đổi thông qua biến được tham chiếu .
