#ifndef BISIESTOS_H
#define BISIESTOS_H
#include <list>
class Bisiestos {
public:
    /** PRE: @param anio es mayor a 0 */
    bool es_bisiesto(int anio);
    /**
     * PRE: @param desde <= @param hasta
     * @return la lista de anios bisiestos pertenecientes al intervalo [desde, hasta]
     */
    std::list<int> bisiestos_entre(int desde, int hasta);
};
#endif //BISIESTOS_H
