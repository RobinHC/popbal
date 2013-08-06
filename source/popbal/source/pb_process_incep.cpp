/*
 * pb_process_incep.cpp
 *
 *  Created on: 30 May 2013
 *      Author: wjm34
 */

#include "pb_process_incep.h"

namespace Popbal {
namespace Processes {

Inception::Inception():
		Process(),
		mType(Inception::iConstant)
		{}

Inception::~Inception() {}

//! Returns the rate of the particle process
double Inception::Rate(
		double t,
		const Background &bg) const {
	double rate(0.0);

	if (mType == Inception::iConstant) {
		rate = mA;
	} else {
		throw std::runtime_error("Unrecognised inception rate term.");
	}

	return rate;
}

//! Apply the rate terms to a vector
double Inception::ApplyRateTerms(
		double t,
		Background &bg,
		dvec &ydot) {
	// First get the rate
	double rate = Rate(t, bg);

	// Add the contribution to the rate vector (indexed from zero)
	ydot[mDelta-1] += rate;

	return rate;
}

//! Set the component change of the process
void Inception::SetComponentChange(signed int dx) {
	if (dx <= 0)
		throw std::runtime_error("Inception must have positive component change.");
	mDelta = dx;
}

} /* namespace Processes */
} /* namespace Popbal */
