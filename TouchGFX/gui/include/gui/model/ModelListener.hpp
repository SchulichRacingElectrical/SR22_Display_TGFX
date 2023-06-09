#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
#include "main.h"

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }
//    virtual void updateGear(uint8_t value);
//    virtual void updateRPM(uint16_t value);
//    virtual void updateLeftDataField1(float value);
//    virtual void updateLeftDataField2(uint8_t value);
//    virtual void updateLeftDataField3(float value);
//    virtual void updateRightDataField1(float value);
//    virtual void updateRightDataField2(int16_t value);
//    virtual void updateRightDataField3(uint16_t value);
//    virtual void updateBatteryLow(bool state);
//    virtual void updateCoolantHigh(bool state);
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
