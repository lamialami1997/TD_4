#pragma once 
#include "Variable.h"
#include <iostream>
#include"ITimeDiscretization.h"

class equation{
    private : 
    double a , b ;
    public : 
    // constructeur , dteur 
    equation (double x, double y ): a(x),b(y) {};
    ~equation(){};
    double get_a();
    double get_b();
    double compute(double t, double step, Variable &var,ITimeDiscretization temp);
    double compute_initial_condition(double t0, Variable &var);

        
    
};