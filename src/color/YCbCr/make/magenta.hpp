#ifndef color_YCbCr_make_magenta
#define color_YCbCr_make_magenta

// ::color::make::magenta( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 1 } ) - rgb(255,0,255) - #FF00FF

     template< typename tag_name >
      inline
      void magenta( ::color::model< ::color::category::YCbCr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCbCr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCbCr< double >      right_type;

        static left_type local( right_type( { 0.413189, 0.331263, 0.418688 } ) );

        color_parameter = local;
       }

    }
  }

#endif
