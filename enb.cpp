#include "enb.h"

Enb::Enb() {

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
