/*************************************************************************
*   ��Ȩ����(C) 1987-2004, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  slave_errcode.h
*
*   ��    �� :  xumushui
*
*   ��    �� :  slaveģ������붨��
*
*   �޸ļ�¼ :  2011��8��27��  v1.00  xumushui      ����
*
*************************************************************************/

#ifndef __SLAVE_ERRCODE_H__
#define __SLAVE_ERRCODE_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "drv_comm.h"
#include "bsp_om.h"
#define BSP_MODU_SLAVE 11
/* ͨ�ô����룬��0x1001��ʼ */
#define BSP_ERR_COMMON (0x1000)
#define BSP_ERR_MODULE_NOT_INITED (BSP_ERR_COMMON + 1)
#define BSP_ERR_NULL_PTR (BSP_ERR_COMMON + 2)
#define BSP_ERR_INVALID_PARA (BSP_ERR_COMMON + 3)
#define BSP_ERR_RETRY_TIMEOUT (BSP_ERR_COMMON + 4)
#define BSP_ERR_BUF_ALLOC_FAILED (BSP_ERR_COMMON + 5)
#define BSP_ERR_BUF_FREE_FAILED (BSP_ERR_COMMON + 6)

/* ��ģ��ר�ô����룬��0x1��ʼ  */
#define BSP_ERR_SPECIAL (0x0)
/* ͨ�ô����� */
#define SLAVE_ERR_MODULE_NOT_INITED     BSP_DEF_ERR(BSP_MODU_SLAVE,BSP_ERR_MODULE_NOT_INITED)
#define SLAVE_ERR_NULL_POINTER          BSP_DEF_ERR(BSP_MODU_SLAVE,BSP_ERR_NULL_PTR)
#define SLAVE_ERR_INVALID_PARA          BSP_DEF_ERR(BSP_MODU_SLAVE,BSP_ERR_INVALID_PARA)
#define SLAVE_ERR_MALLOC_FAILED         BSP_DEF_ERR(BSP_MODU_SLAVE,BSP_ERR_BUF_ALLOC_FAILED)
#define SLAVE_ERR_FREE_FAILED           BSP_DEF_ERR(BSP_MODU_SLAVE,BSP_ERR_BUF_FREE_FAILED)
#define SLAVE_ERR_RETRY_TIMEOUT         BSP_DEF_ERR(BSP_MODU_SLAVE,BSP_ERR_RETRY_TIMEOUT)

/* ר�ô����� */
#define SLAVE_ERR_UNKNOWN               BSP_DEF_ERR(BSP_MODU_SLAVE,(BSP_ERR_SPECIAL + 0x1))
#define SLAVE_ERR_INVAL_ENUMCFG         BSP_DEF_ERR(BSP_MODU_SLAVE,(BSP_ERR_SPECIAL + 0x2))
#define SLAVE_ERR_TASK_CREATE           BSP_DEF_ERR(BSP_MODU_SLAVE,(BSP_ERR_SPECIAL + 0x3))
#define SLAVE_ERR_MSG_CREATE            BSP_DEF_ERR(BSP_MODU_SLAVE,(BSP_ERR_SPECIAL + 0x4))
#define SLAVE_ERR_SEM_CREATE            BSP_DEF_ERR(BSP_MODU_SLAVE,(BSP_ERR_SPECIAL + 0x5))
#define SLAVE_ERR_FIFO_FULL             BSP_DEF_ERR(BSP_MODU_SLAVE,(BSP_ERR_SPECIAL + 0x6))
#define SLAVE_ERR_INVAL_CONDITION       BSP_DEF_ERR(BSP_MODU_SLAVE,(BSP_ERR_SPECIAL + 0x7))
#define SLAVE_ERR_BUFF_OVERFLOW         BSP_DEF_ERR(BSP_MODU_SLAVE,(BSP_ERR_SPECIAL + 0x8))

/* Defines for Success and Fail*/
#define SLAVE_OK	    (BSP_OK)
#define SLAVE_ERROR     (BSP_ERROR)

#ifdef __cplusplus
}
#endif

#endif /* end #define _BSP_GLOBAL_H_*/