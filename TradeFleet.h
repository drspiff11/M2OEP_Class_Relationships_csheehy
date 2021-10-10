//
// Created by Chris Sheehy on 10/8/21.
//

#ifndef M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_TRADEFLEET_H
#define M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_TRADEFLEET_H
#include "Product.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class TradeFleet {
public:
    Port home_port;
    vector<Product> cargo;

};

#endif //M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_TRADEFLEET_H
