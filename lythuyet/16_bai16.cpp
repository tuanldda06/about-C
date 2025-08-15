//Biến toán cục : được khai báo bên ngoài khối lệnh , có thể truy cập và sử dụng ở bất ksy đâu trong file chứa biến đó
#include <iostream>
using namespace std;
int g_x;
const int g_y(2); // hằng số
void doSomething()
{
  g_x=3;
  cout<<g_y<<'\n\';
}
int main(0
{
  doSomething();
  g_x =5;
  cout<<g_y<<'\n';
  return 0;
}

