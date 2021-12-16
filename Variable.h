#pragma once
#include <vector>
#include <iostream>

class Variable {
    private:
    std::vector<double> y_n ;
    public :
    Variable();
    Variable(unsigned n);
    double& operator()(unsigned n);
    std::vector<double> get_y();
    void print();
};