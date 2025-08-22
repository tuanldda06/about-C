// Sử dụng biến tĩnh(stactic variables)
#include <iostream>
using namespace std ;

void dosomething_static()
{
  static int s_value(0) ;
  ++s_value
  cou<<s_value<<endl;
}
int main()
{
  //Biến tĩnh
  dosomething_static()
  dosomething_static()
  dosomething_static()
  return 0 ;
  }
// ---> Output:  1
//               2
//               3


// Phân loại :
// Liên kết bên ngoài 
int g_value ;
void dosomething()
{
}
// Liên kết nội bộ 
// Khai báo trong hàm với từ khóa static
void dosomething()
{
  static int s_value(0);
}
// Khai báo ngoài hàm với từ khóa static
static int g_value;
void dosomething()
{
}

// Khi nào nên dùng biến tĩnh : khi có nhu cấu giữ giá trị của biến trong chương trình
#include <iostream>
#include <string>
using namespace std;

int generateID()
{
  static int s_id(0);
  ++s_id;
  return s_id;
}
int main()
{
  int nID1 = generateID();
  string strName1("Kteam");

  int nID2 = generateID();
  string strName2("Free");

  int nID3 = generateID();
  string strName3("Education");

  cout<<nID1<<":" + strName1<<endl;
  cout<<nID2<<":" + strName2<<endl;
  cout<<nID3<<":" + strName3<<endl;

  return 0;
}



  





























