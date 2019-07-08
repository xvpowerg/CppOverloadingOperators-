#ifndef PERFORMANCE_H
#define PERFORMANCE_H
#include <time.h>

void printTime(){
    
    std::cout << (double)clock() / CLOCKS_PER_SEC << "S";
}
#endif // PERFORMANCE_H