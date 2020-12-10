// -*- C++ -*-
/*!
 * @file  RTMtoROS.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "RTMtoROS.h"

// Module specification
// <rtc-template block="module_spec">
static const char* rtmtoros_spec[] =
  {
    "implementation_id", "RTMtoROS",
    "type_name",         "RTMtoROS",
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
RTMtoROS::RTMtoROS(RTC::Manager* manager)
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
RTMtoROS::~RTMtoROS()
{
}



RTC::ReturnCode_t RTMtoROS::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("getFeedbackPosJoint", m_getFeedbackPosJointIn);
  addInPort("getManipInfo", m_getManipInfoIn);
  addInPort("getSoftLimitJoint", m_getSoftLimitJointIn);
  addInPort("getFeedbackPosCartesian", m_getFeedbackPosCartesianIn);
  addInPort("getSoftLimitCartesian", m_getSoftLimitCartesianIn);
  addInPort("getHome", m_getHomeIn);

  // Set OutPort buffer
  addOutPort("servoOFF", m_servoOFFOut);
  addOutPort("servoON", m_servoONOut);
  addOutPort("setSoftLimitJoint", m_setSoftLimitJointOut);
  addOutPort("closeGripper", m_closeGripperOut);
  addOutPort("moveGripper", m_moveGripperOut);
  addOutPort("movePTPCartesianAbs", m_movePTPCartesianAbsOut);
  addOutPort("movePTPJointAbs", m_movePTPJointAbsOut);
  addOutPort("openGripper", m_openGripperOut);
  addOutPort("setSoftLimitCartesian", m_setSoftLimitCartesianOut);
  addOutPort("setHome", m_setHomeOut);
  addOutPort("goHome", m_goHomeOut);

  // Set service provider to Ports
  m_ManipulatorCommonInterface_CommonPort.registerProvider("ManipulatorCommonInterface_Common", "JARA_ARM::ManipulatorCommonInterface_Common", m_ManipulatorCommonInterface_Common);
  m_ManipulatorCommonInterface_MiddlePort.registerProvider("ManipulatorCommonInterface_Middle", "JARA_ARM::ManipulatorCommonInterface_Middle", m_ManipulatorCommonInterface_Middle);

  // Set service consumers to Ports

  // Set CORBA Service Ports
  addPort(m_ManipulatorCommonInterface_CommonPort);
  addPort(m_ManipulatorCommonInterface_MiddlePort);

  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>

  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t RTMtoROS::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t RTMtoROS::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t RTMtoROS::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t RTMtoROS::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t RTMtoROS::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t RTMtoROS::onExecute(RTC::UniqueId ec_id)
{
  /*------------------------------movePTPCartesianAbs------------------------------*/
  int a;
  m_movePTPCartesianAbs.data.length(3);

  for(a=0; a<3; a++){
  m_movePTPCartesianAbs.data[a] = m_ManipulatorCommonInterface_Middle.targetCarPos[a];
  }

  m_movePTPCartesianAbsOut.write();
  
  /*--------------------------------movePTPJointAbs--------------------------------*/
  int b;
  m_movePTPJointAbs.data.length(6);

  for(b=0; b<6; b++){
  m_movePTPJointAbs.data[b] = m_ManipulatorCommonInterface_Middle.targetJointPos[b];
  }

  m_movePTPJointAbsOut.write();

  /*--------------------------------getHome--------------------------------*/
  int c;
  if(m_getHomeIn.isNew())
  {
    m_getHomeIn.read();
    std::cout << "Homeでの各関節角度(getHome)" << std::endl;
    for(c=0; c<6; c++){
    m_ManipulatorCommonInterface_Middle.getHomePos[c] = m_getHome.data[c];
    std::cout << "第" << (c+1) << "軸 : " << m_getHome.data[c] << std::endl;
    }
  }

















  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t RTMtoROS::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t RTMtoROS::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t RTMtoROS::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t RTMtoROS::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t RTMtoROS::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{

  void RTMtoROSInit(RTC::Manager* manager)
  {
    coil::Properties profile(rtmtoros_spec);
    manager->registerFactory(profile,
                             RTC::Create<RTMtoROS>,
                             RTC::Delete<RTMtoROS>);
  }

};


