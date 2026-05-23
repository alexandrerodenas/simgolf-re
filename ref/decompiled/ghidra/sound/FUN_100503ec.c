/* Ghidra decompiled: sound.dll */
/* Function: FUN_100503ec @ 0x100503EC */
/* Body size: 719 addresses */


void __cdecl FUN_100503ec(byte *param_1,int param_2,byte *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  void *pvVar6;
  void *this;
  char *this_00;
  
  puVar3 = param_4;
  pbVar2 = param_3;
  bVar1 = *param_1;
  do {
    if ((bVar1 == 0) || (*puVar3 == 0)) {
      return;
    }
    DAT_100b58c8 = 0;
    bVar1 = *param_1;
    this = (void *)0x0;
    pbVar5 = param_1 + 1;
    do {
      param_3 = pbVar5;
      pvVar6 = this;
      this = (void *)((int)pvVar6 + 1);
      pbVar5 = param_3 + 1;
    } while (*param_3 == bVar1);
    if ((char)bVar1 < 'e') {
      if (bVar1 == 100) {
        if (pvVar6 == (void *)0x0) {
          DAT_100b58c8 = 1;
        }
        else if (pvVar6 != (void *)0x1) {
          if (pvVar6 == (void *)0x2) {
            param_4._0_1_ = 'a';
          }
          else {
            if (pvVar6 != (void *)0x3) goto LAB_10050470;
            param_4._0_1_ = 'A';
          }
          goto LAB_100506a6;
        }
        param_4._0_1_ = 'd';
        goto LAB_100506a6;
      }
      if (bVar1 != 0x27) {
        if (bVar1 != 0x41) {
          if (bVar1 == 0x48) {
            if (pvVar6 == (void *)0x0) {
              DAT_100b58c8 = 1;
            }
            else if (this != (void *)0x2) goto LAB_10050470;
            param_4._0_1_ = 'H';
            goto LAB_100506a6;
          }
          if (bVar1 == 0x4d) {
            if (pvVar6 == (void *)0x0) {
              DAT_100b58c8 = 1;
            }
            else if (pvVar6 != (void *)0x1) {
              if (pvVar6 == (void *)0x2) {
                param_4._0_1_ = 'b';
              }
              else {
                if (pvVar6 != (void *)0x3) goto LAB_10050470;
                param_4._0_1_ = 'B';
              }
              goto LAB_100506a6;
            }
            param_4._0_1_ = 'm';
            goto LAB_100506a6;
          }
          if (bVar1 != 0x61) goto LAB_10050470;
        }
        this_00 = "am/pm";
        uVar4 = FUN_10050b60(this,param_1,(byte *)"am/pm");
        if (uVar4 == 0) {
          param_3 = param_1 + 5;
        }
        else {
          uVar4 = FUN_10050b60(this_00,param_1,&DAT_1005fbec);
          if (uVar4 == 0) {
            param_3 = param_1 + 3;
          }
        }
        param_4._0_1_ = 'p';
        goto LAB_100506a6;
      }
      if (((uint)this & 1) == 0) {
        param_3 = param_1 + (int)this;
      }
      else {
        param_3 = param_1 + (int)this;
        while( true ) {
          bVar1 = *param_3;
          if ((bVar1 == 0) || (*puVar3 == 0)) goto LAB_10050496;
          if (bVar1 == 0x27) break;
          if (((PTR_DAT_1006773c[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < *puVar3)) {
            **(byte **)pbVar2 = bVar1;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            param_3 = param_3 + 1;
            *puVar3 = *puVar3 - 1;
          }
          **(byte **)pbVar2 = *param_3;
          *(int *)pbVar2 = *(int *)pbVar2 + 1;
          param_3 = param_3 + 1;
          *puVar3 = *puVar3 - 1;
        }
        param_3 = param_3 + 1;
      }
    }
    else {
      if (bVar1 == 0x68) {
        if (pvVar6 == (void *)0x0) {
          DAT_100b58c8 = 1;
        }
        else if (this != (void *)0x2) goto LAB_10050470;
        param_4._0_1_ = 'I';
      }
      else if (bVar1 == 0x6d) {
        if (pvVar6 == (void *)0x0) {
          DAT_100b58c8 = 1;
        }
        else if (this != (void *)0x2) goto LAB_10050470;
        param_4._0_1_ = 'M';
      }
      else if (bVar1 == 0x73) {
        if (pvVar6 == (void *)0x0) {
          DAT_100b58c8 = 1;
        }
        else if (this != (void *)0x2) goto LAB_10050470;
        param_4._0_1_ = 'S';
      }
      else {
        if (bVar1 == 0x74) {
          if (*(int *)(param_2 + 8) < 0xc) {
            pbVar5 = *(byte **)(param_5 + 0x98);
          }
          else {
            pbVar5 = *(byte **)(param_5 + 0x9c);
          }
          while ((0 < (int)this && (*puVar3 != 0))) {
            if (((PTR_DAT_1006773c[(uint)*pbVar5 * 2 + 1] & 0x80) != 0) && (1 < *puVar3)) {
              **(byte **)pbVar2 = *pbVar5;
              *(int *)pbVar2 = *(int *)pbVar2 + 1;
              pbVar5 = pbVar5 + 1;
              *puVar3 = *puVar3 - 1;
            }
            **(byte **)pbVar2 = *pbVar5;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            pbVar5 = pbVar5 + 1;
            *puVar3 = *puVar3 - 1;
            this = (void *)((int)this + -1);
          }
          goto LAB_10050496;
        }
        if (bVar1 != 0x79) {
LAB_10050470:
          if ((PTR_DAT_1006773c[(uint)bVar1 * 2 + 1] & 0x80) != 0) {
            **(byte **)pbVar2 = bVar1;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            *puVar3 = *puVar3 - 1;
            param_1 = param_1 + 1;
          }
          **(byte **)pbVar2 = *param_1;
          *(int *)pbVar2 = *(int *)pbVar2 + 1;
          param_3 = param_1 + 1;
          *puVar3 = *puVar3 - 1;
          goto LAB_10050496;
        }
        if (pvVar6 == (void *)0x1) {
          param_4._0_1_ = 'y';
        }
        else {
          if (pvVar6 != (void *)0x3) goto LAB_10050470;
          param_4._0_1_ = 'Y';
        }
      }
LAB_100506a6:
      FUN_1004ff1e((char)param_4,(int *)param_2,pbVar2,puVar3,param_5);
    }
LAB_10050496:
    bVar1 = *param_3;
    param_1 = param_3;
  } while( true );
}

