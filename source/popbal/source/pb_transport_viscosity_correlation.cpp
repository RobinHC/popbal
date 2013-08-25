/*
 * ViscosityCorrelation.cpp
 *
 *  Created on: 25 Aug 2013
 *      Author: william
 */

#include "pb_transport_viscosity_correlation.h"

namespace Popbal {
namespace Transport {

ViscosityCorrelation::ViscosityCorrelation():
	mConstants(),
	mForm()
{}

ViscosityCorrelation::ViscosityCorrelation(
		dvec consts,
		ViscosityCorrelationForm form):
		mConstants(consts),
		mForm(form)
{}

ViscosityCorrelation::ViscosityCorrelation(const ViscosityCorrelation &rhs):
		mConstants(rhs.mConstants),
		mForm(rhs.mForm)
{}

ViscosityCorrelation::~ViscosityCorrelation() {
	// TODO Auto-generated destructor stub
}

double ViscosityCorrelation::Viscosity(double T, double P) const {
	return 0.0;
}

} /* namespace Transport */
} /* namespace Popbal */
