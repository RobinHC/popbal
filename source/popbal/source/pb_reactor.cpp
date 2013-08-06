#include "pb_reactor.h"

namespace Popbal {
Reactor::Reactor(void)
{
}


Reactor::~Reactor(void)
{
    delete mParticles;
    delete mBackground;
}

} // Popbal