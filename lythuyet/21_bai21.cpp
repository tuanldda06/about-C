//Tham số và đối số của hàm
//Tham số : là các biến được sử dụng trong một hàm mà giá trị của biến đó được cung cấp bởi lời gọi hàm.
//Đối só : là các giá trị truyền vào hàm qua lời gọi hàm , cách nhau bởi dâu phấy " ,"
//Xét vd 3 hàm có tham số và đối số khác nhau :
#include <iostream>
using namespace std ;

void sayHello() //Hàm này không nhận tham số
{
  cout<<"Hello HowKteam"<<endl;
}
void printValue(int x )
{
  cout<<x<<endl;
}
int add(int x , int y) //Hàm này có 2 tham số nguyên là x và y , cung cấp giá trị của x và y
{
  return x + y
}

int main()
{
  sayHello;
  printValue(6);//6 là đối số nguyên vào hàm printValue()
  cout<<add(6,10)<<endl;//6 và 10 là các dối số nguyên truyền  vào hàm add()
  return 0;
}


//Truyền giá trị trong hàm 
//Mặc định đối số được truyền cho hàm ở dạng giá trị
// Khi truyền đối số cho hàm ở dạng giá trị , thì giá trị của đối số được sao chép vào tham số của hàm , và đối sẽ không bị thay đổi sau lời gọi hàm 
#include <iostream>
using namespace std ;

void callbyValue(int y) 
{
  cout<<"y = "<<y<<endl;
  y = 69;
  cout<<"y = "<<y<<endl;
} // y bị phá hủy tại đây

int main()
{
  int x(1) ;
  cout << "x="<<x<<endl;

  callbyValue(x)
  cout << "x="<<x<<endl;
  return 0;
}
  
