//Toán tử quan hệ trong C++ : dùng để so sánh 2 toán hạng với nhau , trả về là 1(True) hoặc 0(False)
#include <iostream>
using namespace std;
int sum(int a , int b)
{
  return a+b
}
int main()
{
  cout<<'Enter an integer';
  int x;
  cin>>x;

  cout<<'Enter another integer:';
  int y ;
  cin>>y;
  if (x==y)
    cout<<x<<'=='<<y<<'\n';
  if(x!=y)
    cout<<x<<'!='<<y<<'\n';
  if (x>y)
    cout<<x<<'>'<<y<<'\n';
  if (x>=y)
    cout<<x<<'>='<<y<<'\n';
  if (x<y)
    cout<<x<<'<'<<y<<'\n';
  if (x<=y)
    cout<<x<<'<='<<y<<'\n';
  return 0;
}


//Toán tử logic:Giúp kiểm tra nhiều điều kiện một lúc
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout<<'Enter an integer:';
  int value;
  cin>>value;
  if (!value)
    cout<<value<<'is false'<<endl;
  else :
    cout<<value<<'is true'<<endl;
  if ((value >1) && (value<100))
    cout<<value<<' is between 1 and 100'<<endl;
  else :
    cout<<value<<' is not between 1 and 100'<<endl;
  if ((value ==1) || (value==100))
    cout<<value<<'==1 or'<<value<<'==100'<<endl;
  else 
    cout<<value<<'!=1 or'<<value<<'!=100'<<endl;
  return 0;
}


//Toán tử điều kiện là toán tử 3 ngôi duy nhất trong c++ , tương đương với câu điều kiện(if/else statements)
#include <iostream>
using namespace std;
int main()
{
  int x{6} , y{9},max;
  if (x>y)
  {
    max = x;
  }
  else 
  {
    max = y;
  }
  cout<<'Max='<<max<<endl;
  //Tương đương với
  max =  (x>y)?x:y;
  cout<<'Max ='<<max<<endl;
  return 0;
}
//Chỉ sử dụng toán tử điều kiện với những câu điều kiện đơn giản
#include <iostream>
using namespace std;
int main()
{
  int a{3} , b{2} ,c{4}, max ;
  max = a
  if (max<b)
  {
    max = b
  }
  if (max<c) 
  {
    max = c
  }
  cout<<'Max ='<<max<<endl;
  return 0;
}



    
 
    

  
