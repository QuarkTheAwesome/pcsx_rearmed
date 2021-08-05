/*
 * ppc definitions v0.5.1
 *  Authors: linuzappz <linuzappz@pcsx.net>
 *           alexey silinov
 */

#ifndef __PPC_H__
#define __PPC_H__

// include basic types
#include "../psxcommon.h"
#include "ppc_mnemonics.h"

#define NUM_HW_REGISTERS 28

/* general defines */
#define write8(val)  *(u8 *)ppcPtr = val; ppcPtr++;
#define write16(val) *(u16*)ppcPtr = val; ppcPtr+=2;
#define write32(val) *(u32*)ppcPtr = val; ppcPtr+=4;
#define write64(val) *(u64*)ppcPtr = val; ppcPtr+=8;

#define CALLFunc(FUNC) \
{ \
    u32 _func = (FUNC); \
    ReleaseArgs(); \
    if ((_func & 0x1fffffc) == _func) { \
        BLA(_func); \
    } else { \
        LIW(0, _func); \
        MTCTR(0); \
        BCTRL(); \
    } \
}

extern int cpuHWRegisters[NUM_HW_REGISTERS];

extern u32 *ppcPtr;
extern u8  *j8Ptr[32];
extern u32 *j32Ptr[32];

void ppcInit();
void ppcSetPtr(u32 *ptr);
void ppcShutdown();

inline void ppcAlign() {
    // forward align (if we need to)
    if((u32)ppcPtr%4)
      ppcPtr = (u32*)(((u32)ppcPtr + 4) & ~(3));
}

#endif /* __PPC_H__ */