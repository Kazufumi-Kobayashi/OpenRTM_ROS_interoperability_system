// -*- C++ -*-
/*!
 * @file  RTMtoROSTest.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "RTMtoROSTest.h"

// Module specification
// <rtc-template block="module_spec">
static const char* rtmtoros_spec[] =
  {
    "implementation_id", "RTMtoROSTest",
    "type_name",         "RTMtoROSTest",
    "description",       "ModuleDescription",
    "version",           "1.0.0",
    "vendor",            "rsdlab",
    "category",          "Converter",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
RTMtoROSTest::RTMtoROSTest(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_getFeedbackPosJointIn("getFeedbackPosJoint", m_getFeedbackPosJoint),
    m_getManipInfoIn("getManipInfo", m_getManipInfo),
    m_getSoftLimitJointIn("getSoftLimitJoint", m_getSoftLimitJoint),
    m_getFeedbackPosCartesianIn("getFeedbackPosCartesian", m_getFeedbackPosCartesian),
    m_getSoftLimitCartesianIn("getSoftLimitCartesian", m_getSoftLimitCartesian),
    m_getHomeIn("getHome", m_getHome),
    m_servoOFFOut("servoOFF", m_servoOFF),
    m_servoONOut("servoON", m_servoON),
    m_setSoftLimitJointOut("setSoftLimitJoint", m_setSoftLimitJoint),
    m_closeGripperOut("closeGripper", m_closeGripper),
    m_moveGripperOut("moveGripper", m_moveGripper),
    m_movePTPCartesianAbsOut("movePTPCartesianAbs", m_movePTPCartesianAbs),
    m_movePTPJointAbsOut("movePTPJointAbs", m_movePTPJointAbs),
    m_openGripperOut("openGripper", m_openGripper),
    m_setSoftLimitCartesianOut("setSoftLimitCartesian", m_setSoftLimitCartesian),
    m_setHomeOut("setHome", m_setHome),
    m_goHomeOut("goHome", m_goHome),
    m_ManipulatorCommonInterface_CommonPort("ManipulatorCommonInterface_Common"),
    m_ManipulatorCommonInterface_MiddlePort("ManipulatorCommonInterface_Middle")

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
RTMtoROSTest::~RTMtoROSTest()
{
}



RTC::ReturnCode_t RTMtoROSTest::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("servoOFF", m_servoOFFIn);
  addInPort("servoON", m_servoONIn);
  addInPort("setSoftLimitJoint", m_setSoftLimitJointIn);
  addInPort("closeGripper", m_closeGripperIn);
  addInPort("moveGripper", m_moveGripperIn);
  addInPort("movePTPCartesianAbs", m_movePTPCartesianAbsIn);
  addInPort("movePTPJointAbs", m_movePTPJointAbsIn);
  addInPort("openGripper", m_openGripperIn);
  addInPort("setSoftLimitCartesian", m_setSoftLimitCartesianIn);
  addInPort("setHome", m_setHomeIn);
  addInPort("goHome", m_goHomeIn);

  // Set OutPort buffer
  addOutPort("getFeedbackPosJoint", m_getFeedbackPosJointOut);
  addOutPort("getManipInfo", m_getManipInfoOut);
  addOutPort("getSoftLimitJoint", m_getSoftLimitJointOut);
  addOutPort("getFeedbackPosCartesian", m_getFeedbackPosCartesianOut);
  addOutPort("getSoftLimitCartesian", m_getSoftLimitCartesianOut);
  addOutPort("getHome", m_getHomeOut);

  // Set service provider to Ports

  // Set service consumers to Ports
  m_ManipulatorCommonInterface_CommonPort.registerConsumer("ManipulatorCommonInterface_Common", "JARA_ARM::ManipulatorCommonInterface_Common", m_ManipulatorCommonInterface_Common);
  m_ManipulatorCommonInterface_MiddlePort.registerConsumer("ManipulatorCommonInterface_Middle", "JARA_ARM::ManipulatorCommonInterface_Middle", m_ManipulatorCommonInterface_Middle);

  // Set CORBA Service Ports
  addPort(m_ManipulatorCommonInterface_CommonPort);
  addPort(m_ManipulatorCommonInterface_MiddlePort);

  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>

  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t RTMtoROSTest::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t RTMtoROSTest::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t RTMtoROSTest::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t RTMtoROSTest::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t RTMtoROSTest::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t RTMtoROSTest::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t RTMtoROSTest::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t RTMtoROSTest::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t RTMtoROSTest::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t RTMtoROSTest::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t RTMtoROSTest::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{

  void RTMtoROSTestInit(RTC::Manager* manager)
  {
    coil::Properties profile(rtmtoros_spec);
    manager->registerFactory(profile,
                             RTC::Create<RTMtoROSTest>,
                             RTC::Delete<RTMtoROSTest>);
  }

};


