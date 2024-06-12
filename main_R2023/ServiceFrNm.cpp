/******************************************************************************/
/* File   : ServiceFrNm.cpp                                                   */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
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

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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
VAR(module_ServiceFrNm, SERVICEFRNM_VAR) ServiceFrNm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICEFRNM_CODE) module_ServiceFrNm::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICEFRNM_CONST,       SERVICEFRNM_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEFRNM_CONFIG_DATA, SERVICEFRNM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceFrNm_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
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
         ,  SERVICEFRNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEFRNM_CODE) module_ServiceFrNm::DeInitFunction(
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
         ,  SERVICEFRNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEFRNM_CODE) module_ServiceFrNm::MainFunction(
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
         ,  SERVICEFRNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEFRNM_CODE) module_ServiceFrNm::dummy(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

