/* Ghidra decompiled: sound.dll */
/* Function: FUN_10009e40 @ 0x10009E40 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10009e40(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1[0xb] != 0) {
    thunk_FUN_10008d70(param_1[0xb]);
    thunk_FUN_10008920(DAT_100b49ec,param_1);
  }
  DAT_100b5008 = DAT_100b5000;
  if (DAT_100b5000 == (int *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)DAT_100b5000[2];
  }
  thunk_FUN_1000a330(param_1);
  do {
    puVar2 = puVar3;
    if (puVar2 == (undefined4 *)0x0) {
      if ((HMIDIOUT)param_1[0xf] != (HMIDIOUT)0x0) {
        midiOutClose((HMIDIOUT)param_1[0xf]);
      }
      puVar3 = DAT_100b4fe8;
      if (DAT_100b4fe8 != (undefined4 *)0x0) {
        DAT_100b4fe8 = (undefined4 *)DAT_100b4fe8[1];
        if (DAT_100b4fe8 == (undefined4 *)0x0) {
          DAT_100b4fec = 0;
          DAT_100b4fe8 = (undefined4 *)0x0;
        }
        else {
          *DAT_100b4fe8 = 0;
        }
        puVar2 = (undefined4 *)puVar3[2];
        FUN_1004249a((undefined *)puVar3);
        while (DAT_100b4ff4 = DAT_100b4ff4 + -1, puVar2 != (undefined4 *)0x0) {
          thunk_FUN_1001abd0(puVar2);
          FUN_1004249a((undefined *)puVar2);
          puVar3 = DAT_100b4fe8;
          if (DAT_100b4fe8 == (undefined4 *)0x0) {
            return 0;
          }
          DAT_100b4fe8 = (undefined4 *)DAT_100b4fe8[1];
          if (DAT_100b4fe8 == (undefined4 *)0x0) {
            DAT_100b4fec = 0;
            DAT_100b4fe8 = (undefined4 *)0x0;
          }
          else {
            *DAT_100b4fe8 = 0;
          }
          puVar2 = (undefined4 *)puVar3[2];
          FUN_1004249a((undefined *)puVar3);
        }
      }
      return 0;
    }
    puVar2[0x2b] = puVar2[0x2b] & 0xffffffdf;
    for (piVar1 = DAT_100b5000; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if ((undefined4 *)piVar1[2] == puVar2) {
        if (piVar1 != (int *)0x0) {
          if (*piVar1 == 0) {
            DAT_100b5000 = (int *)piVar1[1];
          }
          else {
            *(int *)(*piVar1 + 4) = piVar1[1];
          }
          DAT_100b5008 = (int *)piVar1[1];
          if (DAT_100b5008 == (int *)0x0) {
            _DAT_100b5004 = *piVar1;
            DAT_100b5008 = (int *)0x0;
          }
          else {
            *DAT_100b5008 = *piVar1;
          }
          FUN_1004249a((undefined *)piVar1);
          DAT_100b500c = DAT_100b500c + -1;
        }
        break;
      }
    }
    if ((DAT_100b5008 == (int *)0x0) ||
       (DAT_100b5008 = (int *)DAT_100b5008[1], DAT_100b5008 == (int *)0x0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)DAT_100b5008[2];
    }
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  } while( true );
}

