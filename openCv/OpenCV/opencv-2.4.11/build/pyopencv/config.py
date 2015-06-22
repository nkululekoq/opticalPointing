from setuptools import Extension, Library
import os.path as op
from glob import glob

PYOPENCV_VERSION_MAJOR = "2.1.0.wr1" 
PYOPENCV_VERSION_MINOR = "2"
PYOPENCV_VERSION_PATCH = "0"
PYOPENCV_VERSION = "2.1.0.wr1.2.0"


CXX_FLAGS = '-O3 -DNDEBUG  -O3 -ffast-math -DNDEBUG '.split()
LINK_FLAGS = '  '.split()

include_dirs = ["/usr/include/python2.6", "Boost_INCLUDE_DIR-NOTFOUND", "/home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/build/pyopencv/package", "/home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/build/pyopencv/package/extras", "/home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/build/pyopencv/package/extras/core", "/home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/build/pyopencv/package/extras/sdopencv", "/usr/lib/python2.6/dist-packages/numpy/core/include/numpy", ]
library_dirs = []
libraries = ["Boost_PYTHON_LIBRARY_RELEASE-NOTFOUND", ]
    
def revise_lib(lib):
    path, lib = op.split(op.normpath(lib))
    if not path=='':
        x = lib.rfind('.')
        if x >= 0: lib = lib[:x]
        if lib[:3]=='lib' : lib = lib[3:]
    return lib
    
libraries = [revise_lib(lib) for lib in libraries]

pyopencv_extras_srcs = glob(op.join('package', 'extras', 'core', '*.cpp'))+glob(op.join('package', 'extras', 'sdopencv', '*.cpp'))

pyopencv_extras = Library('pyopencv.pyopencv_extras', 
    sources=pyopencv_extras_srcs, include_dirs=include_dirs,
    libraries=libraries, library_dirs=library_dirs,
    extra_compile_args=CXX_FLAGS, 
extra_link_args=LINK_FLAGS)
cxtypes_h_ext = Extension('pyopencv.cxtypes_h_ext',
    sources=glob(op.join('package', 'cxtypes_h_ext', '*.cpp')), 
    include_dirs=include_dirs+[op.join('package', 'cxtypes_h_ext')],
    library_dirs=library_dirs, libraries=libraries+['pyopencv_extras'],
    extra_compile_args=CXX_FLAGS, extra_link_args=LINK_FLAGS)

cxcore_h_ext = Extension('pyopencv.cxcore_h_ext',
    sources=glob(op.join('package', 'cxcore_h_ext', '*.cpp')), 
    include_dirs=include_dirs+[op.join('package', 'cxcore_h_ext')],
    library_dirs=library_dirs, libraries=libraries+['pyopencv_extras'],
    extra_compile_args=CXX_FLAGS, extra_link_args=LINK_FLAGS)

cxcore_hpp_vec_ext = Extension('pyopencv.cxcore_hpp_vec_ext',
    sources=glob(op.join('package', 'cxcore_hpp_vec_ext', '*.cpp')), 
    include_dirs=include_dirs+[op.join('package', 'cxcore_hpp_vec_ext')],
    library_dirs=library_dirs, libraries=libraries+['pyopencv_extras'],
    extra_compile_args=CXX_FLAGS, extra_link_args=LINK_FLAGS)

cxcore_hpp_point_ext = Extension('pyopencv.cxcore_hpp_point_ext',
    sources=glob(op.join('package', 'cxcore_hpp_point_ext', '*.cpp')), 
    include_dirs=include_dirs+[op.join('package', 'cxcore_hpp_point_ext')],
    library_dirs=library_dirs, libraries=libraries+['pyopencv_extras'],
    extra_compile_args=CXX_FLAGS, extra_link_args=LINK_FLAGS)

cxcore_hpp_ext = Extension('pyopencv.cxcore_hpp_ext',
    sources=glob(op.join('package', 'cxcore_hpp_ext', '*.cpp')), 
    include_dirs=include_dirs+[op.join('package', 'cxcore_hpp_ext')],
    library_dirs=library_dirs, libraries=libraries+['pyopencv_extras'],
    extra_compile_args=CXX_FLAGS, extra_link_args=LINK_FLAGS)

cv_h_ext = Extension('pyopencv.cv_h_ext',
    sources=glob(op.join('package', 'cv_h_ext', '*.cpp')), 
    include_dirs=include_dirs+[op.join('package', 'cv_h_ext')],
    library_dirs=library_dirs, libraries=libraries+['pyopencv_extras'],
    extra_compile_args=CXX_FLAGS, extra_link_args=LINK_FLAGS)

cv_hpp_ext = Extension('pyopencv.cv_hpp_ext',
    sources=glob(op.join('package', 'cv_hpp_ext', '*.cpp')), 
    include_dirs=include_dirs+[op.join('package', 'cv_hpp_ext')],
    library_dirs=library_dirs, libraries=libraries+['pyopencv_extras'],
    extra_compile_args=CXX_FLAGS, extra_link_args=LINK_FLAGS)

cvaux_ext = Extension('pyopencv.cvaux_ext',
    sources=glob(op.join('package', 'cvaux_ext', '*.cpp')), 
    include_dirs=include_dirs+[op.join('package', 'cvaux_ext')],
    library_dirs=library_dirs, libraries=libraries+['pyopencv_extras'],
    extra_compile_args=CXX_FLAGS, extra_link_args=LINK_FLAGS)

highgui_ext = Extension('pyopencv.highgui_ext',
    sources=glob(op.join('package', 'highgui_ext', '*.cpp')), 
    include_dirs=include_dirs+[op.join('package', 'highgui_ext')],
    library_dirs=library_dirs, libraries=libraries+['pyopencv_extras'],
    extra_compile_args=CXX_FLAGS, extra_link_args=LINK_FLAGS)

ml_ext = Extension('pyopencv.ml_ext',
    sources=glob(op.join('package', 'ml_ext', '*.cpp')), 
    include_dirs=include_dirs+[op.join('package', 'ml_ext')],
    library_dirs=library_dirs, libraries=libraries+['pyopencv_extras'],
    extra_compile_args=CXX_FLAGS, extra_link_args=LINK_FLAGS)

sdopencv_ext = Extension('pyopencv.sdopencv_ext',
    sources=glob(op.join('package', 'sdopencv_ext', '*.cpp')), 
    include_dirs=include_dirs+[op.join('package', 'sdopencv_ext')],
    library_dirs=library_dirs, libraries=libraries+['pyopencv_extras'],
    extra_compile_args=CXX_FLAGS, extra_link_args=LINK_FLAGS)

extension_list = [pyopencv_extras, cxtypes_h_ext, cxcore_h_ext, cxcore_hpp_vec_ext, cxcore_hpp_point_ext, cxcore_hpp_ext, cv_h_ext, cv_hpp_ext, cvaux_ext, highgui_ext, ml_ext, sdopencv_ext, ]
