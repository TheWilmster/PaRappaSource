#include "prrap.h"

int SceneSwitch(int scene) { // FUN_80015788
    int iVar1;
    int local_14;
    int local_10;
    
    RapStopSeq();
    FUN_80026ef8(DAT_80094410);
    FUN_80026ecc();
    FUN_80015590(scene);
    do {
        while (1) {
            while (1) {
                do {
                    iVar1 = PadRead(1);
                } while (iVar1 != 0);
                iVar1 = FUN_80026b94(3,&unknownAppVar);
                if (iVar1 != 1) break;
                    local_10 = FUN_80019414(&DAT_80092f10);
                if (local_10 != 0) {
                    FUN_80026b94(6,local_10);
                }
            }
            if (iVar1 == 2) break;
            if (iVar1 == 3) {
                FUN_8002776c(&DAT_801c3640,scene);
            } else if (iVar1 == 4) {
                iVar1 = FUN_80026b94(2,&local_14);
                if (iVar1 == 1) {
                    return local_14;
                }
            } else if (iVar1 == 6) {
                FUN_800193b0(&DAT_80092f10);
            }
            else {
                if (iVar1 == 7) {
                    return 0;
                }
                if (iVar1 == 8) {
                    FUN_80026b94(0x11,&unknownAppVar);
                }
            }
        }
        FUN_80015700(&DAT_80092f10);
        local_14 = FUN_800193f4(&DAT_80092f10);
    } while (local_14 < 0);
    unknownAppVar = 2;
    iVar1 = FUN_800161a8(local_14);
    return iVar1;
}
