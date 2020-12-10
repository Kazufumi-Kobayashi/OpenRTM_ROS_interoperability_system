// -*- C++ -*-
/*!
 * @file  RTMtoROS.h
 * @brief ModuleDescription
 * @date  $Date$
 *
 * $Id$
 */

#ifndef RTMTOROS_H
#define RTMTOROS_H

#include <rtm/idl/BasicDataTypeSkel.h>
#include <rtm/idl/ExtendedDataTypesSkel.h>
#include <rtm/idl/InterfaceDataTypesSkel.h>

// Service implementation headers
// <rtc-template block="service_impl_h">
#include "ManipulatorCommonInterface_CommonSVC_impl.h"
#include "ManipulatorCommonInterface_MiddleSVC_impl.h"

// </rtc-template>

// Service Consumer stub headers
// <rtc-template block="consumer_stub_h">
#include "BasicDataTypeStub.h"

// </rtc-template>

#include <rtm/Manager.h>
#include <rtm/DataFlowComponentBase.h>
#include <rtm/CorbaPort.h>
#include <rtm/DataInPort.h>
#include <rtm/DataOutPort.h>

/*!
 * @class RTMtoROS
 * @brief ModuleDescription
 *
 */
class RTMtoROS
  : public RTC::DataFlowComponentBase
{
 public:
  /*!
   * @brief constructor
   * @param manager Maneger Object
   */
  RTMtoROS(RTC::Manager* manager);

  /*!
   * @brief destructor
   */
  ~RTMtoROS();

  // <rtc-template block="public_attribute">
  
  // </rtc-template>

  // <rtc-template block="public_operation">
  
  // </rtc-template>

  /***
   *
   * The initialize action (on CREATED->ALIVE transition)
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
   virtual RTC::ReturnCode_t onInitialize();

  /***
   *
   * The finalize action (on ALIVE->END transition)
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // virtual RTC::ReturnCode_t onFinalize();

  /***
   *
   * The startup action when ExecutionContext startup
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // virtual RTC::ReturnCode_t onStartup(RTC::UniqueId ec_id);

  /***
   *
   * The shutdown action when ExecutionContext stop
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // virtual RTC::ReturnCode_t onShutdown(RTC::UniqueId ec_id);

  /***
   *
   * The activated action (Active state entry action)
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
   virtual RTC::ReturnCode_t onActivated(RTC::UniqueId ec_id);

  /***
   *
   * The deactivated action (Active state exit action)
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
   virtual RTC::ReturnCode_t onDeactivated(RTC::UniqueId ec_id);

  /***
   *
   * The execution action that is invoked periodically
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
   virtual RTC::ReturnCode_t onExecute(RTC::UniqueId ec_id);

  /***
   *
   * The aborting action when main logic error occurred.
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // virtual RTC::ReturnCode_t onAborting(RTC::UniqueId ec_id);

  /***
   *
   * The error action in ERROR state
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // virtual RTC::ReturnCode_t onError(RTC::UniqueId ec_id);

  /***
   *
   * The reset action that is invoked resetting
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // virtual RTC::ReturnCode_t onReset(RTC::UniqueId ec_id);
  
  /***
   *
   * The state update action that is invoked after onExecute() action
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // virtual RTC::ReturnCode_t onStateUpdate(RTC::UniqueId ec_id);

  /***
   *
   * The action that is invoked when execution context's rate is changed
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // virtual RTC::ReturnCode_t onRateChanged(RTC::UniqueId ec_id);


 protected:
  // <rtc-template block="protected_attribute">
  
  // </rtc-template>

  // <rtc-template block="protected_operation">
  
  // </rtc-template>

  // Configuration variable declaration
  // <rtc-template block="config_declare">

  // </rtc-template>

  // DataInPort declaration
  // <rtc-template block="inport_declare">
  RTC::TimedFloatSeq m_getFeedbackPosJoint;
  /*!
   */
  RTC::InPort<RTC::TimedFloatSeq> m_getFeedbackPosJointIn;
  RTC::TimedFloatSeq m_getManipInfo;
  /*!
   */
  RTC::InPort<RTC::TimedFloatSeq> m_getManipInfoIn;
  RTC::TimedFloatSeq m_getSoftLimitJoint;
  /*!
   */
  RTC::InPort<RTC::TimedFloatSeq> m_getSoftLimitJointIn;
  RTC::TimedFloatSeq m_getFeedbackPosCartesian;
  /*!
   */
  RTC::InPort<RTC::TimedFloatSeq> m_getFeedbackPosCartesianIn;
  RTC::TimedFloatSeq m_getSoftLimitCartesian;
  /*!
   */
  RTC::InPort<RTC::TimedFloatSeq> m_getSoftLimitCartesianIn;
  RTC::TimedFloatSeq m_getHome;
  /*!
   */
  RTC::InPort<RTC::TimedFloatSeq> m_getHomeIn;
  
  // </rtc-template>


  // DataOutPort declaration
  // <rtc-template block="outport_declare">
  RTC::TimedFloat m_servoOFF;
  /*!
   */
  RTC::OutPort<RTC::TimedFloat> m_servoOFFOut;
  RTC::TimedFloat m_servoON;
  /*!
   */
  RTC::OutPort<RTC::TimedFloat> m_servoONOut;
  RTC::TimedFloatSeq m_setSoftLimitJoint;
  /*!
   */
  RTC::OutPort<RTC::TimedFloatSeq> m_setSoftLimitJointOut;
  RTC::TimedFloat m_closeGripper;
  /*!
   */
  RTC::OutPort<RTC::TimedFloat> m_closeGripperOut;
  RTC::TimedFloat m_moveGripper;
  /*!
   */
  RTC::OutPort<RTC::TimedFloat> m_moveGripperOut;
  RTC::TimedFloatSeq m_movePTPCartesianAbs;
  /*!
   */
  RTC::OutPort<RTC::TimedFloatSeq> m_movePTPCartesianAbsOut;
  RTC::TimedFloatSeq m_movePTPJointAbs;
  /*!
   */
  RTC::OutPort<RTC::TimedFloatSeq> m_movePTPJointAbsOut;
  RTC::TimedFloat m_openGripper;
  /*!
   */
  RTC::OutPort<RTC::TimedFloat> m_openGripperOut;
  RTC::TimedFloatSeq m_setSoftLimitCartesian;
  /*!
   */
  RTC::OutPort<RTC::TimedFloatSeq> m_setSoftLimitCartesianOut;
  RTC::TimedFloatSeq m_setHome;
  /*!
   */
  RTC::OutPort<RTC::TimedFloatSeq> m_setHomeOut;
  RTC::TimedFloatSeq m_goHome;
  /*!
   */
  RTC::OutPort<RTC::TimedFloatSeq> m_goHomeOut;
  
  // </rtc-template>

  // CORBA Port declaration
  // <rtc-template block="corbaport_declare">
  /*!
   */
  RTC::CorbaPort m_ManipulatorCommonInterface_CommonPort;
  /*!
   */
  RTC::CorbaPort m_ManipulatorCommonInterface_MiddlePort;
  
  // </rtc-template>

  // Service declaration
  // <rtc-template block="service_declare">
  /*!
   */
  JARA_ARM_ManipulatorCommonInterface_CommonSVC_impl m_ManipulatorCommonInterface_Common;
  /*!
   */
  JARA_ARM_ManipulatorCommonInterface_MiddleSVC_impl m_ManipulatorCommonInterface_Middle;
  
  // </rtc-template>

  // Consumer declaration
  // <rtc-template block="consumer_declare">
  
  // </rtc-template>

 private:
  // <rtc-template block="private_attribute">
  
  // </rtc-template>

  // <rtc-template block="private_operation">
  
  // </rtc-template>

};


extern "C"
{
  DLL_EXPORT void RTMtoROSInit(RTC::Manager* manager);
};

#endif // RTMTOROS_H
