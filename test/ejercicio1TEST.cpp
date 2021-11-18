#include "gtest/gtest.h"
#include <vector>
#include <string>
#include "../ejercicios/ejercicio1.h"

using namespace std;

TEST(Ejercicio1, happyPath) {

    EXPECT_EQ(funcion1(), 1);

}