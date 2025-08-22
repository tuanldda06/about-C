// Câu lệnh dừng(halt) : thực hiện thông qua hàm exti() trong thư viện cstdlib .Hàm exit() sẽ nhận vào 1 sốnguyeen và nó sẽ trả về cho hệ điều hành như một mã kết thức chương trình , tương tự giá trị trẻ về hàm main
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  cout<<1;
  exit(0); //Kết thúc , trả về 0 cho hệ điều hành
// các câu lệnh sau không bao giờ được thực thi
  cout<<2;
  return 0 ;
}


// Câu lệnh nhảy :cho phép CPU chuyển luồng thực thi đến 1 dòng lệnh khác


//Cấu trúc rẽ nhánh có điều kiện 
int main() 
{
  // do A
  if (expression) 
      // do B
  else 
      //do C
  // do D
}
//Nếu expression là true --> thực hiện theo A -B - D . Ngược lại thì sẽ là A - C -D

// Cấu trúc vòng lặp : giúp chương trình thực hiện lặp lại 1 khối lệnh , đến khi không còn thỏa mãn điều kiện lặp
int main()
{
  //do A
  // do B 0 or more times
  // do C
}
// Xử lý ngoại lệ
