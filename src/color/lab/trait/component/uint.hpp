#ifndef color_lab_trait_component_uint
#define color_lab_trait_component_uint

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::lab_uint8  >
      : public ::color::_internal::utility::component::array< std::uint8_t, unsigned >
      {
      };

    template< >
     struct component< ::color::category::lab_uint16 >
      : public ::color::_internal::utility::component::array< std::uint16_t, unsigned >
      {
      };

    template< >
     struct component< ::color::category::lab_uint32 >
      : public ::color::_internal::utility::component::array< std::uint32_t, unsigned >
      {
      };

    template< >
     struct component< ::color::category::lab_uint64 >
      : public ::color::_internal::utility::component::array< std::uint64_t, unsigned >
      {
      };

   }
 }

#endif