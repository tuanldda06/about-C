// Câu điều kiện if 
// If thiếu :
if (condition) // nếu condition là true
  statement; //thực thi câu lệnh này
//If đủ
if (condition) // nếu condition là true
  statement1;//thực thi câu lệnh này
else 
  statement2; // nếu condition là false , thực thi câu lệnh này
// Xét vd
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const string PASSWORD("howkteam.com");
	string password;

	cout << "Enter password: ";
	getline(cin, password);

	if (password == PASSWORD)
		cout << "Login succeed!" << endl;
	else
		cout << "Login failed!" << endl;

	return 0;
}
//Nếu bạn không nhập đúng password là “howkteam.com”, chương trình sẽ thông báo “Login failed!”. Ngược lại sẽ thông báo "Login succeed!".


//Câu điều kiện If với nhiều dòng lệnh 
//Xét vd
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const string PASSWORD("howkteam.com");
	string password;

	cout << "Enter password: ";
	getline(cin, password);

	if (password == PASSWORD)
	{
		cout << "Login succeed!" << endl;
		cout << "Hello howkteam.com!" << endl;
		cout << "Free education!" << endl;
		// ...
	}
	else
	{
		cout << "Login failed!" << endl;
		cout << "Hello howkteam.com!" << endl;
		cout << "Free education!" << endl;
		// ...
	}

	return 0;
}


//Chuỗi các câu điều kiện If 
if (condition)
{
	// do A
}
else if (another_condition)
{
	// do B
}
else if (one_more_condition)
{
	// do C
}
else
{
	// do D
}
//xét vd 
#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap so ban yeu thich (1, 2, 3): ";
	int n;
	cin >> n;

	if (n == 1)
		cout << "Ban that dep trai!" << endl;
	else if (n == 2)
		cout << "Ban qua dep trai!" << endl;
	else if (n == 3)
		cout << "Ban dep trai vo dich vu tru!" << endl;
	else
		cout << "Du lieu chua chinh xac!" << endl;

	return 0;
}




//Toán tử logic với câu điều kiện If
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const string USERNAME("kteam");
	const string PASSWORD("howkteam.com");
	string userName;
	string password;

	cout << "Enter username: ";
	getline(cin, userName);

	cout << "Enter password: ";
	getline(cin, password);

	if ((userName == USERNAME) && (password == PASSWORD))
	{
		cout << "Login succeed!" << endl;
	}
	else
	{
		cout << "Login failed!" << endl;
	}

	return 0;
}



// Toán tử điều kiện
//Cấu trúc câu điều kiện if/else:
if (condition)    // nếu condition là true
    expression1;    // thực thi câu lệnh này
else
    expression2;    // nếu condition là false, thực thi câu lệnh này
//Hoặc :
if (condition)    // nếu condition là true
    x = value1;    // x = value 1
else
    x = value2;    // nếu condition là false, x = value 2

//Viết lại dưới dạng toán tử điều kiện ( ?: ):
(condition) ? expression1 : expression2;
//Hoặc:
x = (condition) ? value1 : value2;
//Toán tử điều kiện “?:” là toán tử 3 ngôi duy nhất trong C++ (vì nó chứa 3 toán hạng). Có thể dùng để thay thế câu lệnh if/else cơ bản.
//Ví dụ :
C++
int a(10), b(20), max;
if (a > b) 
{
	max = a;
}
else 
{
	max = b;
}
//Hoặc
int a(10, b(20);
int max = (a > b) ? a : b;




