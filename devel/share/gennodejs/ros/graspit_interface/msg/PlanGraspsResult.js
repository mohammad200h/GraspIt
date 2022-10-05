// Auto-generated. Do not edit!

// (in-package graspit_interface.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Grasp = require('./Grasp.js');

//-----------------------------------------------------------

class PlanGraspsResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.grasps = null;
      this.energies = null;
      this.search_energy = null;
    }
    else {
      if (initObj.hasOwnProperty('grasps')) {
        this.grasps = initObj.grasps
      }
      else {
        this.grasps = [];
      }
      if (initObj.hasOwnProperty('energies')) {
        this.energies = initObj.energies
      }
      else {
        this.energies = [];
      }
      if (initObj.hasOwnProperty('search_energy')) {
        this.search_energy = initObj.search_energy
      }
      else {
        this.search_energy = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PlanGraspsResult
    // Serialize message field [grasps]
    // Serialize the length for message field [grasps]
    bufferOffset = _serializer.uint32(obj.grasps.length, buffer, bufferOffset);
    obj.grasps.forEach((val) => {
      bufferOffset = Grasp.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [energies]
    bufferOffset = _arraySerializer.float64(obj.energies, buffer, bufferOffset, null);
    // Serialize message field [search_energy]
    bufferOffset = _serializer.string(obj.search_energy, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PlanGraspsResult
    let len;
    let data = new PlanGraspsResult(null);
    // Deserialize message field [grasps]
    // Deserialize array length for message field [grasps]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.grasps = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.grasps[i] = Grasp.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [energies]
    data.energies = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [search_energy]
    data.search_energy = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.grasps.forEach((val) => {
      length += Grasp.getMessageSize(val);
    });
    length += 8 * object.energies.length;
    length += object.search_energy.length;
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'graspit_interface/PlanGraspsResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0a1077cfe47bddbdc065b3d4b564b0a1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Result
    Grasp[] grasps
    float64[] energies
    string search_energy
    
    ================================================================================
    MSG: graspit_interface/Grasp
    # id for the body the grasp was planned on.
    int32 graspable_body_id
    
    # pose of the hand with respect to the object 
    # the grasp was planned on
    geometry_msgs/Pose pose
    
    float64[] dofs
    
    float64 epsilon_quality
    float64 volume_quality
    
    
    # The approach direction to take before picking an object
    geometry_msgs/Vector3Stamped approach_direction
    
    
    
    
    
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    ================================================================================
    MSG: geometry_msgs/Vector3Stamped
    # This represents a Vector3 with reference coordinate frame and timestamp
    Header header
    Vector3 vector
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PlanGraspsResult(null);
    if (msg.grasps !== undefined) {
      resolved.grasps = new Array(msg.grasps.length);
      for (let i = 0; i < resolved.grasps.length; ++i) {
        resolved.grasps[i] = Grasp.Resolve(msg.grasps[i]);
      }
    }
    else {
      resolved.grasps = []
    }

    if (msg.energies !== undefined) {
      resolved.energies = msg.energies;
    }
    else {
      resolved.energies = []
    }

    if (msg.search_energy !== undefined) {
      resolved.search_energy = msg.search_energy;
    }
    else {
      resolved.search_energy = ''
    }

    return resolved;
    }
};

module.exports = PlanGraspsResult;
