// Xuất dữ liệu với std::cout 
#include <iostream>
using namespace std;
int main()
{
  cout<<"Hello Howkteam.com"<<endl;
  int n1 = 60 , n2=9 ;
  cout<<'Sum'<<n1<<'+'<<n2<<'='<<n1+n2<<endl;  
  return 0 ;
}



//Nhập dữ liệu với std::cin trong C++
#include <iostream>
using namespace std ;
int main()
{
  int n{0}; // hoặc int n = 0
  cout<<'Enter your age:';// thông báo user nhập tuổi
  cin>>n; // Đọc giá trị nhập vào và lưu vào biến
  cout<<'Your age is:'<<n<<endl; // In giá trị biến n(tuổi) lên màn hình
  return 0;
}
// Nhập nhiều giá trị liên tiếp 
#include <iostream>
using namespace std;
int main()
{
  int nDay{0};
  int nMonth{0};
  int nYear{0};
  cout<<'Enter your birthday';
  cin>>nDay>>nMonth>>nYear;
  cout<<'Your Birthday:'<<nDay<<'/'<<nMonth<<'/'<<nYear<<endl;
  return 0;
}

