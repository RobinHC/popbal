#include "pb_background_static.h"

namespace Popbal {
BackgroundStatic::BackgroundStatic(void):
    Background(),
    mT(0.0),
    mP(0.0),
    mVC()
{}


BackgroundStatic::~BackgroundStatic(void)
{
}

BackgroundStatic::BackgroundStatic(
    double T,
    double P,
    Transport::ViscosityCorrelation VC):
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


double BackgroundStatic::Temperature() const {
    return mT;
}

double BackgroundStatic::Pressure() const {
    return mP;
}

double BackgroundStatic::Viscosity() const {
	return mVC.Viscosity(mT, mP);
}

} // Popbal
