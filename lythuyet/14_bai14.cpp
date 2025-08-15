//Để sử dụng chuối trong c++ , bạn phải #include thư viện string thuộc namespace std
#include <string>
using namespace std;
string strName;


//Xuất một chuối ký tự
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string strString('HowKteam')
  cout<<strString<<endl;
  return 0;
}


//Nhập một chuối ký tự(string input)
#include <iostream>
#include <string>
int main()
{
  cout<<'Enter your name:';
  string strName;
  cin>>strName;

  cout<<'Enter your age:';
  string strAge;
  cin>>strAge;

  cout<<'Your Name is :'<<strName<<endl;
  cout<<'Your Age is :'<<strAge<<endl;
  return 0;
}
// Khi nhập 'Hello Howkteam! Free Education!' thì cin sẽ dừng ở dấu cách đầu tiền , nên 'Hello' gán cho strName , cin tiếp tục đọc chuỗi tiếp theo sau dấu cách , nên 'HowKteam!' được gán cho strAge.
// Và phần còn lại ('Free Education!') sẽ bị bỏ qua vì chương trình không yêu cầu đọc thêm dữ liệu từ bộ đệm
// Điều này do xin sử dụng dấu cách , tab và newline làm ký tự phân tách khi đọc chuổi

// Nhập văn bản với std::getline() 
//Để đọc đầy đủ chuỗi có khoảng trắng từ đối tượng nhập của lớp iostream (ví dụ cin), bạn nên sử dụng hàm std::getline() (trong namespace std)
#include <iostream>
#include <string>
int main()
{
  cout<<'Enter your name:';
  string strName;
  getline(cin,strName);

  cout<<'Enter your age:';
  string strAge;
  getline(cin,strAge);

  cout<<'Your Name is :'<<strName<<endl;
  cout<<'Your Age is :'<<strAge<<endl;
  return 0;
}



//Nối chuỗi ( appending strings)
#include <iostream>
#include <string>
int main()
{
  string a('69');
  string b('96');
  string c = a + b;

  cout<<c<<endl;
  a+='string'
  cout<<a<<endl;

  return 0;
}

//Độ dài chuỗi kí tự
#include <iostream>
#include <string>
int main()
{
  string myName('Hello Howkteam.com')

  cout<<myName<<'has'<<myName.length()<<'characters\n';
  cout<<myName<<'has'<<myName.size()<<'characters\n';
  return 0;
}

