// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Copyright (C) 2022 Ash Logan <ash@heyquark.com>
 */

#ifndef __LIGHTREC_WIIU_H__
#define __LIGHTREC_WIIU_H__

#define WUP_RWX_MEM_BASE 0x00802000
#define WUP_RWX_MEM_END 0x01000000
// WiiU has just shy of 8MiB RWX RAM available using the current method
#define WUP_RECMEM_SIZE (WUP_RWX_MEM_END - WUP_RWX_MEM_BASE)

// TODO: Support real OSCodegen mem

#endif //__LIGHTREC_WIIU_H__
