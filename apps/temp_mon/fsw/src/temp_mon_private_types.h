/*=======================================================================================
** File Name:  temp_mon_private_types.h
**
** Title:  Type Header File for TEMP_MON Application
**
** $Author:    Austin Cosby
** $Revision: 1.1 $
** $Date:      2018-07-27
**
** Purpose:  This header file contains declarations and definitions of all TEMP_MON's private
**           data structures and data types.
**
** Modification History:
**   Date | Author | Description
**   ---------------------------
**   2018-07-27 | Austin Cosby | Build #: Code Started
**
**=====================================================================================*/
    
#ifndef _TEMP_MON_PRIVATE_TYPES_H_
#define _TEMP_MON_PRIVATE_TYPES_H_

/*
** Pragmas
*/

/*
** Include Files
*/
#include "cfe.h"

/*
** Local Defines
*/

/*
** Local Structure Declarations
*/

typedef struct
{
    uint8  ucCmdHeader[CFE_SB_CMD_HDR_SIZE];
} TEMP_MON_NoArgCmd_t;


typedef struct
{
    uint32  counter;

    /* TODO:  Add input data to this application here, such as raw data read from I/O
    **        devices or data subscribed from other apps' output data.
    */

} TEMP_MON_InData_t;

typedef struct
{
    uint8   ucTlmHeader[CFE_SB_TLM_HDR_SIZE];
    uint32  uiCounter;
} TEMP_MON_OutData_t;

/* TODO:  Add more private structure definitions here, if necessary. */

/*
** External Global Variables
*/

/*
** Global Variables
*/

/*
** Local Variables
*/

/*
** Local Function Prototypes
*/

#endif /* _TEMP_MON_PRIVATE_TYPES_H_ */

/*=======================================================================================
** End of file temp_mon_private_types.h
**=====================================================================================*/
    