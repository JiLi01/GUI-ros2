# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/OutputIPARAAPIFnct.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OutputIPARAAPIFnct(type):
    """Metaclass of message 'OutputIPARAAPIFnct'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('base_interfaces_demo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces_demo.msg.OutputIPARAAPIFnct')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__output_iparaapi_fnct
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__output_iparaapi_fnct
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__output_iparaapi_fnct
            cls._TYPE_SUPPORT = module.type_support_msg__msg__output_iparaapi_fnct
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__output_iparaapi_fnct

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OutputIPARAAPIFnct(metaclass=Metaclass_OutputIPARAAPIFnct):
    """Message class 'OutputIPARAAPIFnct'."""

    __slots__ = [
        '_header',
        '_driver_override_speed',
        '_fahrzeug_zustand',
        '_heartbeat_out',
        '_gear_change_possible',
        '_status_emergency_stop',
        '_fehlerzustand',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'driver_override_speed': 'uint8',
        'fahrzeug_zustand': 'uint8',
        'heartbeat_out': 'uint8',
        'gear_change_possible': 'uint8',
        'status_emergency_stop': 'uint8',
        'fehlerzustand': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.driver_override_speed = kwargs.get('driver_override_speed', int())
        self.fahrzeug_zustand = kwargs.get('fahrzeug_zustand', int())
        self.heartbeat_out = kwargs.get('heartbeat_out', int())
        self.gear_change_possible = kwargs.get('gear_change_possible', int())
        self.status_emergency_stop = kwargs.get('status_emergency_stop', int())
        self.fehlerzustand = kwargs.get('fehlerzustand', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.driver_override_speed != other.driver_override_speed:
            return False
        if self.fahrzeug_zustand != other.fahrzeug_zustand:
            return False
        if self.heartbeat_out != other.heartbeat_out:
            return False
        if self.gear_change_possible != other.gear_change_possible:
            return False
        if self.status_emergency_stop != other.status_emergency_stop:
            return False
        if self.fehlerzustand != other.fehlerzustand:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def driver_override_speed(self):
        """Message field 'driver_override_speed'."""
        return self._driver_override_speed

    @driver_override_speed.setter
    def driver_override_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driver_override_speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'driver_override_speed' field must be an unsigned integer in [0, 255]"
        self._driver_override_speed = value

    @builtins.property
    def fahrzeug_zustand(self):
        """Message field 'fahrzeug_zustand'."""
        return self._fahrzeug_zustand

    @fahrzeug_zustand.setter
    def fahrzeug_zustand(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fahrzeug_zustand' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fahrzeug_zustand' field must be an unsigned integer in [0, 255]"
        self._fahrzeug_zustand = value

    @builtins.property
    def heartbeat_out(self):
        """Message field 'heartbeat_out'."""
        return self._heartbeat_out

    @heartbeat_out.setter
    def heartbeat_out(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heartbeat_out' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'heartbeat_out' field must be an unsigned integer in [0, 255]"
        self._heartbeat_out = value

    @builtins.property
    def gear_change_possible(self):
        """Message field 'gear_change_possible'."""
        return self._gear_change_possible

    @gear_change_possible.setter
    def gear_change_possible(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_change_possible' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gear_change_possible' field must be an unsigned integer in [0, 255]"
        self._gear_change_possible = value

    @builtins.property
    def status_emergency_stop(self):
        """Message field 'status_emergency_stop'."""
        return self._status_emergency_stop

    @status_emergency_stop.setter
    def status_emergency_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_emergency_stop' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_emergency_stop' field must be an unsigned integer in [0, 255]"
        self._status_emergency_stop = value

    @builtins.property
    def fehlerzustand(self):
        """Message field 'fehlerzustand'."""
        return self._fehlerzustand

    @fehlerzustand.setter
    def fehlerzustand(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fehlerzustand' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fehlerzustand' field must be an unsigned integer in [0, 255]"
        self._fehlerzustand = value
