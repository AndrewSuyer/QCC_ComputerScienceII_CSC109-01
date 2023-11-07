/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.14 Instrument information
 */


#ifndef INC_10_14_INSTRUMENTINFORMATION_STRINGINSTRUMENT_H
#define INC_10_14_INSTRUMENTINFORMATION_STRINGINSTRUMENT_H

#include "Instrument.h"

class StringInstrument : public Instrument
{
    int numStrings;
    int numFrets;
    bool isBowed;

public:

    void SetNumOfStrings(int num);
    int GetNumOfStrings() const;

    void SetNumOfFrets(int num);
    int GetNumOfFrets() const;

    void SetIsBowed(bool bowed);
    bool GetIsBowed() const;

};


#endif // INC_10_14_INSTRUMENTINFORMATION_STRINGINSTRUMENT_H
