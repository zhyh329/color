#ifndef color_gray_get_blue
#define color_gray_get_blue

// ::color::get::blue( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/gray.hpp"
#include "../../rgb/trait/component.hpp"
#include "../../rgb/trait/index.hpp"

#include "../category.hpp"

#include "../../_internal/reformat.hpp"
#include "../../generic/trait/scalar.hpp"
#include "../../generic/trait/component.hpp"

 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::gray<tag_name> >::akin_type >::return_type
      blue( ::color::model< ::color::category::gray<tag_name> > const& color_parameter )
       {
        typedef ::color::category::gray<tag_name>  category_type;
        typedef typename ::color::akin::rgb<category_type>::akin_type                   akin_type;

        enum { blue_p  = ::color::place::_internal::blue<akin_type>::position_enum };

        typedef ::color::_internal::reformat< akin_type, category_type >  reformat_type;

        return reformat_type::template process<blue_p,0>( color_parameter.template get<0>()  );
       }

    }
  }

#endif
