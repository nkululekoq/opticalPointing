// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "cxcore_h_wrapper.hpp"
#include "cxcore_h_ext_classes_2.pypp.hpp"

namespace bp = boost::python;

struct IndexFactory_wrapper : cv::flann::IndexFactory, bp::wrapper< cv::flann::IndexFactory > {

    IndexFactory_wrapper()
    : cv::flann::IndexFactory()
      , bp::wrapper< cv::flann::IndexFactory >(){
        // null constructor
        
    }

    virtual ::flann::Index * createIndex( ::cv::Mat const & dataset ) const {
        bp::override func_createIndex = this->get_override( "createIndex" );
        return func_createIndex( boost::ref(dataset) );
    }

};

struct IndexParams_wrapper : cv::flann::IndexParams, bp::wrapper< cv::flann::IndexParams > {

    IndexParams_wrapper( )
    : cv::flann::IndexParams( )
      , bp::wrapper< cv::flann::IndexParams >(){
        // null constructor
    
    }

    virtual ::flann::Index * createIndex( ::cv::Mat const & dataset ) const {
        bp::override func_createIndex = this->get_override( "createIndex" );
        return func_createIndex( boost::ref(dataset) );
    }

};

struct AutotunedIndexParams_wrapper : cv::flann::AutotunedIndexParams, bp::wrapper< cv::flann::AutotunedIndexParams > {

    AutotunedIndexParams_wrapper(cv::flann::AutotunedIndexParams const & arg )
    : cv::flann::AutotunedIndexParams( arg )
      , bp::wrapper< cv::flann::AutotunedIndexParams >(){
        // copy constructor
        
    }

    AutotunedIndexParams_wrapper(float target_precision_=9.00000000000000022204460492503130808472633361816e-1, float build_weight_=1.0000000000000000208166817117216851329430937767e-2, float memory_weight_=0, float sample_fraction_=1.00000000000000005551115123125782702118158340454e-1 )
    : cv::flann::AutotunedIndexParams( target_precision_, build_weight_, memory_weight_, sample_fraction_ )
      , bp::wrapper< cv::flann::AutotunedIndexParams >(){
        // constructor
    
    }

    virtual ::flann::Index * createIndex( ::cv::Mat const & dataset ) const  {
        if( bp::override func_createIndex = this->get_override( "createIndex" ) )
            return func_createIndex( boost::ref(dataset) );
        else{
            return this->cv::flann::AutotunedIndexParams::createIndex( boost::ref(dataset) );
        }
    }
    
    ::flann::Index * default_createIndex( ::cv::Mat const & dataset ) const  {
        return cv::flann::AutotunedIndexParams::createIndex( boost::ref(dataset) );
    }

};

struct CompositeIndexParams_wrapper : cv::flann::CompositeIndexParams, bp::wrapper< cv::flann::CompositeIndexParams > {

    CompositeIndexParams_wrapper(cv::flann::CompositeIndexParams const & arg )
    : cv::flann::CompositeIndexParams( arg )
      , bp::wrapper< cv::flann::CompositeIndexParams >(){
        // copy constructor
        
    }

    CompositeIndexParams_wrapper(int trees_=4, int branching_=32, int iterations_=11, ::cv::flann::flann_centers_init_t centers_init_=::cv::flann::CENTERS_RANDOM, float cb_index_=2.00000000000000011102230246251565404236316680908e-1 )
    : cv::flann::CompositeIndexParams( trees_, branching_, iterations_, centers_init_, cb_index_ )
      , bp::wrapper< cv::flann::CompositeIndexParams >(){
        // constructor
    
    }

    virtual ::flann::Index * createIndex( ::cv::Mat const & dataset ) const  {
        if( bp::override func_createIndex = this->get_override( "createIndex" ) )
            return func_createIndex( boost::ref(dataset) );
        else{
            return this->cv::flann::CompositeIndexParams::createIndex( boost::ref(dataset) );
        }
    }
    
    ::flann::Index * default_createIndex( ::cv::Mat const & dataset ) const  {
        return cv::flann::CompositeIndexParams::createIndex( boost::ref(dataset) );
    }

};

static boost::python::tuple knnSearch_b27556db8034853ef4327f12b2570dc5( ::cv::flann::Index & inst, ::std::vector< float > const & queries, int knn, ::cv::flann::SearchParams const & params ){
    std::vector<int> indices2;
    std::vector<float> dists2;
    inst.knnSearch(queries, indices2, dists2, knn, params);
    return bp::make_tuple( indices2, dists2 );
}

static boost::python::tuple radiusSearch_9595058c6922b247b15bed6a4e25038c( ::cv::flann::Index & inst, ::std::vector< float > const & query, float radius, ::cv::flann::SearchParams const & params ){
    std::vector<int> indices2;
    std::vector<float> dists2;
    int result = inst.radiusSearch(query, indices2, dists2, radius, params);
    return bp::make_tuple( result, indices2, dists2 );
}

void register_classes_2(){

    bp::class_< IndexFactory_wrapper, boost::noncopyable >( "IndexFactory" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::flann::IndexFactory >() )    
        .def( 
            "createIndex"
            , bp::pure_virtual( (::flann::Index * ( cv::flann::IndexFactory::* )( ::cv::Mat const & ) const)(&::cv::flann::IndexFactory::createIndex) )
            , ( bp::arg("dataset") )
            , bp::return_value_policy< bp::reference_existing_object >() );

    bp::class_< IndexParams_wrapper, bp::bases< cv::flann::IndexFactory >, boost::noncopyable >( "IndexParams", bp::no_init )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::flann::IndexParams >() )    
        .def( bp::init< >() )    
        .def( 
            "createIndex"
            , bp::pure_virtual( (::flann::Index * ( cv::flann::IndexFactory::* )( ::cv::Mat const & ) const)(&::cv::flann::IndexFactory::createIndex) )
            , ( bp::arg("dataset") )
            , bp::return_value_policy< bp::reference_existing_object >() );

    { //::cv::flann::AutotunedIndexParams
        typedef bp::class_< AutotunedIndexParams_wrapper, bp::bases< cv::flann::IndexParams > > AutotunedIndexParams_exposer_t;
        AutotunedIndexParams_exposer_t AutotunedIndexParams_exposer = AutotunedIndexParams_exposer_t( "AutotunedIndexParams", bp::init< bp::optional< float, float, float, float > >(( bp::arg("target_precision_")=9.00000000000000022204460492503130808472633361816e-1, bp::arg("build_weight_")=1.0000000000000000208166817117216851329430937767e-2, bp::arg("memory_weight_")=0, bp::arg("sample_fraction_")=1.00000000000000005551115123125782702118158340454e-1 )) );
        bp::scope AutotunedIndexParams_scope( AutotunedIndexParams_exposer );
        AutotunedIndexParams_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::flann::AutotunedIndexParams >() );
        bp::implicitly_convertible< float, cv::flann::AutotunedIndexParams >();
        { //::cv::flann::AutotunedIndexParams::createIndex
        
            typedef ::flann::Index * ( ::cv::flann::AutotunedIndexParams::*createIndex_function_type )( ::cv::Mat const & ) const;
            typedef ::flann::Index * ( AutotunedIndexParams_wrapper::*default_createIndex_function_type )( ::cv::Mat const & ) const;
            
            AutotunedIndexParams_exposer.def( 
                "createIndex"
                , createIndex_function_type(&::cv::flann::AutotunedIndexParams::createIndex)
                , default_createIndex_function_type(&AutotunedIndexParams_wrapper::default_createIndex)
                , ( bp::arg("dataset") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        AutotunedIndexParams_exposer.def_readwrite( "build_weight", &cv::flann::AutotunedIndexParams::build_weight );
        AutotunedIndexParams_exposer.def_readwrite( "memory_weight", &cv::flann::AutotunedIndexParams::memory_weight );
        AutotunedIndexParams_exposer.def_readwrite( "sample_fraction", &cv::flann::AutotunedIndexParams::sample_fraction );
        AutotunedIndexParams_exposer.def_readwrite( "target_precision", &cv::flann::AutotunedIndexParams::target_precision );
    }

    { //::cv::flann::CompositeIndexParams
        typedef bp::class_< CompositeIndexParams_wrapper, bp::bases< cv::flann::IndexParams > > CompositeIndexParams_exposer_t;
        CompositeIndexParams_exposer_t CompositeIndexParams_exposer = CompositeIndexParams_exposer_t( "CompositeIndexParams", bp::init< bp::optional< int, int, int, cv::flann::flann_centers_init_t, float > >(( bp::arg("trees_")=(int)(4), bp::arg("branching_")=(int)(32), bp::arg("iterations_")=(int)(11), bp::arg("centers_init_")=::cv::flann::CENTERS_RANDOM, bp::arg("cb_index_")=2.00000000000000011102230246251565404236316680908e-1 )) );
        bp::scope CompositeIndexParams_scope( CompositeIndexParams_exposer );
        CompositeIndexParams_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::flann::CompositeIndexParams >() );
        bp::implicitly_convertible< int, cv::flann::CompositeIndexParams >();
        { //::cv::flann::CompositeIndexParams::createIndex
        
            typedef ::flann::Index * ( ::cv::flann::CompositeIndexParams::*createIndex_function_type )( ::cv::Mat const & ) const;
            typedef ::flann::Index * ( CompositeIndexParams_wrapper::*default_createIndex_function_type )( ::cv::Mat const & ) const;
            
            CompositeIndexParams_exposer.def( 
                "createIndex"
                , createIndex_function_type(&::cv::flann::CompositeIndexParams::createIndex)
                , default_createIndex_function_type(&CompositeIndexParams_wrapper::default_createIndex)
                , ( bp::arg("dataset") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        CompositeIndexParams_exposer.def_readwrite( "branching", &cv::flann::CompositeIndexParams::branching );
        CompositeIndexParams_exposer.def_readwrite( "cb_index", &cv::flann::CompositeIndexParams::cb_index );
        CompositeIndexParams_exposer.def_readwrite( "centers_init", &cv::flann::CompositeIndexParams::centers_init );
        CompositeIndexParams_exposer.def_readwrite( "iterations", &cv::flann::CompositeIndexParams::iterations );
        CompositeIndexParams_exposer.def_readwrite( "trees", &cv::flann::CompositeIndexParams::trees );
    }

    bp::class_< cv::flann::Index >( "Index", bp::init< cv::Mat const &, cv::flann::IndexParams const & >(( bp::arg("features"), bp::arg("params") )) )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::flann::Index >() )    
        .def( 
            "knnSearch"
            , (boost::python::tuple (*)( cv::flann::Index &,std::vector<float> const &,int,cv::flann::SearchParams const & ))( &knnSearch_b27556db8034853ef4327f12b2570dc5 )
            , ( bp::arg("inst"), bp::arg("queries"), bp::arg("knn"), bp::arg("params") )
            , "\nArgument 'indices':"\
    "\n    C++ type: ::std::vector< int > &"\
    "\n    Python type: vector_int"\
    "\n    Output argument: omitted from input and returned as output."\
    "\nArgument 'dists':"\
    "\n    C++ type: ::std::vector< float > &"\
    "\n    Python type: vector_float32"\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    (indices, dists)" )    
        .def( 
            "knnSearch"
            , (void ( cv::flann::Index::* )( ::cv::Mat const &,::cv::Mat &,::cv::Mat &,int,::cv::flann::SearchParams const & ) )( &::cv::flann::Index::knnSearch )
            , ( bp::arg("queries"), bp::arg("indices"), bp::arg("dists"), bp::arg("knn"), bp::arg("params") ) )    
        .def( 
            "radiusSearch"
            , (boost::python::tuple (*)( cv::flann::Index &,std::vector<float> const &,float,cv::flann::SearchParams const & ))( &radiusSearch_9595058c6922b247b15bed6a4e25038c )
            , ( bp::arg("inst"), bp::arg("query"), bp::arg("radius"), bp::arg("params") )
            , "\nArgument 'indices':"\
    "\n    C++ type: ::std::vector< int > &"\
    "\n    Python type: vector_int"\
    "\n    Output argument: omitted from input and returned as output."\
    "\nArgument 'dists':"\
    "\n    C++ type: ::std::vector< float > &"\
    "\n    Python type: vector_float32"\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    ((int), indices, dists)" )    
        .def( 
            "radiusSearch"
            , (int ( cv::flann::Index::* )( ::cv::Mat const &,::cv::Mat &,::cv::Mat &,float,::cv::flann::SearchParams const & ) )( &::cv::flann::Index::radiusSearch )
            , ( bp::arg("query"), bp::arg("indices"), bp::arg("dists"), bp::arg("radius"), bp::arg("params") ) )    
        .def( 
            "save"
            , (void ( cv::flann::Index::* )( ::std::string ) )( &::cv::flann::Index::save )
            , ( bp::arg("filename") ) )    
        .def( 
            "size"
            , (int ( cv::flann::Index::* )(  ) const)( &::cv::flann::Index::size ) )    
        .def( 
            "veclen"
            , (int ( cv::flann::Index::* )(  ) const)( &::cv::flann::Index::veclen ) );

}
