#include "ue.h"

Ue::Ue() {
    m_ID = 0;
    m_enbID = -1;
    m_isConnected = false;
    m_latitide = 0;
    m_lontitude = 0;
    m_requiredBdw = 0;
}

Ue::Ue(unsigned int id) {
    m_ID = id;
}

unsigned int Ue::ID() const {
    return m_ID;
}

void Ue::setID(unsigned int ID) {
    m_ID = ID;
}

int Ue::enbID() const {
    return m_enbID;
}

void Ue::setEnbID(int enbID) {
    m_enbID = enbID;
    if(enbID >= 0) {
        setIsConnected(true);
        return;
    }
    setIsConnected(false);
}

float Ue::requiredBdw() const {
    return m_requiredBdw;
}

void Ue::setRequiredBdw(float requiredBdw) {
    m_requiredBdw = requiredBdw;
}

float Ue::latitide() const {
    return m_latitide;
}

void Ue::setLatitide(float latitide) {
    m_latitide = latitide;
}

void Ue::setLontitude(float lontitude) {
    m_lontitude = lontitude;
}

float Ue::lontitude() const {
    return m_lontitude;
}

bool Ue::isConnected() const {
    return m_isConnected;
}

void Ue::setIsConnected(bool isConnected) {
    m_isConnected = isConnected;
}
