#include "Student.h"
#include "iostream"
Student::Student():Student{0,"Empty"}
{

}

Student::Student(int pAge,std::string pName):age{nullptr},name{nullptr}
{
    // std::cout << "Student " <<std::endl;
    this->age = new int(pAge);
    this->name = new std::string(pName);    
}
Student::Student(Student&& st)noexcept :age{st.age},name{st.name}{   
   st.age = nullptr; 
   st.name = nullptr;   
  // std::cout << "Move:" <<std::endl; 
}
Student::Student(const Student& st){
    //std::cout << "copy" <<std::endl;
    this->age = new int(st.getAge());
    this->name = new std::string(st.getName());
}
Student& Student::operator =(const Student& st){
    if (this == &st) return *this;
    delete age,name;
    age  =new int{st.getAge()};
    name = new std::string(st.getName());
     //std::cout << "operator=" << std::endl;
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