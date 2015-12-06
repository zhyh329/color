#ifndef  color_generic_operation_scale_123
#define color_generic_operation_scale_123
// color::operation::scale::accumulate
// color::operation::scale::full

 namespace color
  {
   namespace operation
    {
     namespace _internal
      {
       template< typename category_name, typename scalar_name >
        struct scale
         {
          public:
            typedef category_name  category_type;
            typedef scalar_name    scalar_type;
            typedef scalar_type  const&  scalar_const_input_type;

            typedef color::_internal::trait< category_type >   trait_type;

            typedef typename color::_internal::model<category_type>  model_type;
            typedef model_type &  model_input_type;
            typedef model_type const&  model_const_input_type;

            typedef typename trait_type::component_type component_type;
            typedef typename trait_type::index_type  index_type;

            static void accumulate( model_input_type  result, scalar_const_input_type const& scalar )
             {
              for( index_type index = 0; index < trait_type::size(); index ++ )
               {
                result.set( index, result.get( index ) * scalar );
               }
             }

            static void full(  model_input_type  result, scalar_const_input_type scalar, model_const_input_type right )
             {
              for( index_type index = 0; index < trait_type::size(); index ++ )
               {
                result.set( index, scalar * right.get( index ) );
               }
             }

         };
      }

     namespace scale
      {

       template< typename category_name, typename scalar_name >
        void accumulate
         (
           color::_internal::model<category_name>      & result
          ,scalar_name                            const& scalar
         )
         {
          color::operation::_internal::scale<category_name,scalar_name>::accumulate( result, scalar );
         }

       template< typename category_name, typename scalar_name >
        void full
         (
           color::_internal::model<category_name>      & result
          ,scalar_name                            const& scalar
          ,color::_internal::model<category_name> const& right
         )
         {
          color::operation::_internal::scale<category_name,scalar_name>::full( result, scalar, right );
         }

      }

    }
  }

#endif