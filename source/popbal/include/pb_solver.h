/*
 * pb_solver.h
 *
 *  Created on: 30 May 2013
 *      Author: wjm34
 */

#include "pb_consts.h"
#include "pb_cell.h"

#ifndef PB_SOLVER_H_
#define PB_SOLVER_H_

namespace Popbal {

class Solver {
public:
	Solver();
	virtual ~Solver();

	void Solve(Popbal::Cell &cell) const;

	//! Advance cell to time t
	void AdvanceTo(double t) const;

protected:
	// Right hand side of the ODE to solve
	void RHS(const dvec &y, dvec &y, const double /* t */) const;

private:
	//! The timesteps vector
	dvec mTimeSteps;
};

} /* namespace Popbal */
#endif /* PB_SOLVER_H_ */
