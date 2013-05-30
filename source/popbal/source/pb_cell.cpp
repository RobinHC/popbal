/*
 * pb_cell.cpp
 *
 *  Created on: 30 May 2013
 *      Author: wjm34
 */

#include "pb_cell.h"

namespace Popbal {

Cell::Cell():
	mPhase(NULL) {
	mPhase = new Phase();
}

Cell::Cell(unsigned int nODEs):
		mPhase(NULL) {
	mPhase = new Phase(nODEs);
}

Cell::Cell(Phase ph):
		mPhase(NULL) {
	// TODO: Clone the phase supplied.
}

Cell::~Cell() {
	// Cell has responsibility for the Phase data
	delete mPhase;
}

} /* namespace Popbal */
