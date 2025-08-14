//Toán tử số học 2 ngôi (Binary) : là toán tử có 2 toán hạng trong biếu thức  , có 5 toán từ số học 2 ngôi trong C++
#include <iostream>
using namespace std;
int main()
{
  int count = 1;
  while (count<=100)
  {
    if (count %2 == 0)
      cout<<count<<'t';
    if (count%10 ==0)
      cout<<'\n';
    count = count + 1
  }
  return 0;
}



//Toán từ 1 ngôi tăng giảm có 2 loại :
// Tiền tố(prefix) : tăng hoặc giảm giá trị của biến x , sau đó x được sử dụng để tính toán
#inclue <iostream>
using namespace std;
int main()
{
  int x =  69;
  int y =++x
  cout<<x<<endl;
  cout<<y<<endl;
  return 0;
}
// Hậu tố(postfix) : sử dụng giá trị hiện tại của biến , sau đó tăng/giảm giá trị của biến
#include <iostream>
using namespace std;
int main()
{
  int x = 69;
  int y = x++
  cout<<x<<endl;
  cout<<y<<endl;
  return 0;
}


// Toán tử gán số học
#include <iostream>
using namespace std;
int sum(int a , int b )
{
  return a + b
}
int main()
{
  int x = 9;
  int y = 9 ;
  
  x = x+6;
  cout<<'x=x+6='<<x<<endl;
  
  y+=6;
  cout<<'y+=6'<<y<<endl;
  int z = sum(x,y)
  
  cout<<'Tong x va y la'<<z<<endl;
  return 0;
}
