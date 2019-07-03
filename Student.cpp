#include "Student.h"
#include "iostream"
Student::Student():Student{0,"Empty"}
{

}

Student::Student(int pAge,std::string pName):age{nullptr},name{nullptr}
{
     std::cout << "Student " <<std::endl;
    this->age = new int(pAge);
    this->name = new std::string(pName);    
}
//Move 把st記憶體位置給age 與 name
//在移除st的age 與 name
Student::Student(Student&& st)noexcept :age{st.age},name{st.name}{   
   st.age = nullptr; 
   st.name = nullptr;   
   std::cout << "Move:" <<std::endl; 
}

Student::Student(const Student& st){
    std::cout << "copy" <<std::endl;
    this->age = new int(st.getAge());
    this->name = new std::string(st.getName());
}

Student& Student::operator =(const Student& st){
    if (this == &st) return *this;
    delete age,name;
    age  =new int{st.getAge()};
    name = new std::string(st.getName());
     std::cout << "operator=" << std::endl;
    return *this;
}
Student& Student::operator =( Student&& st){
    if (this == &st) return *this;
    std::cout << "Move:" << std::endl;
    name = st.name;
    age = st.age;
    st.name = nullptr;
    st.age = nullptr;
    return *this;
}


int Student::getAge() const{
    return *age;
}

std::string  Student::getName() const{
    return *name;
}

void  Student::display(){
    std::cout << *(this->name) <<":"<<*(this->age) << std::endl;
}

void Student::setAge(int age){
    *(this->age) = age;
}
void Student::setName(std::string name){
    *(this->name) = name;
}
Student::~Student()
{
    delete age,name;
}