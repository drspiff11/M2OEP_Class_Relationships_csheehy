//
// Created by Chris Sheehy on 10/8/21.
//

#ifndef M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_CITY_H
#define M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_CITY_H
#include "Settlement.h"

class City : public Settlement {
private:
    int population;
    vector<int> districts;
public:
    int get_population() const;
    bool has_port();


};

#endif //M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_CITY_H
