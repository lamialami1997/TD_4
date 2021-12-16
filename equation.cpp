#include "equation.h"

double equation::get_a()
{
    return a;
}
double equation::get_b()
{
    return b;

}
double equation::compute(double t, double step, Variable &var ,ITimeDiscretization temp)
{
    return var(temp.iterateur(t)+1)=var(temp.iterateur(t))+step;
} 
double equation::compute_initial_condition(double t0, Variable &var)
{
    var(0) = t0;
    return var(0);
}