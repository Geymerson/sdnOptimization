#include "enb.h"

Enb::Enb() {
    m_ID = 0;
    m_maxBdw = 0;
    m_latitide = 0;
    m_lontitude = 0;
    m_occupiedBdw = 0;
    m_maxBdw = 50;
}

Enb::Enb(unsigned int id, float maxBdw) {
    m_ID = id;
    m_maxBdw = maxBdw;
}

float Enb::availableBdw() const {
    return m_availableBdw;
}

void Enb::setAvailableBdw(float availableBdw) {
    m_availableBdw = availableBdw;
}

float Enb::latitide() const {
    return m_latitide;
}

void Enb::setLatitide(float latitide) {
    m_latitide = latitide;
}

float Enb::lontitude() const {
    return m_lontitude;
}

void Enb::setLontitude(float lontitude) {
    m_lontitude = lontitude;
}

bool Enb::add_ue(Ue ue) {
    if(ue.requiredBdw() + m_occupiedBdw > m_maxBdw) {
        cout << "Fail to connect user to enb: " << m_ID << " max bandwidth achieved.";
        return false;
    }
    ue.setEnbID(m_ID);
    m_occupiedBdw += ue.requiredBdw();
    m_users.push_back(ue);
    return true;
}

float Enb::maxBdw() const {
    return m_maxBdw;
}

void Enb::setMaxBdw(float maxBdw) {
    if(maxBdw < 0) {
        cout << "Max bandwidth value must be greater than zero.";
        return;
    }
    m_maxBdw = maxBdw;
}
