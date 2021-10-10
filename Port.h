//
// Created by Chris Sheehy on 10/8/21.
//

#ifndef M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_PORT_H
#define M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_PORT_H

class Port : public Settlement {
public:
    int fleet_id;
    vector<TradeFleet> fleets;

    int get_fleet_id() const;




};

#endif //M2OEP_CLASS_RELATIONSHIPS_CSHEEHY_PORT_H
