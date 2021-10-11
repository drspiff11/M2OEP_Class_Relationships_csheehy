//
// Created by Chris Sheehy on 10/10/21.
//

#include "Settlement.h"

Settlement::Settlement(){

}

string Settlement::get_name() const {
    return name;
}

string Settlement::get_location() const {
    return location;
}

void Settlement::remove_import(string product_name) {
    for(int i=0;i<imports.size();i++) {
        if(imports[i].get_name() == product_name){
            imports.erase(i);
        }
    }
}

void Settlement::remove_export(string product_name) {
    for(int i=0;i<exports.size();i++) {
        if(exports[i].get_name() == product_name){
            exports.erase(i);
        }
    }
}

void Settlement::produce() {
    for(int i=0;i<exports.size();i++) {
        exports[i].set_quantity(exports[i].get_quantity() + 1);
    }
}



