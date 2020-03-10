#ifndef UE_H
#define UE_H


class Ue {
public:
    Ue();
private:
    unsigned int m_ID;
    unsigned int m_enbID;
    float m_requiredBdw;
    float m_latitide;
    float m_lontitude;
};

#endif // UE_H
