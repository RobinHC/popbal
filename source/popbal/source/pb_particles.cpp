#include "pb_particles.h"

namespace Popbal {

// Default constructor
Particles::Particles(void): mParticles() {}

Particles::Particles(size_t num_odes, ParticleModel &model):
    mParticles(num_odes, 0.0),
    mModel(&model)
{}

Particles::~Particles(void)
{
}

}
