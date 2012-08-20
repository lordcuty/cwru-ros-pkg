#! /usr/bin/env python
# -*- coding: utf-8 -*-

import roslib
import rospy

import tf

from geometry_msgs.msg import Quaternion
from geometry_msgs.msg import PoseWithCovarianceStamped



def main(pub):
  initialPose=PoseWithCovarianceStamped()
  initialPose.header.frame_id='/map'
  initialPose.pose.pose.position.x=0
  initialPose.pose.pose.position.y=0
  
  quaternion = tf.transformations.quaternion_about_axis(0 , (0,0,1))
  initialPose.pose.pose.orientation= Quaternion(*quaternion)
  initialPose.pose.covariance[0]=.25
  initialPose.pose.covariance[7]=.25
  initialPose.pose.covariance[35]=.0685
  #pub = rospy.Publisher('initialpose', PoseWithCovarianceStamped)

  pub.publish(initialPose)
  rospy.sleep(2)

if __name__ == '__main__':
  pub = rospy.Publisher('initialpose', PoseWithCovarianceStamped)
  rospy.init_node('intial_pose_seeder')
  main(pub)
  
