#include "pb_background.h"
#include <math.h>

namespace Popbal {
Background::Background(void)
{
}


Background::~Background(void)
{
}

double Background::GetViscosity(ViscosityCorrelation vc) const {

    // Initialise some variables
    double T = Temperature();
    double mu(0.0);

    if (vc == ViscosityCorrelation::iAir) {
        mu = 1.458e-6 * T * sqrt(T) / (T + 110.4);
    } else if (vc == ViscosityCorrelation::iWaterLiquid) {
        mu = 8.9e-04;
    } else {
        throw std::runtime_error("Viscosity model not implemented yet.");
    }

    return mu;
}

} // Popbal
