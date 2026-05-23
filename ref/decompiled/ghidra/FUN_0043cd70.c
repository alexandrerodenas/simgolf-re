/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043cd70 @ 0x0043CD70 */
/* Body size: 1259 addresses */


void FUN_0043cd70(void)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_2c4 [696];
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b747b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  iVar3 = 0;
  FUN_0043cce0(s___flics_SMSG_introfinal_bik_004c8a0c,0);
  FUN_00474ae0();
  local_4 = 0;
  FUN_00474dd0(0x400,800,0,1,0,0);
  FUN_00475840(s_interface_Pop_upOK_pcx_004c89f4,0,0,0x100,2);
  do {
    iVar4 = 0;
    switch(iVar3) {
    case 0:
    case 3:
      iVar4 = 0;
      break;
    case 1:
      iVar4 = 200;
      break;
    case 2:
      iVar4 = 100;
    }
    FUN_00473bf0(local_2c4,0,iVar4,0x10,0x10,1,0);
    FUN_00473bf0(local_2c4,0,iVar4 + 0x11,0x10,0x10,1,0);
    iVar1 = iVar4 + 0x22;
    FUN_00473bf0(local_2c4,0,iVar1,0x10,0x1a,1,0);
    FUN_00473bf0(local_2c4,0x11,iVar4,0x10,0x10,1,0);
    FUN_00473bf0(local_2c4,0x22,iVar4,0x1a,0x10,1,0);
    FUN_00473bf0(local_2c4,0x22,iVar4 + 0x11,0x1a,0x10,1,0);
    FUN_00473bf0(local_2c4,0x22,iVar1,0x1a,0x1a,1,0);
    FUN_00473bf0(local_2c4,0x11,iVar1,0x10,0x1a,1,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_00475840(s_interface_Pop_upOK_A_pcx_004c89d8,0,0,0x100,2);
  iVar3 = 0;
  do {
    iVar4 = 0;
    switch(iVar3) {
    case 0:
    case 3:
      iVar4 = 0;
      break;
    case 1:
      iVar4 = 200;
      break;
    case 2:
      iVar4 = 100;
    }
    FUN_00473bf0(local_2c4,0,iVar4,0x10,0x10,1,0);
    FUN_00473bf0(local_2c4,0,iVar4 + 0x11,0x10,0x10,1,0);
    iVar1 = iVar4 + 0x22;
    FUN_00473bf0(local_2c4,0,iVar1,0x10,0x1a,1,0);
    FUN_00473bf0(local_2c4,0x11,iVar4,0x10,0x10,1,0);
    FUN_00473bf0(local_2c4,0x22,iVar4,0x1a,0x10,1,0);
    FUN_00473bf0(local_2c4,0x22,iVar4 + 0x11,0x1a,0x10,1,0);
    FUN_00473bf0(local_2c4,0x22,iVar1,0x1a,0x1a,1,0);
    FUN_00473bf0(local_2c4,0x11,iVar1,0x10,0x1a,1,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_00475840(s_interface_TitleUnSel_004c89c0,0,0,0x100,2);
  FUN_00473bf0(local_2c4,0x2a,0x15,0x144,0x79,1,1);
  FUN_00473bf0(local_2c4,0x1a0,0x1f,0x16b,0x8d,1,1);
  FUN_00473bf0(local_2c4,0x1fe,0x167,0x10f,0x6f,1,1);
  FUN_00473bf0(local_2c4,0x11f,0x1da,0x120,0x73,1,1);
  FUN_00473bf0(local_2c4,0xd,0x17e,0x11f,0x73,1,1);
  FUN_00473bf0(local_2c4,0xa8,0xc6,0x1d8,0xb0,1,1);
  FUN_00473bf0(local_2c4,0x2d1,0x210,0x3a,0x39,1,1);
  FUN_00475840(s_interface_TitleMO_004c89ac,0,0,0x100,2);
  FUN_00473bf0(local_2c4,0x2a,0x15,0x144,0x79,1,1);
  FUN_00473bf0(local_2c4,0x1a0,0x1f,0x16b,0x8d,1,1);
  FUN_00473bf0(local_2c4,0x1fe,0x167,0x10f,0x6f,1,1);
  FUN_00473bf0(local_2c4,0x11f,0x1da,0x120,0x73,1,1);
  FUN_00473bf0(local_2c4,0xd,0x17e,0x11f,0x73,1,1);
  FUN_00473bf0(local_2c4,0xa8,0xc6,0x1d8,0xb0,1,1);
  FUN_00473bf0(local_2c4,0x2d1,0x210,0x3a,0x39,1,1);
  puVar2 = &DAT_004c26c2;
  do {
    puVar2 = puVar2 + 10;
  } while ((int)puVar2 < 0x4c2852);
  local_4 = 0xffffffff;
  FUN_00474c40();
  *unaff_FS_OFFSET = local_c;
  return;
}

