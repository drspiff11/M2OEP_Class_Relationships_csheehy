//
// Created by Chris Sheehy on 10/8/21.
//

#ifndef M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_SETTLEMENT_H
#define M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_SETTLEMENT_H
#include "Product.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Settlement {
public:

    string get_name() const;
    string get_location() const;

    void add_import(Product product);
    void remove_import(string product_name);
    void add_export(Product product);
    void remove_export(string product_name);

    virtual void produce();

protected:
    string name;
    string location;
    vector<Product> imports;
    vector<Product> exports;
};

#endif //M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_SETTLEMENT_H
