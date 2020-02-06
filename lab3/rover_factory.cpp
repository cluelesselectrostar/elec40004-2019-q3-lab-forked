#include "rover_factory.hpp"
#include "rover_action_writer.hpp"
#include "rover_svg_writer.hpp"
#include <cstdlib>
//#include <string>
using namespace std;

Rover *rover_factory(const string &type) {
  if (type == "action") {
    return new RoverActionWriter();
  } else if (type == "svg") {
    return new RoverSVGWriter();
  } else {
    cerr << "What the hell?";
    exit(1);
  }
};
