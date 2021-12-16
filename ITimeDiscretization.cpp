#include"ITimeDiscretization.h"



    double  ITimeDiscretization::get_t_init()
    {
        return t_init;
    }
    double  ITimeDiscretization::get_f_fin()
    {
        return f_fin;
    }
    double  ITimeDiscretization::get_step()
    {
        return step;
    }
    int ITimeDiscretization::nb_point()
    {
        return floor((f_fin-t_init)/step);
    }
    int ITimeDiscretization::iterateur(double n )
    {
        int compt=0;
        for (double t=t_init;t<n;t+=step)
        {
            compt++;
            
        }
        return compt; 
    }