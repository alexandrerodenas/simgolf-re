/* Ghidra decompiled: Terrain.dll */
/* Function: type_info::operator!= @ 0x10037460 */
/* Body size: 41 addresses */


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall type_info::operator!=(class type_info const &)const 
    public: bool __thiscall type_info::operator!=(class type_info const &)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

bool __thiscall type_info__operator__(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)((int)this + 9));
  return iVar1 != 0;
}

