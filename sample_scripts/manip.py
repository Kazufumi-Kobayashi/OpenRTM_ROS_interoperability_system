#! /usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
import math
import copy
import moveit_commander
import moveit_msgs.msg
from std_msgs.msg import Float32MultiArray
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Quaternion, Pose, PoseStamped, Vector3

#grobal
manip = moveit_commander.MoveGroupCommander("manip")

# "jointPoint_1"
def jointPoint_1(jointPos):
    
    print ("jointPos.data[0] =", jointPos.data[0])
    joint_goal = manip.get_current_joint_values()
    joint_goal[0] = jointPos.data[0]
    print ("manip:", manip.go(joint_goal, wait=True))

# "jointPoint_2"
def jointPoint_2(jointPos):
    
    print ("jointPos.data[1] =", jointPos.data[1])
    joint_goal = manip.get_current_joint_values()
    joint_goal[1] = jointPos.data[1]
    print ("manip:",manip.go(joint_goal, wait=True))

# "jointPoint_3"
def jointPoint_3(jointPos):

    print ("jointPos.data[2] =", jointPos.data[2])
    joint_goal = manip.get_current_joint_values()
    joint_goal[2] = jointPos.data[2]
    print ("manip",manip.go(joint_goal, wait=True))

# "jointPoint_4"
def jointPoint_4(jointPos):
    
    print ("jointPos.data[3] =", jointPos.data[3])
    joint_goal = manip.get_current_joint_values()
    joint_goal[3] = jointPos.data[3]
    print ("manip",manip.go(joint_goal, wait=True))

# "jointPoint_5"
def jointPoint_5(jointPos):
    
    print ("jointPos.data[4] =", jointPos.data[4])
    joint_goal = manip.get_current_joint_values()
    joint_goal[4] = jointPos.data[4]
    print ("manip",manip.go(joint_goal, wait=True))

# "jointPoint_6"
def jointPoint_6(jointPos):
    
    print ("jointPos.data[5] =", jointPos.data[5])
    joint_goal = manip.get_current_joint_values()
    joint_goal[5] = jointPos.data[5]
    print ("manip",manip.go(joint_goal, wait=True))

# "X axis"
def jointPoint_X(carPos):

    print ("carPos.data[0](X) =", carPos.data[0])
    joint_5_b_waypoints = []
    joint_5_b_wpose = manip.get_current_pose().pose
    joint_5_b_wpose.position.x = carPos.data[0]
    joint_5_b_waypoints.append(copy.deepcopy(joint_5_b_wpose))
    (plan, fraction) = manip.compute_cartesian_path(joint_5_b_waypoints,0.01,0.0)
    print ("CARTESIAN",manip.execute(plan, wait=True))

# "Y axis"
def jointPoint_Y(carPos):

    print ("carPos.data[1](Y) =", carPos.data[1])
    joint_1_s_waypoints = []
    joint_1_s_wpose = manip.get_current_pose().pose
    joint_1_s_wpose.position.y = carPos.data[1]
    joint_1_s_waypoints.append(copy.deepcopy(joint_1_s_wpose))
    (plan, fraction) = manip.compute_cartesian_path(joint_1_s_waypoints,0.01,0.0)
    print ("CARTESIAN",manip.execute(plan, wait=True))

# "Z axis"
def jointPoint_Z(carPos):

    print ("carPos.data[2](Z) =", carPos.data[2])
    joint_3_u_waypoints = []
    joint_3_u_wpose = manip.get_current_pose().pose
    joint_3_u_wpose.position.z = carPos.data[2]
    joint_3_u_waypoints.append(copy.deepcopy(joint_3_u_wpose))
    (plan, fraction) = manip.compute_cartesian_path(joint_3_u_waypoints,0.01,0.0)
    print ("CARTESIAN",manip.execute(plan, wait=True))

def arraycallback_jointPos(jointPos):

    robot = moveit_commander.RobotCommander()
    #print ("Robot state:", robot.get_current_state())
    #print ("Robot groups:", robot.get_group_names())

    #number joint
    jointPoint_1(jointPos)
    jointPoint_2(jointPos)
    jointPoint_3(jointPos)
    jointPoint_4(jointPos)
    jointPoint_5(jointPos)
    jointPoint_6(jointPos)

def arraycallback_carPos(carPos):

    robot = moveit_commander.RobotCommander()
    #print ("Robot state:", robot.get_current_state())
    #print ("Robot groups:", robot.get_group_names())

    #X,Y,Z axis
    jointPoint_X(carPos)
    jointPoint_Y(carPos)
    jointPoint_Z(carPos)
    
def main():
     rospy.init_node('manip_node', anonymous=True)
     
     sub_1 = rospy.Subscriber("movePTPJointAbs", Float32MultiArray, arraycallback_jointPos, queue_size=1)
     sub_2 = rospy.Subscriber("movePTPCartesianAbs", Float32MultiArray, arraycallback_carPos, queue_size=1)

     pub = rospy.Publisher('getHome', Float32MultiArray, queue_size=1)

     print ("Waiting for jointPos or carPos ... \n")

     rate = rospy.Rate(10)
     
     while not rospy.is_shutdown():
        #Publish_HomePosition
        homePos = [0, 0, 0, 0, 0, 0]
        homePos_Pub = Float32MultiArray(data=homePos)
        pub.publish(homePos_Pub)
        rate.sleep()
 
if __name__ == '__main__':
     try:
         main()
     except rospy.ROSInterruptException: pass
