#ifndef color_hsv_trait_bound_float
#define color_hsv_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsv_float >
      : public ::color::_internal::hsv::bound::scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::hsv_double >
      : public ::color::_internal::hsv::bound::scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::hsv_ldouble >
      : public ::color::_internal::hsv::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif
