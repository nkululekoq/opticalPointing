// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "cxcore_hpp_vec_wrapper.hpp"
#include "opencv_headers.hpp"
#include "cxcore_hpp_vec_ext_classes_3.pypp.hpp"

namespace bp = boost::python;

static inline void vector_Vec4i_resize(::std::vector< cv::Vec<int, 4> > &inst, size_t num) { inst.resize(num); }

static inline void vector_Vec3i_resize(::std::vector< cv::Vec<int, 3> > &inst, size_t num) { inst.resize(num); }

static inline void vector_Vec2i_resize(::std::vector< cv::Vec<int, 2> > &inst, size_t num) { inst.resize(num); }

static inline void vector_Vec6f_resize(::std::vector< cv::Vec<float, 6> > &inst, size_t num) { inst.resize(num); }

static inline void vector_Vec4f_resize(::std::vector< cv::Vec<float, 4> > &inst, size_t num) { inst.resize(num); }

void register_classes_3(){

    { //::std::vector< cv::Vec<int, 4> >
        typedef bp::class_< std::vector< cv::Vec<int, 4> > > vector_Vec4i_exposer_t;
        vector_Vec4i_exposer_t vector_Vec4i_exposer = vector_Vec4i_exposer_t( "vector_Vec4i" );
        bp::scope vector_Vec4i_scope( vector_Vec4i_exposer );
        //WARNING: the next line of code will not compile, because "cv::Vec<int,4>" does not have operator== !
        vector_Vec4i_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::Vec<int, 4> > >() );
        vector_Vec4i_exposer.def("resize", &::vector_Vec4i_resize, ( bp::arg("num") ));
    }

    { //::std::vector< cv::Vec<int, 3> >
        typedef bp::class_< std::vector< cv::Vec<int, 3> > > vector_Vec3i_exposer_t;
        vector_Vec3i_exposer_t vector_Vec3i_exposer = vector_Vec3i_exposer_t( "vector_Vec3i" );
        bp::scope vector_Vec3i_scope( vector_Vec3i_exposer );
        //WARNING: the next line of code will not compile, because "cv::Vec<int,3>" does not have operator== !
        vector_Vec3i_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::Vec<int, 3> > >() );
        vector_Vec3i_exposer.def("resize", &::vector_Vec3i_resize, ( bp::arg("num") ));
    }

    { //::std::vector< cv::Vec<int, 2> >
        typedef bp::class_< std::vector< cv::Vec<int, 2> > > vector_Vec2i_exposer_t;
        vector_Vec2i_exposer_t vector_Vec2i_exposer = vector_Vec2i_exposer_t( "vector_Vec2i" );
        bp::scope vector_Vec2i_scope( vector_Vec2i_exposer );
        //WARNING: the next line of code will not compile, because "cv::Vec<int,2>" does not have operator== !
        vector_Vec2i_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::Vec<int, 2> > >() );
        vector_Vec2i_exposer.def("resize", &::vector_Vec2i_resize, ( bp::arg("num") ));
    }

    { //::std::vector< cv::Vec<float, 6> >
        typedef bp::class_< std::vector< cv::Vec<float, 6> > > vector_Vec6f_exposer_t;
        vector_Vec6f_exposer_t vector_Vec6f_exposer = vector_Vec6f_exposer_t( "vector_Vec6f" );
        bp::scope vector_Vec6f_scope( vector_Vec6f_exposer );
        //WARNING: the next line of code will not compile, because "cv::Vec<float,6>" does not have operator== !
        vector_Vec6f_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::Vec<float, 6> > >() );
        vector_Vec6f_exposer.def("resize", &::vector_Vec6f_resize, ( bp::arg("num") ));
    }

    { //::std::vector< cv::Vec<float, 4> >
        typedef bp::class_< std::vector< cv::Vec<float, 4> > > vector_Vec4f_exposer_t;
        vector_Vec4f_exposer_t vector_Vec4f_exposer = vector_Vec4f_exposer_t( "vector_Vec4f" );
        bp::scope vector_Vec4f_scope( vector_Vec4f_exposer );
        //WARNING: the next line of code will not compile, because "cv::Vec<float,4>" does not have operator== !
        vector_Vec4f_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::Vec<float, 4> > >() );
        vector_Vec4f_exposer.def("resize", &::vector_Vec4f_resize, ( bp::arg("num") ));
    }

}
