/*
 * Phase.cpp
 *
 *  Created on: 26 Apr 2013
 *      Author: william
 */

#include "pb_phase.h"

namespace Popbal {

Phase::Phase():
		mNumODE(0)
{}

Phase::Phase(unsigned int nODEs): Phase() {
	SetNumberODEs(nODEs);
}

Phase::~Phase() {}


void Phase::SetNumberODEs(unsigned int nODEs) {
	mNumODE = nODEs;
	mODEs.resize(nODEs, 0.0);
}

dvec& Phase::ODEs() {
	return mODEs;
}

} /* namespace Popbal */
