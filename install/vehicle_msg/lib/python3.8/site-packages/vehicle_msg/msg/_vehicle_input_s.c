// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from vehicle_msg:msg/VehicleInput.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "vehicle_msg/msg/detail/vehicle_input__struct.h"
#include "vehicle_msg/msg/detail/vehicle_input__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool vehicle_msg__msg__vehicle_input__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("vehicle_msg.msg._vehicle_input.VehicleInput", full_classname_dest, 43) == 0);
  }
  vehicle_msg__msg__VehicleInput * ros_message = _ros_message;
  {  // vref
    PyObject * field = PyObject_GetAttrString(_pymsg, "vref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vref = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steerangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steerangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steerangle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * vehicle_msg__msg__vehicle_input__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleInput */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("vehicle_msg.msg._vehicle_input");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleInput");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  vehicle_msg__msg__VehicleInput * ros_message = (vehicle_msg__msg__VehicleInput *)raw_ros_message;
  {  // vref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steerangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steerangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steerangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
