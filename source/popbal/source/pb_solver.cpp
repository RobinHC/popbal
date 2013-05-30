/*
 * pb_solver.cpp
 *
 *  Created on: 30 May 2013
 *      Author: wjm34
 */

#include "pb_solver.h"
#include <boost/numeric/odeint.hpp>

namespace Popbal {

Solver::Solver() {
	// TODO Auto-generated constructor stub

}

Solver::~Solver() {
	// TODO Auto-generated destructor stub
}

void Solver::Solve(Cell &cell) const {

}

void Solver::RHS(const dvec &y, dvec &y, const double /* t */) const {

}

} /* namespace Popbal */
