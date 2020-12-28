#include "degreeConv.hpp"

float FtoK(float in)
{
    return (in - 32) * (5.0f / 9.0f) + 273.15f;
}

float CtoK(float in)
{
    return in + 273.15f;
}

float KtoF(float in)
{
    return KtoC(in) * (9.0f / 5.0f) + 32;
}

float KtoC(float in)
{
    return in - 273.15f;
}