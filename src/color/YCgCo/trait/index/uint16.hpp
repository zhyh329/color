#ifndef color_YCgCo_trait_index_uint16
#define color_YCgCo_trait_index_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct index< ::color::category::YCgCo_uint16 >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif
