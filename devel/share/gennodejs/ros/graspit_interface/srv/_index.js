
"use strict";

let GetRobot = require('./GetRobot.js')
let FindInitialContact = require('./FindInitialContact.js')
let ImportGraspableBody = require('./ImportGraspableBody.js')
let SetRobotPose = require('./SetRobotPose.js')
let ImportRobot = require('./ImportRobot.js')
let ApproachToContact = require('./ApproachToContact.js')
let LoadWorld = require('./LoadWorld.js')
let ComputeEnergy = require('./ComputeEnergy.js')
let SetGraspableBodyPose = require('./SetGraspableBodyPose.js')
let GetGraspableBody = require('./GetGraspableBody.js')
let ClearWorld = require('./ClearWorld.js')
let GetGraspableBodies = require('./GetGraspableBodies.js')
let SaveWorld = require('./SaveWorld.js')
let SetRobotDesiredDOF = require('./SetRobotDesiredDOF.js')
let DynamicAutoGraspComplete = require('./DynamicAutoGraspComplete.js')
let ForceRobotDOF = require('./ForceRobotDOF.js')
let GetRobots = require('./GetRobots.js')
let GetDynamics = require('./GetDynamics.js')
let SaveImage = require('./SaveImage.js')
let SetDynamics = require('./SetDynamics.js')
let AutoOpen = require('./AutoOpen.js')
let SetBodyPose = require('./SetBodyPose.js')
let GetBody = require('./GetBody.js')
let MoveDOFToContacts = require('./MoveDOFToContacts.js')
let ToggleAllCollisions = require('./ToggleAllCollisions.js')
let GetBodies = require('./GetBodies.js')
let ImportObstacle = require('./ImportObstacle.js')
let AutoGrasp = require('./AutoGrasp.js')
let ComputeQuality = require('./ComputeQuality.js')

module.exports = {
  GetRobot: GetRobot,
  FindInitialContact: FindInitialContact,
  ImportGraspableBody: ImportGraspableBody,
  SetRobotPose: SetRobotPose,
  ImportRobot: ImportRobot,
  ApproachToContact: ApproachToContact,
  LoadWorld: LoadWorld,
  ComputeEnergy: ComputeEnergy,
  SetGraspableBodyPose: SetGraspableBodyPose,
  GetGraspableBody: GetGraspableBody,
  ClearWorld: ClearWorld,
  GetGraspableBodies: GetGraspableBodies,
  SaveWorld: SaveWorld,
  SetRobotDesiredDOF: SetRobotDesiredDOF,
  DynamicAutoGraspComplete: DynamicAutoGraspComplete,
  ForceRobotDOF: ForceRobotDOF,
  GetRobots: GetRobots,
  GetDynamics: GetDynamics,
  SaveImage: SaveImage,
  SetDynamics: SetDynamics,
  AutoOpen: AutoOpen,
  SetBodyPose: SetBodyPose,
  GetBody: GetBody,
  MoveDOFToContacts: MoveDOFToContacts,
  ToggleAllCollisions: ToggleAllCollisions,
  GetBodies: GetBodies,
  ImportObstacle: ImportObstacle,
  AutoGrasp: AutoGrasp,
  ComputeQuality: ComputeQuality,
};
