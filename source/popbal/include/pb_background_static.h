#pragma once
#include "pb_background.h"
namespace Popbal {
class BackgroundStatic: public Background
{
public:
    BackgroundStatic(void);
    ~BackgroundStatic(void);

    // SET THE BACKGROUND PHASE DATA
    
    //! Constructor with temperature, pressure
    BackgroundStatic(double T, double P, ViscosityCorrelation VC);

    //! Set the temperature
    void SetTemperature(double T);

    //! Set the pressure
    void SetPressure(double P);

    //! Set the viscosity
    void SetViscosityCorrelation(ViscosityCorrelation VC);

    // ACCESS THE BACKGROUND PHASE DATA

    //! Return the temperature (K)
    double Temperature() const;

    //! Return the pressure (Pa)
    double Pressure() const;

    //! Return the viscoisty (Pa.s)
    double Viscosity() const;

private:

    //! The temperature of this phase (T)
    double mT;

    //! The pressure of this phase (Pa)
    double mP;

    //! The viscosity functional to return
    ViscosityCorrelation mVC;

};
} // Popbal
