#include "gtest-1.8.1/gtest.h"
#include "../src/bisiestos.h"
#include <list>

/**
 * Googletest Primer (en ingles)
 * https://github.com/google/googletest/blob/master/googletest/docs/primer.md
 */

TEST(bisiesto_test, anio_impar_es_no_bisiesto) {
    Bisiestos bisiestos;
    EXPECT_EQ(bisiestos.es_bisiesto(2001), false);
}

TEST(bisiesto_test, anio_multiplo_de_4_no_bisiesto) {
    Bisiestos bisiestos;
    EXPECT_EQ(bisiestos.es_bisiesto(1900), false);
}

TEST(bisiesto_test, anio_multiplo_de_4_bisiesto) {
    Bisiestos bisiestos;
    EXPECT_EQ(bisiestos.es_bisiesto(2004), true);
}

TEST(bisiesto_test, anio_multiplo_de_400_bisiesto) {
    Bisiestos bisiestos;
    EXPECT_EQ(bisiestos.es_bisiesto(2000), true);
}

TEST(bisiesto_test, anios_bisiestos_del_2000_al_2020) {
    Bisiestos bisiestos;
    std::list<int> anios_bisiestos_esperados = {1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020};
    EXPECT_EQ(bisiestos.bisiestos_entre(1990, 2020), anios_bisiestos_esperados);
}