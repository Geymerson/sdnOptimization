#ifndef ENB_H
#define ENB_H

#include "ue.h"
#include <vector>

using namespace std;


class Enb {
public:
    Enb();

    unsigned int ID() const;
    void setID(unsigned int ID);

    float availableBdw() const;
    void setAvailableBdw(float availableBdw);

    float latitide() const;
    void setLatitide(float latitide);

    float lontitude() const;
    void setLontitude(float lontitude);

    bool add_ue(Ue ue_id);

private:
    //Enb ID
    unsigned int m_ID;

    //Available bandwidth
    float m_availableBdw;

    //Base station latitude
    float m_latitide;

    //Base station longitude
    float m_lontitude;

    //Average handover frequency
    float m_handoveAvg;

    //Connected Users
    vector<Ue> users;
};

#endif // ENB_H
