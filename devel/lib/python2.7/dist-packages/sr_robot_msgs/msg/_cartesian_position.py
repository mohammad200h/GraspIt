# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from sr_robot_msgs/cartesian_position.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class cartesian_position(genpy.Message):
  _md5sum = "cfc3f1750a36a668eb93288ed1128f42"
  _type = "sr_robot_msgs/cartesian_position"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string  tip_name
float32 tip_pos_x
float32 tip_pos_y
float32 tip_pos_z
float32 tip_orientation_rho
float32 tip_orientation_theta
float32 tip_orientation_sigma

"""
  __slots__ = ['tip_name','tip_pos_x','tip_pos_y','tip_pos_z','tip_orientation_rho','tip_orientation_theta','tip_orientation_sigma']
  _slot_types = ['string','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       tip_name,tip_pos_x,tip_pos_y,tip_pos_z,tip_orientation_rho,tip_orientation_theta,tip_orientation_sigma

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(cartesian_position, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.tip_name is None:
        self.tip_name = ''
      if self.tip_pos_x is None:
        self.tip_pos_x = 0.
      if self.tip_pos_y is None:
        self.tip_pos_y = 0.
      if self.tip_pos_z is None:
        self.tip_pos_z = 0.
      if self.tip_orientation_rho is None:
        self.tip_orientation_rho = 0.
      if self.tip_orientation_theta is None:
        self.tip_orientation_theta = 0.
      if self.tip_orientation_sigma is None:
        self.tip_orientation_sigma = 0.
    else:
      self.tip_name = ''
      self.tip_pos_x = 0.
      self.tip_pos_y = 0.
      self.tip_pos_z = 0.
      self.tip_orientation_rho = 0.
      self.tip_orientation_theta = 0.
      self.tip_orientation_sigma = 0.

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
      _x = self.tip_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_6f().pack(_x.tip_pos_x, _x.tip_pos_y, _x.tip_pos_z, _x.tip_orientation_rho, _x.tip_orientation_theta, _x.tip_orientation_sigma))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.tip_name = str[start:end].decode('utf-8')
      else:
        self.tip_name = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.tip_pos_x, _x.tip_pos_y, _x.tip_pos_z, _x.tip_orientation_rho, _x.tip_orientation_theta, _x.tip_orientation_sigma,) = _get_struct_6f().unpack(str[start:end])
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
      _x = self.tip_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_6f().pack(_x.tip_pos_x, _x.tip_pos_y, _x.tip_pos_z, _x.tip_orientation_rho, _x.tip_orientation_theta, _x.tip_orientation_sigma))
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
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.tip_name = str[start:end].decode('utf-8')
      else:
        self.tip_name = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.tip_pos_x, _x.tip_pos_y, _x.tip_pos_z, _x.tip_orientation_rho, _x.tip_orientation_theta, _x.tip_orientation_sigma,) = _get_struct_6f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6f = None
def _get_struct_6f():
    global _struct_6f
    if _struct_6f is None:
        _struct_6f = struct.Struct("<6f")
    return _struct_6f
