#ifndef UE_H
#define UE_H


class Ue {
public:
    Ue();
    Ue(unsigned int id);
    unsigned int ID() const;
    void setID(unsigned int ID);

    int enbID() const;
    void setEnbID(int enbID);

    float requiredBdw() const;
    void setRequiredBdw(float requiredBdw);

    float latitide() const;
    void setLatitide(float latitide);

    void setLontitude(float lontitude);
    float lontitude() const;

    bool isConnected() const;
    void setIsConnected(bool isConnected);

private:
    unsigned int m_ID;
    int m_enbID;
    float m_requiredBdw;
    float m_latitide;
    float m_lontitude;
    bool m_isConnected;
};

#endif // UE_H
