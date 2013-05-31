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

struct SolverOutputs
{
	//! The state of the ODE system
    std::vector<dvec> mStates;
    //! Timesteps taken by the integrator
    dvec& mTimes;

    //! Constructor
    SolverOutputs(std::vector<dvec>& states, dvec& times);

    //! Operator to collect information in the struct
    void operator() (const dvec& x, double t);
};

class Solver {
public:
	Solver();
	virtual ~Solver();

	//! Set abs. tolerance
	void SetAbsTolerance(double atol);

	//! Set rel. tolerance
	void SetRelTolerance(double rtol);


	void Solve(Popbal::Cell &cell, dvec times) const;

	//! Advance cell to time t
	void AdvanceTo(Popbal::Cell &cell, double t) const;

protected:
	// Right hand side of the ODE to solve
	static void RHS(const dvec &y, dvec &ydot, const double /* t */);

private:

	//! Absolute error tolerance of the ODE solver
	double mToleranceAbs;

	//! Relative error tolerance of the ODE solver
	double mToleranceRel;
};

} /* namespace Popbal */
#endif /* PB_SOLVER_H_ */
