#include "bisiestos.h"
#include <cassert>

using namespace std;

/**
 * Un año es bisiesto si cumple alguno de los siguientes criterios:
 * * Si es divisible por 4 pero no por 100.
 * * Si es divisible por 400.
 */
bool Bisiestos::es_bisiesto(int anio) {
    // Chequeo la PRE
    assert(anio > 0);

    return (anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0 ;
}

list<int> Bisiestos::bisiestos_entre(int desde, int hasta) {
    // Chequeo la PRE
    assert(desde <= hasta);

    list<int> bisiestos;
    for (int i = desde; i <= hasta; ++i) {
        if (es_bisiesto(i)) {
            bisiestos.push_back(i);
        }
    }
    return bisiestos;
}