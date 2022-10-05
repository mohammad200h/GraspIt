;; Auto-generated. Do not edit!


(when (boundp 'grasp_planning_graspit_msgs::AddToDatabase)
  (if (not (find-package "GRASP_PLANNING_GRASPIT_MSGS"))
    (make-package "GRASP_PLANNING_GRASPIT_MSGS"))
  (shadow 'AddToDatabase (find-package "GRASP_PLANNING_GRASPIT_MSGS")))
(unless (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASE")
  (make-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASE"))
(unless (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASEREQUEST")
  (make-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASEREQUEST"))
(unless (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE")
  (make-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))

(in-package "ROS")





(defclass grasp_planning_graspit_msgs::AddToDatabaseRequest
  :super ros::object
  :slots (_filename _isRobot _asGraspable _modelName _jointNames ))

(defmethod grasp_planning_graspit_msgs::AddToDatabaseRequest
  (:init
   (&key
    ((:filename __filename) "")
    ((:isRobot __isRobot) nil)
    ((:asGraspable __asGraspable) nil)
    ((:modelName __modelName) "")
    ((:jointNames __jointNames) (let (r) (dotimes (i 0) (push "" r)) r))
    )
   (send-super :init)
   (setq _filename (string __filename))
   (setq _isRobot __isRobot)
   (setq _asGraspable __asGraspable)
   (setq _modelName (string __modelName))
   (setq _jointNames __jointNames)
   self)
  (:filename
   (&optional __filename)
   (if __filename (setq _filename __filename)) _filename)
  (:isRobot
   (&optional __isRobot)
   (if __isRobot (setq _isRobot __isRobot)) _isRobot)
  (:asGraspable
   (&optional __asGraspable)
   (if __asGraspable (setq _asGraspable __asGraspable)) _asGraspable)
  (:modelName
   (&optional __modelName)
   (if __modelName (setq _modelName __modelName)) _modelName)
  (:jointNames
   (&optional __jointNames)
   (if __jointNames (setq _jointNames __jointNames)) _jointNames)
  (:serialization-length
   ()
   (+
    ;; string _filename
    4 (length _filename)
    ;; bool _isRobot
    1
    ;; bool _asGraspable
    1
    ;; string _modelName
    4 (length _modelName)
    ;; string[] _jointNames
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _jointNames)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _filename
       (write-long (length _filename) s) (princ _filename s)
     ;; bool _isRobot
       (if _isRobot (write-byte -1 s) (write-byte 0 s))
     ;; bool _asGraspable
       (if _asGraspable (write-byte -1 s) (write-byte 0 s))
     ;; string _modelName
       (write-long (length _modelName) s) (princ _modelName s)
     ;; string[] _jointNames
     (write-long (length _jointNames) s)
     (dolist (elem _jointNames)
       (write-long (length elem) s) (princ elem s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _filename
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _filename (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _isRobot
     (setq _isRobot (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _asGraspable
     (setq _asGraspable (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _modelName
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _modelName (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string[] _jointNames
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _jointNames (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _jointNames i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;;
   self)
  )

(intern "*SUCCESS*" (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))
(shadow '*SUCCESS* (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))
(defconstant grasp_planning_graspit_msgs::AddToDatabaseResponse::*SUCCESS* 0)
(intern "*MODEL_EXISTS*" (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))
(shadow '*MODEL_EXISTS* (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))
(defconstant grasp_planning_graspit_msgs::AddToDatabaseResponse::*MODEL_EXISTS* 1)
(intern "*FILE_NOT_FOUND*" (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))
(shadow '*FILE_NOT_FOUND* (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))
(defconstant grasp_planning_graspit_msgs::AddToDatabaseResponse::*FILE_NOT_FOUND* 2)
(intern "*NOT_READY*" (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))
(shadow '*NOT_READY* (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))
(defconstant grasp_planning_graspit_msgs::AddToDatabaseResponse::*NOT_READY* 3)
(intern "*NO_NAME*" (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))
(shadow '*NO_NAME* (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))
(defconstant grasp_planning_graspit_msgs::AddToDatabaseResponse::*NO_NAME* 4)
(intern "*OTHER_ERROR*" (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))
(shadow '*OTHER_ERROR* (find-package "GRASP_PLANNING_GRASPIT_MSGS::ADDTODATABASERESPONSE"))
(defconstant grasp_planning_graspit_msgs::AddToDatabaseResponse::*OTHER_ERROR* 5)
(defclass grasp_planning_graspit_msgs::AddToDatabaseResponse
  :super ros::object
  :slots (_returnCode _modelID ))

(defmethod grasp_planning_graspit_msgs::AddToDatabaseResponse
  (:init
   (&key
    ((:returnCode __returnCode) 0)
    ((:modelID __modelID) 0)
    )
   (send-super :init)
   (setq _returnCode (round __returnCode))
   (setq _modelID (round __modelID))
   self)
  (:returnCode
   (&optional __returnCode)
   (if __returnCode (setq _returnCode __returnCode)) _returnCode)
  (:modelID
   (&optional __modelID)
   (if __modelID (setq _modelID __modelID)) _modelID)
  (:serialization-length
   ()
   (+
    ;; int32 _returnCode
    4
    ;; int32 _modelID
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _returnCode
       (write-long _returnCode s)
     ;; int32 _modelID
       (write-long _modelID s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _returnCode
     (setq _returnCode (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _modelID
     (setq _modelID (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass grasp_planning_graspit_msgs::AddToDatabase
  :super ros::object
  :slots ())

(setf (get grasp_planning_graspit_msgs::AddToDatabase :md5sum-) "1d861bc118bc160b1e8a75f648c6112e")
(setf (get grasp_planning_graspit_msgs::AddToDatabase :datatype-) "grasp_planning_graspit_msgs/AddToDatabase")
(setf (get grasp_planning_graspit_msgs::AddToDatabase :request) grasp_planning_graspit_msgs::AddToDatabaseRequest)
(setf (get grasp_planning_graspit_msgs::AddToDatabase :response) grasp_planning_graspit_msgs::AddToDatabaseResponse)

(defmethod grasp_planning_graspit_msgs::AddToDatabaseRequest
  (:response () (instance grasp_planning_graspit_msgs::AddToDatabaseResponse :init)))

(setf (get grasp_planning_graspit_msgs::AddToDatabaseRequest :md5sum-) "1d861bc118bc160b1e8a75f648c6112e")
(setf (get grasp_planning_graspit_msgs::AddToDatabaseRequest :datatype-) "grasp_planning_graspit_msgs/AddToDatabaseRequest")
(setf (get grasp_planning_graspit_msgs::AddToDatabaseRequest :definition-)
      "







string filename


bool isRobot



bool asGraspable




string modelName



string[] jointNames

---



int32 returnCode



int32 modelID





int32 SUCCESS = 0


int32 MODEL_EXISTS = 1


int32 FILE_NOT_FOUND = 2


int32 NOT_READY = 3


int32 NO_NAME = 4


int32 OTHER_ERROR = 5









")

(setf (get grasp_planning_graspit_msgs::AddToDatabaseResponse :md5sum-) "1d861bc118bc160b1e8a75f648c6112e")
(setf (get grasp_planning_graspit_msgs::AddToDatabaseResponse :datatype-) "grasp_planning_graspit_msgs/AddToDatabaseResponse")
(setf (get grasp_planning_graspit_msgs::AddToDatabaseResponse :definition-)
      "







string filename


bool isRobot



bool asGraspable




string modelName



string[] jointNames

---



int32 returnCode



int32 modelID





int32 SUCCESS = 0


int32 MODEL_EXISTS = 1


int32 FILE_NOT_FOUND = 2


int32 NOT_READY = 3


int32 NO_NAME = 4


int32 OTHER_ERROR = 5









")



(provide :grasp_planning_graspit_msgs/AddToDatabase "1d861bc118bc160b1e8a75f648c6112e")


