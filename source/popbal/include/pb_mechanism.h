/*
 * Mechanism.h
 *
 *  Created on: 26 Apr 2013
 *      Author: william
 */

#include "pb_consts.h"
#include "pb_process.h"

#ifndef MECHANISM_H_
#define MECHANISM_H_

namespace Popbal {

class Mechanism {
public:

	Mechanism();
	virtual ~Mechanism();

	//! Add a process to the mechanism
	void AddProcess(Processes::Process *p);

	void CalculateDerivatives(double t, dvec &y, dvec &ydot) const;

private:

	//! The list of particle processes in the mechanism
	Processes::ProcessPtrs mProcesses;
};

} /* namespace Popbal */
#endif /* MECHANISM_H_ */
