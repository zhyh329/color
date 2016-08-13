#ifndef color_hsi_get_blue
#define color_hsi_get_blue

// ::color::get::blue( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/hsi.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"

 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsi<tag_name> >::akin_type >::return_type
      blue( ::color::model< ::color::category::hsi<tag_name> > const& color_parameter )
       {
        typedef ::color::category::hsi<tag_name> category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type>   normalize_type;

        enum
         {
           red_p        = ::color::place::_internal::red<akin_type>::position_enum
          ,green_p      = ::color::place::_internal::green<akin_type>::position_enum
          ,blue_p       = ::color::place::_internal::blue<akin_type>::position_enum
         };

        enum
         { 
           hue_p        = ::color::place::_internal::hue<category_type>::position_enum
          ,saturation_p = ::color::place::_internal::saturation<category_type>::position_enum
          ,intensity_p   = ::color::place::_internal::intensity<category_type>::position_enum
         };

         
        scalar_type h = normalize_type::template process<hue_p       >( color_parameter.template get<hue_p       >() );
        scalar_type s = normalize_type::template process<saturation_p>( color_parameter.template get<saturation_p>() );
        scalar_type i = normalize_type::template process<intensity_p  >( color_parameter.template get<intensity_p >() );

        // blue
        return diverse_type::template process<blue_p>( b );
       }

    }
  }

#endif