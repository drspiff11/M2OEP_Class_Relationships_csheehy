//
// Created by Chris Sheehy on 10/8/21.
//

#ifndef M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_PRODUCT_H
#define M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_PRODUCT_H
#include <string>
using std::string;

class Product {

public:
    string product_name;
    enum product_type {raw_materials, foodstuffs, handicrafts, luxuries};
    product_type type;
    //abstraction of shipping tonnage
    int quantity;
    // 1, 2, or 3, denoting relative exchange-value with 1 being the least valuable and 3 being the most valuable
    int value;

    string get_name() const;
    product_type get_type() const;
    int get_quantity() const;
    int get_value() const;

    void set_quantity(int quantity);


};

#endif //M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_PRODUCT_H
