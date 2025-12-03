#include "bno08x_driver/geom.hpp"
#include <cmath> // Required for M_PI

double degreesToRadians(double degrees) {
  return degrees * M_PI / 180.0;
}

