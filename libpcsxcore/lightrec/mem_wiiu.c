// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Copyright (C) 2022 Ash Logan <ash@heyquark.com>
 */

#include "../psxhw.h"
#include "../psxmem.h"
#include "../r3000a.h"

#include "mem.h"

int lightrec_init_mmap(void) {
    psxM = malloc(0x200000 * 4);
    psxH = malloc(0x10000);
    psxR = malloc(0x80000);
    psxP = malloc(0x10000);

    if (!psxM || !psxH || !psxR || !psxP) {
        return -1;
    }

    return 0;
}

void lightrec_free_mmap(void) {
    free(psxM);
    free(psxH);
    free(psxR);
    free(psxP);
}
