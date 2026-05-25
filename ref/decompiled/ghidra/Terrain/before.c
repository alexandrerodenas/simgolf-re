/* Ghidra decompiled: Terrain.dll */
/* Function: before @ 0x10037490 */


/* Library Function - Single Match
    public: int __thiscall type_info::before(class type_info const &)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

int __thiscall type_info::before(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (uint)(0 < iVar1);
}

