// -*-C++-*-
/*!
 * @file  ManipulatorCommonInterface_CommonSVC_impl.cpp
 * @brief Service implementation code of ManipulatorCommonInterface_Common.idl
 *
 */

#include "ManipulatorCommonInterface_CommonSVC_impl.h"
#include "returnID.h"
#include <iostream>

/*
 * Example implementational code for IDL interface JARA_ARM::ManipulatorCommonInterface_Common
 */
JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl::JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl()
{
  // Please add extra constructor code here.
}


JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl::~JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl()
{
  // Please add extra destructor code here.
}


/*
 * Methods corresponding to IDL attributes and operations
 */
JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl::clearAlarms()
{
 std::cout << "clearAlarms" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl::getActiveAlarm(JARA_ARM::AlarmSeq_out alarms)
{
 std::cout << "getActiveAlarm" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl::getFeedbackPosJoint(JARA_ARM::JointPos_out pos)
{
 std::cout << "getFeedbackPosJoint" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl::getManipInfo(JARA_ARM::ManipInfo_out mInfo)
{
 std::cout << "getManipinfo" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl::getSoftLimitJoint(JARA_ARM::LimitSeq_out softLimit)
{
 std::cout << "getSoftLimitJoint" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl::getState(JARA_ARM::ULONG& state)
{
 std::cout << "getState" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl::servoOFF()
{
 std::cout << "servoOFF" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl::servoON()
{
 std::cout << "servoON" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}

JARA_ARM::RETURN_ID* JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl::setSoftLimitJoint(const JARA_ARM::LimitSeq& softLimit)
{
 std::cout << "setSoftLimitJoint" << std::endl;
 std::cout << "ERROR : コマンド未実装" << std::endl << std::endl;
 return RETURN_CODE(JARA_ARM::NOT_IMPLEMENTED, "未実装のコマンド");
}



// End of example implementational code



