#include "Apple.h"
#include <string>
#include <iostream>
//copy
Apple::Apple(const Apple& a1):Apple{*a1.name,*a1.price}{
    //std::cout << "Apple Copy:" << std::endl;    
}


Apple::Apple(std::string name,int price){
   //   std::cout << "Apple Constorctor:" << std::endl;    
    this->name = new std::string(name);
    this->price = new int(price);
}

Apple::Apple(Apple&& ap)noexcept{
     // std::cout << "Apple Move:" << std::endl;    
      this->name = ap.name;
      this->price = ap.price;
      ap.name= nullptr;
      ap.price= nullptr;
}

Apple::Apple():Apple{"empty",0}
{    
}

Apple& Apple::operator=(const Apple& a1){
        std::cout << "operator= Copy" <<std::endl;
        delete name,price;
        this->name = new std::string(*a1.name);
        this->price = new int(*a1.price);
}

Apple& Apple::operator= (Apple&& a1){
    std::cout << "operator= Move" <<std::endl;
    if (this == &a1) return *this;
    delete name,price;
    this->name = a1.name;
    this->price = a1.price;
    a1.name = nullptr;
    a1.price = nullptr;
    return *this;
}

bool Apple::operator>(const Apple& a1){
    std::cout << "operator>" << std::endl;
    if (*this->price > *a1.price){
        return true;
    }
    return false;
}
bool Apple::operator<(const Apple& a1){
    std::cout << "operator>" << std::endl;
    if (*this->price < *a1.price){
        return true;
    }
    return false;
}
 std::ostream& operator<<(std::ostream& os,const Apple& ap){
     os << *ap.name << *ap.price;
     return os;
     
}    

bool operator==(const Apple &p1,const Apple &p2){
     std::cout << "operator== two" << std::endl;  
     if (p1.name->compare(*p2.name) == 0 && *p1.price == *p2.price){
         return true;
     }
    return false;
} 
  
void Apple::display(){
    std::cout << *name << *price <<std::endl;
 }


Apple::~Apple()
{
    //std::cout << "~Apple:" <<*name<<":"<<*price<< std::endl;
    delete name,price;
}

