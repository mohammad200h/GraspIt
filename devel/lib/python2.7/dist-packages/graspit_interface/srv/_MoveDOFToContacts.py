# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from graspit_interface/MoveDOFToContactsRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MoveDOFToContactsRequest(genpy.Message):
  _md5sum = "90a2bae5e7d3766f6dd04069adf108c6"
  _type = "graspit_interface/MoveDOFToContactsRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint32 id
float64[] dofs
float64[] desired_steps
bool stopAtContact

"""
  __slots__ = ['id','dofs','desired_steps','stopAtContact']
  _slot_types = ['uint32','float64[]','float64[]','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,dofs,desired_steps,stopAtContact

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MoveDOFToContactsRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.dofs is None:
        self.dofs = []
      if self.desired_steps is None:
        self.desired_steps = []
      if self.stopAtContact is None:
        self.stopAtContact = False
    else:
      self.id = 0
      self.dofs = []
      self.desired_steps = []
      self.stopAtContact = False

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
      buff.write(_get_struct_I().pack(self.id))
      length = len(self.dofs)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.dofs))
      length = len(self.desired_steps)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.desired_steps))
      buff.write(_get_struct_B().pack(self.stopAtContact))
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
      (self.id,) = _get_struct_I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.dofs = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.desired_steps = struct.unpack(pattern, str[start:end])
      start = end
      end += 1
      (self.stopAtContact,) = _get_struct_B().unpack(str[start:end])
      self.stopAtContact = bool(self.stopAtContact)
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
      buff.write(_get_struct_I().pack(self.id))
      length = len(self.dofs)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.dofs.tostring())
      length = len(self.desired_steps)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.desired_steps.tostring())
      buff.write(_get_struct_B().pack(self.stopAtContact))
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
      (self.id,) = _get_struct_I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.dofs = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.desired_steps = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 1
      (self.stopAtContact,) = _get_struct_B().unpack(str[start:end])
      self.stopAtContact = bool(self.stopAtContact)
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
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from graspit_interface/MoveDOFToContactsResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MoveDOFToContactsResponse(genpy.Message):
  _md5sum = "d3208d103892120aceddee64dc0f8c8e"
  _type = "graspit_interface/MoveDOFToContactsResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 RESULT_SUCCESS               = 0
uint8 RESULT_INVALID_ID            = 1
uint8 RESULT_DOF_OUT_OF_RANGE      = 2
uint8 RESULT_DOF_COUNT_MISMATCH    = 3
uint8 RESULT_DYNAMICS_MODE_ENABLED = 4

uint8 result

"""
  # Pseudo-constants
  RESULT_SUCCESS = 0
  RESULT_INVALID_ID = 1
  RESULT_DOF_OUT_OF_RANGE = 2
  RESULT_DOF_COUNT_MISMATCH = 3
  RESULT_DYNAMICS_MODE_ENABLED = 4

  __slots__ = ['result']
  _slot_types = ['uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       result

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MoveDOFToContactsResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.result is None:
        self.result = 0
    else:
      self.result = 0

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
      buff.write(_get_struct_B().pack(self.result))
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
      end += 1
      (self.result,) = _get_struct_B().unpack(str[start:end])
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
      buff.write(_get_struct_B().pack(self.result))
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
      end += 1
      (self.result,) = _get_struct_B().unpack(str[start:end])
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
class MoveDOFToContacts(object):
  _type          = 'graspit_interface/MoveDOFToContacts'
  _md5sum = '563bb3b4c2532e0267eb65a3fae5aad5'
  _request_class  = MoveDOFToContactsRequest
  _response_class = MoveDOFToContactsResponse
