#ifndef TESTSTATIC_H
#define TESTSTATIC_H

class TestStatic
{
    
private:
static int value1;
public:
    TestStatic();
    ~TestStatic();
static int getVlaue1();    
static void setVlaue1(int v);    
};

#endif // TESTSTATIC_H
