#pragma once
/******************************************************************************/
/* File   : ServiceFrNm.hpp                                                   */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceFrNm_ServiceNvM_Types.hpp"
#include "CfgServiceFrNm.hpp"
#include "ServiceFrNm_core.hpp"
#include "infServiceFrNm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceFrNm:
      INTERFACES_EXPORTED_SERVICEFRNM
      public abstract_module
   ,  public class_ServiceFrNm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceFrNm_Type* lptrConst = (ConstServiceFrNm_Type*)NULL_PTR;
      infServicePduRClient_Up infServicePduRClient_ServiceFrNm;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICEFRNM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEFRNM_CONST,       SERVICEFRNM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEFRNM_CONFIG_DATA, SERVICEFRNM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEFRNM_CODE) DeInitFunction (void);
      FUNC(void, SERVICEFRNM_CODE) MainFunction   (void);
      SERVICEFRNM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceFrNm, SERVICEFRNM_VAR) ServiceFrNm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

