#ifndef APPLE_H
#define APPLE_H
#include <string>
class Apple
{
private:
    std::string* name;
    int* price;
public:
    Apple(const Apple& a1);
    Apple(Apple&& ap)noexcept;
    Apple(std::string name,int price);
    Apple& operator=(const Apple& a1);
    Apple& operator=(Apple&& a1);
    bool operator==(const Apple& a1);
    Apple();
    ~Apple();
    void display();
    

};

#endif // APPLE_H
