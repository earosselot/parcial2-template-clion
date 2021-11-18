#include "gtest/gtest.h"
#include <vector>
#include <string>
#include "../ejercicios/ejercicio2.h"

using namespace std;

TEST(Ejercicio2, happyPath) {

    EXPECT_EQ(funcion2(), 1);

}