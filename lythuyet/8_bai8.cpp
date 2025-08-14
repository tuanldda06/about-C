// In ký tự ra màn hình
#include <iostream>
using namespace std ;
int main()
{
  char ch1{75} ; // Mã ASCII 75
  char ch2{'k'} ; // In ký tự K
  cout<<ch1<<endl ; // In ký tự K
  cout<<ch2<<endl ; // In ký tự K
}
// Ép kiểu : dùng static_cast để chuyển 
int n{75} ;
cout<<static_cast<char> (n)<<endl; // In K
cout<<static_cast<int>(n)<<endl; // In 75

