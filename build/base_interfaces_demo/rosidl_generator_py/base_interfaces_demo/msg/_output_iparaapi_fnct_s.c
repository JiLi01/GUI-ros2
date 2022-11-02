// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces_demo:msg/OutputIPARAAPIFnct.idl
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
#include "base_interfaces_demo/msg/detail/output_iparaapi_fnct__struct.h"
#include "base_interfaces_demo/msg/detail/output_iparaapi_fnct__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__msg__output_iparaapi_fnct__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("base_interfaces_demo.msg._output_iparaapi_fnct.OutputIPARAAPIFnct", full_classname_dest, 65) == 0);
  }
  base_interfaces_demo__msg__OutputIPARAAPIFnct * ros_message = _ros_message;
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
  {  // driver_override_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "driver_override_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driver_override_speed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fahrzeug_zustand
    PyObject * field = PyObject_GetAttrString(_pymsg, "fahrzeug_zustand");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fahrzeug_zustand = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // heartbeat_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_out");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heartbeat_out = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gear_change_possible
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_change_possible");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_change_possible = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_emergency_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_emergency_stop");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_emergency_stop = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fehlerzustand
    PyObject * field = PyObject_GetAttrString(_pymsg, "fehlerzustand");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fehlerzustand = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces_demo__msg__output_iparaapi_fnct__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OutputIPARAAPIFnct */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.msg._output_iparaapi_fnct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OutputIPARAAPIFnct");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__msg__OutputIPARAAPIFnct * ros_message = (base_interfaces_demo__msg__OutputIPARAAPIFnct *)raw_ros_message;
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
  {  // driver_override_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->driver_override_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driver_override_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fahrzeug_zustand
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fahrzeug_zustand);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fahrzeug_zustand", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_out
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->heartbeat_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_change_possible
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gear_change_possible);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_change_possible", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_emergency_stop
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_emergency_stop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_emergency_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fehlerzustand
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fehlerzustand);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fehlerzustand", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
