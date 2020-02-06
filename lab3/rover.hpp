#ifndef rover_hpp
#define rover_hpp

#include "vector2d.hpp"

class Rover
{
private:
    float m_time;
    vector2d m_position;
    float m_angle;
    float m_speed;
    bool m_pen_down;
public:
    //Rover(); // Remove the default constructor, as the concrete inheritorss
    // will provide any constructor functionality
    virtual ~Rover()
      {}

    ////////////////////////////////////////
    // Find out the state of the rover.

    // Gets the state of the rover at the current point in time
    virtual float get_time() const = 0;
    virtual vector2d get_position() const = 0;

    virtual float get_speed() const = 0;
    virtual float get_angle() const = 0;
    virtual bool get_pen_down() const = 0;

    ////////////////////////////////////////
    // Modify the rover at the current time point

    // Set the speed, measured in unit distance per second
    virtual void set_speed(float speed) = 0;

    // An angle in radians (will be reduced modulo 2pi)
    virtual void set_angle(float angle) = 0;

    // Set to true to leave a trail behind, or false to move without drawing
    virtual void set_pen_down(bool pen_down) = 0;

    ///////////////////////////////////////////
    // Manage state and time

    // Advance the rover forwards in time by `dt`, i.e. move to `get_time()+dt`
    // The rover will move at the current speed and angle for that time period.
    virtual void advance_time(float dt) = 0;
};

#endif
