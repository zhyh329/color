#ifndef color_YCgCo_make_tomato
#define color_YCgCo_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.388235, 0.278431 } ) - rgb(255,99,71) - #FF6347

     template< typename tag_name >
      inline
      void tomato( ::color::model< ::color::category::YCgCo< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCgCo< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCgCo< double >      right_type;

        static left_type local( right_type( { 0.51372549, -0.625490196, -0.139215686 } ) );

        color_parameter = local;
       }

    }
  }

#endif
