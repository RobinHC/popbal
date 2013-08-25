/*
 * pobal.cpp
 *
 *  Created on: 26 Apr 2013
 *      Author: william
 */

#include <iostream>
#include <string>
#include <vector>

#include <boost/program_options.hpp>
namespace po = boost::program_options;

#include "pb_consts.h"
#include "pb_process_incep.h"
#include "pb_mechanism.h"
#include "pb_background_static.h"
#include "pb_solver.h"
#include "pb_transport_viscosity_correlation.h"

int main(int argc, char* argv[])
{
	std::cout << "Discrete Population Balance Solver\n"
			<< "William J Menz 2013" << std::endl;

	// Create particle mechanism
	Popbal::Mechanism mech;

	// Create some processes
	Popbal::Processes::Inception* p1 = new Popbal::Processes::Inception();
	p1->SetComponentChange(1);
	mech.AddProcess(p1);

	// Something for viscosity
	Popbal::dvec vals(0.0);
	Popbal::Transport::ViscosityCorrelation vc(vals, Popbal::Transport::iVC1);

	// Create a reaction cell with N ODEs
    Popbal::BackgroundStatic bg(1000.0, 101325.0, vc);
	// Create the solver
	Popbal::Solver solver;

	// Create the timesteps
	double tf(1.0);
	unsigned int steps(100);
	std::vector<double> times;
	for (unsigned int i=steps; i!=0; --i) {
		times.push_back(tf / (double)i);
	}

	// Solve!
	//solver.Solve(cell);

	return 0;
}
