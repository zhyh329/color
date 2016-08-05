#ifndef color_YCgCo_trait_container_uint16
#define color_YCgCo_trait_container_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::YCgCo_uint16 >
      : public ::color::_internal::utility::container::array< std::uint16_t, 3 >
      {
      };

   }
 }

#endif
