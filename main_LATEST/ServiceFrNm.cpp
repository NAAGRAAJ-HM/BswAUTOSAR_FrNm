/******************************************************************************/
/* File   : ServiceFrNm.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceFrNm.hpp"
#include "infServiceFrNm_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define FRNM_AR_RELEASE_VERSION_MAJOR                                          4
#define FRNM_AR_RELEASE_VERSION_MINOR                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(FRNM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible FRNM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(FRNM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible FRNM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceFrNm, FRNM_VAR) ServiceFrNm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, FRNM_CODE) module_ServiceFrNm::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, FRNM_CONST,       FRNM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   FRNM_CONFIG_DATA, FRNM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceFrNm_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceFrNm_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceFrNm_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceFrNm_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceFrNm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRNM_CODE) module_ServiceFrNm::DeInitFunction(
   void
){
#if(STD_ON == ServiceFrNm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceFrNm_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceFrNm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRNM_CODE) module_ServiceFrNm::MainFunction(
   void
){
#if(STD_ON == ServiceFrNm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceFrNm_InitCheck)
   }
   else{
#if(STD_ON == ServiceFrNm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRNM_CODE) module_ServiceFrNm::dummy(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

