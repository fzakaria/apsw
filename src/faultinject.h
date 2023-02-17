/*  DO NOT EDIT THIS FILE
    This file is generated by tools/genfaultinject.py
    Edit that not this */
#ifdef APSW_TESTFIXTURES

#ifndef APSW_FAULT_INJECT_INCLUDED

static int
APSW_FaultInjectControl(const char *faultfunction, const char *filename, const char *funcname, int linenum, const char *args, PyObject **obj);

#define APSW_FAULT_INJECT_INCLUDED
#endif

#ifdef APSW_FAULT_CLEAR

#undef PyErr_NewExceptionWithDoc
#undef PyModule_AddIntConstant
#undef PyModule_AddObject
#undef PyModule_Create2
#undef PySet_New
#undef PyType_Ready
#undef convert_value_to_pyobject
#undef getfunctionargs
#undef sqlite3_threadsafe

#else

#define PyErr_NewExceptionWithDoc(...) \
({                                                                                                                   \
    PyObject *_res = 0;                                                                                              \
    PyGILState_STATE gilstate = PyGILState_Ensure();                                                                 \
    switch (APSW_FaultInjectControl("PyErr_NewExceptionWithDoc", __FILE__, __func__, __LINE__, #__VA_ARGS__, &_res)) \
    {                                                                                                                \
    case 0x1FACADE:                                                                                                  \
        assert(_res == 0);                                                                                           \
        _res = PyErr_NewExceptionWithDoc(__VA_ARGS__);                                                               \
        break;                                                                                                       \
    default:                                                                                                         \
        assert(_res || PyErr_Occurred());                                                                            \
        assert(!(_res && PyErr_Occurred()));                                                                         \
        break;                                                                                                       \
    }                                                                                                                \
    PyGILState_Release(gilstate);                                                                                    \
    _res;                                                                                                            \
})
#define PyModule_AddIntConstant(...) \
({                                                                                                                  \
    PyObject *_res2=0;                                                                                              \
    int _res = 0;                                                                                                   \
    PyGILState_STATE gilstate = PyGILState_Ensure();                                                                \
    switch (APSW_FaultInjectControl("PyModule_AddIntConstant", __FILE__, __func__, __LINE__, #__VA_ARGS__, &_res2)) \
    {                                                                                                               \
    case 0x1FACADE:                                                                                                 \
        assert(_res == 0);                                                                                          \
        _res = PyModule_AddIntConstant(__VA_ARGS__);                                                                \
        break;                                                                                                      \
    default:                                                                                                        \
        if(PyTuple_Check(_res2))                                                                                    \
        {                                                                                                           \
            assert(3 == PyTuple_GET_SIZE(_res2));                                                                   \
            _res = PyLong_AsLong(PyTuple_GET_ITEM(_res2, 0));                                                       \
            assert(PyUnicode_Check(PyTuple_GET_ITEM(_res2, 2)));                                                    \
            PyErr_Format(PyTuple_GET_ITEM(_res2, 1), "%s", PyUnicode_AsUTF8(PyTuple_GET_ITEM(_res2, 2)));           \
        }                                                                                                           \
        else                                                                                                        \
        {                                                                                                           \
            assert(PyLong_Check(_res2));                                                                            \
            _res = PyLong_AsLong(_res2);                                                                            \
        }                                                                                                           \
        break;                                                                                                      \
    }                                                                                                               \
    Py_XDECREF(_res2);                                                                                              \
    PyGILState_Release(gilstate);                                                                                   \
    _res;                                                                                                           \
})
#define PyModule_AddObject(...) \
({                                                                                                             \
    PyObject *_res2=0;                                                                                         \
    int _res = 0;                                                                                              \
    PyGILState_STATE gilstate = PyGILState_Ensure();                                                           \
    switch (APSW_FaultInjectControl("PyModule_AddObject", __FILE__, __func__, __LINE__, #__VA_ARGS__, &_res2)) \
    {                                                                                                          \
    case 0x1FACADE:                                                                                            \
        assert(_res == 0);                                                                                     \
        _res = PyModule_AddObject(__VA_ARGS__);                                                                \
        break;                                                                                                 \
    default:                                                                                                   \
        if(PyTuple_Check(_res2))                                                                               \
        {                                                                                                      \
            assert(3 == PyTuple_GET_SIZE(_res2));                                                              \
            _res = PyLong_AsLong(PyTuple_GET_ITEM(_res2, 0));                                                  \
            assert(PyUnicode_Check(PyTuple_GET_ITEM(_res2, 2)));                                               \
            PyErr_Format(PyTuple_GET_ITEM(_res2, 1), "%s", PyUnicode_AsUTF8(PyTuple_GET_ITEM(_res2, 2)));      \
        }                                                                                                      \
        else                                                                                                   \
        {                                                                                                      \
            assert(PyLong_Check(_res2));                                                                       \
            _res = PyLong_AsLong(_res2);                                                                       \
        }                                                                                                      \
        break;                                                                                                 \
    }                                                                                                          \
    Py_XDECREF(_res2);                                                                                         \
    PyGILState_Release(gilstate);                                                                              \
    _res;                                                                                                      \
})
#define PyModule_Create2(...) \
({                                                                                                          \
    PyObject *_res = 0;                                                                                     \
    PyGILState_STATE gilstate = PyGILState_Ensure();                                                        \
    switch (APSW_FaultInjectControl("PyModule_Create2", __FILE__, __func__, __LINE__, #__VA_ARGS__, &_res)) \
    {                                                                                                       \
    case 0x1FACADE:                                                                                         \
        assert(_res == 0);                                                                                  \
        _res = PyModule_Create2(__VA_ARGS__);                                                               \
        break;                                                                                              \
    default:                                                                                                \
        assert(_res || PyErr_Occurred());                                                                   \
        assert(!(_res && PyErr_Occurred()));                                                                \
        break;                                                                                              \
    }                                                                                                       \
    PyGILState_Release(gilstate);                                                                           \
    _res;                                                                                                   \
})
#define PySet_New(...) \
({                                                                                                   \
    PyObject *_res = 0;                                                                              \
    PyGILState_STATE gilstate = PyGILState_Ensure();                                                 \
    switch (APSW_FaultInjectControl("PySet_New", __FILE__, __func__, __LINE__, #__VA_ARGS__, &_res)) \
    {                                                                                                \
    case 0x1FACADE:                                                                                  \
        assert(_res == 0);                                                                           \
        _res = PySet_New(__VA_ARGS__);                                                               \
        break;                                                                                       \
    default:                                                                                         \
        assert(_res || PyErr_Occurred());                                                            \
        assert(!(_res && PyErr_Occurred()));                                                         \
        break;                                                                                       \
    }                                                                                                \
    PyGILState_Release(gilstate);                                                                    \
    _res;                                                                                            \
})
#define PyType_Ready(...) \
({                                                                                                        \
    PyObject *_res2=0;                                                                                    \
    int _res = 0;                                                                                         \
    PyGILState_STATE gilstate = PyGILState_Ensure();                                                      \
    switch (APSW_FaultInjectControl("PyType_Ready", __FILE__, __func__, __LINE__, #__VA_ARGS__, &_res2))  \
    {                                                                                                     \
    case 0x1FACADE:                                                                                       \
        assert(_res == 0);                                                                                \
        _res = PyType_Ready(__VA_ARGS__);                                                                 \
        break;                                                                                            \
    default:                                                                                              \
        if(PyTuple_Check(_res2))                                                                          \
        {                                                                                                 \
            assert(3 == PyTuple_GET_SIZE(_res2));                                                         \
            _res = PyLong_AsLong(PyTuple_GET_ITEM(_res2, 0));                                             \
            assert(PyUnicode_Check(PyTuple_GET_ITEM(_res2, 2)));                                          \
            PyErr_Format(PyTuple_GET_ITEM(_res2, 1), "%s", PyUnicode_AsUTF8(PyTuple_GET_ITEM(_res2, 2))); \
        }                                                                                                 \
        else                                                                                              \
        {                                                                                                 \
            assert(PyLong_Check(_res2));                                                                  \
            _res = PyLong_AsLong(_res2);                                                                  \
        }                                                                                                 \
        break;                                                                                            \
    }                                                                                                     \
    Py_XDECREF(_res2);                                                                                    \
    PyGILState_Release(gilstate);                                                                         \
    _res;                                                                                                 \
})
#define convert_value_to_pyobject(...) \
({                                                                                                                   \
    PyObject *_res = 0;                                                                                              \
    PyGILState_STATE gilstate = PyGILState_Ensure();                                                                 \
    switch (APSW_FaultInjectControl("convert_value_to_pyobject", __FILE__, __func__, __LINE__, #__VA_ARGS__, &_res)) \
    {                                                                                                                \
    case 0x1FACADE:                                                                                                  \
        assert(_res == 0);                                                                                           \
        _res = convert_value_to_pyobject(__VA_ARGS__);                                                               \
        break;                                                                                                       \
    default:                                                                                                         \
        assert(_res || PyErr_Occurred());                                                                            \
        assert(!(_res && PyErr_Occurred()));                                                                         \
        break;                                                                                                       \
    }                                                                                                                \
    PyGILState_Release(gilstate);                                                                                    \
    _res;                                                                                                            \
})
#define getfunctionargs(...) \
({                                                                                                         \
    PyObject *_res = 0;                                                                                    \
    PyGILState_STATE gilstate = PyGILState_Ensure();                                                       \
    switch (APSW_FaultInjectControl("getfunctionargs", __FILE__, __func__, __LINE__, #__VA_ARGS__, &_res)) \
    {                                                                                                      \
    case 0x1FACADE:                                                                                        \
        assert(_res == 0);                                                                                 \
        _res = getfunctionargs(__VA_ARGS__);                                                               \
        break;                                                                                             \
    default:                                                                                               \
        assert(_res || PyErr_Occurred());                                                                  \
        assert(!(_res && PyErr_Occurred()));                                                               \
        break;                                                                                             \
    }                                                                                                      \
    PyGILState_Release(gilstate);                                                                          \
    _res;                                                                                                  \
})
#define sqlite3_threadsafe(...) \
({                                                                                                             \
    PyObject *_res2 = 0;                                                                                       \
    int _res = 0;                                                                                              \
    PyGILState_STATE gilstate = PyGILState_Ensure();                                                           \
    switch (APSW_FaultInjectControl("sqlite3_threadsafe", __FILE__, __func__, __LINE__, #__VA_ARGS__, &_res2)) \
    {                                                                                                          \
    case 0x1FACADE:                                                                                            \
        assert(_res2 == 0);                                                                                    \
        PyGILState_Release(gilstate);                                                                          \
        _res = sqlite3_threadsafe(__VA_ARGS__);                                                                \
        gilstate = PyGILState_Ensure();                                                                        \
        break;                                                                                                 \
    default:                                                                                                   \
        assert(_res2);                                                                                         \
        if(PyTuple_Check(_res2))                                                                               \
        {                                                                                                      \
            assert(3 == PyTuple_GET_SIZE(_res2));                                                              \
            _res = PyLong_AsLong(PyTuple_GET_ITEM(_res2, 0));                                                  \
            assert(PyUnicode_Check(PyTuple_GET_ITEM(_res2, 2)));                                               \
            PyErr_Format(PyTuple_GET_ITEM(_res2, 1), "%s", PyUnicode_AsUTF8(PyTuple_GET_ITEM(_res2, 2)));      \
        }                                                                                                      \
        else                                                                                                   \
        {                                                                                                      \
            assert(PyLong_Check(_res2));                                                                       \
            _res = PyLong_AsLong(_res2);                                                                       \
        }                                                                                                      \
        break;                                                                                                 \
    }                                                                                                          \
    Py_XDECREF(_res2);                                                                                         \
    PyGILState_Release(gilstate);                                                                              \
    _res;                                                                                                      \
})
#endif
#endif