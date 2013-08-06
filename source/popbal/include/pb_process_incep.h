/*
 * pb_process_incep.h
 *
 *  Created on: 30 May 2013
 *      Author: wjm34
 */

#ifndef PB_PROCESS_INCEP_H_
#define PB_PROCESS_INCEP_H_

#include "pb_process.h"

namespace Popbal {
namespace Processes {

class Inception: public Popbal::Processes::Process {
public:
	//! List of possible inception types
	enum InceptionType {iConstant};

	Inception();
	virtual ~Inception();

	//! Returns the rate of the particle process
	double Rate(double t, const Background &bg) const;

	//! Apply the rate terms to a vector
	double ApplyRateTerms(double t, Background &bg, dvec &ydot);

	//! Set the component change of the process
	void SetComponentChange(signed int dx);

private:
	//! Type of the inception process
	InceptionType mType;
};

} /* namespace Processes */
} /* namespace Popbal */
#endif /* PB_PROCESS_INCEP_H_ */
