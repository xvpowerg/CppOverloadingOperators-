#include <stdio.h>
#include <time.h>
#include <memory>
#include <iostream>
//測試用以上勿動
#include <vector>
#include <Apple.h>

using namespace std;

template <typename T>
T myMin(T a,T b){
    return (a <b)? a:b;    
}
template <typename T1,typename T2>
void testFunct(T1 v1,T2 v2){
    cout << v1 <<":" << v2<<endl;
}

template <typename T>
class Item{
    private:
    string name;
    T value;
public:
    Item(string name,T value):name{name},value{value}{}
    string get_name() const{return name;}
    T get_value() const { return value; }
   friend ostream& operator<<(ostream& os,const Item&  it){
            cout << it.name << it.value << endl;
        return os;    
    }
    friend istream& operator>>(istream& is, Item&  it){
            is >> it.name;
            is >> it.value;             
        return is;    
    }    
};
//有預設類型的template
template<typename T,int N>
class Array{
   int Size{N};
   T values[N];
   friend ostream& operator<<(ostream& os,const Array<T,N>& array){
       for (const auto& val :array.values  ){
           os << val<<" ";
       }
       return os;
   }
public:
    Array()=default;    
   void fill(T value){
       for(auto& item : values){
           item = value;
       }    
   }
   
   int getSize(){
      return  Size;
   }

  T& operator[](int index){
      return values[index];
  }
   
};

void test_template(){
       cout << myMin<int>(2,5)<<endl;
    testFunct<int,float>(10,5.9);
    unique_ptr<Apple>ap1=  make_unique<Apple>("Ap1",120);
    unique_ptr<Apple>ap2=  make_unique<Apple>("Ap1",82);
    Apple apx1{"A3",100};
    Apple apx2{"A4",200};
    Apple mainApp = myMin(apx1,apx2);
    cout << mainApp ;
}


void test_template_class(){
 Item<int> item1{"Test1:",50};
    cout << item1 << endl;
    cin >> item1;
    cout << item1 << endl;
  //也可以放物件類型
Item<Item<int>> item2{"Test2:",{"Ken",59} };\
}
void test_template_array(){
    Array<int,5> nums;
    nums.fill(5);
    nums[0]= 1000;
    cout <<nums;
    //cout << nums[0];
}

int main(int argc, char **argv)
{
    //test_template();
    test_template_array();
    
	return 0;
}
