/*
 * Phase.cpp
 *
 *  Created on: 26 Apr 2013
 *      Author: william
 */

#include "pb_phase.h"

namespace Popbal {

Phase::Phase():
		mT(0.0),
		mP(0.0)
{}

Phase::~Phase() {}

double Phase::Temperature() const {
	return mT;
}

double Phase::Pressure() const {
	return mP;
}

} /* namespace Popbal */
