#include "gtest/gtest.h"
#include <vector>
#include <string>
#include "../ejercicios/ejercicio3.h"

using namespace std;

TEST(Ejercicio3, happyPath) {

    EXPECT_EQ(funcion3(), 1);

}