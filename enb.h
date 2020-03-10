#ifndef ENB_H
#define ENB_H

#include "ue.h"
#include <vector>
#include <iostream>

using namespace std;

class Enb {
public:
    Enb();

    Enb(unsigned int id, float maxBdw);

    unsigned int ID() const;
    void setID(unsigned int ID);

    float availableBdw() const;
    void setAvailableBdw(float availableBdw);

    float latitide() const;
    void setLatitide(float latitide);

    float lontitude() const;
    void setLontitude(float lontitude);

    bool add_ue(Ue ue);
    bool remove_ue(int ue_id);

    float maxBdw() const;
    void setMaxBdw(float maxBdw);

private:
    //Enb ID
    unsigned int m_ID;

    //Enb maximum bandwidth
    float m_maxBdw;

    //Enb maximum bandwidth
    float m_occupiedBdw;

    //Available bandwidth
    float m_availableBdw;

    //Base station latitude
    float m_latitide;

    //Base station longitude
    float m_lontitude;

    //Average handover frequency
    float m_handoveAvg;

    //Connected Users
    vector<Ue> m_users;
};

#endif // ENB_H
