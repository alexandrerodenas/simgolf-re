/* Ghidra decompiled: sound.dll */
/* Function: create_device @ 0x100021CB */
/* Body size: 5 addresses */


/* protected: static enum SNDERR __cdecl Dll_Midi_Device::create_device(class Midi_Device *
   *,unsigned long) */

SNDERR __cdecl Dll_Midi_Device::create_device(Midi_Device **param_1,ulong param_2)

{
  Midi_Device *pMVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x21cb  7
                       ?create_device@Dll_Midi_Device@@KA?AW4SNDERR@@PAPAVMidi_Device@@K@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_100586fe;
  pvStack_c = ExceptionList;
  if (DAT_100b4a1c != (Midi_Device *)0x0) {
    return 0xc;
  }
  ExceptionList = &pvStack_c;
  pMVar1 = operator_new(0x4058);
  uStack_4 = 0;
  if (pMVar1 != (Midi_Device *)0x0) {
    thunk_FUN_10029e70((undefined4 *)pMVar1);
    *(undefined4 *)(pMVar1 + 0x40) = 0;
    *(undefined4 *)(pMVar1 + 0x44) = 0;
    *(undefined4 *)(pMVar1 + 0x48) = 0;
    *(undefined4 *)(pMVar1 + 0x4c) = 0;
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    thunk_FUN_10008860((undefined4 *)(pMVar1 + 0x50));
    *(undefined ***)pMVar1 = &PTR_LAB_1005b28c;
    *(undefined4 *)(pMVar1 + 0x24) = 0;
    *(undefined4 *)(pMVar1 + 0x28) = 0;
    *(undefined4 *)(pMVar1 + 0x38) = 0x7f;
    *(undefined4 *)(pMVar1 + 0x2c) = 0;
    *(undefined4 *)(pMVar1 + 0x30) = 0xf;
    *(undefined4 *)(pMVar1 + 0x34) = 0;
    *(undefined4 *)(pMVar1 + 0x3c) = 0;
    DAT_100b4a1c = pMVar1;
    *param_1 = pMVar1;
    ExceptionList = pvStack_c;
    return 0;
  }
  DAT_100b4a1c = (Midi_Device *)0x0;
  *param_1 = (Midi_Device *)0x0;
  ExceptionList = pvStack_c;
  return 0;
}

