#ifndef color_YPbPr_make_indigo
#define color_YPbPr_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.294118, 0, 0.509804 } ) - rgb(75,0,130) - #4B0082

     template< typename tag_name >
      inline
      void indigo( ::color::model< ::color::category::YPbPr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.146189902, 0.705273431, 0.605605647 } ) );

        color_parameter = local;
       }

    }
  }

#endif