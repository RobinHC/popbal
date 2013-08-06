#pragma once
#include "pb_consts.h"
#include "pb_particle_model.h"

namespace Popbal {
class Particles
{
public:
    //! Construct using the number of equations and the particle model
    Particles(size_t num_odes, ParticleModel &model);
    ~Particles(void);

protected:
    //! The vector of particle concentrations
    dvec mParticles;

    //! The particle model to interpret the particles data
    ParticleModel* mModel;

private:
    //! Default constructor is not meaningful?
    Particles(void);
};

} // Popbal
