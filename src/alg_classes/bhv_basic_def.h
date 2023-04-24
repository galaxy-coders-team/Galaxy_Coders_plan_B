#ifndef S_H
#define S_H

#include <rcsc/geom/vector_2d.h>
#include <rcsc/player/soccer_action.h>
#include <rcsc/player/player_agent.h>

/**
 * @todo write docs
 */
class BHV_Basic_def : public rcsc::SoccerBehavior
{
    public:
    BHV_Basic_def()
      { }
    bool execute(rcsc::PlayerAgent * agent);
};

#endif // S_H
