#include<iostream>
#include "problem.h"
#include "equation.h"


int main (){
    UniformTimeDiscretization* time = new UniformTimeDiscretization(10,25,1);
    problem pb (1, 0 ,time);
    pb.solve();

    return 0;

} 