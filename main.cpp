#include <stdio.h>
#include <vector>
#include <Mystring.h>
using namespace std;
int main(int argc, char **argv)
{
//    Mystring s1 {"Ken"};
//     Mystring s2;
//    s1.display();
//    s2 = s1;
//    //s2=Hello 會去呼叫Mystring(const char* s)建構子
//    s2 = "Hello";
     vector<Mystring> vx;
     //會呼叫Copy
      vx.push_back(Mystring{"Iris"});
      vx.push_back("Lindy");
      Mystring s3 {"Gigi"};
      //會呼叫Copy
      Mystring s4 {s3};
      //呼叫operator=
      s4 = s3;
	//printf("hello world\n");
	return 0;
}
