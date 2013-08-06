#include "pb_background_static.h"

namespace Popbal {
BackgroundStatic::BackgroundStatic(void):
    Background(),
    mT(0.0),
    mP(0.0),
    mVC(ViscosityCorrelation::iAir)
{}


BackgroundStatic::~BackgroundStatic(void)
{
}

BackgroundStatic::BackgroundStatic(
    double T,
    double P,
    ViscosityCorrelation VC):
    Background(),
    mT(T),
    mP(P),
    mVC(VC)
{}


//! Set the temperature
void BackgroundStatic::SetTemperature(double T) {
    mT = T;
}

//! Set the pressure
void BackgroundStatic::SetPressure(double P) {
    mP = P;
}

//! Set the viscosity
void BackgroundStatic::SetViscosityCorrelation(ViscosityCorrelation VC) {
    mVC = VC;
}


double BackgroundStatic::Temperature() const {
    return mT;
}

double BackgroundStatic::Pressure() const {
    return mP;
}

double BackgroundStatic::Viscosity() const {
    return GetViscosity(mVC);
}

} // Popbal
