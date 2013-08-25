#pragma once
#include "pb_background.h"
#include "pb_transport_viscosity_correlation.h"

namespace Popbal {
class BackgroundStatic: public Background
{
public:
    ~BackgroundStatic(void);

    // SET THE BACKGROUND PHASE DATA
    
    //! Constructor with temperature, pressure and the correlation
    BackgroundStatic(double T, double P, Transport::ViscosityCorrelation VC);

    //! Set the temperature
    void SetTemperature(double T);

    //! Set the pressure
    void SetPressure(double P);

    // ACCESS THE BACKGROUND PHASE DATA

    //! Return the temperature (K)
    double Temperature() const;

    //! Return the pressure (Pa)
    double Pressure() const;

    //! Return the viscosity (Pa.s)
    double Viscosity() const;

private:

    //! Protect the default constructor
    BackgroundStatic(void);

    //! The temperature of this phase (T)
    double mT;

    //! The pressure of this phase (Pa)
    double mP;

    //! The viscosity correlation for the phase
    Transport::ViscosityCorrelation mVC;

};
} // Popbal
