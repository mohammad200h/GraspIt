;; Auto-generated. Do not edit!


(when (boundp 'sr_robot_msgs::TactileArray)
  (if (not (find-package "SR_ROBOT_MSGS"))
    (make-package "SR_ROBOT_MSGS"))
  (shadow 'TactileArray (find-package "SR_ROBOT_MSGS")))
(unless (find-package "SR_ROBOT_MSGS::TACTILEARRAY")
  (make-package "SR_ROBOT_MSGS::TACTILEARRAY"))

(in-package "ROS")
;;//! \htmlinclude TactileArray.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass sr_robot_msgs::TactileArray
  :super ros::object
  :slots (_header _data ))

(defmethod sr_robot_msgs::TactileArray
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:data __data) (let (r) (dotimes (i 0) (push (instance sr_robot_msgs::Tactile :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _data __data)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:data
   (&rest __data)
   (if (keywordp (car __data))
       (send* _data __data)
     (progn
       (if __data (setq _data (car __data)))
       _data)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; sr_robot_msgs/Tactile[] _data
    (apply #'+ (send-all _data :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; sr_robot_msgs/Tactile[] _data
     (write-long (length _data) s)
     (dolist (elem _data)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; sr_robot_msgs/Tactile[] _data
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _data (let (r) (dotimes (i n) (push (instance sr_robot_msgs::Tactile :init) r)) r))
     (dolist (elem- _data)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get sr_robot_msgs::TactileArray :md5sum-) "294a763b90cb1a333d263f2097d3254e")
(setf (get sr_robot_msgs::TactileArray :datatype-) "sr_robot_msgs/TactileArray")
(setf (get sr_robot_msgs::TactileArray :definition-)
      "Header header
Tactile[] data

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
MSG: sr_robot_msgs/Tactile
std_msgs/Int16[] data

================================================================================
MSG: std_msgs/Int16
int16 data

")



(provide :sr_robot_msgs/TactileArray "294a763b90cb1a333d263f2097d3254e")


