/*
 * Phase.h
 *
 *  Created on: 26 Apr 2013
 *      Author: william
 */

#include "pb_consts.h"

#ifndef PHASE_H_
#define PHASE_H_

namespace Popbal {

class Phase {
public:
	Phase();
	virtual ~Phase();

	//! Return the temperature (K)
	double Temperature() const;

	//! Return the pressure (Pa)
	double Pressure() const;

private:
	//! The temperature of the phase (K)
	double mT;

	//! The pressure of the phase (Pa)
	double mP;

	//! The number of ODEs (i.e. particles)
	unsigned int mNumODE;

	//! The ODE state space vector
	dvec mODEs;
};

} /* namespace Popbal */
#endif /* PHASE_H_ */
