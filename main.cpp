#include <stdio.h>
#include <Mystring.h>
int main(int argc, char **argv)
{
    Mystring s1 {"Ken"};
     Mystring s2;
    s1.display();
    s2 = s1;
    //s2=Hello 會去呼叫建構子
    s2 = "Hello";
	//printf("hello world\n");
	return 0;
}
