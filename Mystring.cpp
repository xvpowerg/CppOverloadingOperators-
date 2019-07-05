#include "Mystring.h"
#include <cstring>
#include <iostream>
Mystring::Mystring():str{nullptr}
{
    str = new char[1];
    *str = '\0';
}
Mystring::Mystring(const char* s):str{nullptr}{
     std::cout << "Mystring (char* s):" <<s<< std::endl;
    if (s == nullptr){
         if (s == nullptr){
             str = new char[1];
             *str = '\0';
         }
    }else{
        str = new char[std::strlen(s) + 1];
        std::strcpy(str,s);
    }
}
Mystring::Mystring(const Mystring &source):str{nullptr}{
    str = new char[std::strlen(source.str)+1];
    std::strcpy(str,source.str);
       std::cout << "copy" << std::endl;
}
void Mystring::display() const{
    std::cout <<str<<":" << get_lenght() <<std::endl;
}
int Mystring::get_lenght() const{ return std::strlen(str);}
const char* Mystring::get_str() const {return str;}
Mystring& Mystring::operator=(const Mystring& rhs){
   if (this == &rhs) 
        return *this;
   delete[] str;     
   str = new char[std::strlen(rhs.str) +1];
   std::strcpy(str,rhs.str);
   std::cout << "operator=" << std::endl;
   return *this;
}

Mystring::~Mystring()
{
    std::cout << "~Mystring" <<std::endl;
    delete [] str;
}


