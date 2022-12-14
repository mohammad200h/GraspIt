;; Auto-generated. Do not edit!


(when (boundp 'sr_robot_msgs::GraspFeedback)
  (if (not (find-package "SR_ROBOT_MSGS"))
    (make-package "SR_ROBOT_MSGS"))
  (shadow 'GraspFeedback (find-package "SR_ROBOT_MSGS")))
(unless (find-package "SR_ROBOT_MSGS::GRASPFEEDBACK")
  (make-package "SR_ROBOT_MSGS::GRASPFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude GraspFeedback.msg.html


(intern "*PRE_GRASPING*" (find-package "SR_ROBOT_MSGS::GRASPFEEDBACK"))
(shadow '*PRE_GRASPING* (find-package "SR_ROBOT_MSGS::GRASPFEEDBACK"))
(defconstant sr_robot_msgs::GraspFeedback::*PRE_GRASPING* 0)
(intern "*GRASPING*" (find-package "SR_ROBOT_MSGS::GRASPFEEDBACK"))
(shadow '*GRASPING* (find-package "SR_ROBOT_MSGS::GRASPFEEDBACK"))
(defconstant sr_robot_msgs::GraspFeedback::*GRASPING* 1)
(intern "*RELEASING*" (find-package "SR_ROBOT_MSGS::GRASPFEEDBACK"))
(shadow '*RELEASING* (find-package "SR_ROBOT_MSGS::GRASPFEEDBACK"))
(defconstant sr_robot_msgs::GraspFeedback::*RELEASING* 2)
(defclass sr_robot_msgs::GraspFeedback
  :super ros::object
  :slots (_state _quality ))

(defmethod sr_robot_msgs::GraspFeedback
  (:init
   (&key
    ((:state __state) 0)
    ((:quality __quality) 0.0)
    )
   (send-super :init)
   (setq _state (round __state))
   (setq _quality (float __quality))
   self)
  (:state
   (&optional __state)
   (if __state (setq _state __state)) _state)
  (:quality
   (&optional __quality)
   (if __quality (setq _quality __quality)) _quality)
  (:serialization-length
   ()
   (+
    ;; uint8 _state
    1
    ;; float64 _quality
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _state
       (write-byte _state s)
     ;; float64 _quality
       (sys::poke _quality (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _state
     (setq _state (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float64 _quality
     (setq _quality (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get sr_robot_msgs::GraspFeedback :md5sum-) "8702e9db66bb1035e4930782198c4d56")
(setf (get sr_robot_msgs::GraspFeedback :datatype-) "sr_robot_msgs/GraspFeedback")
(setf (get sr_robot_msgs::GraspFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Feedback
# State shows what the node is currently doing.
uint8 PRE_GRASPING=0
uint8 GRASPING=1
uint8 RELEASING=2
uint8 state
# A percentage or other measure of the quality of the grasp.
float64 quality


")



(provide :sr_robot_msgs/GraspFeedback "8702e9db66bb1035e4930782198c4d56")


