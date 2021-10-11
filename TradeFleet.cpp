//
// Created by Chris Sheehy on 10/10/21.
//

#import "TradeFleet.h"

TradeFleet::TradeFleet(Port home_port){
    this->home_port = home_port;

}

int TradeFleet::get_home_port() const{
    return home_port;
}

void export_to(Settlement settlement) {
    for(int i=0;i<exports.size();i++) {
        for(int j=0;j<settlement.imports.size();j++) {
            if(settlement.imports[j].get_name() == exports[i].get_name()){

            } else {
                settlement.imports.pushback(settlement)
            }
        }
    }

}

