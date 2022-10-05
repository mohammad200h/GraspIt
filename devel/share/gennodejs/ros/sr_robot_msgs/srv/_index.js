
"use strict";

let ChangeControlType = require('./ChangeControlType.js')
let ListNamedTrajectories = require('./ListNamedTrajectories.js')
let SetMixedPositionVelocityPidGains = require('./SetMixedPositionVelocityPidGains.js')
let SetDebugData = require('./SetDebugData.js')
let NullifyDemand = require('./NullifyDemand.js')
let SetPidGains = require('./SetPidGains.js')
let ExecutePlannedTrajectory = require('./ExecutePlannedTrajectory.js')
let SimpleMotorFlasher = require('./SimpleMotorFlasher.js')
let ManualSelfTest = require('./ManualSelfTest.js')
let which_fingers_are_touching = require('./which_fingers_are_touching.js')
let is_hand_occupied = require('./is_hand_occupied.js')
let RobotTeachMode = require('./RobotTeachMode.js')
let SetEffortControllerGains = require('./SetEffortControllerGains.js')
let ForceController = require('./ForceController.js')
let PlanTrajectoryFromList = require('./PlanTrajectoryFromList.js')
let GetFastGraspFromBoundingBox = require('./GetFastGraspFromBoundingBox.js')
let SetTeachMode = require('./SetTeachMode.js')
let SetImuScale = require('./SetImuScale.js')
let PlanNamedTrajectory = require('./PlanNamedTrajectory.js')
let ChangeMotorSystemControls = require('./ChangeMotorSystemControls.js')
let GetSegmentedLine = require('./GetSegmentedLine.js')
let PlanTrajectoryFromPrefix = require('./PlanTrajectoryFromPrefix.js')

module.exports = {
  ChangeControlType: ChangeControlType,
  ListNamedTrajectories: ListNamedTrajectories,
  SetMixedPositionVelocityPidGains: SetMixedPositionVelocityPidGains,
  SetDebugData: SetDebugData,
  NullifyDemand: NullifyDemand,
  SetPidGains: SetPidGains,
  ExecutePlannedTrajectory: ExecutePlannedTrajectory,
  SimpleMotorFlasher: SimpleMotorFlasher,
  ManualSelfTest: ManualSelfTest,
  which_fingers_are_touching: which_fingers_are_touching,
  is_hand_occupied: is_hand_occupied,
  RobotTeachMode: RobotTeachMode,
  SetEffortControllerGains: SetEffortControllerGains,
  ForceController: ForceController,
  PlanTrajectoryFromList: PlanTrajectoryFromList,
  GetFastGraspFromBoundingBox: GetFastGraspFromBoundingBox,
  SetTeachMode: SetTeachMode,
  SetImuScale: SetImuScale,
  PlanNamedTrajectory: PlanNamedTrajectory,
  ChangeMotorSystemControls: ChangeMotorSystemControls,
  GetSegmentedLine: GetSegmentedLine,
  PlanTrajectoryFromPrefix: PlanTrajectoryFromPrefix,
};
