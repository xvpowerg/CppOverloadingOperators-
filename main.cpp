#include <stdio.h>
#include <time.h>
#include <memory>
#include <iostream>
//測試用以上勿動
#include <vector>
#include <Apple.h>

using namespace std;


void testUniquePtr(){
     //記得要include<memory>
  //多使用make_unique
    unique_ptr<int> t1 = make_unique<int>(350);   
   unique_ptr<int> b = move( t1 );//控制權交給b
   cout << *b << endl;//Error因為控制權交給了b
   //cout << *t1 << endl;//Error因為控制權交給了b
   
   //make_unique 
    unique_ptr<Apple> ap1 = make_unique<Apple>("APP1",51);      
    vector<unique_ptr<Apple>>vap;
    vap.push_back(make_unique<Apple>("App2",58));      
    vap.push_back(make_unique<Apple>("App3",72));      
     Apple outAp = *vap.back();
     vap.pop_back();
     outAp.display();
     outAp = *vap.back();
     outAp.display();
}
int main(int argc, char **argv)
{
 //testUniquePtr();
 
	return 0;
}
