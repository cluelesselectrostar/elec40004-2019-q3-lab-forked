#ifndef rover_factory_hpp
#define rover_factory_hpp

#include "rover.hpp"
//  ``#include <string>

/* Create an instance of Rover, using the given string to select the concrete type.
   The type of instance will depend on the string:
   - "svg" : returns a new instance of RoverSVGWriter
   - "action" : returns a new instance of RoverActionWriter
*/

Rover *rover_factory(const string &type);


#endif
