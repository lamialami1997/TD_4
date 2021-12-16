#include"Variable.h"

Variable::Variable(){};

Variable::Variable(unsigned n)
{
    y_n.resize(n+1);
}
double& Variable::operator()(unsigned n)
{
    return y_n[n];
}
std::vector<double> Variable::get_y()
{
    return this->y_n;
}
void Variable::print()
{
    for (int i=0;i<y_n.size();i++)
    {
        std::cout<<y_n[i] <<" " ;

    }
    std::cout <<std::endl;
}