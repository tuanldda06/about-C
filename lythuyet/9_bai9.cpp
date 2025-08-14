//In giá trị boolean
#include <iostream>
using namespade std ;
int main() 
{
  bool b1{true} , b2{false} ;
  cout<<b1<<endl; // In : 1
  cout<<!b1<<endl; // In : 0
  cout<<b2<<endl;//In : 0
  cout<<!b2<<endl; // In : 1
  return 0 ;
}
// std::boolalpha : In true/false thay vì 1/0
// std::noboolalpha : In 1/0 thay vì true/false
#include <iostream>
using namespade std ;
int main() 
{
  cout<<boolalpha ;
  cout<<true<<endl; // In : true
  cout<<false<<endl; // In : false
  cout<<noboolalpha;
  cout<<true<<endl;// In : 1
  cout<<false<<endl; // In : 0
  return 0;
}
// Giá trị số ngiyene khác 0 --> true , khác 0 --> false


// Câu điều kiện if 
#include <iostream>
using namespace std;
int main()
{
  bool b1{true};
  if (b1)
    cout<<'b1 is true'<<endl;
  else 
    cout<<'b1 is false'<<endl;
  bool b2{false};
  if (b2)  
    cout<< 'b2 is true'<<endl;
  else 
    cout<<'b2 is false'<<endl;
  return 0 ;
}
