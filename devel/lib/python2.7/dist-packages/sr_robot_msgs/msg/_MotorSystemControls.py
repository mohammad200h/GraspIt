# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from sr_robot_msgs/MotorSystemControls.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MotorSystemControls(genpy.Message):
  _md5sum = "0686822f46acfde0133711bd613a20f1"
  _type = "sr_robot_msgs/MotorSystemControls"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int8 motor_id                     # the id of the motor you want to control

bool enable_backlash_compensation # switch on/off backlash compensation at the motor level
bool increase_sgl_tracking        # increment the tracking value for the left gauge
bool decrease_sgl_tracking        # decrement the tracking value for the left gauge
bool increase_sgr_tracking        # increment the tracking value for the right gauge
bool decrease_sgr_tracking        # decrement the tracking value for the right gauge
bool initiate_jiggling            # starts jiggling the given motor
bool write_config_to_eeprom       # write the current configuration to the eeprom"""
  __slots__ = ['motor_id','enable_backlash_compensation','increase_sgl_tracking','decrease_sgl_tracking','increase_sgr_tracking','decrease_sgr_tracking','initiate_jiggling','write_config_to_eeprom']
  _slot_types = ['int8','bool','bool','bool','bool','bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       motor_id,enable_backlash_compensation,increase_sgl_tracking,decrease_sgl_tracking,increase_sgr_tracking,decrease_sgr_tracking,initiate_jiggling,write_config_to_eeprom

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MotorSystemControls, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.motor_id is None:
        self.motor_id = 0
      if self.enable_backlash_compensation is None:
        self.enable_backlash_compensation = False
      if self.increase_sgl_tracking is None:
        self.increase_sgl_tracking = False
      if self.decrease_sgl_tracking is None:
        self.decrease_sgl_tracking = False
      if self.increase_sgr_tracking is None:
        self.increase_sgr_tracking = False
      if self.decrease_sgr_tracking is None:
        self.decrease_sgr_tracking = False
      if self.initiate_jiggling is None:
        self.initiate_jiggling = False
      if self.write_config_to_eeprom is None:
        self.write_config_to_eeprom = False
    else:
      self.motor_id = 0
      self.enable_backlash_compensation = False
      self.increase_sgl_tracking = False
      self.decrease_sgl_tracking = False
      self.increase_sgr_tracking = False
      self.decrease_sgr_tracking = False
      self.initiate_jiggling = False
      self.write_config_to_eeprom = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_b7B().pack(_x.motor_id, _x.enable_backlash_compensation, _x.increase_sgl_tracking, _x.decrease_sgl_tracking, _x.increase_sgr_tracking, _x.decrease_sgr_tracking, _x.initiate_jiggling, _x.write_config_to_eeprom))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 8
      (_x.motor_id, _x.enable_backlash_compensation, _x.increase_sgl_tracking, _x.decrease_sgl_tracking, _x.increase_sgr_tracking, _x.decrease_sgr_tracking, _x.initiate_jiggling, _x.write_config_to_eeprom,) = _get_struct_b7B().unpack(str[start:end])
      self.enable_backlash_compensation = bool(self.enable_backlash_compensation)
      self.increase_sgl_tracking = bool(self.increase_sgl_tracking)
      self.decrease_sgl_tracking = bool(self.decrease_sgl_tracking)
      self.increase_sgr_tracking = bool(self.increase_sgr_tracking)
      self.decrease_sgr_tracking = bool(self.decrease_sgr_tracking)
      self.initiate_jiggling = bool(self.initiate_jiggling)
      self.write_config_to_eeprom = bool(self.write_config_to_eeprom)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_b7B().pack(_x.motor_id, _x.enable_backlash_compensation, _x.increase_sgl_tracking, _x.decrease_sgl_tracking, _x.increase_sgr_tracking, _x.decrease_sgr_tracking, _x.initiate_jiggling, _x.write_config_to_eeprom))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 8
      (_x.motor_id, _x.enable_backlash_compensation, _x.increase_sgl_tracking, _x.decrease_sgl_tracking, _x.increase_sgr_tracking, _x.decrease_sgr_tracking, _x.initiate_jiggling, _x.write_config_to_eeprom,) = _get_struct_b7B().unpack(str[start:end])
      self.enable_backlash_compensation = bool(self.enable_backlash_compensation)
      self.increase_sgl_tracking = bool(self.increase_sgl_tracking)
      self.decrease_sgl_tracking = bool(self.decrease_sgl_tracking)
      self.increase_sgr_tracking = bool(self.increase_sgr_tracking)
      self.decrease_sgr_tracking = bool(self.decrease_sgr_tracking)
      self.initiate_jiggling = bool(self.initiate_jiggling)
      self.write_config_to_eeprom = bool(self.write_config_to_eeprom)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_b7B = None
def _get_struct_b7B():
    global _struct_b7B
    if _struct_b7B is None:
        _struct_b7B = struct.Struct("<b7B")
    return _struct_b7B