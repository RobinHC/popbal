#pragma once

#include "pb_particles.h"
#include "pb_background_static.h"

namespace Popbal {
class Reactor
{
public:
    Reactor(void);
    ~Reactor(void);

protected:
    //! A pointer to the particles state space
    Particles* mParticles;

    //! A pointer to the background phase of the reactor
    Background* mBackground;
};

} // Popbal
