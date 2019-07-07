#include "TestStatic.h"

TestStatic::TestStatic()
{
}

TestStatic::~TestStatic()
{
}

int TestStatic::value1 = 0;

int TestStatic::getVlaue1(){
    return value1;
}

void TestStatic::setVlaue1(int v){
    value1 = v;
}