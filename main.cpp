#include <stdio.h>
#include <vector>
#include <Mystring.h>
#include <Student.h>
#include <iostream>
#include <time.h>
using namespace std;
int main(int argc, char **argv)
{
    //Mystring s1 {"Ken"};
    //Mystring s2 = s1.get_str();
    
    //std::cout <<  &(s1.get_str()) <<std::endl;
    //s2 = "AA";
   // Mystring s2;
//    s1.display();
//    s2 = s1;
//    //s2=Hello 會去呼叫Mystring(const char* s)建構子
//    s2 = "Hello";

//     vector<Mystring> vx;
//     //會呼叫Copy
//      vx.push_back(Mystring{"Iris"});
//      vx.push_back("Lindy");
//      Mystring s3 {"Gigi"};
//      //會呼叫Copy
//      Mystring s4 {s3};
//      //呼叫operator=
//      s4 = s3;
	
    Student st1{10,"Vivin"};
    Student st3{18,"Howard"};
    //st1.display();
     Student st2 = st1;
     st2 = st3;
     st3.setAge(90);
     st3.setName("Ken");     
     st3.display();     
     st2.display();
    cout << "Start..." <<endl;
    vector<Student>vs;
    for (int i =1;i<=30000;i++){
    vs.push_back(Student{1,"Ken"});    
    }
    cout << (double)clock() / CLOCKS_PER_SEC << "S";
    
	return 0;
}
