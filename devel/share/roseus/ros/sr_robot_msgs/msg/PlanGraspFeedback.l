;; Auto-generated. Do not edit!


(when (boundp 'sr_robot_msgs::PlanGraspFeedback)
  (if (not (find-package "SR_ROBOT_MSGS"))
    (make-package "SR_ROBOT_MSGS"))
  (shadow 'PlanGraspFeedback (find-package "SR_ROBOT_MSGS")))
(unless (find-package "SR_ROBOT_MSGS::PLANGRASPFEEDBACK")
  (make-package "SR_ROBOT_MSGS::PLANGRASPFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude PlanGraspFeedback.msg.html


(defclass sr_robot_msgs::PlanGraspFeedback
  :super ros::object
  :slots (_number_of_synthesized_grasps ))

(defmethod sr_robot_msgs::PlanGraspFeedback
  (:init
   (&key
    ((:number_of_synthesized_grasps __number_of_synthesized_grasps) 0)
    )
   (send-super :init)
   (setq _number_of_synthesized_grasps (round __number_of_synthesized_grasps))
   self)
  (:number_of_synthesized_grasps
   (&optional __number_of_synthesized_grasps)
   (if __number_of_synthesized_grasps (setq _number_of_synthesized_grasps __number_of_synthesized_grasps)) _number_of_synthesized_grasps)
  (:serialization-length
   ()
   (+
    ;; int32 _number_of_synthesized_grasps
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _number_of_synthesized_grasps
       (write-long _number_of_synthesized_grasps s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _number_of_synthesized_grasps
     (setq _number_of_synthesized_grasps (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get sr_robot_msgs::PlanGraspFeedback :md5sum-) "5b5e246a46b8ebdce203ce200fc43d02")
(setf (get sr_robot_msgs::PlanGraspFeedback :datatype-) "sr_robot_msgs/PlanGraspFeedback")
(setf (get sr_robot_msgs::PlanGraspFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Feedback
# Number of grasps synthesized so far.
int32 number_of_synthesized_grasps


")



(provide :sr_robot_msgs/PlanGraspFeedback "5b5e246a46b8ebdce203ce200fc43d02")


