#ifndef color_hsv_make_plum
#define color_hsv_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.866667, 0.627451, 0.866667 } ) 

      inline
      void plum( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x8d;
       }

      inline
      void plum( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xd919;
       }

      inline
      void plum( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffdd46d4u;
       }

      inline
      void plum( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffdddd46a8d554ul;
       }

      inline
      void plum( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.833333, 0.276018, 0.866667 } );
       }

      inline
      void plum( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.833333, 0.276018, 0.866667 } );
       }

      inline
      void plum( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.833333, 0.276018, 0.866667 } );
       }

    }
  }

#endif