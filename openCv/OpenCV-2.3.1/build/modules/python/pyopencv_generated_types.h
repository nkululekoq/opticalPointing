
struct pyopencv_BackgroundSubtractor_t
{
    PyObject_HEAD
    cv::BackgroundSubtractor* v;
};

static PyTypeObject pyopencv_BackgroundSubtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".BackgroundSubtractor",
    sizeof(pyopencv_BackgroundSubtractor_t),
};

static void pyopencv_BackgroundSubtractor_dealloc(PyObject* self)
{
    delete ((pyopencv_BackgroundSubtractor_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_BackgroundSubtractorMOG_t
{
    PyObject_HEAD
    cv::BackgroundSubtractorMOG* v;
};

static PyTypeObject pyopencv_BackgroundSubtractorMOG_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".BackgroundSubtractorMOG",
    sizeof(pyopencv_BackgroundSubtractorMOG_t),
};

static void pyopencv_BackgroundSubtractorMOG_dealloc(PyObject* self)
{
    delete ((pyopencv_BackgroundSubtractorMOG_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_CascadeClassifier_t
{
    PyObject_HEAD
    cv::CascadeClassifier* v;
};

static PyTypeObject pyopencv_CascadeClassifier_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".CascadeClassifier",
    sizeof(pyopencv_CascadeClassifier_t),
};

static void pyopencv_CascadeClassifier_dealloc(PyObject* self)
{
    delete ((pyopencv_CascadeClassifier_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_CvANN_MLP_t
{
    PyObject_HEAD
    CvANN_MLP* v;
};

static PyTypeObject pyopencv_CvANN_MLP_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".ANN_MLP",
    sizeof(pyopencv_CvANN_MLP_t),
};

static void pyopencv_CvANN_MLP_dealloc(PyObject* self)
{
    delete ((pyopencv_CvANN_MLP_t*)self)->v;
    PyObject_Del(self);
}

static bool pyopencv_to(PyObject* src, CvANN_MLP_TrainParams& dst, const char* name="<unknown>");

struct pyopencv_CvBoost_t
{
    PyObject_HEAD
    CvBoost* v;
};

static PyTypeObject pyopencv_CvBoost_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".Boost",
    sizeof(pyopencv_CvBoost_t),
};

static void pyopencv_CvBoost_dealloc(PyObject* self)
{
    delete ((pyopencv_CvBoost_t*)self)->v;
    PyObject_Del(self);
}

static bool pyopencv_to(PyObject* src, CvBoostParams& dst, const char* name="<unknown>");

struct pyopencv_CvDTree_t
{
    PyObject_HEAD
    CvDTree* v;
};

static PyTypeObject pyopencv_CvDTree_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".DTree",
    sizeof(pyopencv_CvDTree_t),
};

static void pyopencv_CvDTree_dealloc(PyObject* self)
{
    delete ((pyopencv_CvDTree_t*)self)->v;
    PyObject_Del(self);
}

static bool pyopencv_to(PyObject* src, CvDTreeParams& dst, const char* name="<unknown>");

struct pyopencv_CvEM_t
{
    PyObject_HEAD
    CvEM* v;
};

static PyTypeObject pyopencv_CvEM_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".EM",
    sizeof(pyopencv_CvEM_t),
};

static void pyopencv_CvEM_dealloc(PyObject* self)
{
    delete ((pyopencv_CvEM_t*)self)->v;
    PyObject_Del(self);
}

static bool pyopencv_to(PyObject* src, CvEMParams& dst, const char* name="<unknown>");

struct pyopencv_CvERTrees_t
{
    PyObject_HEAD
    CvERTrees* v;
};

static PyTypeObject pyopencv_CvERTrees_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".ERTrees",
    sizeof(pyopencv_CvERTrees_t),
};

static void pyopencv_CvERTrees_dealloc(PyObject* self)
{
    delete ((pyopencv_CvERTrees_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_CvGBTrees_t
{
    PyObject_HEAD
    CvGBTrees* v;
};

static PyTypeObject pyopencv_CvGBTrees_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".GBTrees",
    sizeof(pyopencv_CvGBTrees_t),
};

static void pyopencv_CvGBTrees_dealloc(PyObject* self)
{
    delete ((pyopencv_CvGBTrees_t*)self)->v;
    PyObject_Del(self);
}

static bool pyopencv_to(PyObject* src, CvGBTreesParams& dst, const char* name="<unknown>");

struct pyopencv_CvKNearest_t
{
    PyObject_HEAD
    CvKNearest* v;
};

static PyTypeObject pyopencv_CvKNearest_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".KNearest",
    sizeof(pyopencv_CvKNearest_t),
};

static void pyopencv_CvKNearest_dealloc(PyObject* self)
{
    delete ((pyopencv_CvKNearest_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_CvNormalBayesClassifier_t
{
    PyObject_HEAD
    CvNormalBayesClassifier* v;
};

static PyTypeObject pyopencv_CvNormalBayesClassifier_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".NormalBayesClassifier",
    sizeof(pyopencv_CvNormalBayesClassifier_t),
};

static void pyopencv_CvNormalBayesClassifier_dealloc(PyObject* self)
{
    delete ((pyopencv_CvNormalBayesClassifier_t*)self)->v;
    PyObject_Del(self);
}

static bool pyopencv_to(PyObject* src, CvParamGrid& dst, const char* name="<unknown>");

static bool pyopencv_to(PyObject* src, CvRTParams& dst, const char* name="<unknown>");

struct pyopencv_CvRTrees_t
{
    PyObject_HEAD
    CvRTrees* v;
};

static PyTypeObject pyopencv_CvRTrees_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".RTrees",
    sizeof(pyopencv_CvRTrees_t),
};

static void pyopencv_CvRTrees_dealloc(PyObject* self)
{
    delete ((pyopencv_CvRTrees_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_CvSVM_t
{
    PyObject_HEAD
    CvSVM* v;
};

static PyTypeObject pyopencv_CvSVM_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".SVM",
    sizeof(pyopencv_CvSVM_t),
};

static void pyopencv_CvSVM_dealloc(PyObject* self)
{
    delete ((pyopencv_CvSVM_t*)self)->v;
    PyObject_Del(self);
}

static bool pyopencv_to(PyObject* src, CvSVMParams& dst, const char* name="<unknown>");

struct pyopencv_CvStatModel_t
{
    PyObject_HEAD
    CvStatModel* v;
};

static PyTypeObject pyopencv_CvStatModel_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".StatModel",
    sizeof(pyopencv_CvStatModel_t),
};

static void pyopencv_CvStatModel_dealloc(PyObject* self)
{
    delete ((pyopencv_CvStatModel_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_FileNode_t
{
    PyObject_HEAD
    cv::FileNode v;
};

static PyTypeObject pyopencv_FileNode_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".FileNode",
    sizeof(pyopencv_FileNode_t),
};

static void pyopencv_FileNode_dealloc(PyObject* self)
{
    PyObject_Del(self);
}

static PyObject* pyopencv_from(const cv::FileNode& r)
{
    pyopencv_FileNode_t *m = PyObject_NEW(pyopencv_FileNode_t, &pyopencv_FileNode_Type);
    m->v = r;
    return (PyObject*)m;
}

static bool pyopencv_to(PyObject* src, cv::FileNode& dst, const char* name="<unknown>")
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_FileNode_Type))
    {
        failmsg("Expected cv::FileNode for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_FileNode_t*)src)->v;
    return true;
}

struct pyopencv_FileStorage_t
{
    PyObject_HEAD
    cv::FileStorage* v;
};

static PyTypeObject pyopencv_FileStorage_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".FileStorage",
    sizeof(pyopencv_FileStorage_t),
};

static void pyopencv_FileStorage_dealloc(PyObject* self)
{
    delete ((pyopencv_FileStorage_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_HOGDescriptor_t
{
    PyObject_HEAD
    cv::HOGDescriptor* v;
};

static PyTypeObject pyopencv_HOGDescriptor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".HOGDescriptor",
    sizeof(pyopencv_HOGDescriptor_t),
};

static void pyopencv_HOGDescriptor_dealloc(PyObject* self)
{
    delete ((pyopencv_HOGDescriptor_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_KDTree_t
{
    PyObject_HEAD
    cv::KDTree* v;
};

static PyTypeObject pyopencv_KDTree_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".KDTree",
    sizeof(pyopencv_KDTree_t),
};

static void pyopencv_KDTree_dealloc(PyObject* self)
{
    delete ((pyopencv_KDTree_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_KalmanFilter_t
{
    PyObject_HEAD
    cv::KalmanFilter* v;
};

static PyTypeObject pyopencv_KalmanFilter_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".KalmanFilter",
    sizeof(pyopencv_KalmanFilter_t),
};

static void pyopencv_KalmanFilter_dealloc(PyObject* self)
{
    delete ((pyopencv_KalmanFilter_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_KeyPoint_t
{
    PyObject_HEAD
    cv::KeyPoint v;
};

static PyTypeObject pyopencv_KeyPoint_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".KeyPoint",
    sizeof(pyopencv_KeyPoint_t),
};

static void pyopencv_KeyPoint_dealloc(PyObject* self)
{
    PyObject_Del(self);
}

static PyObject* pyopencv_from(const cv::KeyPoint& r)
{
    pyopencv_KeyPoint_t *m = PyObject_NEW(pyopencv_KeyPoint_t, &pyopencv_KeyPoint_Type);
    m->v = r;
    return (PyObject*)m;
}

static bool pyopencv_to(PyObject* src, cv::KeyPoint& dst, const char* name="<unknown>")
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_KeyPoint_Type))
    {
        failmsg("Expected cv::KeyPoint for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_KeyPoint_t*)src)->v;
    return true;
}

struct pyopencv_MSER_t
{
    PyObject_HEAD
    cv::MSER* v;
};

static PyTypeObject pyopencv_MSER_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".MSER",
    sizeof(pyopencv_MSER_t),
};

static void pyopencv_MSER_dealloc(PyObject* self)
{
    delete ((pyopencv_MSER_t*)self)->v;
    PyObject_Del(self);
}

static bool pyopencv_to(PyObject* src, cv::Moments& dst, const char* name="<unknown>");

struct pyopencv_SURF_t
{
    PyObject_HEAD
    cv::SURF* v;
};

static PyTypeObject pyopencv_SURF_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".SURF",
    sizeof(pyopencv_SURF_t),
};

static void pyopencv_SURF_dealloc(PyObject* self)
{
    delete ((pyopencv_SURF_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_StarDetector_t
{
    PyObject_HEAD
    cv::StarDetector* v;
};

static PyTypeObject pyopencv_StarDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".StarDetector",
    sizeof(pyopencv_StarDetector_t),
};

static void pyopencv_StarDetector_dealloc(PyObject* self)
{
    delete ((pyopencv_StarDetector_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_StereoBM_t
{
    PyObject_HEAD
    cv::StereoBM* v;
};

static PyTypeObject pyopencv_StereoBM_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".StereoBM",
    sizeof(pyopencv_StereoBM_t),
};

static void pyopencv_StereoBM_dealloc(PyObject* self)
{
    delete ((pyopencv_StereoBM_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_StereoSGBM_t
{
    PyObject_HEAD
    cv::StereoSGBM* v;
};

static PyTypeObject pyopencv_StereoSGBM_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".StereoSGBM",
    sizeof(pyopencv_StereoSGBM_t),
};

static void pyopencv_StereoSGBM_dealloc(PyObject* self)
{
    delete ((pyopencv_StereoSGBM_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_Subdiv2D_t
{
    PyObject_HEAD
    cv::Subdiv2D* v;
};

static PyTypeObject pyopencv_Subdiv2D_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".Subdiv2D",
    sizeof(pyopencv_Subdiv2D_t),
};

static void pyopencv_Subdiv2D_dealloc(PyObject* self)
{
    delete ((pyopencv_Subdiv2D_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_VideoCapture_t
{
    PyObject_HEAD
    cv::VideoCapture* v;
};

static PyTypeObject pyopencv_VideoCapture_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".VideoCapture",
    sizeof(pyopencv_VideoCapture_t),
};

static void pyopencv_VideoCapture_dealloc(PyObject* self)
{
    delete ((pyopencv_VideoCapture_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_VideoWriter_t
{
    PyObject_HEAD
    cv::VideoWriter* v;
};

static PyTypeObject pyopencv_VideoWriter_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".VideoWriter",
    sizeof(pyopencv_VideoWriter_t),
};

static void pyopencv_VideoWriter_dealloc(PyObject* self)
{
    delete ((pyopencv_VideoWriter_t*)self)->v;
    PyObject_Del(self);
}

struct pyopencv_flann_Index_t
{
    PyObject_HEAD
    cv::flann::Index* v;
};

static PyTypeObject pyopencv_flann_Index_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    MODULESTR".flann_Index",
    sizeof(pyopencv_flann_Index_t),
};

static void pyopencv_flann_Index_dealloc(PyObject* self)
{
    delete ((pyopencv_flann_Index_t*)self)->v;
    PyObject_Del(self);
}

static PyObject* pyopencv_KDTree_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<KDTree %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_KDTree_get_labels(pyopencv_KDTree_t* p, void *closure)
{
    return pyopencv_from(p->v->labels);
}

static PyObject* pyopencv_KDTree_get_maxDepth(pyopencv_KDTree_t* p, void *closure)
{
    return pyopencv_from(p->v->maxDepth);
}

static PyObject* pyopencv_KDTree_get_normType(pyopencv_KDTree_t* p, void *closure)
{
    return pyopencv_from(p->v->normType);
}

static int pyopencv_KDTree_set_normType(pyopencv_KDTree_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the normType attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->normType) ? 0 : -1;
}

static PyObject* pyopencv_KDTree_get_points(pyopencv_KDTree_t* p, void *closure)
{
    return pyopencv_from(p->v->points);
}


static PyGetSetDef pyopencv_KDTree_getseters[] =
{
    {(char*)"labels", (getter)pyopencv_KDTree_get_labels, NULL, (char*)"labels", NULL},
    {(char*)"maxDepth", (getter)pyopencv_KDTree_get_maxDepth, NULL, (char*)"maxDepth", NULL},
    {(char*)"normType", (getter)pyopencv_KDTree_get_normType, (setter)pyopencv_KDTree_set_normType, (char*)"normType", NULL},
    {(char*)"points", (getter)pyopencv_KDTree_get_points, NULL, (char*)"points", NULL},
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_KDTree_build(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KDTree_Type))
        return failmsgp("Incorrect type of self (must be 'KDTree' or its derivative)");
    cv::KDTree* _self_ = ((pyopencv_KDTree_t*)self)->v;
    {
    PyObject* pyobj_points = NULL;
    Mat points;
    bool copyAndReorderPoints=false;

    const char* keywords[] = { "points", "copyAndReorderPoints", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|b:KDTree.build", (char**)keywords, &pyobj_points, &copyAndReorderPoints) &&
        pyopencv_to(pyobj_points, points) )
    {
        ERRWRAP2( _self_->build(points, copyAndReorderPoints));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_points = NULL;
    Mat points;
    PyObject* pyobj_labels = NULL;
    Mat labels;
    bool copyAndReorderPoints=false;

    const char* keywords[] = { "points", "labels", "copyAndReorderPoints", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|b:KDTree.build", (char**)keywords, &pyobj_points, &pyobj_labels, &copyAndReorderPoints) &&
        pyopencv_to(pyobj_points, points) &&
        pyopencv_to(pyobj_labels, labels) )
    {
        ERRWRAP2( _self_->build(points, labels, copyAndReorderPoints));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_KDTree_dims(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KDTree_Type))
        return failmsgp("Incorrect type of self (must be 'KDTree' or its derivative)");
    cv::KDTree* _self_ = ((pyopencv_KDTree_t*)self)->v;
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->dims());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_KDTree_findNearest(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KDTree_Type))
        return failmsgp("Incorrect type of self (must be 'KDTree' or its derivative)");
    cv::KDTree* _self_ = ((pyopencv_KDTree_t*)self)->v;
    int retval;
    PyObject* pyobj_vec = NULL;
    Mat vec;
    int K=0;
    int Emax=0;
    PyObject* pyobj_neighborsIdx = NULL;
    Mat neighborsIdx;
    PyObject* pyobj_neighbors = NULL;
    Mat neighbors;
    PyObject* pyobj_dist = NULL;
    Mat dist;
    PyObject* pyobj_labels = NULL;
    Mat labels;

    const char* keywords[] = { "vec", "K", "Emax", "neighborsIdx", "neighbors", "dist", "labels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oii|OOOO:KDTree.findNearest", (char**)keywords, &pyobj_vec, &K, &Emax, &pyobj_neighborsIdx, &pyobj_neighbors, &pyobj_dist, &pyobj_labels) &&
        pyopencv_to(pyobj_vec, vec) &&
        pyopencv_to(pyobj_neighborsIdx, neighborsIdx) &&
        pyopencv_to(pyobj_neighbors, neighbors) &&
        pyopencv_to(pyobj_dist, dist) &&
        pyopencv_to(pyobj_labels, labels) )
    {
        ERRWRAP2( retval = _self_->findNearest(vec, K, Emax, neighborsIdx, neighbors, dist, labels));
        return Py_BuildValue("(NNNNN)", pyopencv_from(retval), pyopencv_from(neighborsIdx), pyopencv_from(neighbors), pyopencv_from(dist), pyopencv_from(labels));
    }

    return NULL;
}

static PyObject* pyopencv_KDTree_findOrthoRange(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KDTree_Type))
        return failmsgp("Incorrect type of self (must be 'KDTree' or its derivative)");
    cv::KDTree* _self_ = ((pyopencv_KDTree_t*)self)->v;
    PyObject* pyobj_minBounds = NULL;
    Mat minBounds;
    PyObject* pyobj_maxBounds = NULL;
    Mat maxBounds;
    PyObject* pyobj_neighborsIdx = NULL;
    Mat neighborsIdx;
    PyObject* pyobj_neighbors = NULL;
    Mat neighbors;
    PyObject* pyobj_labels = NULL;
    Mat labels;

    const char* keywords[] = { "minBounds", "maxBounds", "neighborsIdx", "neighbors", "labels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOO:KDTree.findOrthoRange", (char**)keywords, &pyobj_minBounds, &pyobj_maxBounds, &pyobj_neighborsIdx, &pyobj_neighbors, &pyobj_labels) &&
        pyopencv_to(pyobj_minBounds, minBounds) &&
        pyopencv_to(pyobj_maxBounds, maxBounds) &&
        pyopencv_to(pyobj_neighborsIdx, neighborsIdx) &&
        pyopencv_to(pyobj_neighbors, neighbors) &&
        pyopencv_to(pyobj_labels, labels) )
    {
        ERRWRAP2( _self_->findOrthoRange(minBounds, maxBounds, neighborsIdx, neighbors, labels));
        return Py_BuildValue("(NNN)", pyopencv_from(neighborsIdx), pyopencv_from(neighbors), pyopencv_from(labels));
    }

    return NULL;
}

static PyObject* pyopencv_KDTree_getPoints(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KDTree_Type))
        return failmsgp("Incorrect type of self (must be 'KDTree' or its derivative)");
    cv::KDTree* _self_ = ((pyopencv_KDTree_t*)self)->v;
    PyObject* pyobj_idx = NULL;
    Mat idx;
    PyObject* pyobj_pts = NULL;
    Mat pts;
    PyObject* pyobj_labels = NULL;
    Mat labels;

    const char* keywords[] = { "idx", "pts", "labels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OO:KDTree.getPoints", (char**)keywords, &pyobj_idx, &pyobj_pts, &pyobj_labels) &&
        pyopencv_to(pyobj_idx, idx) &&
        pyopencv_to(pyobj_pts, pts) &&
        pyopencv_to(pyobj_labels, labels) )
    {
        ERRWRAP2( _self_->getPoints(idx, pts, labels));
        return Py_BuildValue("(NN)", pyopencv_from(pts), pyopencv_from(labels));
    }

    return NULL;
}



static PyMethodDef pyopencv_KDTree_methods[] =
{
    {"build", (PyCFunction)pyopencv_KDTree_build, METH_KEYWORDS, "build(points[, copyAndReorderPoints]) -> None  or  build(points, labels[, copyAndReorderPoints]) -> None"},
    {"dims", (PyCFunction)pyopencv_KDTree_dims, METH_KEYWORDS, "dims() -> retval"},
    {"findNearest", (PyCFunction)pyopencv_KDTree_findNearest, METH_KEYWORDS, "findNearest(vec, K, Emax[, neighborsIdx[, neighbors[, dist[, labels]]]]) -> retval, neighborsIdx, neighbors, dist, labels"},
    {"findOrthoRange", (PyCFunction)pyopencv_KDTree_findOrthoRange, METH_KEYWORDS, "findOrthoRange(minBounds, maxBounds[, neighborsIdx[, neighbors[, labels]]]) -> neighborsIdx, neighbors, labels"},
    {"getPoints", (PyCFunction)pyopencv_KDTree_getPoints, METH_KEYWORDS, "getPoints(idx[, pts[, labels]]) -> pts, labels"},

    {NULL,          NULL}
};

static void pyopencv_KDTree_specials(void)
{
    pyopencv_KDTree_Type.tp_base = NULL;
    pyopencv_KDTree_Type.tp_dealloc = pyopencv_KDTree_dealloc;
    pyopencv_KDTree_Type.tp_repr = pyopencv_KDTree_repr;
    pyopencv_KDTree_Type.tp_getset = pyopencv_KDTree_getseters;
    pyopencv_KDTree_Type.tp_methods = pyopencv_KDTree_methods;
}

static PyObject* pyopencv_FileStorage_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FileStorage %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FileStorage_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_FileStorage_getFirstTopLevelNode(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v;
    FileNode retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getFirstTopLevelNode());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileStorage_isOpened(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileStorage_open(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v;
    bool retval;
    PyObject* pyobj_filename = NULL;
    string filename;
    int flags=0;
    PyObject* pyobj_encoding = NULL;
    string encoding;

    const char* keywords[] = { "filename", "flags", "encoding", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|O:FileStorage.open", (char**)keywords, &pyobj_filename, &flags, &pyobj_encoding) &&
        pyopencv_to(pyobj_filename, filename) &&
        pyopencv_to(pyobj_encoding, encoding) )
    {
        ERRWRAP2( retval = _self_->open(filename, flags, encoding));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileStorage_getelem(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v;
    FileNode retval;
    char* nodename=(char*)"";

    const char* keywords[] = { "nodename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "s:FileStorage.operator[]", (char**)keywords, &nodename) )
    {
        ERRWRAP2( retval = _self_->operator[](nodename));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileStorage_release(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_FileStorage_root(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v;
    FileNode retval;
    int streamidx=0;

    const char* keywords[] = { "streamidx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|i:FileStorage.root", (char**)keywords, &streamidx) )
    {
        ERRWRAP2( retval = _self_->root(streamidx));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_FileStorage_methods[] =
{
    {"getFirstTopLevelNode", (PyCFunction)pyopencv_FileStorage_getFirstTopLevelNode, METH_KEYWORDS, "getFirstTopLevelNode() -> retval"},
    {"isOpened", (PyCFunction)pyopencv_FileStorage_isOpened, METH_KEYWORDS, "isOpened() -> retval"},
    {"open", (PyCFunction)pyopencv_FileStorage_open, METH_KEYWORDS, "open(filename, flags[, encoding]) -> retval"},
    {"operator[]", (PyCFunction)pyopencv_FileStorage_getelem, METH_KEYWORDS, "operator[](nodename) -> retval"},
    {"release", (PyCFunction)pyopencv_FileStorage_release, METH_KEYWORDS, "release() -> None"},
    {"root", (PyCFunction)pyopencv_FileStorage_root, METH_KEYWORDS, "root([, streamidx]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_FileStorage_specials(void)
{
    pyopencv_FileStorage_Type.tp_base = NULL;
    pyopencv_FileStorage_Type.tp_dealloc = pyopencv_FileStorage_dealloc;
    pyopencv_FileStorage_Type.tp_repr = pyopencv_FileStorage_repr;
    pyopencv_FileStorage_Type.tp_getset = pyopencv_FileStorage_getseters;
    pyopencv_FileStorage_Type.tp_methods = pyopencv_FileStorage_methods;
}

static PyObject* pyopencv_FileNode_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FileNode %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FileNode_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_FileNode_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isInt(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->isInt());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isMap(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->isMap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isNamed(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->isNamed());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isNone(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->isNone());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isReal(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->isReal());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isSeq(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->isSeq());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isString(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->isString());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_name(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    string retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->name());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_getelem(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    {
    FileNode retval;
    char* nodename=(char*)"";

    const char* keywords[] = { "nodename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "s:FileNode.operator[]", (char**)keywords, &nodename) )
    {
        ERRWRAP2( retval = _self_->operator[](nodename));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    FileNode retval;
    int i=0;

    const char* keywords[] = { "i", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FileNode.operator[]", (char**)keywords, &i) )
    {
        ERRWRAP2( retval = _self_->operator[](i));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_size(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    size_t retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->size());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_type(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->type());
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_FileNode_methods[] =
{
    {"empty", (PyCFunction)pyopencv_FileNode_empty, METH_KEYWORDS, "empty() -> retval"},
    {"isInt", (PyCFunction)pyopencv_FileNode_isInt, METH_KEYWORDS, "isInt() -> retval"},
    {"isMap", (PyCFunction)pyopencv_FileNode_isMap, METH_KEYWORDS, "isMap() -> retval"},
    {"isNamed", (PyCFunction)pyopencv_FileNode_isNamed, METH_KEYWORDS, "isNamed() -> retval"},
    {"isNone", (PyCFunction)pyopencv_FileNode_isNone, METH_KEYWORDS, "isNone() -> retval"},
    {"isReal", (PyCFunction)pyopencv_FileNode_isReal, METH_KEYWORDS, "isReal() -> retval"},
    {"isSeq", (PyCFunction)pyopencv_FileNode_isSeq, METH_KEYWORDS, "isSeq() -> retval"},
    {"isString", (PyCFunction)pyopencv_FileNode_isString, METH_KEYWORDS, "isString() -> retval"},
    {"name", (PyCFunction)pyopencv_FileNode_name, METH_KEYWORDS, "name() -> retval"},
    {"operator[]", (PyCFunction)pyopencv_FileNode_getelem, METH_KEYWORDS, "operator[](nodename) -> retval  or  operator[](i) -> retval"},
    {"size", (PyCFunction)pyopencv_FileNode_size, METH_KEYWORDS, "size() -> retval"},
    {"type", (PyCFunction)pyopencv_FileNode_type, METH_KEYWORDS, "type() -> retval"},

    {NULL,          NULL}
};

static void pyopencv_FileNode_specials(void)
{
    pyopencv_FileNode_Type.tp_base = NULL;
    pyopencv_FileNode_Type.tp_dealloc = pyopencv_FileNode_dealloc;
    pyopencv_FileNode_Type.tp_repr = pyopencv_FileNode_repr;
    pyopencv_FileNode_Type.tp_getset = pyopencv_FileNode_getseters;
    pyopencv_FileNode_Type.tp_methods = pyopencv_FileNode_methods;
}

static PyObject* pyopencv_flann_Index_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<flann_Index %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_flann_Index_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_flann_Index_build(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v;
    PyObject* pyobj_features = NULL;
    Mat features;
    PyObject* pyobj_params = NULL;
    IndexParams params;
    PyObject* pyobj_distType = NULL;
    cvflann::flann_distance_t distType=cvflann::FLANN_DIST_L2;

    const char* keywords[] = { "features", "params", "distType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:flann_Index.build", (char**)keywords, &pyobj_features, &pyobj_params, &pyobj_distType) &&
        pyopencv_to(pyobj_features, features) &&
        pyopencv_to(pyobj_params, params) &&
        pyopencv_to(pyobj_distType, distType) )
    {
        ERRWRAP2( _self_->build(features, params, distType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_getAlgorithm(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v;
    cvflann::flann_algorithm_t retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getAlgorithm());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_getDistance(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v;
    cvflann::flann_distance_t retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getDistance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_knnSearch(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v;
    PyObject* pyobj_query = NULL;
    Mat query;
    PyObject* pyobj_indices = NULL;
    Mat indices;
    PyObject* pyobj_dists = NULL;
    Mat dists;
    int knn=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;

    const char* keywords[] = { "query", "knn", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|OOO:flann_Index.knnSearch", (char**)keywords, &pyobj_query, &knn, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to(pyobj_query, query) &&
        pyopencv_to(pyobj_indices, indices) &&
        pyopencv_to(pyobj_dists, dists) &&
        pyopencv_to(pyobj_params, params) )
    {
        ERRWRAP2( _self_->knnSearch(query, indices, dists, knn, params));
        return Py_BuildValue("(NN)", pyopencv_from(indices), pyopencv_from(dists));
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_load(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v;
    bool retval;
    PyObject* pyobj_features = NULL;
    Mat features;
    PyObject* pyobj_filename = NULL;
    string filename;

    const char* keywords[] = { "features", "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:flann_Index.load", (char**)keywords, &pyobj_features, &pyobj_filename) &&
        pyopencv_to(pyobj_features, features) &&
        pyopencv_to(pyobj_filename, filename) )
    {
        ERRWRAP2( retval = _self_->load(features, filename));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_radiusSearch(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v;
    int retval;
    PyObject* pyobj_query = NULL;
    Mat query;
    PyObject* pyobj_indices = NULL;
    Mat indices;
    PyObject* pyobj_dists = NULL;
    Mat dists;
    double radius=0;
    int maxResults=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;

    const char* keywords[] = { "query", "radius", "maxResults", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Odi|OOO:flann_Index.radiusSearch", (char**)keywords, &pyobj_query, &radius, &maxResults, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to(pyobj_query, query) &&
        pyopencv_to(pyobj_indices, indices) &&
        pyopencv_to(pyobj_dists, dists) &&
        pyopencv_to(pyobj_params, params) )
    {
        ERRWRAP2( retval = _self_->radiusSearch(query, indices, dists, radius, maxResults, params));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(indices), pyopencv_from(dists));
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_release(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_save(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v;
    PyObject* pyobj_filename = NULL;
    string filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:flann_Index.save", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename) )
    {
        ERRWRAP2( _self_->save(filename));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_flann_Index_methods[] =
{
    {"build", (PyCFunction)pyopencv_flann_Index_build, METH_KEYWORDS, "build(features, params[, distType]) -> None"},
    {"getAlgorithm", (PyCFunction)pyopencv_flann_Index_getAlgorithm, METH_KEYWORDS, "getAlgorithm() -> retval"},
    {"getDistance", (PyCFunction)pyopencv_flann_Index_getDistance, METH_KEYWORDS, "getDistance() -> retval"},
    {"knnSearch", (PyCFunction)pyopencv_flann_Index_knnSearch, METH_KEYWORDS, "knnSearch(query, knn[, indices[, dists[, params]]]) -> indices, dists"},
    {"load", (PyCFunction)pyopencv_flann_Index_load, METH_KEYWORDS, "load(features, filename) -> retval"},
    {"radiusSearch", (PyCFunction)pyopencv_flann_Index_radiusSearch, METH_KEYWORDS, "radiusSearch(query, radius, maxResults[, indices[, dists[, params]]]) -> retval, indices, dists"},
    {"release", (PyCFunction)pyopencv_flann_Index_release, METH_KEYWORDS, "release() -> None"},
    {"save", (PyCFunction)pyopencv_flann_Index_save, METH_KEYWORDS, "save(filename) -> None"},

    {NULL,          NULL}
};

static void pyopencv_flann_Index_specials(void)
{
    pyopencv_flann_Index_Type.tp_base = NULL;
    pyopencv_flann_Index_Type.tp_dealloc = pyopencv_flann_Index_dealloc;
    pyopencv_flann_Index_Type.tp_repr = pyopencv_flann_Index_repr;
    pyopencv_flann_Index_Type.tp_getset = pyopencv_flann_Index_getseters;
    pyopencv_flann_Index_Type.tp_methods = pyopencv_flann_Index_methods;
}
static bool pyopencv_to(PyObject* src, cv::Moments& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"m00") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m00");
        ok = tmp && pyopencv_to(tmp, dst.m00);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m10") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m10");
        ok = tmp && pyopencv_to(tmp, dst.m10);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m01") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m01");
        ok = tmp && pyopencv_to(tmp, dst.m01);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m20") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m20");
        ok = tmp && pyopencv_to(tmp, dst.m20);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m11") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m11");
        ok = tmp && pyopencv_to(tmp, dst.m11);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m02") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m02");
        ok = tmp && pyopencv_to(tmp, dst.m02);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m30") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m30");
        ok = tmp && pyopencv_to(tmp, dst.m30);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m21") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m21");
        ok = tmp && pyopencv_to(tmp, dst.m21);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m12") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m12");
        ok = tmp && pyopencv_to(tmp, dst.m12);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m03") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m03");
        ok = tmp && pyopencv_to(tmp, dst.m03);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu20") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu20");
        ok = tmp && pyopencv_to(tmp, dst.mu20);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu11") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu11");
        ok = tmp && pyopencv_to(tmp, dst.mu11);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu02") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu02");
        ok = tmp && pyopencv_to(tmp, dst.mu02);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu30") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu30");
        ok = tmp && pyopencv_to(tmp, dst.mu30);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu21") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu21");
        ok = tmp && pyopencv_to(tmp, dst.mu21);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu12") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu12");
        ok = tmp && pyopencv_to(tmp, dst.mu12);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu03") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu03");
        ok = tmp && pyopencv_to(tmp, dst.mu03);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu20") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu20");
        ok = tmp && pyopencv_to(tmp, dst.nu20);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu11") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu11");
        ok = tmp && pyopencv_to(tmp, dst.nu11);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu02") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu02");
        ok = tmp && pyopencv_to(tmp, dst.nu02);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu30") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu30");
        ok = tmp && pyopencv_to(tmp, dst.nu30);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu21") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu21");
        ok = tmp && pyopencv_to(tmp, dst.nu21);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu12") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu12");
        ok = tmp && pyopencv_to(tmp, dst.nu12);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu03") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu03");
        ok = tmp && pyopencv_to(tmp, dst.nu03);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

static PyObject* pyopencv_Subdiv2D_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<Subdiv2D %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_Subdiv2D_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_Subdiv2D_edgeDst(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    int retval;
    int edge=0;
    Point2f dstpt;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.edgeDst", (char**)keywords, &edge) )
    {
        ERRWRAP2( retval = _self_->edgeDst(edge, &dstpt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(dstpt));
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_edgeOrg(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    int retval;
    int edge=0;
    Point2f orgpt;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.edgeOrg", (char**)keywords, &edge) )
    {
        ERRWRAP2( retval = _self_->edgeOrg(edge, &orgpt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(orgpt));
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_findNearest(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    int retval;
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    Point2f nearestPt;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.findNearest", (char**)keywords, &pyobj_pt) &&
        pyopencv_to(pyobj_pt, pt) )
    {
        ERRWRAP2( retval = _self_->findNearest(pt, &nearestPt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(nearestPt));
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_getEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    int retval;
    int edge=0;
    int nextEdgeType=0;

    const char* keywords[] = { "edge", "nextEdgeType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "ii:Subdiv2D.getEdge", (char**)keywords, &edge, &nextEdgeType) )
    {
        ERRWRAP2( retval = _self_->getEdge(edge, nextEdgeType));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_getEdgeList(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    vector_Vec4f edgeList;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->getEdgeList(edgeList));
        return pyopencv_from(edgeList);
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_getTriangleList(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    vector_Vec6f triangleList;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->getTriangleList(triangleList));
        return pyopencv_from(triangleList);
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_getVertex(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    Point2f retval;
    int vertex=0;
    int firstEdge;

    const char* keywords[] = { "vertex", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.getVertex", (char**)keywords, &vertex) )
    {
        ERRWRAP2( retval = _self_->getVertex(vertex, &firstEdge));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(firstEdge));
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_getVoronoiFacetList(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    PyObject* pyobj_idx = NULL;
    vector_int idx;
    vector_vector_Point2f facetList;
    vector_Point2f facetCenters;

    const char* keywords[] = { "idx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.getVoronoiFacetList", (char**)keywords, &pyobj_idx) &&
        pyopencv_to(pyobj_idx, idx) )
    {
        ERRWRAP2( _self_->getVoronoiFacetList(idx, facetList, facetCenters));
        return Py_BuildValue("(NN)", pyopencv_from(facetList), pyopencv_from(facetCenters));
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_initDelaunay(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    PyObject* pyobj_rect = NULL;
    Rect rect;

    const char* keywords[] = { "rect", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.initDelaunay", (char**)keywords, &pyobj_rect) &&
        pyopencv_to(pyobj_rect, rect) )
    {
        ERRWRAP2( _self_->initDelaunay(rect));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_insert(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    {
    int retval;
    PyObject* pyobj_pt = NULL;
    Point2f pt;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.insert", (char**)keywords, &pyobj_pt) &&
        pyopencv_to(pyobj_pt, pt) )
    {
        ERRWRAP2( retval = _self_->insert(pt));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_ptvec = NULL;
    vector_Point2f ptvec;

    const char* keywords[] = { "ptvec", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.insert", (char**)keywords, &pyobj_ptvec) &&
        pyopencv_to(pyobj_ptvec, ptvec) )
    {
        ERRWRAP2( _self_->insert(ptvec));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_locate(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    int retval;
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    int edge;
    int vertex;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.locate", (char**)keywords, &pyobj_pt) &&
        pyopencv_to(pyobj_pt, pt) )
    {
        ERRWRAP2( retval = _self_->locate(pt, edge, vertex));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(edge), pyopencv_from(vertex));
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_nextEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    int retval;
    int edge=0;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.nextEdge", (char**)keywords, &edge) )
    {
        ERRWRAP2( retval = _self_->nextEdge(edge));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_rotateEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    int retval;
    int edge=0;
    int rotate=0;

    const char* keywords[] = { "edge", "rotate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "ii:Subdiv2D.rotateEdge", (char**)keywords, &edge, &rotate) )
    {
        ERRWRAP2( retval = _self_->rotateEdge(edge, rotate));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_symEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v;
    int retval;
    int edge=0;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.symEdge", (char**)keywords, &edge) )
    {
        ERRWRAP2( retval = _self_->symEdge(edge));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_Subdiv2D_methods[] =
{
    {"edgeDst", (PyCFunction)pyopencv_Subdiv2D_edgeDst, METH_KEYWORDS, "edgeDst(edge) -> retval, dstpt"},
    {"edgeOrg", (PyCFunction)pyopencv_Subdiv2D_edgeOrg, METH_KEYWORDS, "edgeOrg(edge) -> retval, orgpt"},
    {"findNearest", (PyCFunction)pyopencv_Subdiv2D_findNearest, METH_KEYWORDS, "findNearest(pt) -> retval, nearestPt"},
    {"getEdge", (PyCFunction)pyopencv_Subdiv2D_getEdge, METH_KEYWORDS, "getEdge(edge, nextEdgeType) -> retval"},
    {"getEdgeList", (PyCFunction)pyopencv_Subdiv2D_getEdgeList, METH_KEYWORDS, "getEdgeList() -> edgeList"},
    {"getTriangleList", (PyCFunction)pyopencv_Subdiv2D_getTriangleList, METH_KEYWORDS, "getTriangleList() -> triangleList"},
    {"getVertex", (PyCFunction)pyopencv_Subdiv2D_getVertex, METH_KEYWORDS, "getVertex(vertex) -> retval, firstEdge"},
    {"getVoronoiFacetList", (PyCFunction)pyopencv_Subdiv2D_getVoronoiFacetList, METH_KEYWORDS, "getVoronoiFacetList(idx) -> facetList, facetCenters"},
    {"initDelaunay", (PyCFunction)pyopencv_Subdiv2D_initDelaunay, METH_KEYWORDS, "initDelaunay(rect) -> None"},
    {"insert", (PyCFunction)pyopencv_Subdiv2D_insert, METH_KEYWORDS, "insert(pt) -> retval  or  insert(ptvec) -> None"},
    {"locate", (PyCFunction)pyopencv_Subdiv2D_locate, METH_KEYWORDS, "locate(pt) -> retval, edge, vertex"},
    {"nextEdge", (PyCFunction)pyopencv_Subdiv2D_nextEdge, METH_KEYWORDS, "nextEdge(edge) -> retval"},
    {"rotateEdge", (PyCFunction)pyopencv_Subdiv2D_rotateEdge, METH_KEYWORDS, "rotateEdge(edge, rotate) -> retval"},
    {"symEdge", (PyCFunction)pyopencv_Subdiv2D_symEdge, METH_KEYWORDS, "symEdge(edge) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_Subdiv2D_specials(void)
{
    pyopencv_Subdiv2D_Type.tp_base = NULL;
    pyopencv_Subdiv2D_Type.tp_dealloc = pyopencv_Subdiv2D_dealloc;
    pyopencv_Subdiv2D_Type.tp_repr = pyopencv_Subdiv2D_repr;
    pyopencv_Subdiv2D_Type.tp_getset = pyopencv_Subdiv2D_getseters;
    pyopencv_Subdiv2D_Type.tp_methods = pyopencv_Subdiv2D_methods;
}

static PyObject* pyopencv_BackgroundSubtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BackgroundSubtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BackgroundSubtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_BackgroundSubtractor_apply(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractor_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractor' or its derivative)");
    cv::BackgroundSubtractor* _self_ = ((pyopencv_BackgroundSubtractor_t*)self)->v;
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_fgmask = NULL;
    Mat fgmask;
    double learningRate=0;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Od:BackgroundSubtractor.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &learningRate) &&
        pyopencv_to(pyobj_image, image) &&
        pyopencv_to(pyobj_fgmask, fgmask) )
    {
        ERRWRAP2( _self_->operator()(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }

    return NULL;
}



static PyMethodDef pyopencv_BackgroundSubtractor_methods[] =
{
    {"apply", (PyCFunction)pyopencv_BackgroundSubtractor_apply, METH_KEYWORDS, "apply(image[, fgmask[, learningRate]]) -> fgmask"},

    {NULL,          NULL}
};

static void pyopencv_BackgroundSubtractor_specials(void)
{
    pyopencv_BackgroundSubtractor_Type.tp_base = NULL;
    pyopencv_BackgroundSubtractor_Type.tp_dealloc = pyopencv_BackgroundSubtractor_dealloc;
    pyopencv_BackgroundSubtractor_Type.tp_repr = pyopencv_BackgroundSubtractor_repr;
    pyopencv_BackgroundSubtractor_Type.tp_getset = pyopencv_BackgroundSubtractor_getseters;
    pyopencv_BackgroundSubtractor_Type.tp_methods = pyopencv_BackgroundSubtractor_methods;
}

static PyObject* pyopencv_BackgroundSubtractorMOG_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BackgroundSubtractorMOG %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BackgroundSubtractorMOG_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_BackgroundSubtractorMOG_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_BackgroundSubtractorMOG_specials(void)
{
    pyopencv_BackgroundSubtractorMOG_Type.tp_base = &pyopencv_BackgroundSubtractor_Type;
    pyopencv_BackgroundSubtractorMOG_Type.tp_dealloc = pyopencv_BackgroundSubtractorMOG_dealloc;
    pyopencv_BackgroundSubtractorMOG_Type.tp_repr = pyopencv_BackgroundSubtractorMOG_repr;
    pyopencv_BackgroundSubtractorMOG_Type.tp_getset = pyopencv_BackgroundSubtractorMOG_getseters;
    pyopencv_BackgroundSubtractorMOG_Type.tp_methods = pyopencv_BackgroundSubtractorMOG_methods;
}

static PyObject* pyopencv_KalmanFilter_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<KalmanFilter %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_KalmanFilter_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_KalmanFilter_correct(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KalmanFilter_Type))
        return failmsgp("Incorrect type of self (must be 'KalmanFilter' or its derivative)");
    cv::KalmanFilter* _self_ = ((pyopencv_KalmanFilter_t*)self)->v;
    Mat retval;
    PyObject* pyobj_measurement = NULL;
    Mat measurement;

    const char* keywords[] = { "measurement", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:KalmanFilter.correct", (char**)keywords, &pyobj_measurement) &&
        pyopencv_to(pyobj_measurement, measurement) )
    {
        ERRWRAP2( retval = _self_->correct(measurement));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_KalmanFilter_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KalmanFilter_Type))
        return failmsgp("Incorrect type of self (must be 'KalmanFilter' or its derivative)");
    cv::KalmanFilter* _self_ = ((pyopencv_KalmanFilter_t*)self)->v;
    Mat retval;
    PyObject* pyobj_control = NULL;
    Mat control;

    const char* keywords[] = { "control", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:KalmanFilter.predict", (char**)keywords, &pyobj_control) &&
        pyopencv_to(pyobj_control, control) )
    {
        ERRWRAP2( retval = _self_->predict(control));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_KalmanFilter_methods[] =
{
    {"correct", (PyCFunction)pyopencv_KalmanFilter_correct, METH_KEYWORDS, "correct(measurement) -> retval"},
    {"predict", (PyCFunction)pyopencv_KalmanFilter_predict, METH_KEYWORDS, "predict([, control]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_KalmanFilter_specials(void)
{
    pyopencv_KalmanFilter_Type.tp_base = NULL;
    pyopencv_KalmanFilter_Type.tp_dealloc = pyopencv_KalmanFilter_dealloc;
    pyopencv_KalmanFilter_Type.tp_repr = pyopencv_KalmanFilter_repr;
    pyopencv_KalmanFilter_Type.tp_getset = pyopencv_KalmanFilter_getseters;
    pyopencv_KalmanFilter_Type.tp_methods = pyopencv_KalmanFilter_methods;
}

static PyObject* pyopencv_VideoCapture_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<VideoCapture %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_VideoCapture_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_VideoCapture_get(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v;
    double retval;
    int propId=0;

    const char* keywords[] = { "propId", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:VideoCapture.get", (char**)keywords, &propId) )
    {
        ERRWRAP2( retval = _self_->get(propId));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_grab(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->grab());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_isOpened(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_open(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v;
    {
    bool retval;
    PyObject* pyobj_filename = NULL;
    string filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:VideoCapture.open", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename) )
    {
        ERRWRAP2( retval = _self_->open(filename));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    bool retval;
    int device=0;

    const char* keywords[] = { "device", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:VideoCapture.open", (char**)keywords, &device) )
    {
        ERRWRAP2( retval = _self_->open(device));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_read(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v;
    bool retval;
    PyObject* pyobj_image = NULL;
    Mat image;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:VideoCapture.read", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image) )
    {
        ERRWRAP2( retval = _self_->read(image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_release(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_retrieve(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v;
    bool retval;
    PyObject* pyobj_image = NULL;
    Mat image;
    int channel=0;

    const char* keywords[] = { "image", "channel", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|Oi:VideoCapture.retrieve", (char**)keywords, &pyobj_image, &channel) &&
        pyopencv_to(pyobj_image, image) )
    {
        ERRWRAP2( retval = _self_->retrieve(image, channel));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_set(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v;
    bool retval;
    int propId=0;
    double value=0;

    const char* keywords[] = { "propId", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "id:VideoCapture.set", (char**)keywords, &propId, &value) )
    {
        ERRWRAP2( retval = _self_->set(propId, value));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_VideoCapture_methods[] =
{
    {"get", (PyCFunction)pyopencv_VideoCapture_get, METH_KEYWORDS, "get(propId) -> retval"},
    {"grab", (PyCFunction)pyopencv_VideoCapture_grab, METH_KEYWORDS, "grab() -> retval"},
    {"isOpened", (PyCFunction)pyopencv_VideoCapture_isOpened, METH_KEYWORDS, "isOpened() -> retval"},
    {"open", (PyCFunction)pyopencv_VideoCapture_open, METH_KEYWORDS, "open(filename) -> retval  or  open(device) -> retval"},
    {"read", (PyCFunction)pyopencv_VideoCapture_read, METH_KEYWORDS, "read([, image]) -> retval, image"},
    {"release", (PyCFunction)pyopencv_VideoCapture_release, METH_KEYWORDS, "release() -> None"},
    {"retrieve", (PyCFunction)pyopencv_VideoCapture_retrieve, METH_KEYWORDS, "retrieve([, image[, channel]]) -> retval, image"},
    {"set", (PyCFunction)pyopencv_VideoCapture_set, METH_KEYWORDS, "set(propId, value) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_VideoCapture_specials(void)
{
    pyopencv_VideoCapture_Type.tp_base = NULL;
    pyopencv_VideoCapture_Type.tp_dealloc = pyopencv_VideoCapture_dealloc;
    pyopencv_VideoCapture_Type.tp_repr = pyopencv_VideoCapture_repr;
    pyopencv_VideoCapture_Type.tp_getset = pyopencv_VideoCapture_getseters;
    pyopencv_VideoCapture_Type.tp_methods = pyopencv_VideoCapture_methods;
}

static PyObject* pyopencv_VideoWriter_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<VideoWriter %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_VideoWriter_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_VideoWriter_isOpened(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    cv::VideoWriter* _self_ = ((pyopencv_VideoWriter_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_VideoWriter_open(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    cv::VideoWriter* _self_ = ((pyopencv_VideoWriter_t*)self)->v;
    bool retval;
    PyObject* pyobj_filename = NULL;
    string filename;
    int fourcc=0;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    bool isColor=true;

    const char* keywords[] = { "filename", "fourcc", "fps", "frameSize", "isColor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OidO|b:VideoWriter.open", (char**)keywords, &pyobj_filename, &fourcc, &fps, &pyobj_frameSize, &isColor) &&
        pyopencv_to(pyobj_filename, filename) &&
        pyopencv_to(pyobj_frameSize, frameSize) )
    {
        ERRWRAP2( retval = _self_->open(filename, fourcc, fps, frameSize, isColor));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_VideoWriter_write(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    cv::VideoWriter* _self_ = ((pyopencv_VideoWriter_t*)self)->v;
    PyObject* pyobj_image = NULL;
    Mat image;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:VideoWriter.write", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image) )
    {
        ERRWRAP2( _self_->write(image));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_VideoWriter_methods[] =
{
    {"isOpened", (PyCFunction)pyopencv_VideoWriter_isOpened, METH_KEYWORDS, "isOpened() -> retval"},
    {"open", (PyCFunction)pyopencv_VideoWriter_open, METH_KEYWORDS, "open(filename, fourcc, fps, frameSize[, isColor]) -> retval"},
    {"write", (PyCFunction)pyopencv_VideoWriter_write, METH_KEYWORDS, "write(image) -> None"},

    {NULL,          NULL}
};

static void pyopencv_VideoWriter_specials(void)
{
    pyopencv_VideoWriter_Type.tp_base = NULL;
    pyopencv_VideoWriter_Type.tp_dealloc = pyopencv_VideoWriter_dealloc;
    pyopencv_VideoWriter_Type.tp_repr = pyopencv_VideoWriter_repr;
    pyopencv_VideoWriter_Type.tp_getset = pyopencv_VideoWriter_getseters;
    pyopencv_VideoWriter_Type.tp_methods = pyopencv_VideoWriter_methods;
}

static PyObject* pyopencv_CvStatModel_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StatModel %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvStatModel_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvStatModel_load(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvStatModel_Type))
        return failmsgp("Incorrect type of self (must be 'CvStatModel' or its derivative)");
    CvStatModel* _self_ = ((pyopencv_CvStatModel_t*)self)->v;
    char* filename=(char*)"";
    char* name=0;

    const char* keywords[] = { "filename", "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "s|s:StatModel.load", (char**)keywords, &filename, &name) )
    {
        ERRWRAP2( _self_->load(filename, name));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvStatModel_save(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvStatModel_Type))
        return failmsgp("Incorrect type of self (must be 'CvStatModel' or its derivative)");
    CvStatModel* _self_ = ((pyopencv_CvStatModel_t*)self)->v;
    char* filename=(char*)"";
    char* name=0;

    const char* keywords[] = { "filename", "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "s|s:StatModel.save", (char**)keywords, &filename, &name) )
    {
        ERRWRAP2( _self_->save(filename, name));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_CvStatModel_methods[] =
{
    {"load", (PyCFunction)pyopencv_CvStatModel_load, METH_KEYWORDS, "load(filename[, name]) -> None"},
    {"save", (PyCFunction)pyopencv_CvStatModel_save, METH_KEYWORDS, "save(filename[, name]) -> None"},

    {NULL,          NULL}
};

static void pyopencv_CvStatModel_specials(void)
{
    pyopencv_CvStatModel_Type.tp_base = NULL;
    pyopencv_CvStatModel_Type.tp_dealloc = pyopencv_CvStatModel_dealloc;
    pyopencv_CvStatModel_Type.tp_repr = pyopencv_CvStatModel_repr;
    pyopencv_CvStatModel_Type.tp_getset = pyopencv_CvStatModel_getseters;
    pyopencv_CvStatModel_Type.tp_methods = pyopencv_CvStatModel_methods;
}
static bool pyopencv_to(PyObject* src, CvParamGrid& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"min_val") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"min_val");
        ok = tmp && pyopencv_to(tmp, dst.min_val);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"max_val") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"max_val");
        ok = tmp && pyopencv_to(tmp, dst.max_val);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"step") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"step");
        ok = tmp && pyopencv_to(tmp, dst.step);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

static PyObject* pyopencv_CvNormalBayesClassifier_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<NormalBayesClassifier %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvNormalBayesClassifier_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvNormalBayesClassifier_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvNormalBayesClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CvNormalBayesClassifier' or its derivative)");
    CvNormalBayesClassifier* _self_ = ((pyopencv_CvNormalBayesClassifier_t*)self)->v;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvNormalBayesClassifier_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvNormalBayesClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CvNormalBayesClassifier' or its derivative)");
    CvNormalBayesClassifier* _self_ = ((pyopencv_CvNormalBayesClassifier_t*)self)->v;
    float retval;
    PyObject* pyobj_samples = NULL;
    Mat samples;
    Mat results;

    const char* keywords[] = { "samples", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:NormalBayesClassifier.predict", (char**)keywords, &pyobj_samples) &&
        pyopencv_to(pyobj_samples, samples) )
    {
        ERRWRAP2( retval = _self_->predict(samples, &results));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }

    return NULL;
}

static PyObject* pyopencv_CvNormalBayesClassifier_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvNormalBayesClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CvNormalBayesClassifier' or its derivative)");
    CvNormalBayesClassifier* _self_ = ((pyopencv_CvNormalBayesClassifier_t*)self)->v;
    bool retval;
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    bool update=false;

    const char* keywords[] = { "trainData", "responses", "varIdx", "sampleIdx", "update", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOb:NormalBayesClassifier.train", (char**)keywords, &pyobj_trainData, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &update) &&
        pyopencv_to(pyobj_trainData, trainData) &&
        pyopencv_to(pyobj_responses, responses) &&
        pyopencv_to(pyobj_varIdx, varIdx) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx) )
    {
        ERRWRAP2( retval = _self_->train(trainData, responses, varIdx, sampleIdx, update));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvNormalBayesClassifier_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvNormalBayesClassifier_clear, METH_KEYWORDS, "clear() -> None"},
    {"predict", (PyCFunction)pyopencv_CvNormalBayesClassifier_predict, METH_KEYWORDS, "predict(samples) -> retval, results"},
    {"train", (PyCFunction)pyopencv_CvNormalBayesClassifier_train, METH_KEYWORDS, "train(trainData, responses[, varIdx[, sampleIdx[, update]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvNormalBayesClassifier_specials(void)
{
    pyopencv_CvNormalBayesClassifier_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvNormalBayesClassifier_Type.tp_dealloc = pyopencv_CvNormalBayesClassifier_dealloc;
    pyopencv_CvNormalBayesClassifier_Type.tp_repr = pyopencv_CvNormalBayesClassifier_repr;
    pyopencv_CvNormalBayesClassifier_Type.tp_getset = pyopencv_CvNormalBayesClassifier_getseters;
    pyopencv_CvNormalBayesClassifier_Type.tp_methods = pyopencv_CvNormalBayesClassifier_methods;
}

static PyObject* pyopencv_CvKNearest_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<KNearest %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvKNearest_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvKNearest_find_nearest(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvKNearest_Type))
        return failmsgp("Incorrect type of self (must be 'CvKNearest' or its derivative)");
    CvKNearest* _self_ = ((pyopencv_CvKNearest_t*)self)->v;
    float retval;
    PyObject* pyobj_samples = NULL;
    Mat samples;
    int k=0;
    PyObject* pyobj_results = NULL;
    Mat results;
    PyObject* pyobj_neighborResponses = NULL;
    Mat neighborResponses;
    PyObject* pyobj_dists = NULL;
    Mat dists;

    const char* keywords[] = { "samples", "k", "results", "neighborResponses", "dists", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|OOO:KNearest.find_nearest", (char**)keywords, &pyobj_samples, &k, &pyobj_results, &pyobj_neighborResponses, &pyobj_dists) &&
        pyopencv_to(pyobj_samples, samples) &&
        pyopencv_to(pyobj_results, results) &&
        pyopencv_to(pyobj_neighborResponses, neighborResponses) &&
        pyopencv_to(pyobj_dists, dists) )
    {
        ERRWRAP2( retval = _self_->find_nearest(samples, k, results, neighborResponses, dists));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(results), pyopencv_from(neighborResponses), pyopencv_from(dists));
    }

    return NULL;
}

static PyObject* pyopencv_CvKNearest_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvKNearest_Type))
        return failmsgp("Incorrect type of self (must be 'CvKNearest' or its derivative)");
    CvKNearest* _self_ = ((pyopencv_CvKNearest_t*)self)->v;
    bool retval;
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    bool isRegression=false;
    int maxK=32;
    bool updateBase=false;

    const char* keywords[] = { "trainData", "responses", "sampleIdx", "isRegression", "maxK", "updateBase", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|Obib:KNearest.train", (char**)keywords, &pyobj_trainData, &pyobj_responses, &pyobj_sampleIdx, &isRegression, &maxK, &updateBase) &&
        pyopencv_to(pyobj_trainData, trainData) &&
        pyopencv_to(pyobj_responses, responses) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx) )
    {
        ERRWRAP2( retval = _self_->train(trainData, responses, sampleIdx, isRegression, maxK, updateBase));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvKNearest_methods[] =
{
    {"find_nearest", (PyCFunction)pyopencv_CvKNearest_find_nearest, METH_KEYWORDS, "find_nearest(samples, k[, results[, neighborResponses[, dists]]]) -> retval, results, neighborResponses, dists"},
    {"train", (PyCFunction)pyopencv_CvKNearest_train, METH_KEYWORDS, "train(trainData, responses[, sampleIdx[, isRegression[, maxK[, updateBase]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvKNearest_specials(void)
{
    pyopencv_CvKNearest_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvKNearest_Type.tp_dealloc = pyopencv_CvKNearest_dealloc;
    pyopencv_CvKNearest_Type.tp_repr = pyopencv_CvKNearest_repr;
    pyopencv_CvKNearest_Type.tp_getset = pyopencv_CvKNearest_getseters;
    pyopencv_CvKNearest_Type.tp_methods = pyopencv_CvKNearest_methods;
}
static bool pyopencv_to(PyObject* src, CvSVMParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"svm_type") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"svm_type");
        ok = tmp && pyopencv_to(tmp, dst.svm_type);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"kernel_type") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"kernel_type");
        ok = tmp && pyopencv_to(tmp, dst.kernel_type);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"degree") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"degree");
        ok = tmp && pyopencv_to(tmp, dst.degree);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"gamma") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"gamma");
        ok = tmp && pyopencv_to(tmp, dst.gamma);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"coef0") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"coef0");
        ok = tmp && pyopencv_to(tmp, dst.coef0);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"C") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"C");
        ok = tmp && pyopencv_to(tmp, dst.C);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu");
        ok = tmp && pyopencv_to(tmp, dst.nu);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"p") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"p");
        ok = tmp && pyopencv_to(tmp, dst.p);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"term_crit") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"term_crit");
        ok = tmp && pyopencv_to(tmp, dst.term_crit);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

static PyObject* pyopencv_CvSVM_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<SVM %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvSVM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvSVM_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvSVM_get_support_vector_count(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v;
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->get_support_vector_count());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvSVM_get_var_count(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v;
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->get_var_count());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvSVM_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v;
    float retval;
    PyObject* pyobj_sample = NULL;
    Mat sample;
    bool returnDFVal=false;

    const char* keywords[] = { "sample", "returnDFVal", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|b:SVM.predict", (char**)keywords, &pyobj_sample, &returnDFVal) &&
        pyopencv_to(pyobj_sample, sample) )
    {
        ERRWRAP2( retval = _self_->predict(sample, returnDFVal));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvSVM_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v;
    bool retval;
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvSVMParams params;

    const char* keywords[] = { "trainData", "responses", "varIdx", "sampleIdx", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOO:SVM.train", (char**)keywords, &pyobj_trainData, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_params) &&
        pyopencv_to(pyobj_trainData, trainData) &&
        pyopencv_to(pyobj_responses, responses) &&
        pyopencv_to(pyobj_varIdx, varIdx) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx) &&
        pyopencv_to(pyobj_params, params) )
    {
        ERRWRAP2( retval = _self_->train(trainData, responses, varIdx, sampleIdx, params));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvSVM_train_auto(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v;
    bool retval;
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx;
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx;
    PyObject* pyobj_params = NULL;
    CvSVMParams params;
    int k_fold=10;
    PyObject* pyobj_Cgrid = NULL;
    CvParamGrid Cgrid=CvSVM::get_default_grid(CvSVM::C);
    PyObject* pyobj_gammaGrid = NULL;
    CvParamGrid gammaGrid=CvSVM::get_default_grid(CvSVM::GAMMA);
    PyObject* pyobj_pGrid = NULL;
    CvParamGrid pGrid=CvSVM::get_default_grid(CvSVM::P);
    PyObject* pyobj_nuGrid = NULL;
    CvParamGrid nuGrid=CvSVM::get_default_grid(CvSVM::NU);
    PyObject* pyobj_coeffGrid = NULL;
    CvParamGrid coeffGrid=CvSVM::get_default_grid(CvSVM::COEF);
    PyObject* pyobj_degreeGrid = NULL;
    CvParamGrid degreeGrid=CvSVM::get_default_grid(CvSVM::DEGREE);
    bool balanced=false;

    const char* keywords[] = { "trainData", "responses", "varIdx", "sampleIdx", "params", "k_fold", "Cgrid", "gammaGrid", "pGrid", "nuGrid", "coeffGrid", "degreeGrid", "balanced", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOOO|iOOOOOOb:SVM.train_auto", (char**)keywords, &pyobj_trainData, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_params, &k_fold, &pyobj_Cgrid, &pyobj_gammaGrid, &pyobj_pGrid, &pyobj_nuGrid, &pyobj_coeffGrid, &pyobj_degreeGrid, &balanced) &&
        pyopencv_to(pyobj_trainData, trainData) &&
        pyopencv_to(pyobj_responses, responses) &&
        pyopencv_to(pyobj_varIdx, varIdx) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx) &&
        pyopencv_to(pyobj_params, params) &&
        pyopencv_to(pyobj_Cgrid, Cgrid) &&
        pyopencv_to(pyobj_gammaGrid, gammaGrid) &&
        pyopencv_to(pyobj_pGrid, pGrid) &&
        pyopencv_to(pyobj_nuGrid, nuGrid) &&
        pyopencv_to(pyobj_coeffGrid, coeffGrid) &&
        pyopencv_to(pyobj_degreeGrid, degreeGrid) )
    {
        ERRWRAP2( retval = _self_->train_auto(trainData, responses, varIdx, sampleIdx, params, k_fold, Cgrid, gammaGrid, pGrid, nuGrid, coeffGrid, degreeGrid, balanced));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvSVM_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvSVM_clear, METH_KEYWORDS, "clear() -> None"},
    {"get_support_vector_count", (PyCFunction)pyopencv_CvSVM_get_support_vector_count, METH_KEYWORDS, "get_support_vector_count() -> retval"},
    {"get_var_count", (PyCFunction)pyopencv_CvSVM_get_var_count, METH_KEYWORDS, "get_var_count() -> retval"},
    {"predict", (PyCFunction)pyopencv_CvSVM_predict, METH_KEYWORDS, "predict(sample[, returnDFVal]) -> retval"},
    {"train", (PyCFunction)pyopencv_CvSVM_train, METH_KEYWORDS, "train(trainData, responses[, varIdx[, sampleIdx[, params]]]) -> retval"},
    {"train_auto", (PyCFunction)pyopencv_CvSVM_train_auto, METH_KEYWORDS, "train_auto(trainData, responses, varIdx, sampleIdx, params[, k_fold[, Cgrid[, gammaGrid[, pGrid[, nuGrid[, coeffGrid[, degreeGrid[, balanced]]]]]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvSVM_specials(void)
{
    pyopencv_CvSVM_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvSVM_Type.tp_dealloc = pyopencv_CvSVM_dealloc;
    pyopencv_CvSVM_Type.tp_repr = pyopencv_CvSVM_repr;
    pyopencv_CvSVM_Type.tp_getset = pyopencv_CvSVM_getseters;
    pyopencv_CvSVM_Type.tp_methods = pyopencv_CvSVM_methods;
}
static bool pyopencv_to(PyObject* src, CvEMParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"nclusters") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nclusters");
        ok = tmp && pyopencv_to(tmp, dst.nclusters);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"cov_mat_type") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"cov_mat_type");
        ok = tmp && pyopencv_to(tmp, dst.cov_mat_type);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"start_step") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"start_step");
        ok = tmp && pyopencv_to(tmp, dst.start_step);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"term_crit") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"term_crit");
        ok = tmp && pyopencv_to(tmp, dst.term_crit);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

static PyObject* pyopencv_CvEM_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<EM %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvEM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvEM_calcLikelihood(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvEM_Type))
        return failmsgp("Incorrect type of self (must be 'CvEM' or its derivative)");
    CvEM* _self_ = ((pyopencv_CvEM_t*)self)->v;
    double retval;
    PyObject* pyobj_sample = NULL;
    Mat sample;

    const char* keywords[] = { "sample", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:EM.calcLikelihood", (char**)keywords, &pyobj_sample) &&
        pyopencv_to(pyobj_sample, sample) )
    {
        ERRWRAP2( retval = _self_->calcLikelihood(sample));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvEM_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvEM_Type))
        return failmsgp("Incorrect type of self (must be 'CvEM' or its derivative)");
    CvEM* _self_ = ((pyopencv_CvEM_t*)self)->v;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvEM_getCovs(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvEM_Type))
        return failmsgp("Incorrect type of self (must be 'CvEM' or its derivative)");
    CvEM* _self_ = ((pyopencv_CvEM_t*)self)->v;
    PyObject* pyobj_covs = NULL;
    vector_Mat covs;

    const char* keywords[] = { "covs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:EM.getCovs", (char**)keywords, &pyobj_covs) &&
        pyopencv_to(pyobj_covs, covs) )
    {
        ERRWRAP2( _self_->getCovs(covs));
        return pyopencv_from(covs);
    }

    return NULL;
}

static PyObject* pyopencv_CvEM_getLikelihood(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvEM_Type))
        return failmsgp("Incorrect type of self (must be 'CvEM' or its derivative)");
    CvEM* _self_ = ((pyopencv_CvEM_t*)self)->v;
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getLikelihood());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvEM_getLikelihoodDelta(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvEM_Type))
        return failmsgp("Incorrect type of self (must be 'CvEM' or its derivative)");
    CvEM* _self_ = ((pyopencv_CvEM_t*)self)->v;
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getLikelihoodDelta());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvEM_getMeans(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvEM_Type))
        return failmsgp("Incorrect type of self (must be 'CvEM' or its derivative)");
    CvEM* _self_ = ((pyopencv_CvEM_t*)self)->v;
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getMeans());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvEM_getNClusters(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvEM_Type))
        return failmsgp("Incorrect type of self (must be 'CvEM' or its derivative)");
    CvEM* _self_ = ((pyopencv_CvEM_t*)self)->v;
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getNClusters());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvEM_getProbs(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvEM_Type))
        return failmsgp("Incorrect type of self (must be 'CvEM' or its derivative)");
    CvEM* _self_ = ((pyopencv_CvEM_t*)self)->v;
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getProbs());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvEM_getWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvEM_Type))
        return failmsgp("Incorrect type of self (must be 'CvEM' or its derivative)");
    CvEM* _self_ = ((pyopencv_CvEM_t*)self)->v;
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvEM_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvEM_Type))
        return failmsgp("Incorrect type of self (must be 'CvEM' or its derivative)");
    CvEM* _self_ = ((pyopencv_CvEM_t*)self)->v;
    float retval;
    PyObject* pyobj_sample = NULL;
    Mat sample;
    Mat probs;

    const char* keywords[] = { "sample", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:EM.predict", (char**)keywords, &pyobj_sample) &&
        pyopencv_to(pyobj_sample, sample) )
    {
        ERRWRAP2( retval = _self_->predict(sample, &probs));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(probs));
    }

    return NULL;
}

static PyObject* pyopencv_CvEM_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvEM_Type))
        return failmsgp("Incorrect type of self (must be 'CvEM' or its derivative)");
    CvEM* _self_ = ((pyopencv_CvEM_t*)self)->v;
    bool retval;
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvEMParams params;
    Mat labels;

    const char* keywords[] = { "samples", "sampleIdx", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OO:EM.train", (char**)keywords, &pyobj_samples, &pyobj_sampleIdx, &pyobj_params) &&
        pyopencv_to(pyobj_samples, samples) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx) &&
        pyopencv_to(pyobj_params, params) )
    {
        ERRWRAP2( retval = _self_->train(samples, sampleIdx, params, &labels));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(labels));
    }

    return NULL;
}



static PyMethodDef pyopencv_CvEM_methods[] =
{
    {"calcLikelihood", (PyCFunction)pyopencv_CvEM_calcLikelihood, METH_KEYWORDS, "calcLikelihood(sample) -> retval"},
    {"clear", (PyCFunction)pyopencv_CvEM_clear, METH_KEYWORDS, "clear() -> None"},
    {"getCovs", (PyCFunction)pyopencv_CvEM_getCovs, METH_KEYWORDS, "getCovs([, covs]) -> covs"},
    {"getLikelihood", (PyCFunction)pyopencv_CvEM_getLikelihood, METH_KEYWORDS, "getLikelihood() -> retval"},
    {"getLikelihoodDelta", (PyCFunction)pyopencv_CvEM_getLikelihoodDelta, METH_KEYWORDS, "getLikelihoodDelta() -> retval"},
    {"getMeans", (PyCFunction)pyopencv_CvEM_getMeans, METH_KEYWORDS, "getMeans() -> retval"},
    {"getNClusters", (PyCFunction)pyopencv_CvEM_getNClusters, METH_KEYWORDS, "getNClusters() -> retval"},
    {"getProbs", (PyCFunction)pyopencv_CvEM_getProbs, METH_KEYWORDS, "getProbs() -> retval"},
    {"getWeights", (PyCFunction)pyopencv_CvEM_getWeights, METH_KEYWORDS, "getWeights() -> retval"},
    {"predict", (PyCFunction)pyopencv_CvEM_predict, METH_KEYWORDS, "predict(sample) -> retval, probs"},
    {"train", (PyCFunction)pyopencv_CvEM_train, METH_KEYWORDS, "train(samples[, sampleIdx[, params]]) -> retval, labels"},

    {NULL,          NULL}
};

static void pyopencv_CvEM_specials(void)
{
    pyopencv_CvEM_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvEM_Type.tp_dealloc = pyopencv_CvEM_dealloc;
    pyopencv_CvEM_Type.tp_repr = pyopencv_CvEM_repr;
    pyopencv_CvEM_Type.tp_getset = pyopencv_CvEM_getseters;
    pyopencv_CvEM_Type.tp_methods = pyopencv_CvEM_methods;
}
static bool pyopencv_to(PyObject* src, CvDTreeParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"max_categories") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"max_categories");
        ok = tmp && pyopencv_to(tmp, dst.max_categories);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"max_depth") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"max_depth");
        ok = tmp && pyopencv_to(tmp, dst.max_depth);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"min_sample_count") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"min_sample_count");
        ok = tmp && pyopencv_to(tmp, dst.min_sample_count);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"cv_folds") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"cv_folds");
        ok = tmp && pyopencv_to(tmp, dst.cv_folds);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"use_surrogates") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"use_surrogates");
        ok = tmp && pyopencv_to(tmp, dst.use_surrogates);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"use_1se_rule") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"use_1se_rule");
        ok = tmp && pyopencv_to(tmp, dst.use_1se_rule);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"truncate_pruned_tree") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"truncate_pruned_tree");
        ok = tmp && pyopencv_to(tmp, dst.truncate_pruned_tree);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"regression_accuracy") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"regression_accuracy");
        ok = tmp && pyopencv_to(tmp, dst.regression_accuracy);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

static PyObject* pyopencv_CvDTree_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<DTree %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvDTree_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvDTree_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvDTree_Type))
        return failmsgp("Incorrect type of self (must be 'CvDTree' or its derivative)");
    CvDTree* _self_ = ((pyopencv_CvDTree_t*)self)->v;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvDTree_getVarImportance(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvDTree_Type))
        return failmsgp("Incorrect type of self (must be 'CvDTree' or its derivative)");
    CvDTree* _self_ = ((pyopencv_CvDTree_t*)self)->v;
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getVarImportance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvDTree_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvDTree_Type))
        return failmsgp("Incorrect type of self (must be 'CvDTree' or its derivative)");
    CvDTree* _self_ = ((pyopencv_CvDTree_t*)self)->v;
    CvDTreeNode* retval;
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_missingDataMask = NULL;
    Mat missingDataMask=cv::Mat();
    bool preprocessedInput=false;

    const char* keywords[] = { "sample", "missingDataMask", "preprocessedInput", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Ob:DTree.predict", (char**)keywords, &pyobj_sample, &pyobj_missingDataMask, &preprocessedInput) &&
        pyopencv_to(pyobj_sample, sample) &&
        pyopencv_to(pyobj_missingDataMask, missingDataMask) )
    {
        ERRWRAP2( retval = _self_->predict(sample, missingDataMask, preprocessedInput));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvDTree_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvDTree_Type))
        return failmsgp("Incorrect type of self (must be 'CvDTree' or its derivative)");
    CvDTree* _self_ = ((pyopencv_CvDTree_t*)self)->v;
    bool retval;
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    int tflag=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_varType = NULL;
    Mat varType=cv::Mat();
    PyObject* pyobj_missingDataMask = NULL;
    Mat missingDataMask=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvDTreeParams params;

    const char* keywords[] = { "trainData", "tflag", "responses", "varIdx", "sampleIdx", "varType", "missingDataMask", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|OOOOO:DTree.train", (char**)keywords, &pyobj_trainData, &tflag, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_varType, &pyobj_missingDataMask, &pyobj_params) &&
        pyopencv_to(pyobj_trainData, trainData) &&
        pyopencv_to(pyobj_responses, responses) &&
        pyopencv_to(pyobj_varIdx, varIdx) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx) &&
        pyopencv_to(pyobj_varType, varType) &&
        pyopencv_to(pyobj_missingDataMask, missingDataMask) &&
        pyopencv_to(pyobj_params, params) )
    {
        ERRWRAP2( retval = _self_->train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvDTree_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvDTree_clear, METH_KEYWORDS, "clear() -> None"},
    {"getVarImportance", (PyCFunction)pyopencv_CvDTree_getVarImportance, METH_KEYWORDS, "getVarImportance() -> retval"},
    {"predict", (PyCFunction)pyopencv_CvDTree_predict, METH_KEYWORDS, "predict(sample[, missingDataMask[, preprocessedInput]]) -> retval"},
    {"train", (PyCFunction)pyopencv_CvDTree_train, METH_KEYWORDS, "train(trainData, tflag, responses[, varIdx[, sampleIdx[, varType[, missingDataMask[, params]]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvDTree_specials(void)
{
    pyopencv_CvDTree_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvDTree_Type.tp_dealloc = pyopencv_CvDTree_dealloc;
    pyopencv_CvDTree_Type.tp_repr = pyopencv_CvDTree_repr;
    pyopencv_CvDTree_Type.tp_getset = pyopencv_CvDTree_getseters;
    pyopencv_CvDTree_Type.tp_methods = pyopencv_CvDTree_methods;
}
static bool pyopencv_to(PyObject* src, CvRTParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"calc_var_importance") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"calc_var_importance");
        ok = tmp && pyopencv_to(tmp, dst.calc_var_importance);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nactive_vars") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nactive_vars");
        ok = tmp && pyopencv_to(tmp, dst.nactive_vars);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"term_crit") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"term_crit");
        ok = tmp && pyopencv_to(tmp, dst.term_crit);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return pyopencv_to(src, (CvDTreeParams&)dst, name);
}

static PyObject* pyopencv_CvRTrees_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<RTrees %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvRTrees_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvRTrees_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvRTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvRTrees' or its derivative)");
    CvRTrees* _self_ = ((pyopencv_CvRTrees_t*)self)->v;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvRTrees_getVarImportance(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvRTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvRTrees' or its derivative)");
    CvRTrees* _self_ = ((pyopencv_CvRTrees_t*)self)->v;
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getVarImportance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvRTrees_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvRTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvRTrees' or its derivative)");
    CvRTrees* _self_ = ((pyopencv_CvRTrees_t*)self)->v;
    float retval;
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_missing = NULL;
    Mat missing=cv::Mat();

    const char* keywords[] = { "sample", "missing", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:RTrees.predict", (char**)keywords, &pyobj_sample, &pyobj_missing) &&
        pyopencv_to(pyobj_sample, sample) &&
        pyopencv_to(pyobj_missing, missing) )
    {
        ERRWRAP2( retval = _self_->predict(sample, missing));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvRTrees_predict_prob(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvRTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvRTrees' or its derivative)");
    CvRTrees* _self_ = ((pyopencv_CvRTrees_t*)self)->v;
    float retval;
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_missing = NULL;
    Mat missing=cv::Mat();

    const char* keywords[] = { "sample", "missing", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:RTrees.predict_prob", (char**)keywords, &pyobj_sample, &pyobj_missing) &&
        pyopencv_to(pyobj_sample, sample) &&
        pyopencv_to(pyobj_missing, missing) )
    {
        ERRWRAP2( retval = _self_->predict_prob(sample, missing));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvRTrees_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvRTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvRTrees' or its derivative)");
    CvRTrees* _self_ = ((pyopencv_CvRTrees_t*)self)->v;
    bool retval;
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    int tflag=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_varType = NULL;
    Mat varType=cv::Mat();
    PyObject* pyobj_missingDataMask = NULL;
    Mat missingDataMask=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvRTParams params;

    const char* keywords[] = { "trainData", "tflag", "responses", "varIdx", "sampleIdx", "varType", "missingDataMask", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|OOOOO:RTrees.train", (char**)keywords, &pyobj_trainData, &tflag, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_varType, &pyobj_missingDataMask, &pyobj_params) &&
        pyopencv_to(pyobj_trainData, trainData) &&
        pyopencv_to(pyobj_responses, responses) &&
        pyopencv_to(pyobj_varIdx, varIdx) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx) &&
        pyopencv_to(pyobj_varType, varType) &&
        pyopencv_to(pyobj_missingDataMask, missingDataMask) &&
        pyopencv_to(pyobj_params, params) )
    {
        ERRWRAP2( retval = _self_->train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvRTrees_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvRTrees_clear, METH_KEYWORDS, "clear() -> None"},
    {"getVarImportance", (PyCFunction)pyopencv_CvRTrees_getVarImportance, METH_KEYWORDS, "getVarImportance() -> retval"},
    {"predict", (PyCFunction)pyopencv_CvRTrees_predict, METH_KEYWORDS, "predict(sample[, missing]) -> retval"},
    {"predict_prob", (PyCFunction)pyopencv_CvRTrees_predict_prob, METH_KEYWORDS, "predict_prob(sample[, missing]) -> retval"},
    {"train", (PyCFunction)pyopencv_CvRTrees_train, METH_KEYWORDS, "train(trainData, tflag, responses[, varIdx[, sampleIdx[, varType[, missingDataMask[, params]]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvRTrees_specials(void)
{
    pyopencv_CvRTrees_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvRTrees_Type.tp_dealloc = pyopencv_CvRTrees_dealloc;
    pyopencv_CvRTrees_Type.tp_repr = pyopencv_CvRTrees_repr;
    pyopencv_CvRTrees_Type.tp_getset = pyopencv_CvRTrees_getseters;
    pyopencv_CvRTrees_Type.tp_methods = pyopencv_CvRTrees_methods;
}

static PyObject* pyopencv_CvERTrees_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ERTrees %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvERTrees_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvERTrees_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvERTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvERTrees' or its derivative)");
    CvERTrees* _self_ = ((pyopencv_CvERTrees_t*)self)->v;
    bool retval;
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    int tflag=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_varType = NULL;
    Mat varType=cv::Mat();
    PyObject* pyobj_missingDataMask = NULL;
    Mat missingDataMask=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvRTParams params;

    const char* keywords[] = { "trainData", "tflag", "responses", "varIdx", "sampleIdx", "varType", "missingDataMask", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|OOOOO:ERTrees.train", (char**)keywords, &pyobj_trainData, &tflag, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_varType, &pyobj_missingDataMask, &pyobj_params) &&
        pyopencv_to(pyobj_trainData, trainData) &&
        pyopencv_to(pyobj_responses, responses) &&
        pyopencv_to(pyobj_varIdx, varIdx) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx) &&
        pyopencv_to(pyobj_varType, varType) &&
        pyopencv_to(pyobj_missingDataMask, missingDataMask) &&
        pyopencv_to(pyobj_params, params) )
    {
        ERRWRAP2( retval = _self_->train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvERTrees_methods[] =
{
    {"train", (PyCFunction)pyopencv_CvERTrees_train, METH_KEYWORDS, "train(trainData, tflag, responses[, varIdx[, sampleIdx[, varType[, missingDataMask[, params]]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvERTrees_specials(void)
{
    pyopencv_CvERTrees_Type.tp_base = &pyopencv_CvRTrees_Type;
    pyopencv_CvERTrees_Type.tp_dealloc = pyopencv_CvERTrees_dealloc;
    pyopencv_CvERTrees_Type.tp_repr = pyopencv_CvERTrees_repr;
    pyopencv_CvERTrees_Type.tp_getset = pyopencv_CvERTrees_getseters;
    pyopencv_CvERTrees_Type.tp_methods = pyopencv_CvERTrees_methods;
}
static bool pyopencv_to(PyObject* src, CvBoostParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"boost_type") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"boost_type");
        ok = tmp && pyopencv_to(tmp, dst.boost_type);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"weak_count") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"weak_count");
        ok = tmp && pyopencv_to(tmp, dst.weak_count);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"split_criteria") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"split_criteria");
        ok = tmp && pyopencv_to(tmp, dst.split_criteria);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"weight_trim_rate") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"weight_trim_rate");
        ok = tmp && pyopencv_to(tmp, dst.weight_trim_rate);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return pyopencv_to(src, (CvDTreeParams&)dst, name);
}

static PyObject* pyopencv_CvBoost_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<Boost %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvBoost_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvBoost_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvBoost_Type))
        return failmsgp("Incorrect type of self (must be 'CvBoost' or its derivative)");
    CvBoost* _self_ = ((pyopencv_CvBoost_t*)self)->v;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvBoost_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvBoost_Type))
        return failmsgp("Incorrect type of self (must be 'CvBoost' or its derivative)");
    CvBoost* _self_ = ((pyopencv_CvBoost_t*)self)->v;
    float retval;
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_missing = NULL;
    Mat missing=cv::Mat();
    PyObject* pyobj_slice = NULL;
    Range slice=cv::Range::all();
    bool rawMode=false;
    bool returnSum=false;

    const char* keywords[] = { "sample", "missing", "slice", "rawMode", "returnSum", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OObb:Boost.predict", (char**)keywords, &pyobj_sample, &pyobj_missing, &pyobj_slice, &rawMode, &returnSum) &&
        pyopencv_to(pyobj_sample, sample) &&
        pyopencv_to(pyobj_missing, missing) &&
        pyopencv_to(pyobj_slice, slice) )
    {
        ERRWRAP2( retval = _self_->predict(sample, missing, slice, rawMode, returnSum));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvBoost_prune(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvBoost_Type))
        return failmsgp("Incorrect type of self (must be 'CvBoost' or its derivative)");
    CvBoost* _self_ = ((pyopencv_CvBoost_t*)self)->v;
    PyObject* pyobj_slice = NULL;
    CvSlice slice;

    const char* keywords[] = { "slice", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Boost.prune", (char**)keywords, &pyobj_slice) &&
        pyopencv_to(pyobj_slice, slice) )
    {
        ERRWRAP2( _self_->prune(slice));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvBoost_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvBoost_Type))
        return failmsgp("Incorrect type of self (must be 'CvBoost' or its derivative)");
    CvBoost* _self_ = ((pyopencv_CvBoost_t*)self)->v;
    bool retval;
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    int tflag=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_varType = NULL;
    Mat varType=cv::Mat();
    PyObject* pyobj_missingDataMask = NULL;
    Mat missingDataMask=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvBoostParams params;
    bool update=false;

    const char* keywords[] = { "trainData", "tflag", "responses", "varIdx", "sampleIdx", "varType", "missingDataMask", "params", "update", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|OOOOOb:Boost.train", (char**)keywords, &pyobj_trainData, &tflag, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_varType, &pyobj_missingDataMask, &pyobj_params, &update) &&
        pyopencv_to(pyobj_trainData, trainData) &&
        pyopencv_to(pyobj_responses, responses) &&
        pyopencv_to(pyobj_varIdx, varIdx) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx) &&
        pyopencv_to(pyobj_varType, varType) &&
        pyopencv_to(pyobj_missingDataMask, missingDataMask) &&
        pyopencv_to(pyobj_params, params) )
    {
        ERRWRAP2( retval = _self_->train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params, update));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvBoost_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvBoost_clear, METH_KEYWORDS, "clear() -> None"},
    {"predict", (PyCFunction)pyopencv_CvBoost_predict, METH_KEYWORDS, "predict(sample[, missing[, slice[, rawMode[, returnSum]]]]) -> retval"},
    {"prune", (PyCFunction)pyopencv_CvBoost_prune, METH_KEYWORDS, "prune(slice) -> None"},
    {"train", (PyCFunction)pyopencv_CvBoost_train, METH_KEYWORDS, "train(trainData, tflag, responses[, varIdx[, sampleIdx[, varType[, missingDataMask[, params[, update]]]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvBoost_specials(void)
{
    pyopencv_CvBoost_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvBoost_Type.tp_dealloc = pyopencv_CvBoost_dealloc;
    pyopencv_CvBoost_Type.tp_repr = pyopencv_CvBoost_repr;
    pyopencv_CvBoost_Type.tp_getset = pyopencv_CvBoost_getseters;
    pyopencv_CvBoost_Type.tp_methods = pyopencv_CvBoost_methods;
}
static bool pyopencv_to(PyObject* src, CvGBTreesParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"weak_count") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"weak_count");
        ok = tmp && pyopencv_to(tmp, dst.weak_count);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"loss_function_type") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"loss_function_type");
        ok = tmp && pyopencv_to(tmp, dst.loss_function_type);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"subsample_portion") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"subsample_portion");
        ok = tmp && pyopencv_to(tmp, dst.subsample_portion);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"shrinkage") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"shrinkage");
        ok = tmp && pyopencv_to(tmp, dst.shrinkage);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return pyopencv_to(src, (CvDTreeParams&)dst, name);
}

static PyObject* pyopencv_CvGBTrees_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<GBTrees %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvGBTrees_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvGBTrees_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvGBTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvGBTrees' or its derivative)");
    CvGBTrees* _self_ = ((pyopencv_CvGBTrees_t*)self)->v;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvGBTrees_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvGBTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvGBTrees' or its derivative)");
    CvGBTrees* _self_ = ((pyopencv_CvGBTrees_t*)self)->v;
    float retval;
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_missing = NULL;
    Mat missing=cv::Mat();
    PyObject* pyobj_slice = NULL;
    Range slice=cv::Range::all();
    int k=-1;

    const char* keywords[] = { "sample", "missing", "slice", "k", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOi:GBTrees.predict", (char**)keywords, &pyobj_sample, &pyobj_missing, &pyobj_slice, &k) &&
        pyopencv_to(pyobj_sample, sample) &&
        pyopencv_to(pyobj_missing, missing) &&
        pyopencv_to(pyobj_slice, slice) )
    {
        ERRWRAP2( retval = _self_->predict(sample, missing, slice, k));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvGBTrees_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvGBTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvGBTrees' or its derivative)");
    CvGBTrees* _self_ = ((pyopencv_CvGBTrees_t*)self)->v;
    bool retval;
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    int tflag=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_varType = NULL;
    Mat varType=cv::Mat();
    PyObject* pyobj_missingDataMask = NULL;
    Mat missingDataMask=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvGBTreesParams params;
    bool update=false;

    const char* keywords[] = { "trainData", "tflag", "responses", "varIdx", "sampleIdx", "varType", "missingDataMask", "params", "update", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|OOOOOb:GBTrees.train", (char**)keywords, &pyobj_trainData, &tflag, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_varType, &pyobj_missingDataMask, &pyobj_params, &update) &&
        pyopencv_to(pyobj_trainData, trainData) &&
        pyopencv_to(pyobj_responses, responses) &&
        pyopencv_to(pyobj_varIdx, varIdx) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx) &&
        pyopencv_to(pyobj_varType, varType) &&
        pyopencv_to(pyobj_missingDataMask, missingDataMask) &&
        pyopencv_to(pyobj_params, params) )
    {
        ERRWRAP2( retval = _self_->train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params, update));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvGBTrees_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvGBTrees_clear, METH_KEYWORDS, "clear() -> None"},
    {"predict", (PyCFunction)pyopencv_CvGBTrees_predict, METH_KEYWORDS, "predict(sample[, missing[, slice[, k]]]) -> retval"},
    {"train", (PyCFunction)pyopencv_CvGBTrees_train, METH_KEYWORDS, "train(trainData, tflag, responses[, varIdx[, sampleIdx[, varType[, missingDataMask[, params[, update]]]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvGBTrees_specials(void)
{
    pyopencv_CvGBTrees_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvGBTrees_Type.tp_dealloc = pyopencv_CvGBTrees_dealloc;
    pyopencv_CvGBTrees_Type.tp_repr = pyopencv_CvGBTrees_repr;
    pyopencv_CvGBTrees_Type.tp_getset = pyopencv_CvGBTrees_getseters;
    pyopencv_CvGBTrees_Type.tp_methods = pyopencv_CvGBTrees_methods;
}
static bool pyopencv_to(PyObject* src, CvANN_MLP_TrainParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"term_crit") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"term_crit");
        ok = tmp && pyopencv_to(tmp, dst.term_crit);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"train_method") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"train_method");
        ok = tmp && pyopencv_to(tmp, dst.train_method);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"bp_dw_scale") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"bp_dw_scale");
        ok = tmp && pyopencv_to(tmp, dst.bp_dw_scale);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"bp_moment_scale") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"bp_moment_scale");
        ok = tmp && pyopencv_to(tmp, dst.bp_moment_scale);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"rp_dw0") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"rp_dw0");
        ok = tmp && pyopencv_to(tmp, dst.rp_dw0);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"rp_dw_plus") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"rp_dw_plus");
        ok = tmp && pyopencv_to(tmp, dst.rp_dw_plus);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"rp_dw_minus") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"rp_dw_minus");
        ok = tmp && pyopencv_to(tmp, dst.rp_dw_minus);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"rp_dw_min") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"rp_dw_min");
        ok = tmp && pyopencv_to(tmp, dst.rp_dw_min);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"rp_dw_max") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"rp_dw_max");
        ok = tmp && pyopencv_to(tmp, dst.rp_dw_max);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

static PyObject* pyopencv_CvANN_MLP_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ANN_MLP %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvANN_MLP_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvANN_MLP_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvANN_MLP_Type))
        return failmsgp("Incorrect type of self (must be 'CvANN_MLP' or its derivative)");
    CvANN_MLP* _self_ = ((pyopencv_CvANN_MLP_t*)self)->v;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( _self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvANN_MLP_create(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvANN_MLP_Type))
        return failmsgp("Incorrect type of self (must be 'CvANN_MLP' or its derivative)");
    CvANN_MLP* _self_ = ((pyopencv_CvANN_MLP_t*)self)->v;
    PyObject* pyobj_layerSizes = NULL;
    Mat layerSizes;
    int activateFunc=CvANN_MLP::SIGMOID_SYM;
    double fparam1=0;
    double fparam2=0;

    const char* keywords[] = { "layerSizes", "activateFunc", "fparam1", "fparam2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|idd:ANN_MLP.create", (char**)keywords, &pyobj_layerSizes, &activateFunc, &fparam1, &fparam2) &&
        pyopencv_to(pyobj_layerSizes, layerSizes) )
    {
        ERRWRAP2( _self_->create(layerSizes, activateFunc, fparam1, fparam2));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvANN_MLP_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvANN_MLP_Type))
        return failmsgp("Incorrect type of self (must be 'CvANN_MLP' or its derivative)");
    CvANN_MLP* _self_ = ((pyopencv_CvANN_MLP_t*)self)->v;
    float retval;
    PyObject* pyobj_inputs = NULL;
    Mat inputs;
    PyObject* pyobj_outputs = NULL;
    Mat outputs;

    const char* keywords[] = { "inputs", "outputs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:ANN_MLP.predict", (char**)keywords, &pyobj_inputs, &pyobj_outputs) &&
        pyopencv_to(pyobj_inputs, inputs) &&
        pyopencv_to(pyobj_outputs, outputs) )
    {
        ERRWRAP2( retval = _self_->predict(inputs, outputs));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvANN_MLP_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvANN_MLP_Type))
        return failmsgp("Incorrect type of self (must be 'CvANN_MLP' or its derivative)");
    CvANN_MLP* _self_ = ((pyopencv_CvANN_MLP_t*)self)->v;
    int retval;
    PyObject* pyobj_inputs = NULL;
    Mat inputs;
    PyObject* pyobj_outputs = NULL;
    Mat outputs;
    PyObject* pyobj_sampleWeights = NULL;
    Mat sampleWeights;
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvANN_MLP_TrainParams params;
    int flags=0;

    const char* keywords[] = { "inputs", "outputs", "sampleWeights", "sampleIdx", "params", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|OOi:ANN_MLP.train", (char**)keywords, &pyobj_inputs, &pyobj_outputs, &pyobj_sampleWeights, &pyobj_sampleIdx, &pyobj_params, &flags) &&
        pyopencv_to(pyobj_inputs, inputs) &&
        pyopencv_to(pyobj_outputs, outputs) &&
        pyopencv_to(pyobj_sampleWeights, sampleWeights) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx) &&
        pyopencv_to(pyobj_params, params) )
    {
        ERRWRAP2( retval = _self_->train(inputs, outputs, sampleWeights, sampleIdx, params, flags));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvANN_MLP_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvANN_MLP_clear, METH_KEYWORDS, "clear() -> None"},
    {"create", (PyCFunction)pyopencv_CvANN_MLP_create, METH_KEYWORDS, "create(layerSizes[, activateFunc[, fparam1[, fparam2]]]) -> None"},
    {"predict", (PyCFunction)pyopencv_CvANN_MLP_predict, METH_KEYWORDS, "predict(inputs, outputs) -> retval"},
    {"train", (PyCFunction)pyopencv_CvANN_MLP_train, METH_KEYWORDS, "train(inputs, outputs, sampleWeights[, sampleIdx[, params[, flags]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvANN_MLP_specials(void)
{
    pyopencv_CvANN_MLP_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvANN_MLP_Type.tp_dealloc = pyopencv_CvANN_MLP_dealloc;
    pyopencv_CvANN_MLP_Type.tp_repr = pyopencv_CvANN_MLP_repr;
    pyopencv_CvANN_MLP_Type.tp_getset = pyopencv_CvANN_MLP_getseters;
    pyopencv_CvANN_MLP_Type.tp_methods = pyopencv_CvANN_MLP_methods;
}

static PyObject* pyopencv_KeyPoint_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<KeyPoint %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_KeyPoint_get_angle(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.angle);
}

static int pyopencv_KeyPoint_set_angle(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the angle attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.angle) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_class_id(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.class_id);
}

static int pyopencv_KeyPoint_set_class_id(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the class_id attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.class_id) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_octave(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.octave);
}

static int pyopencv_KeyPoint_set_octave(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the octave attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.octave) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_pt(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.pt);
}

static int pyopencv_KeyPoint_set_pt(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the pt attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.pt) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_response(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.response);
}

static int pyopencv_KeyPoint_set_response(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the response attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.response) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_size(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.size);
}

static int pyopencv_KeyPoint_set_size(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the size attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.size) ? 0 : -1;
}


static PyGetSetDef pyopencv_KeyPoint_getseters[] =
{
    {(char*)"angle", (getter)pyopencv_KeyPoint_get_angle, (setter)pyopencv_KeyPoint_set_angle, (char*)"angle", NULL},
    {(char*)"class_id", (getter)pyopencv_KeyPoint_get_class_id, (setter)pyopencv_KeyPoint_set_class_id, (char*)"class_id", NULL},
    {(char*)"octave", (getter)pyopencv_KeyPoint_get_octave, (setter)pyopencv_KeyPoint_set_octave, (char*)"octave", NULL},
    {(char*)"pt", (getter)pyopencv_KeyPoint_get_pt, (setter)pyopencv_KeyPoint_set_pt, (char*)"pt", NULL},
    {(char*)"response", (getter)pyopencv_KeyPoint_get_response, (setter)pyopencv_KeyPoint_set_response, (char*)"response", NULL},
    {(char*)"size", (getter)pyopencv_KeyPoint_get_size, (setter)pyopencv_KeyPoint_set_size, (char*)"size", NULL},
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_KeyPoint_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_KeyPoint_specials(void)
{
    pyopencv_KeyPoint_Type.tp_base = NULL;
    pyopencv_KeyPoint_Type.tp_dealloc = pyopencv_KeyPoint_dealloc;
    pyopencv_KeyPoint_Type.tp_repr = pyopencv_KeyPoint_repr;
    pyopencv_KeyPoint_Type.tp_getset = pyopencv_KeyPoint_getseters;
    pyopencv_KeyPoint_Type.tp_methods = pyopencv_KeyPoint_methods;
}

static PyObject* pyopencv_SURF_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<SURF %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_SURF_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_SURF_descriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_SURF_Type))
        return failmsgp("Incorrect type of self (must be 'SURF' or its derivative)");
    cv::SURF* _self_ = ((pyopencv_SURF_t*)self)->v;
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->descriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_SURF_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_SURF_Type))
        return failmsgp("Incorrect type of self (must be 'SURF' or its derivative)");
    cv::SURF* _self_ = ((pyopencv_SURF_t*)self)->v;
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    vector_KeyPoint keypoints;

    const char* keywords[] = { "img", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:SURF.detect", (char**)keywords, &pyobj_img, &pyobj_mask) &&
        pyopencv_to(pyobj_img, img) &&
        pyopencv_to(pyobj_mask, mask) )
    {
        ERRWRAP2( _self_->operator()(img, mask, keypoints));
        return pyopencv_from(keypoints);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    vector_KeyPoint keypoints;
    vector_float descriptors;
    bool useProvidedKeypoints=false;

    const char* keywords[] = { "img", "mask", "useProvidedKeypoints", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|b:SURF.detect", (char**)keywords, &pyobj_img, &pyobj_mask, &useProvidedKeypoints) &&
        pyopencv_to(pyobj_img, img) &&
        pyopencv_to(pyobj_mask, mask) )
    {
        ERRWRAP2( _self_->operator()(img, mask, keypoints, descriptors, useProvidedKeypoints));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_SURF_methods[] =
{
    {"descriptorSize", (PyCFunction)pyopencv_SURF_descriptorSize, METH_KEYWORDS, "descriptorSize() -> retval"},
    {"detect", (PyCFunction)pyopencv_SURF_detect, METH_KEYWORDS, "detect(img, mask) -> keypoints  or  detect(img, mask[, useProvidedKeypoints]) -> keypoints, descriptors"},

    {NULL,          NULL}
};

static void pyopencv_SURF_specials(void)
{
    pyopencv_SURF_Type.tp_base = NULL;
    pyopencv_SURF_Type.tp_dealloc = pyopencv_SURF_dealloc;
    pyopencv_SURF_Type.tp_repr = pyopencv_SURF_repr;
    pyopencv_SURF_Type.tp_getset = pyopencv_SURF_getseters;
    pyopencv_SURF_Type.tp_methods = pyopencv_SURF_methods;
}

static PyObject* pyopencv_MSER_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<MSER %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_MSER_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_MSER_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_MSER_Type))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    cv::MSER* _self_ = ((pyopencv_MSER_t*)self)->v;
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_vector_Point msers;
    PyObject* pyobj_mask = NULL;
    Mat mask;

    const char* keywords[] = { "image", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:MSER.detect", (char**)keywords, &pyobj_image, &pyobj_mask) &&
        pyopencv_to(pyobj_image, image) &&
        pyopencv_to(pyobj_mask, mask) )
    {
        ERRWRAP2( _self_->operator()(image, msers, mask));
        return pyopencv_from(msers);
    }

    return NULL;
}



static PyMethodDef pyopencv_MSER_methods[] =
{
    {"detect", (PyCFunction)pyopencv_MSER_detect, METH_KEYWORDS, "detect(image, mask) -> msers"},

    {NULL,          NULL}
};

static void pyopencv_MSER_specials(void)
{
    pyopencv_MSER_Type.tp_base = NULL;
    pyopencv_MSER_Type.tp_dealloc = pyopencv_MSER_dealloc;
    pyopencv_MSER_Type.tp_repr = pyopencv_MSER_repr;
    pyopencv_MSER_Type.tp_getset = pyopencv_MSER_getseters;
    pyopencv_MSER_Type.tp_methods = pyopencv_MSER_methods;
}

static PyObject* pyopencv_StarDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StarDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_StarDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_StarDetector_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StarDetector_Type))
        return failmsgp("Incorrect type of self (must be 'StarDetector' or its derivative)");
    cv::StarDetector* _self_ = ((pyopencv_StarDetector_t*)self)->v;
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_KeyPoint keypoints;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:StarDetector.detect", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image) )
    {
        ERRWRAP2( _self_->operator()(image, keypoints));
        return pyopencv_from(keypoints);
    }

    return NULL;
}



static PyMethodDef pyopencv_StarDetector_methods[] =
{
    {"detect", (PyCFunction)pyopencv_StarDetector_detect, METH_KEYWORDS, "detect(image) -> keypoints"},

    {NULL,          NULL}
};

static void pyopencv_StarDetector_specials(void)
{
    pyopencv_StarDetector_Type.tp_base = NULL;
    pyopencv_StarDetector_Type.tp_dealloc = pyopencv_StarDetector_dealloc;
    pyopencv_StarDetector_Type.tp_repr = pyopencv_StarDetector_repr;
    pyopencv_StarDetector_Type.tp_getset = pyopencv_StarDetector_getseters;
    pyopencv_StarDetector_Type.tp_methods = pyopencv_StarDetector_methods;
}

static PyObject* pyopencv_StereoBM_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StereoBM %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_StereoBM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_StereoBM_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    cv::StereoBM* _self_ = ((pyopencv_StereoBM_t*)self)->v;
    PyObject* pyobj_left = NULL;
    Mat left;
    PyObject* pyobj_right = NULL;
    Mat right;
    PyObject* pyobj_disparity = NULL;
    Mat disparity;
    int disptype=CV_16S;

    const char* keywords[] = { "left", "right", "disparity", "disptype", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|Oi:StereoBM.compute", (char**)keywords, &pyobj_left, &pyobj_right, &pyobj_disparity, &disptype) &&
        pyopencv_to(pyobj_left, left) &&
        pyopencv_to(pyobj_right, right) &&
        pyopencv_to(pyobj_disparity, disparity) )
    {
        ERRWRAP2( _self_->operator()(left, right, disparity, disptype));
        return pyopencv_from(disparity);
    }

    return NULL;
}



static PyMethodDef pyopencv_StereoBM_methods[] =
{
    {"compute", (PyCFunction)pyopencv_StereoBM_compute, METH_KEYWORDS, "compute(left, right[, disparity[, disptype]]) -> disparity"},

    {NULL,          NULL}
};

static void pyopencv_StereoBM_specials(void)
{
    pyopencv_StereoBM_Type.tp_base = NULL;
    pyopencv_StereoBM_Type.tp_dealloc = pyopencv_StereoBM_dealloc;
    pyopencv_StereoBM_Type.tp_repr = pyopencv_StereoBM_repr;
    pyopencv_StereoBM_Type.tp_getset = pyopencv_StereoBM_getseters;
    pyopencv_StereoBM_Type.tp_methods = pyopencv_StereoBM_methods;
}

static PyObject* pyopencv_StereoSGBM_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StereoSGBM %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_StereoSGBM_get_P1(pyopencv_StereoSGBM_t* p, void *closure)
{
    return pyopencv_from(p->v->P1);
}

static int pyopencv_StereoSGBM_set_P1(pyopencv_StereoSGBM_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the P1 attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->P1) ? 0 : -1;
}

static PyObject* pyopencv_StereoSGBM_get_P2(pyopencv_StereoSGBM_t* p, void *closure)
{
    return pyopencv_from(p->v->P2);
}

static int pyopencv_StereoSGBM_set_P2(pyopencv_StereoSGBM_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the P2 attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->P2) ? 0 : -1;
}

static PyObject* pyopencv_StereoSGBM_get_SADWindowSize(pyopencv_StereoSGBM_t* p, void *closure)
{
    return pyopencv_from(p->v->SADWindowSize);
}

static int pyopencv_StereoSGBM_set_SADWindowSize(pyopencv_StereoSGBM_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the SADWindowSize attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->SADWindowSize) ? 0 : -1;
}

static PyObject* pyopencv_StereoSGBM_get_disp12MaxDiff(pyopencv_StereoSGBM_t* p, void *closure)
{
    return pyopencv_from(p->v->disp12MaxDiff);
}

static int pyopencv_StereoSGBM_set_disp12MaxDiff(pyopencv_StereoSGBM_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the disp12MaxDiff attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->disp12MaxDiff) ? 0 : -1;
}

static PyObject* pyopencv_StereoSGBM_get_fullDP(pyopencv_StereoSGBM_t* p, void *closure)
{
    return pyopencv_from(p->v->fullDP);
}

static int pyopencv_StereoSGBM_set_fullDP(pyopencv_StereoSGBM_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the fullDP attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->fullDP) ? 0 : -1;
}

static PyObject* pyopencv_StereoSGBM_get_minDisparity(pyopencv_StereoSGBM_t* p, void *closure)
{
    return pyopencv_from(p->v->minDisparity);
}

static int pyopencv_StereoSGBM_set_minDisparity(pyopencv_StereoSGBM_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minDisparity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->minDisparity) ? 0 : -1;
}

static PyObject* pyopencv_StereoSGBM_get_numberOfDisparities(pyopencv_StereoSGBM_t* p, void *closure)
{
    return pyopencv_from(p->v->numberOfDisparities);
}

static int pyopencv_StereoSGBM_set_numberOfDisparities(pyopencv_StereoSGBM_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the numberOfDisparities attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->numberOfDisparities) ? 0 : -1;
}

static PyObject* pyopencv_StereoSGBM_get_preFilterCap(pyopencv_StereoSGBM_t* p, void *closure)
{
    return pyopencv_from(p->v->preFilterCap);
}

static int pyopencv_StereoSGBM_set_preFilterCap(pyopencv_StereoSGBM_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the preFilterCap attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->preFilterCap) ? 0 : -1;
}

static PyObject* pyopencv_StereoSGBM_get_speckleRange(pyopencv_StereoSGBM_t* p, void *closure)
{
    return pyopencv_from(p->v->speckleRange);
}

static int pyopencv_StereoSGBM_set_speckleRange(pyopencv_StereoSGBM_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the speckleRange attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->speckleRange) ? 0 : -1;
}

static PyObject* pyopencv_StereoSGBM_get_speckleWindowSize(pyopencv_StereoSGBM_t* p, void *closure)
{
    return pyopencv_from(p->v->speckleWindowSize);
}

static int pyopencv_StereoSGBM_set_speckleWindowSize(pyopencv_StereoSGBM_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the speckleWindowSize attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->speckleWindowSize) ? 0 : -1;
}

static PyObject* pyopencv_StereoSGBM_get_uniquenessRatio(pyopencv_StereoSGBM_t* p, void *closure)
{
    return pyopencv_from(p->v->uniquenessRatio);
}

static int pyopencv_StereoSGBM_set_uniquenessRatio(pyopencv_StereoSGBM_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the uniquenessRatio attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->uniquenessRatio) ? 0 : -1;
}


static PyGetSetDef pyopencv_StereoSGBM_getseters[] =
{
    {(char*)"P1", (getter)pyopencv_StereoSGBM_get_P1, (setter)pyopencv_StereoSGBM_set_P1, (char*)"P1", NULL},
    {(char*)"P2", (getter)pyopencv_StereoSGBM_get_P2, (setter)pyopencv_StereoSGBM_set_P2, (char*)"P2", NULL},
    {(char*)"SADWindowSize", (getter)pyopencv_StereoSGBM_get_SADWindowSize, (setter)pyopencv_StereoSGBM_set_SADWindowSize, (char*)"SADWindowSize", NULL},
    {(char*)"disp12MaxDiff", (getter)pyopencv_StereoSGBM_get_disp12MaxDiff, (setter)pyopencv_StereoSGBM_set_disp12MaxDiff, (char*)"disp12MaxDiff", NULL},
    {(char*)"fullDP", (getter)pyopencv_StereoSGBM_get_fullDP, (setter)pyopencv_StereoSGBM_set_fullDP, (char*)"fullDP", NULL},
    {(char*)"minDisparity", (getter)pyopencv_StereoSGBM_get_minDisparity, (setter)pyopencv_StereoSGBM_set_minDisparity, (char*)"minDisparity", NULL},
    {(char*)"numberOfDisparities", (getter)pyopencv_StereoSGBM_get_numberOfDisparities, (setter)pyopencv_StereoSGBM_set_numberOfDisparities, (char*)"numberOfDisparities", NULL},
    {(char*)"preFilterCap", (getter)pyopencv_StereoSGBM_get_preFilterCap, (setter)pyopencv_StereoSGBM_set_preFilterCap, (char*)"preFilterCap", NULL},
    {(char*)"speckleRange", (getter)pyopencv_StereoSGBM_get_speckleRange, (setter)pyopencv_StereoSGBM_set_speckleRange, (char*)"speckleRange", NULL},
    {(char*)"speckleWindowSize", (getter)pyopencv_StereoSGBM_get_speckleWindowSize, (setter)pyopencv_StereoSGBM_set_speckleWindowSize, (char*)"speckleWindowSize", NULL},
    {(char*)"uniquenessRatio", (getter)pyopencv_StereoSGBM_get_uniquenessRatio, (setter)pyopencv_StereoSGBM_set_uniquenessRatio, (char*)"uniquenessRatio", NULL},
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_StereoSGBM_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    cv::StereoSGBM* _self_ = ((pyopencv_StereoSGBM_t*)self)->v;
    PyObject* pyobj_left = NULL;
    Mat left;
    PyObject* pyobj_right = NULL;
    Mat right;
    PyObject* pyobj_disp = NULL;
    Mat disp;

    const char* keywords[] = { "left", "right", "disp", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:StereoSGBM.compute", (char**)keywords, &pyobj_left, &pyobj_right, &pyobj_disp) &&
        pyopencv_to(pyobj_left, left) &&
        pyopencv_to(pyobj_right, right) &&
        pyopencv_to(pyobj_disp, disp) )
    {
        ERRWRAP2( _self_->operator()(left, right, disp));
        return pyopencv_from(disp);
    }

    return NULL;
}



static PyMethodDef pyopencv_StereoSGBM_methods[] =
{
    {"compute", (PyCFunction)pyopencv_StereoSGBM_compute, METH_KEYWORDS, "compute(left, right[, disp]) -> disp"},

    {NULL,          NULL}
};

static void pyopencv_StereoSGBM_specials(void)
{
    pyopencv_StereoSGBM_Type.tp_base = NULL;
    pyopencv_StereoSGBM_Type.tp_dealloc = pyopencv_StereoSGBM_dealloc;
    pyopencv_StereoSGBM_Type.tp_repr = pyopencv_StereoSGBM_repr;
    pyopencv_StereoSGBM_Type.tp_getset = pyopencv_StereoSGBM_getseters;
    pyopencv_StereoSGBM_Type.tp_methods = pyopencv_StereoSGBM_methods;
}

static PyObject* pyopencv_CascadeClassifier_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<CascadeClassifier %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CascadeClassifier_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CascadeClassifier_detectMultiScale(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    cv::CascadeClassifier* _self_ = ((pyopencv_CascadeClassifier_t*)self)->v;
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_Rect objects;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOO:CascadeClassifier.detectMultiScale", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize) &&
        pyopencv_to(pyobj_image, image) &&
        pyopencv_to(pyobj_minSize, minSize) &&
        pyopencv_to(pyobj_maxSize, maxSize) )
    {
        ERRWRAP2( _self_->detectMultiScale(image, objects, scaleFactor, minNeighbors, flags, minSize, maxSize));
        return pyopencv_from(objects);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_Rect objects;
    PyObject* pyobj_rejectLevels = NULL;
    vector_int rejectLevels;
    PyObject* pyobj_levelWeights = NULL;
    vector_double levelWeights;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;
    bool outputRejectLevels=false;

    const char* keywords[] = { "image", "rejectLevels", "levelWeights", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", "outputRejectLevels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|diiOOb:CascadeClassifier.detectMultiScale", (char**)keywords, &pyobj_image, &pyobj_rejectLevels, &pyobj_levelWeights, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize, &outputRejectLevels) &&
        pyopencv_to(pyobj_image, image) &&
        pyopencv_to(pyobj_rejectLevels, rejectLevels) &&
        pyopencv_to(pyobj_levelWeights, levelWeights) &&
        pyopencv_to(pyobj_minSize, minSize) &&
        pyopencv_to(pyobj_maxSize, maxSize) )
    {
        ERRWRAP2( _self_->detectMultiScale(image, objects, rejectLevels, levelWeights, scaleFactor, minNeighbors, flags, minSize, maxSize, outputRejectLevels));
        return pyopencv_from(objects);
    }
    }

    return NULL;
}

static PyObject* pyopencv_CascadeClassifier_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    cv::CascadeClassifier* _self_ = ((pyopencv_CascadeClassifier_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CascadeClassifier_load(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    cv::CascadeClassifier* _self_ = ((pyopencv_CascadeClassifier_t*)self)->v;
    bool retval;
    PyObject* pyobj_filename = NULL;
    string filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:CascadeClassifier.load", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename) )
    {
        ERRWRAP2( retval = _self_->load(filename));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CascadeClassifier_methods[] =
{
    {"detectMultiScale", (PyCFunction)pyopencv_CascadeClassifier_detectMultiScale, METH_KEYWORDS, "detectMultiScale(image[, scaleFactor[, minNeighbors[, flags[, minSize[, maxSize]]]]]) -> objects  or  detectMultiScale(image, rejectLevels, levelWeights[, scaleFactor[, minNeighbors[, flags[, minSize[, maxSize[, outputRejectLevels]]]]]]) -> objects"},
    {"empty", (PyCFunction)pyopencv_CascadeClassifier_empty, METH_KEYWORDS, "empty() -> retval"},
    {"load", (PyCFunction)pyopencv_CascadeClassifier_load, METH_KEYWORDS, "load(filename) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CascadeClassifier_specials(void)
{
    pyopencv_CascadeClassifier_Type.tp_base = NULL;
    pyopencv_CascadeClassifier_Type.tp_dealloc = pyopencv_CascadeClassifier_dealloc;
    pyopencv_CascadeClassifier_Type.tp_repr = pyopencv_CascadeClassifier_repr;
    pyopencv_CascadeClassifier_Type.tp_getset = pyopencv_CascadeClassifier_getseters;
    pyopencv_CascadeClassifier_Type.tp_methods = pyopencv_CascadeClassifier_methods;
}

static PyObject* pyopencv_HOGDescriptor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<HOGDescriptor %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_HOGDescriptor_get_L2HysThreshold(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->L2HysThreshold);
}

static PyObject* pyopencv_HOGDescriptor_get_blockSize(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->blockSize);
}

static PyObject* pyopencv_HOGDescriptor_get_blockStride(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->blockStride);
}

static PyObject* pyopencv_HOGDescriptor_get_cellSize(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->cellSize);
}

static PyObject* pyopencv_HOGDescriptor_get_derivAperture(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->derivAperture);
}

static PyObject* pyopencv_HOGDescriptor_get_gammaCorrection(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->gammaCorrection);
}

static PyObject* pyopencv_HOGDescriptor_get_histogramNormType(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->histogramNormType);
}

static PyObject* pyopencv_HOGDescriptor_get_nbins(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->nbins);
}

static PyObject* pyopencv_HOGDescriptor_get_nlevels(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->nlevels);
}

static PyObject* pyopencv_HOGDescriptor_get_svmDetector(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->svmDetector);
}

static PyObject* pyopencv_HOGDescriptor_get_winSigma(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->winSigma);
}

static PyObject* pyopencv_HOGDescriptor_get_winSize(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->winSize);
}


static PyGetSetDef pyopencv_HOGDescriptor_getseters[] =
{
    {(char*)"L2HysThreshold", (getter)pyopencv_HOGDescriptor_get_L2HysThreshold, NULL, (char*)"L2HysThreshold", NULL},
    {(char*)"blockSize", (getter)pyopencv_HOGDescriptor_get_blockSize, NULL, (char*)"blockSize", NULL},
    {(char*)"blockStride", (getter)pyopencv_HOGDescriptor_get_blockStride, NULL, (char*)"blockStride", NULL},
    {(char*)"cellSize", (getter)pyopencv_HOGDescriptor_get_cellSize, NULL, (char*)"cellSize", NULL},
    {(char*)"derivAperture", (getter)pyopencv_HOGDescriptor_get_derivAperture, NULL, (char*)"derivAperture", NULL},
    {(char*)"gammaCorrection", (getter)pyopencv_HOGDescriptor_get_gammaCorrection, NULL, (char*)"gammaCorrection", NULL},
    {(char*)"histogramNormType", (getter)pyopencv_HOGDescriptor_get_histogramNormType, NULL, (char*)"histogramNormType", NULL},
    {(char*)"nbins", (getter)pyopencv_HOGDescriptor_get_nbins, NULL, (char*)"nbins", NULL},
    {(char*)"nlevels", (getter)pyopencv_HOGDescriptor_get_nlevels, NULL, (char*)"nlevels", NULL},
    {(char*)"svmDetector", (getter)pyopencv_HOGDescriptor_get_svmDetector, NULL, (char*)"svmDetector", NULL},
    {(char*)"winSigma", (getter)pyopencv_HOGDescriptor_get_winSigma, NULL, (char*)"winSigma", NULL},
    {(char*)"winSize", (getter)pyopencv_HOGDescriptor_get_winSize, NULL, (char*)"winSize", NULL},
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_HOGDescriptor_checkDetectorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->checkDetectorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v;
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_float descriptors;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_locations = NULL;
    vector_Point locations=vector<Point>();

    const char* keywords[] = { "img", "winStride", "padding", "locations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOO:HOGDescriptor.compute", (char**)keywords, &pyobj_img, &pyobj_winStride, &pyobj_padding, &pyobj_locations) &&
        pyopencv_to(pyobj_img, img) &&
        pyopencv_to(pyobj_winStride, winStride) &&
        pyopencv_to(pyobj_padding, padding) &&
        pyopencv_to(pyobj_locations, locations) )
    {
        ERRWRAP2( _self_->compute(img, descriptors, winStride, padding, locations));
        return pyopencv_from(descriptors);
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_computeGradient(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v;
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_grad = NULL;
    Mat grad;
    PyObject* pyobj_angleOfs = NULL;
    Mat angleOfs;
    PyObject* pyobj_paddingTL = NULL;
    Size paddingTL;
    PyObject* pyobj_paddingBR = NULL;
    Size paddingBR;

    const char* keywords[] = { "img", "grad", "angleOfs", "paddingTL", "paddingBR", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOOO:HOGDescriptor.computeGradient", (char**)keywords, &pyobj_img, &pyobj_grad, &pyobj_angleOfs, &pyobj_paddingTL, &pyobj_paddingBR) &&
        pyopencv_to(pyobj_img, img) &&
        pyopencv_to(pyobj_grad, grad) &&
        pyopencv_to(pyobj_angleOfs, angleOfs) &&
        pyopencv_to(pyobj_paddingTL, paddingTL) &&
        pyopencv_to(pyobj_paddingBR, paddingBR) )
    {
        ERRWRAP2( _self_->computeGradient(img, grad, angleOfs, paddingTL, paddingBR));
        return Py_BuildValue("(NN)", pyopencv_from(grad), pyopencv_from(angleOfs));
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v;
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_Point foundLocations;
    PyObject* pyobj_weights = NULL;
    vector_double weights;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_searchLocations = NULL;
    vector_Point searchLocations=vector<Point>();

    const char* keywords[] = { "img", "weights", "hitThreshold", "winStride", "padding", "searchLocations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|dOOO:HOGDescriptor.detect", (char**)keywords, &pyobj_img, &pyobj_weights, &hitThreshold, &pyobj_winStride, &pyobj_padding, &pyobj_searchLocations) &&
        pyopencv_to(pyobj_img, img) &&
        pyopencv_to(pyobj_weights, weights) &&
        pyopencv_to(pyobj_winStride, winStride) &&
        pyopencv_to(pyobj_padding, padding) &&
        pyopencv_to(pyobj_searchLocations, searchLocations) )
    {
        ERRWRAP2( _self_->detect(img, foundLocations, weights, hitThreshold, winStride, padding, searchLocations));
        return pyopencv_from(foundLocations);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_Point foundLocations;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_searchLocations = NULL;
    vector_Point searchLocations=vector<Point>();

    const char* keywords[] = { "img", "hitThreshold", "winStride", "padding", "searchLocations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|dOOO:HOGDescriptor.detect", (char**)keywords, &pyobj_img, &hitThreshold, &pyobj_winStride, &pyobj_padding, &pyobj_searchLocations) &&
        pyopencv_to(pyobj_img, img) &&
        pyopencv_to(pyobj_winStride, winStride) &&
        pyopencv_to(pyobj_padding, padding) &&
        pyopencv_to(pyobj_searchLocations, searchLocations) )
    {
        ERRWRAP2( _self_->detect(img, foundLocations, hitThreshold, winStride, padding, searchLocations));
        return pyopencv_from(foundLocations);
    }
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_detectMultiScale(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v;
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_Rect foundLocations;
    PyObject* pyobj_foundWeights = NULL;
    vector_double foundWeights;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    double scale=1.05;
    double finalThreshold=2.0;
    bool useMeanshiftGrouping=false;

    const char* keywords[] = { "img", "foundWeights", "hitThreshold", "winStride", "padding", "scale", "finalThreshold", "useMeanshiftGrouping", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|dOOddb:HOGDescriptor.detectMultiScale", (char**)keywords, &pyobj_img, &pyobj_foundWeights, &hitThreshold, &pyobj_winStride, &pyobj_padding, &scale, &finalThreshold, &useMeanshiftGrouping) &&
        pyopencv_to(pyobj_img, img) &&
        pyopencv_to(pyobj_foundWeights, foundWeights) &&
        pyopencv_to(pyobj_winStride, winStride) &&
        pyopencv_to(pyobj_padding, padding) )
    {
        ERRWRAP2( _self_->detectMultiScale(img, foundLocations, foundWeights, hitThreshold, winStride, padding, scale, finalThreshold, useMeanshiftGrouping));
        return pyopencv_from(foundLocations);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_Rect foundLocations;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    double scale=1.05;
    double finalThreshold=2.0;
    bool useMeanshiftGrouping=false;

    const char* keywords[] = { "img", "hitThreshold", "winStride", "padding", "scale", "finalThreshold", "useMeanshiftGrouping", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|dOOddb:HOGDescriptor.detectMultiScale", (char**)keywords, &pyobj_img, &hitThreshold, &pyobj_winStride, &pyobj_padding, &scale, &finalThreshold, &useMeanshiftGrouping) &&
        pyopencv_to(pyobj_img, img) &&
        pyopencv_to(pyobj_winStride, winStride) &&
        pyopencv_to(pyobj_padding, padding) )
    {
        ERRWRAP2( _self_->detectMultiScale(img, foundLocations, hitThreshold, winStride, padding, scale, finalThreshold, useMeanshiftGrouping));
        return pyopencv_from(foundLocations);
    }
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_getDescriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v;
    size_t retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getDescriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_getWinSigma(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v;
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2( retval = _self_->getWinSigma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_load(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v;
    bool retval;
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_objname = NULL;
    String objname;

    const char* keywords[] = { "filename", "objname", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:HOGDescriptor.load", (char**)keywords, &pyobj_filename, &pyobj_objname) &&
        pyopencv_to(pyobj_filename, filename) &&
        pyopencv_to(pyobj_objname, objname) )
    {
        ERRWRAP2( retval = _self_->load(filename, objname));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_save(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v;
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_objname = NULL;
    String objname;

    const char* keywords[] = { "filename", "objname", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:HOGDescriptor.save", (char**)keywords, &pyobj_filename, &pyobj_objname) &&
        pyopencv_to(pyobj_filename, filename) &&
        pyopencv_to(pyobj_objname, objname) )
    {
        ERRWRAP2( _self_->save(filename, objname));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_setSVMDetector(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v;
    PyObject* pyobj__svmdetector = NULL;
    Mat _svmdetector;

    const char* keywords[] = { "_svmdetector", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:HOGDescriptor.setSVMDetector", (char**)keywords, &pyobj__svmdetector) &&
        pyopencv_to(pyobj__svmdetector, _svmdetector) )
    {
        ERRWRAP2( _self_->setSVMDetector(_svmdetector));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_HOGDescriptor_methods[] =
{
    {"checkDetectorSize", (PyCFunction)pyopencv_HOGDescriptor_checkDetectorSize, METH_KEYWORDS, "checkDetectorSize() -> retval"},
    {"compute", (PyCFunction)pyopencv_HOGDescriptor_compute, METH_KEYWORDS, "compute(img[, winStride[, padding[, locations]]]) -> descriptors"},
    {"computeGradient", (PyCFunction)pyopencv_HOGDescriptor_computeGradient, METH_KEYWORDS, "computeGradient(img[, grad[, angleOfs[, paddingTL[, paddingBR]]]]) -> grad, angleOfs"},
    {"detect", (PyCFunction)pyopencv_HOGDescriptor_detect, METH_KEYWORDS, "detect(img, weights[, hitThreshold[, winStride[, padding[, searchLocations]]]]) -> foundLocations  or  detect(img[, hitThreshold[, winStride[, padding[, searchLocations]]]]) -> foundLocations"},
    {"detectMultiScale", (PyCFunction)pyopencv_HOGDescriptor_detectMultiScale, METH_KEYWORDS, "detectMultiScale(img, foundWeights[, hitThreshold[, winStride[, padding[, scale[, finalThreshold[, useMeanshiftGrouping]]]]]]) -> foundLocations  or  detectMultiScale(img[, hitThreshold[, winStride[, padding[, scale[, finalThreshold[, useMeanshiftGrouping]]]]]]) -> foundLocations"},
    {"getDescriptorSize", (PyCFunction)pyopencv_HOGDescriptor_getDescriptorSize, METH_KEYWORDS, "getDescriptorSize() -> retval"},
    {"getWinSigma", (PyCFunction)pyopencv_HOGDescriptor_getWinSigma, METH_KEYWORDS, "getWinSigma() -> retval"},
    {"load", (PyCFunction)pyopencv_HOGDescriptor_load, METH_KEYWORDS, "load(filename[, objname]) -> retval"},
    {"save", (PyCFunction)pyopencv_HOGDescriptor_save, METH_KEYWORDS, "save(filename[, objname]) -> None"},
    {"setSVMDetector", (PyCFunction)pyopencv_HOGDescriptor_setSVMDetector, METH_KEYWORDS, "setSVMDetector(_svmdetector) -> None"},

    {NULL,          NULL}
};

static void pyopencv_HOGDescriptor_specials(void)
{
    pyopencv_HOGDescriptor_Type.tp_base = NULL;
    pyopencv_HOGDescriptor_Type.tp_dealloc = pyopencv_HOGDescriptor_dealloc;
    pyopencv_HOGDescriptor_Type.tp_repr = pyopencv_HOGDescriptor_repr;
    pyopencv_HOGDescriptor_Type.tp_getset = pyopencv_HOGDescriptor_getseters;
    pyopencv_HOGDescriptor_Type.tp_methods = pyopencv_HOGDescriptor_methods;
}
