#ifndef color_yiq_make_gray50
#define color_yiq_make_gray50

// ::color::make::gray50( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.5, 0.5, 0.5 } ) 

      inline
      void gray50( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x3;
       }

      inline
      void gray50( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf;
       }

      inline
      void gray50( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff00007fu;
       }

      inline
      void gray50( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff000000007ffful;
       }

      inline
      void gray50( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.5, 0, 1.38778e-17 } );
       }

      inline
      void gray50( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.5, 0, 1.38778e-17 } );
       }

      inline
      void gray50( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.5, 0, 1.38778e-17 } );
       }

    }
  }

#endif

