#pragma once 
#include<cmath>

class ITimeDiscretization 
{
    protected :

        double  t_init;
        double  f_fin;
        double  step;
    public : 
        ITimeDiscretization( double  start ,double  end ,double  _step ) : t_init(start) , f_fin(end), step(_step) {};
    double  get_t_init();
    double  get_f_fin();
    double  get_step();
    int nb_point();
    int iterateur(double n );
    
};

class UniformTimeDiscretization: public ITimeDiscretization 

{
    private :
    const double  step ;
    public :
    UniformTimeDiscretization (double t_init , double f_fin , const double  pas ) : ITimeDiscretization( t_init , f_fin , pas ) , step(pas) {};
};