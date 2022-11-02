// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces_demo:msg/InputIPARAAPIFnct.idl
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
#include "base_interfaces_demo/msg/detail/input_iparaapi_fnct__struct.h"
#include "base_interfaces_demo/msg/detail/input_iparaapi_fnct__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__msg__input_iparaapi_fnct__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("base_interfaces_demo.msg._input_iparaapi_fnct.InputIPARAAPIFnct", full_classname_dest, 63) == 0);
  }
  base_interfaces_demo__msg__InputIPARAAPIFnct * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // change_gear_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_gear_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->change_gear_position = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // accel_des
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_des");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_des = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turn_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_signal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_signal = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // emergency_break
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_break");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emergency_break = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // heartbeat_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_in");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heartbeat_in = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // startabfrage
    PyObject * field = PyObject_GetAttrString(_pymsg, "startabfrage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->startabfrage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces_demo__msg__input_iparaapi_fnct__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InputIPARAAPIFnct */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.msg._input_iparaapi_fnct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InputIPARAAPIFnct");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__msg__InputIPARAAPIFnct * ros_message = (base_interfaces_demo__msg__InputIPARAAPIFnct *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_gear_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->change_gear_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_gear_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_des
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_des);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_des", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_signal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->turn_signal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_break
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->emergency_break);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_break", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_in
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->heartbeat_in);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_in", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // startabfrage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->startabfrage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "startabfrage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
