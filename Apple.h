#ifndef APPLE_H
#define APPLE_H
#include <string>
class Apple
{
private:
    std::string* name;
    int* price;
    friend bool operator==(const Apple &p1,const Apple &p2);
    //similar operator<<
    friend std::ostream& operator<<(std::ostream& os,const Apple& ap);
public:
    Apple(const Apple& a1);
    Apple(Apple&& ap)noexcept;
    Apple(std::string name,int price);
    Apple& operator=(const Apple& a1);
    Apple& operator=(Apple&& a1);
     
    bool operator>(const Apple& a1);
    bool operator<(const Apple& a1);
    Apple();
    ~Apple();
    void display();
    

};

#endif // APPLE_H
