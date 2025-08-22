// Hàm là một dày các câu lệnh có thể tái sử dụng , được thiết kể để thực hiện 1 công việc cụ thể trong chương trình
// Cú pháp :
    < kiểu trả về> < tên hàm> ([<danh sách tham số>])
    {
      <các câu lệnh>
      [ return <giá trị> ;]
    }

// vd chương trình có 2 hàm : main() và sayHello
#include <iostream>
using namespace std ;

void sayHello() 
{
  cout<<"Hello HowKteam"<<endl;//Hàm sayHello() "chạy được" (luôn tạo đầu ra) vì nó được thiết kế để in trực tiếp ra màn hình mỗi khi được gọi.
}

int main()
{
  cout<<"Starting main()"<<endl;
  // Ngắt main bằng cách gọi hàm sayHello()
  sayHello()
  cout <<"Ending main()"<<endl;
  return 0;
}
// ----> Output :
//Starting main()
//Hello HowKteam
//Ending main()
// Giá trị trả về ( return values)
// Hàm main() có kiểu int nên bắt buộc phải có 1 câu lệnh return giá trị kiểu int
#include <iostream>
using namespace std;

int return69() 
{
  return 69;
}

int main()
{
  cout<<return69<<endl; //In : 69
  int sum = return69 + 1;
  cout<<sum<<endl; // In : 70
  return69(); 
//// Hàm return69() "không chạy" (không tạo đầu ra trực tiếp trong trường hợp return69();) vì nó chỉ trả về giá trị 69, và nếu giá trị này không được sử dụng (bằng cout hoặc gán vào biến), sẽ không có đầu ra hiển thị.
  return 0 ;
}



















