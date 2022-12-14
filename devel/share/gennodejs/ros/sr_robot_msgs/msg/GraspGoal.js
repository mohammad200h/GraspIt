// Auto-generated. Do not edit!

// (in-package sr_robot_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let moveit_msgs = _finder('moveit_msgs');

//-----------------------------------------------------------

class GraspGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.grasp = null;
      this.pre_grasp = null;
    }
    else {
      if (initObj.hasOwnProperty('grasp')) {
        this.grasp = initObj.grasp
      }
      else {
        this.grasp = new moveit_msgs.msg.Grasp();
      }
      if (initObj.hasOwnProperty('pre_grasp')) {
        this.pre_grasp = initObj.pre_grasp
      }
      else {
        this.pre_grasp = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GraspGoal
    // Serialize message field [grasp]
    bufferOffset = moveit_msgs.msg.Grasp.serialize(obj.grasp, buffer, bufferOffset);
    // Serialize message field [pre_grasp]
    bufferOffset = _serializer.bool(obj.pre_grasp, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GraspGoal
    let len;
    let data = new GraspGoal(null);
    // Deserialize message field [grasp]
    data.grasp = moveit_msgs.msg.Grasp.deserialize(buffer, bufferOffset);
    // Deserialize message field [pre_grasp]
    data.pre_grasp = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += moveit_msgs.msg.Grasp.getMessageSize(object.grasp);
    return length + 1;
  }

  static datatype() {
    // Returns string type for a message object
    return 'sr_robot_msgs/GraspGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '718d93fd75e759830816f45dfb2a98f1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Move hand to pre-grasp pose then grasp pose for the given grasp.
    # When goal is preempted release the grasp by moving back to pre-grasp.
    # Note no object is involved, this is just for testing grasp positions etc.
    # Goal
    moveit_msgs/Grasp grasp
    bool pre_grasp
    
    ================================================================================
    MSG: moveit_msgs/Grasp
    # This message contains a description of a grasp that would be used
    # with a particular end-effector to grasp an object, including how to
    # approach it, grip it, etc.  This message does not contain any
    # information about a "grasp point" (a position ON the object).
    # Whatever generates this message should have already combined
    # information about grasp points with information about the geometry
    # of the end-effector to compute the grasp_pose in this message.
    
    # A name for this grasp
    string id
    
    # The internal posture of the hand for the pre-grasp
    # only positions are used
    trajectory_msgs/JointTrajectory pre_grasp_posture
    
    # The internal posture of the hand for the grasp
    # positions and efforts are used
    trajectory_msgs/JointTrajectory grasp_posture
    
    # The position of the end-effector for the grasp.  This is the pose of
    # the "parent_link" of the end-effector, not actually the pose of any
    # link *in* the end-effector.  Typically this would be the pose of the
    # most distal wrist link before the hand (end-effector) links began.
    geometry_msgs/PoseStamped grasp_pose
    
    # The estimated probability of success for this grasp, or some other
    # measure of how "good" it is.
    float64 grasp_quality
    
    # The approach direction to take before picking an object
    GripperTranslation pre_grasp_approach
    
    # The retreat direction to take after a grasp has been completed (object is attached)
    GripperTranslation post_grasp_retreat
    
    # The retreat motion to perform when releasing the object; this information
    # is not necessary for the grasp itself, but when releasing the object,
    # the information will be necessary. The grasp used to perform a pickup
    # is returned as part of the result, so this information is available for 
    # later use.
    GripperTranslation post_place_retreat
    
    # the maximum contact force to use while grasping (<=0 to disable)
    float32 max_contact_force
    
    # an optional list of obstacles that we have semantic information about
    # and that can be touched/pushed/moved in the course of grasping
    string[] allowed_touch_objects
    
    ================================================================================
    MSG: trajectory_msgs/JointTrajectory
    Header header
    string[] joint_names
    JointTrajectoryPoint[] points
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
    MSG: trajectory_msgs/JointTrajectoryPoint
    # Each trajectory point specifies either positions[, velocities[, accelerations]]
    # or positions[, effort] for the trajectory to be executed.
    # All specified values are in the same order as the joint names in JointTrajectory.msg
    
    float64[] positions
    float64[] velocities
    float64[] accelerations
    float64[] effort
    duration time_from_start
    
    ================================================================================
    MSG: geometry_msgs/PoseStamped
    # A Pose with reference coordinate frame and timestamp
    Header header
    Pose pose
    
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
    MSG: moveit_msgs/GripperTranslation
    # defines a translation for the gripper, used in pickup or place tasks
    # for example for lifting an object off a table or approaching the table for placing
    
    # the direction of the translation
    geometry_msgs/Vector3Stamped direction
    
    # the desired translation distance
    float32 desired_distance
    
    # the min distance that must be considered feasible before the
    # grasp is even attempted
    float32 min_distance
    
    ================================================================================
    MSG: geometry_msgs/Vector3Stamped
    # This represents a Vector3 with reference coordinate frame and timestamp
    Header header
    Vector3 vector
    
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
    const resolved = new GraspGoal(null);
    if (msg.grasp !== undefined) {
      resolved.grasp = moveit_msgs.msg.Grasp.Resolve(msg.grasp)
    }
    else {
      resolved.grasp = new moveit_msgs.msg.Grasp()
    }

    if (msg.pre_grasp !== undefined) {
      resolved.pre_grasp = msg.pre_grasp;
    }
    else {
      resolved.pre_grasp = false
    }

    return resolved;
    }
};

module.exports = GraspGoal;
