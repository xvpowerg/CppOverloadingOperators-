#include <stdio.h>
#include <memory>
#include <iostream>
#include <TestPerformance.h>
//測試用以上勿動
#include <vector>
#include <list>
#include <algorithm>
#include <Apple.h>

using namespace std;
class Person{
    string name;
    int age;
 public:
  Person()=default;
  Person(const Person&&  rhv){
      name = rhv.name;
      age = rhv.age;
  }
  Person(string name,int age):name{name},age{age}{}
  bool operator<(const Person &rhs)const{
      return this->age <rhs.age;
  }
  bool operator==(const Person& rhs)const{
      return (this->name == rhs.name && this->age == rhs.age);
  }
};

void find_test(){
//   vector<int> vec {1,2,3,4,5};
//   for (int i =1;i<=300000;i++){
//       vec.push_back(i);
//   }
//   
//   auto loc = std::find(begin(vec),end(vec),300000);
//   if (loc != end(vec))
//       cout << "founc number:" << *loc <<endl;
//   else
//       cout << "Could't find number:"  <<endl;
 
// list<Person> players{
//        {"Ken",21},
//        {"Vivin",12},
//        {"Iris",26}
//  };
//  auto loc1 = find(players.begin(),players.end(),Person("Vivin",12));
//  if (loc1 != players.end())
//      cout << "Found Vivin" << endl;
//    else
//        cout << "Moe not found" << endl;

list<Person> players;  

for(int i =1;i<=300000;i++){
    players.push_back(Person{"Vivin",i}); 
}
  auto loc1 = find(players.begin(),players.end(),Person("Vivin",300000));
  if (loc1 != players.end())
      cout << "Found Vivin" << endl;
    else
        cout << "Moe not found" << endl;
   printTime();
}

void count_if_test(){
    vector<int> vec{1,2,3,4,5,1,2,1,100};
    int num = count_if(vec.begin(),vec.end(),
                       [](int x){return x%2 == 0;});
    cout << num << "even numbers found:" << endl;
    
}
int main(int argc, char **argv)
{
  //find_test();
  count_if_test();
	return 0;
}
