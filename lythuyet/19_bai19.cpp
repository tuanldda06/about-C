//Ép kiểu :
//Ép kiểu bằng C-style casts : ép kiểu thông qua toán tử () , và tên dữ liệu cần chuyển thì đặt ở bên trong 
#include <iostream>
using namespace std ;


int main()
{
  int n1 = 3;
  int n2=2;
  double d = (double) n1 / n2
  cout << d <<endl;
  return 0;
}
// Ép kiểu bằng static_cast
// Đã gặp nó trong bài kiểu kí tự trong C ++
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n{75};
  cout<<static_cast<char>(n)<<endl; // In ký tự với mà ASCII 75

  char ch{'k'}
  cout<<static_cast<int<(ch)<<endl;// In mã ASCII của ký tự k

  return 0 ;
}
// Sử dụng stactic_cast trong biểu thức
#include <iostream>
using namespace std ;

int main()
{
  int n1 = 3 ;
  int n2 =  2;
  double d = static_cast<double> (n1)/n2
  return 0 ;
}
