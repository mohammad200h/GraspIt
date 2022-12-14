# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from sr_robot_msgs/contrlr.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class contrlr(genpy.Message):
  _md5sum = "7b2aa60305c5a9ab0ff05803e4d2ab85"
  _type = "sr_robot_msgs/contrlr"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# the contrlr name (e.g. smart_motor_ff2)
string   contrlr_name

# specify here a list of parameter_name:value
# e.g. p:10 sets the p value of the controller to 10
# the possible parameters are:
#int16  p
#int16  i
#int16  d
#int16  imax
#int16  target
#int16  sensor
#int16  valve 
#int16  deadband
#int16  offset
#int16  shift
#int16  max
#
## parameters for the motors
#int16  motor_maxforce
#int16  motor_safeforce
#int16  force_p
#int16  force_i
#int16  force_d
#int16  force_imax
#int16  force_out_shift
#int16  force_deadband
#int16  force_offset
#int16  sensor_imax
#int16  sensor_deadband
#int16  sensor_offset
#int16  max_temperature
#int16  max_current

string[] list_of_parameters

# the size of the list_of_parameters you are sending
uint8 	 length_of_list


"""
  __slots__ = ['contrlr_name','list_of_parameters','length_of_list']
  _slot_types = ['string','string[]','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       contrlr_name,list_of_parameters,length_of_list

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(contrlr, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.contrlr_name is None:
        self.contrlr_name = ''
      if self.list_of_parameters is None:
        self.list_of_parameters = []
      if self.length_of_list is None:
        self.length_of_list = 0
    else:
      self.contrlr_name = ''
      self.list_of_parameters = []
      self.length_of_list = 0

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
      _x = self.contrlr_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.list_of_parameters)
      buff.write(_struct_I.pack(length))
      for val1 in self.list_of_parameters:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      buff.write(_get_struct_B().pack(self.length_of_list))
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
        self.contrlr_name = str[start:end].decode('utf-8')
      else:
        self.contrlr_name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.list_of_parameters = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.list_of_parameters.append(val1)
      start = end
      end += 1
      (self.length_of_list,) = _get_struct_B().unpack(str[start:end])
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
      _x = self.contrlr_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.list_of_parameters)
      buff.write(_struct_I.pack(length))
      for val1 in self.list_of_parameters:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      buff.write(_get_struct_B().pack(self.length_of_list))
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
        self.contrlr_name = str[start:end].decode('utf-8')
      else:
        self.contrlr_name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.list_of_parameters = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.list_of_parameters.append(val1)
      start = end
      end += 1
      (self.length_of_list,) = _get_struct_B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
