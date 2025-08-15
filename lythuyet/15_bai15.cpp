//Biến cục bộ :Các biến cục bộ có thời gian tự động, có nghĩa là chúng được tạo tại thời điểm định nghĩa, và bị hủy khi ra khỏi khối lệnh mà biến đó được định nghĩa.
//Các biến cục bộ có phạm vi bên trong khối lệnh (còn được gọi là phạm vi cục bộ), nghĩa là sẽ không truy cập được biến khi ở bên ngoài khối lệnh.
int main()
{
  int n{6};
  double d{9.0};
  cout<<'Enter an integer';
  cin>>n
  cout<<n<<endl;
  return 0;
}

//Vấn đề 1 : Biến cục bộ được định nghĩa trong khối lồng chỉ tốn tại trong khối đó và bị hủy ngay sau khi kết thức khối
int main()
{
  int n(6) ; //n được khởi tạo tại đây
  {  
    double d(9.0);//d được tạo và khởi tạo tại đây
  }//d ngoài phạm vi và bị hủy tại đây
  return 0;
} // n ngoài phạm vi và bị hủy tại đây

//Vấn đề 2 :Khối lồng được coi là một phần của khổi ngoài  nên biến trong khối ngoài có thể dùng trong khối lồng
int main()
{
  int x(6);
  {
    int y(6);
    cout<<x<<'+'<<y<<'='<<x+y<<endl;
  }
  return 0;
}

//Vấn đề 3 : Biến trong một hàm không thể truy cập từ hàm khá , vì mỗi hàm có một khối lệnh riêng
void someFunction()
{
  int value(4);
}// giá trị value bị hủy tại đau
int main()
{
  someFunction(); //giá trị không được nhìn thấy hoặc sử dụng trong hàm này
  return 0;
}

//Vấn đề 4 : các hàm có thể sử dụng cùng tên biến ( như x , y) mà không gây xung đột do biến trong mỗi hàm là độc lấp
#include <iostream>
using namespace std;
int add(int x , int y) // x của add
{
  return x +y;
}// x của add bị hủy tại đây 
int main()
{
  int x = 6;
  int y = 9;
  cout<<add(x,y)<<endl;
  return 0 ;
}

//Vấn đề 5 : Biến trong khối lồng có cùng tên với biến trong khối ngoài sẽ 'ẩn' biến ngoài trong phạm vi khối lồng
#include <iostream>
using namespace std ;
int main()
{
  int apples(6);
  if (apples >=6) 
  {
    int apples;
    apples = 9;
    cout<<apples<<endl;
  }
  cout<<apples<<endl;
  return 0;
}

//Vấn đề 6 : Biến chỉ nên định nghĩa trong khối nhỏ nhất mà nó sử dụng .Nếu cấn sử dụng ngoài khối lồng , định nghiz biên trong khối ngoài
