/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_UYVY@48 @ 0x30016510 */


void _YUV_blit_UYVY_48(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                      uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                      uint param_12)

{
                    /* 0x16510  74  _YUV_blit_UYVY@48 */
  if (((byte)param_1 & 3) == 2) {
    param_2 = param_2 + 1;
    param_1 = param_1 & 0xfffffffc;
  }
  if ((param_2 & 1) == 0) {
    if ((param_6 & 1) != 0) {
      param_6 = param_6 + 1;
      param_8 = param_8 - 1;
    }
  }
  else {
    if ((param_6 & 1) != 0) {
      param_6 = param_6 + 1;
    }
    param_2 = param_2 + 1;
    param_8 = param_8 - 1;
  }
  if ((param_8 & 1) != 0) {
    param_8 = param_8 - 1;
  }
  FUN_3000dbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003e4a8);
  return;
}

