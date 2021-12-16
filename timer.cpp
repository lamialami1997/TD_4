#include "timer.h"
Timer::Timer(){};
void Timer::start()
{
    debut=std::chrono::system_clock::now();
}
void Timer::stop()
{
    fin=std::chrono::system_clock::now();
}
void Timer::print()
{
    std::cout<<"temps d'execution : "<<std::chrono::duration_cast<std::chrono::nanoseconds>(fin-debut).count()<<" ns " << std::endl;
}