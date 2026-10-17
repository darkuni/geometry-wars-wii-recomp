// Per-game constants for Geometry Wars: Galaxies (Wii disc, NTSC-U, RGLE7D).
// Addresses come from config/symbols.txt (dtk + naming passes vs Chocobo's Dungeon and Gradius ReBirth);
// r13 offsets were read from the instruction that loads the variable in the named SDK function.
#pragma once
#define GAME_NAME        "Geometry Wars: Galaxies"
#define GAME_EXE         "geowars"
#define GAME_INI         "geowars.ini"

#define G_AX_RESUME_CB          0x800B342Cu   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x8009945Cu   // DecrementerExceptionCallback
#define G_IOS_FREE              0x800E0554u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x800A1294u   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x5FA0u       // __OSGetInterruptHandler: lwz r4,-0x5FA0(r13)
#define G_SDA_IOS_HEAP          0x75BCu       // __ios_Ipc2: lwz r3,-0x75BC(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_800A1294
#define G_FN_IOS_FREE           f_800E0554
