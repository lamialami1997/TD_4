#include <gtest/gtest.h>
#include "problem.h"
#include "equation.h"

TEST(UnitaryTest,ProblemTest){
  // construction et test d'une instance de Problem
    UniformTimeDiscretization* time = new UniformTimeDiscretization(20,25,1);
    problem pb (18, 03 ,time);
    EXPECT_EQ(18, pb.get_m_equation().get_a());
    EXPECT_EQ( 03, pb.get_m_equation().get_b());

}

TEST(MainFunctionTest,EquationTest){
  // construction et test d'une instance de Equation
    equation eq(1,2);
    EXPECT_EQ(1,eq.get_a());
}
