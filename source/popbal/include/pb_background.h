// AN ABSTRACT CLASS CONTAINING REFERENCES TO THE BACKGROUND PHASE
// E.G. GAS-PHASE PROVIDED BY CANTERA

#pragma once

#include "pb_consts.h"

namespace Popbal {
class Background
{
public:

    //! Default constructor
    Background(void);

    //! Destructor
    ~Background(void);

    // ACCESS TO STATE OF BACKGROUND PHASE

    //! Return the temperature (K)
    virtual double Temperature() const = 0;

    //! Return the pressure (Pa)
    virtual double Pressure() const = 0;

    //! Return the viscoisty (Pa.s)
    virtual double Viscosity() const = 0;

    // An enum of avaiable correlations for calculating the viscosity of a
    // fluid mixture
    enum ViscosityCorrelation {iAir, iHe, iWaterLiquid, iWaterVapour};

protected:

    double GetViscosity(ViscosityCorrelation vc) const;

};
} // Popbal
