/*
 * Process.cpp
 *
 *  Created on: 26 Apr 2013
 *      Author: william
 */

#include "pb_process.h"

namespace Popbal {
namespace Processes {

Process::Process() {
	// TODO Auto-generated constructor stub


}

Process::~Process() {
	// TODO Auto-generated destructor stub
}

/*!
 * @param dx	The change in component number
 */
void Process::SetComponentChange(signed int dx) {
	mDelta = dx;
}

}
} /* namespace Popbal */
