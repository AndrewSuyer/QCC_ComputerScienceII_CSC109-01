/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.14 Instrument information
 */


#include "StringInstrument.h"


void StringInstrument::SetNumOfStrings(int num)
{
    numStrings = num;
}


int StringInstrument::GetNumOfStrings() const
{
    return numStrings;
}


void StringInstrument::SetNumOfFrets(int num)
{
    numFrets = num;
}


int StringInstrument::GetNumOfFrets() const
{
    return numFrets;
}


void StringInstrument::SetIsBowed(bool bowed)
{
    isBowed = bowed;
}


bool StringInstrument::GetIsBowed() const
{
    return isBowed;
}
