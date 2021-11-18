#include "gtest/gtest.h"
#include <vector>
#include <string>
#include "../ejercicios/ejercicio4.h"

using namespace std;

TEST(Ejercicio4, happyPath) {

    EXPECT_EQ(funcion4(), 1);

}