from graspit_commander import GraspitCommander
GraspitCommander.loadWorld("dlr_flask")
result = GraspitCommander.planGrasps(max_steps=50000)

print(result)
