#ifndef BHV_BASIC_PASS_H
#define BHV_BASIC_PASS_H

#include <rcsc/geom/vector_2d.h>
#include <rcsc/player/soccer_action.h>
#include <rcsc/player/player_agent.h>

/**
 * @todo write docs
 */
class BHV_Basic_pass : public rcsc::SoccerBehavior
{
    public:
    BHV_Basic_pass()
      { }
    bool execute(rcsc::PlayerAgent * agent);
};

#endif 
