/*
 * pb_cell.h
 *
 *  Created on: 30 May 2013
 *      Author: wjm34
 */

#include "pb_consts.h"
#include "pb_phase.h"

#ifndef PB_CELL_H_
#define PB_CELL_H_

namespace Popbal {

class Cell {
public:
	//! Default constructor
	Cell();
	//! Create a new cell with the given number of ODEs
	Cell(unsigned int nODEs);
	//! Create a new cell with a given phase
	Cell(Phase ph);
	virtual ~Cell();

private:
	//! A pointer to the phase containing the particles
	Phase* mPhase;

	//! A list of inflows to this cell

	//! A list of outflows to this cell
};

} /* namespace Popbal */
#endif /* PB_CELL_H_ */
