#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::rgb<float>          r; //!< Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double
  color::gray<std::uint32_t> g; //!< Instead of uint32_t you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double

  // Do some initialization
  color::make::red( r );

  // Here is how to convert from one to another
  g = r;

  return EXIT_SUCCESS;
 }

