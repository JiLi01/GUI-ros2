# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/InputIPARAAPIFnct.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InputIPARAAPIFnct(type):
    """Metaclass of message 'InputIPARAAPIFnct'."""

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
                'base_interfaces_demo.msg.InputIPARAAPIFnct')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__input_iparaapi_fnct
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__input_iparaapi_fnct
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__input_iparaapi_fnct
            cls._TYPE_SUPPORT = module.type_support_msg__msg__input_iparaapi_fnct
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__input_iparaapi_fnct

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


class InputIPARAAPIFnct(metaclass=Metaclass_InputIPARAAPIFnct):
    """Message class 'InputIPARAAPIFnct'."""

    __slots__ = [
        '_header',
        '_change_gear_position',
        '_accel_des',
        '_steering_angle',
        '_turn_signal',
        '_emergency_break',
        '_heartbeat_in',
        '_startabfrage',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'change_gear_position': 'uint8',
        'accel_des': 'float',
        'steering_angle': 'float',
        'turn_signal': 'uint8',
        'emergency_break': 'uint8',
        'heartbeat_in': 'uint8',
        'startabfrage': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.change_gear_position = kwargs.get('change_gear_position', int())
        self.accel_des = kwargs.get('accel_des', float())
        self.steering_angle = kwargs.get('steering_angle', float())
        self.turn_signal = kwargs.get('turn_signal', int())
        self.emergency_break = kwargs.get('emergency_break', int())
        self.heartbeat_in = kwargs.get('heartbeat_in', int())
        self.startabfrage = kwargs.get('startabfrage', int())

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
        if self.change_gear_position != other.change_gear_position:
            return False
        if self.accel_des != other.accel_des:
            return False
        if self.steering_angle != other.steering_angle:
            return False
        if self.turn_signal != other.turn_signal:
            return False
        if self.emergency_break != other.emergency_break:
            return False
        if self.heartbeat_in != other.heartbeat_in:
            return False
        if self.startabfrage != other.startabfrage:
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
    def change_gear_position(self):
        """Message field 'change_gear_position'."""
        return self._change_gear_position

    @change_gear_position.setter
    def change_gear_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'change_gear_position' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'change_gear_position' field must be an unsigned integer in [0, 255]"
        self._change_gear_position = value

    @builtins.property
    def accel_des(self):
        """Message field 'accel_des'."""
        return self._accel_des

    @accel_des.setter
    def accel_des(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_des' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'accel_des' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._accel_des = value

    @builtins.property
    def steering_angle(self):
        """Message field 'steering_angle'."""
        return self._steering_angle

    @steering_angle.setter
    def steering_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_angle' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'steering_angle' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._steering_angle = value

    @builtins.property
    def turn_signal(self):
        """Message field 'turn_signal'."""
        return self._turn_signal

    @turn_signal.setter
    def turn_signal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_signal' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'turn_signal' field must be an unsigned integer in [0, 255]"
        self._turn_signal = value

    @builtins.property
    def emergency_break(self):
        """Message field 'emergency_break'."""
        return self._emergency_break

    @emergency_break.setter
    def emergency_break(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emergency_break' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emergency_break' field must be an unsigned integer in [0, 255]"
        self._emergency_break = value

    @builtins.property
    def heartbeat_in(self):
        """Message field 'heartbeat_in'."""
        return self._heartbeat_in

    @heartbeat_in.setter
    def heartbeat_in(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heartbeat_in' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'heartbeat_in' field must be an unsigned integer in [0, 255]"
        self._heartbeat_in = value

    @builtins.property
    def startabfrage(self):
        """Message field 'startabfrage'."""
        return self._startabfrage

    @startabfrage.setter
    def startabfrage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'startabfrage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'startabfrage' field must be an unsigned integer in [0, 255]"
        self._startabfrage = value
