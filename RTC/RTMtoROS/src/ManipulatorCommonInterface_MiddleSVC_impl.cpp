// -*-C++-*-
/*!
 * @file  ManipulatorCommonInterface_MiddleSVC_impl.cpp
 * @brief Service implementation code of ManipulatorCommonInterface_Middle.idl
 *
 */

#include "ManipulatorCommonInterface_MiddleSVC_impl.h"
#include "returnID.h"
#include <iostream>

/*
 * Example implementational code for IDL interface JARA_ARM::ManipulatorCommonInterface_Middle
 */
JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl()
{
  // Please add extra constructor code here.
}


JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::~JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl()
{
  // Please add extra destructor code here.
}


/*
 * Methods corresponding to IDL attributes and operations
 */
JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::closeGripper()
{
 std::cout << "closeGripper" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getBaseOffset(JARA_ARM::HgMatrix offset)
{
 std::cout << "getBaseOffset" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getFeedbackPosCartesian(JARA_ARM::CarPosWithElbow& pos)
{
 std::cout << "getFeedbackPosCartesian" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getMaxSpeedCartesian(JARA_ARM::CartesianSpeed& speed)
{
 std::cout << "getMaxSpeedCartesian" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getMaxSpeedJoint(JARA_ARM::DoubleSeq_out speed)
{
 std::cout << "getMaxSpeedJoint" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getMinAccelTimeCartesian(::CORBA::Double& aclTime)
{
 std::cout << "getMinAccelTimeCartesian" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getMinAccelTimeJoint(::CORBA::Double& aclTime)
{
 std::cout << "getMinAccelTimeJoint" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getSoftLimitCartesian(JARA_ARM::LimitValue& xLimit, JARA_ARM::LimitValue& yLimit, JARA_ARM::LimitValue& zLimit)
{
 std::cout << "getSoftLimitCartesian" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveGripper(JARA_ARM::ULONG angleRatio)
{
 std::cout << "moveGripper" << std::endl;
 std::cout << "moveLinearCartesianRel" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveLinearCartesianAbs(const JARA_ARM::CarPosWithElbow& carPoint)
{
 std::cout << "moveLinearCartesianAbs" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveLinearCartesianRel(const JARA_ARM::CarPosWithElbow& carPoint)
{
 std::cout << "moveLinearCartesianRel" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::movePTPCartesianAbs(const JARA_ARM::CarPosWithElbow& carPoint)
{
 std::cout << "movePTPCartesianAbs" << std::endl;

 targetCarPos[0] = carPoint.carPos[0][3];
 targetCarPos[1] = carPoint.carPos[1][3];
 targetCarPos[2] = carPoint.carPos[2][3];
    
 std::cout << "Success" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::OK, "オペレーションを正常に受け付け");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::movePTPCartesianRel(const JARA_ARM::CarPosWithElbow& carPoint)
{
 std::cout << "movePTPCartesianRel" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::movePTPJointAbs(const JARA_ARM::JointPos& jointPoints)
{
  std::cout << "movePTPJointAbs" << std::endl;
  
  targetJointPos[0] = jointPoints[0];
  targetJointPos[1] = jointPoints[1];
  targetJointPos[2] = jointPoints[2];
  targetJointPos[3] = jointPoints[3];
  targetJointPos[4] = jointPoints[4];
  targetJointPos[5] = jointPoints[5];
  
  std::cout << "Success" << std::endl << std::endl;
  return RETURN_CODE(JARA_ARM::OK, "オペレーションを正常に受け付け");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::movePTPJointRel(const JARA_ARM::JointPos& jointPoints)
{
 std::cout << "movePTPJointRel" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::openGripper()
{
 std::cout << "openGripper" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::pause()
{
 std::cout << "pause" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::resume()
{
 std::cout << "resume" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::stop()
{
 std::cout << "stop" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setAccelTimeCartesian(::CORBA::Double aclTime)
{
 std::cout << "setAccelTimeCartesian" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setAccelTimeJoint(::CORBA::Double aclTime)
{
 std::cout << "setAccelTimeJoint" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setBaseOffset(const JARA_ARM::HgMatrix offset)
{
 std::cout << "setBaseOffset" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setControlPointOffset(const JARA_ARM::HgMatrix offset)
{
 std::cout << "setControlPointOffset" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setMaxSpeedCartesian(const JARA_ARM::CartesianSpeed& speed)
{
 std::cout << "setMaxSpeedCartesian" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setMaxSpeedJoint(const JARA_ARM::DoubleSeq& speed)
{
 std::cout << "setMaxSpeedJoint" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setMinAccelTimeCartesian(::CORBA::Double aclTime)
{
 std::cout << "setMinAccelTimeCartesian" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setMinAccelTimeJoint(::CORBA::Double aclTime)
{
 std::cout << "setMinAccelTimeJoint" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setSoftLimitCartesian(const JARA_ARM::LimitValue& xLimit, const JARA_ARM::LimitValue& yLimit, const JARA_ARM::LimitValue& zLimit)
{
 std::cout << "setSoftLimitCartesian" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setSpeedCartesian(JARA_ARM::ULONG spdRatio)
{
 std::cout << "setSpeedCartesian" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setSpeedJoint(JARA_ARM::ULONG spdRatio)
{
 std::cout << "setSpeedJoint" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveCircularCartesianAbs(const JARA_ARM::CarPosWithElbow& carPointR, const JARA_ARM::CarPosWithElbow& carPointT)
{
 std::cout << "moveCircularCartesianAbs" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::moveCircularCartesianRel(const JARA_ARM::CarPosWithElbow& carPointR, const JARA_ARM::CarPosWithElbow& carPointT)
{
 std::cout << "moveCircularCartesianRel" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::setHome(const JARA_ARM::JointPos& jointPoint)
{
 std::cout << "setHome" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::getHome(JARA_ARM::JointPos_out jointPoint)
{
 std::cout << "getHome" << std::endl;

 std::cout << "Homeでの各関節角度" << std::endl;
 std::cout << "第1軸 : " << getHomePos[0] << std::endl;
 std::cout << "第2軸 : " << getHomePos[1] << std::endl;
 std::cout << "第3軸 : " << getHomePos[2] << std::endl;
 std::cout << "第4軸 : " << getHomePos[3] << std::endl;
 std::cout << "第5軸 : " << getHomePos[4] << std::endl;
 std::cout << "第6軸 : " << getHomePos[5] << std::endl;

 std::cout << "Success" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::OK, "オペレーションを正常に受け付け");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl::goHome()
{
 std::cout << "goHome" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}



// End of example implementational code



