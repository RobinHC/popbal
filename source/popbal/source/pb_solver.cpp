/*
 * pb_solver.cpp
 *
 *  Created on: 30 May 2013
 *      Author: wjm34
 */

#include "pb_solver.h"
#include <boost/numeric/odeint.hpp>

namespace odeint = boost::numeric::odeint;

namespace Popbal {

SolverOutputs::SolverOutputs(std::vector<dvec>& states, dvec& times):
		mStates( states ),
		mTimes( times ) {}

void SolverOutputs::operator() (const dvec& x, double t) {
	mStates.push_back(x);
	mTimes.push_back(t);
}

Solver::Solver():
	mToleranceAbs(1.0e-6),
	mToleranceRel(1.0e-10)
{
	// TODO Auto-generated constructor stub
}

Solver::~Solver() {
	// TODO Auto-generated destructor stub
}

void Solver::Solve(Popbal::Cell &cell, dvec times) const {

}

void Solver::AdvanceTo(Cell &cell, double t) const {

	// Use an adaptive stepper to advance the system
	typedef odeint::runge_kutta_cash_karp54<double> error_stepper_type;
	typedef odeint::controlled_runge_kutta< error_stepper_type > controlled_stepper_type;

	std::vector<dvec> x;
	dvec times;
	odeint::integrate(RHS, cell.Particles(), 0.0, 10.0, 0.1, SolverOutputs(x, times));

	/*
	odeint::integrate_adaptive(
			odeint::make_controlled(
					mToleranceAbs,
					mToleranceRel,
					error_stepper_type()),
			RHS,
			cell.Particles(),
			0.0,
			10.0,
			0.1
			);*/
}

void Solver::RHS(const dvec &y, dvec &ydot, const double /* t */) {

}

} /* namespace Popbal */
