/*
 * Mechanism.cpp
 *
 *  Created on: 26 Apr 2013
 *      Author: william
 */

#include "pb_mechanism.h"

namespace Popbal {

Mechanism::Mechanism() {}

Mechanism::~Mechanism() {
	// Clear memory of all processes
	for (Processes::ProcessPtrs::iterator p = mProcesses.begin();
			p != mProcesses.end(); ++p) {
		delete (*p);
	}
}

void Mechanism::AddProcess(Processes::Process *p) {
	mProcesses.push_back(p);
}

void Mechanism::CalculateDerivatives(double t, dvec &y, dvec &ydot) const {
	double sum(0.0);

	// Loop over processes
	for (Processes::ProcessPtrs::const_iterator p = mProcesses.begin();
			p != mProcesses.end(); ++p) {
		//sum += (*p)->ApplyRateTerms(t, ph, ydot);
	}
}

} /* namespace Popbal */
