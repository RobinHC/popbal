/*
 * ViscosityCorrelation.h
 *
 *  Created on: 25 Aug 2013
 *      Author: william
 */

#ifndef VISCOSITYCORRELATION_H_
#define VISCOSITYCORRELATION_H_

#include "pb_consts.h"

namespace Popbal {
namespace Transport {

//! Different interpretations of correlations
enum ViscosityCorrelationForm {
	iVC1, iVC2
};

class ViscosityCorrelation {
public:
	//! Default constructor
	ViscosityCorrelation();

	//! Constructor with constants
	ViscosityCorrelation(dvec consts, ViscosityCorrelationForm form);

	//! Copy constuctor
	ViscosityCorrelation(const ViscosityCorrelation &rhs);

	//! Destructor
	virtual ~ViscosityCorrelation();

	//! Set the form type
	void SetCorrelationForm(ViscosityCorrelationForm form);

	//! Return the viscosity (Pa.s)
	double Viscosity(double T, double P) const;

private:

	//! The empirical constants for the correlation
	dvec mConstants;

	//! The form type of this correlation
	ViscosityCorrelationForm mForm;
};

} /* namespace Transport */
} /* namespace Popbal */
#endif /* VISCOSITYCORRELATION_H_ */
