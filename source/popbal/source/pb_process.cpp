/*
 * Process.cpp
 *
 *  Created on: 26 Apr 2013
 *      Author: william
 */

#include "pb_process.h"

namespace Popbal {
namespace Processes {

Process::Process():
	mA(1.0),
	mDelta(0) {}

Process::~Process() {}

//! Basic implementation of rate function
double Process::Rate(double t, Phase &ph) const {
	return mA;
}

//! Basic application of rate terms
double Process::ApplyRateTerms(double t, Phase &ph, dvec &ydot) const {
	return Rate(t, ph);
}

/*!
 * @param dx	The change in component number
 */
void Process::SetComponentChange(signed int dx) {
	mDelta = dx;
}

}
} /* namespace Popbal */
