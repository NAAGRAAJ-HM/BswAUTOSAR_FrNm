/******************************************************************************/
/* File   : FrNm.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgFrNm.hpp"
#include "FrNm_core.hpp"
#include "infFrNm_Exp.hpp"
#include "infFrNm_Imp.hpp"

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
class module_FrNm:
      INTERFACES_EXPORTED_FRNM
      public abstract_module
   ,  public class_FrNm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};
            infPduRClient_Lo        infPduRClient_FrNm;

   public:
      module_FrNm(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, FRNM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, FRNM_CONFIG_DATA, FRNM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, FRNM_CODE) DeInitFunction (void);
      FUNC(void, FRNM_CODE) MainFunction   (void);
      FRNM_CORE_FUNCTIONALITIES
};

extern VAR(module_FrNm, FRNM_VAR) FrNm;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, FRNM_VAR, FRNM_CONST) gptrinfEcuMClient_FrNm = &FrNm;
CONSTP2VAR(infDcmClient,  FRNM_VAR, FRNM_CONST) gptrinfDcmClient_FrNm  = &FrNm;
CONSTP2VAR(infSchMClient, FRNM_VAR, FRNM_CONST) gptrinfSchMClient_FrNm = &FrNm;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_FrNm, FRNM_VAR) FrNm(
   {
         FRNM_AR_RELEASE_VERSION_MAJOR
      ,  FRNM_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, FRNM_CODE) module_FrNm::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, FRNM_CONFIG_DATA, FRNM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == FrNm_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgFrNm;
         }
      }
      else{
#if(STD_ON == FrNm_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == FrNm_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == FrNm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRNM_CODE) module_FrNm::DeInitFunction(void){
#if(STD_ON == FrNm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == FrNm_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == FrNm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRNM_CODE) module_FrNm::MainFunction(void){
#if(STD_ON == FrNm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == FrNm_InitCheck)
   }
   else{
#if(STD_ON == FrNm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRNM_CODE) module_FrNm::dummy(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

