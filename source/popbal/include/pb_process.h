/*
 * Process.h
 *
 *  Created on: 26 Apr 2013
 *      Author: william
 */

#include "pb_consts.h"
#include "pb_background.h"

#ifndef PROCESS_H_
#define PROCESS_H_

namespace Popbal {
namespace Processes {

class Process {
public:
	Process();
	virtual ~Process();

	//! Returns the rate of the particle process
	virtual double Rate(double t, const Background &bg) const;

	//! Apply the rate terms to a vector
	virtual double ApplyRateTerms(double t, Background &bg, dvec &ydot) const;

	//! Set the component change of the process
	virtual void SetComponentChange(signed int dx);

protected:
	//! Name of the process
	std::string mName;

	//! The rate scaling factor
	double mA;

	//! The component change for the process
	signed int mDelta;
};

typedef std::vector<Process*> ProcessPtrs;

}
} /* namespace Popbal */
#endif /* PROCESS_H_ */
