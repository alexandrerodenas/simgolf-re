/**
 * func_004a6297 — Auto-décompilé
 * Adresse: 0x004a6297 [golf.exe]
 * Taille: 1230 bytes, Type: std_prologue
 * Appel: __thiscall, Locals: 0B, SEH: False
 * Appelle: 0x4aa6c0, 0x4a99a0, 0x4a5b58, 0x4aa5a2, 0x4a9874, 0x4a63d0, 0x4a98c6, 0x4a583a
 * Constantes: 0x4a64ce, 0x4aa5a2, 0x4a62bb, 0x4a9874, 0x4a631d, 0x4aa6c0, 0x4a6332, 0x4a64df
 */
void func_004a6297(void) {
    /* 246 instructions */

    // push ebp
    // mov ebp, esp
    // push ecx
    // push ebx
    // push esi
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // imul edi, dword ptr [ebp + 0x10]
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [ebp - 4], edi
    // test edi, edi
    // mov dword ptr [ebp + 8], eax
    // mov ebx, edi
    // if (...) GOTO(0x4a62bb)
    // xor eax, eax
    // if (...) GOTO(0x4a6388)
    // mov esi, dword ptr [ebp + 0x14]
    // test word ptr [esi + 0xc], 0x10c
    // if (...) GOTO(0x4a62ce)
    // mov eax, dword ptr [esi + 0x18]
    // mov dword ptr [ebp + 0x14], eax
    // if (...) GOTO(0x4a62d5)
    // mov dword ptr [ebp + 0x14], 0x1000
    // mov ecx, dword ptr [esi + 0xc]
    // and ecx, 0x108
    // if (...) GOTO(0x4a6309)
    // mov eax, dword ptr [esi + 4]
    // test eax, eax
    // if (...) GOTO(0x4a6309)
    // cmp ebx, eax
    // mov edi, ebx
    // if (...) GOTO(0x4a62ef)
    // mov edi, eax
    // push edi
    // push dword ptr [ebp + 8]
    // push dword ptr [esi]
    // CALL(0x4aa6c0)
    // sub dword ptr [esi + 4], edi
    // add dword ptr [esi], edi
    // add esp, 0xc
    // sub ebx, edi
    // add dword ptr [ebp + 8], edi
    // if (...) GOTO(0x4a634f)
    // cmp ebx, dword ptr [ebp + 0x14]
    // if (...) GOTO(0x4a6354)
    // test ecx, ecx
    // if (...) GOTO(0x4a631d)
    // push esi
    // CALL(0x4a99a0)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a6396)
    // cmp dword ptr [ebp + 0x14], 0
    // if (...) GOTO(0x4a6330)
    // mov eax, ebx
    // xor edx, edx
    // div dword ptr [ebp + 0x14]
    // mov edi, ebx
    // sub edi, edx
    // if (...) GOTO(0x4a6332)
    // mov edi, ebx
    // push edi
    // push dword ptr [ebp + 8]
    // push dword ptr [esi + 0x10]
    // CALL(0x4a5b58)
    // add esp, 0xc
    // cmp eax, -1
    // if (...) GOTO(0x4a638d)
    // add dword ptr [ebp + 8], eax
    // sub ebx, eax
    // cmp eax, edi
    // if (...) GOTO(0x4a638d)
    // mov edi, dword ptr [ebp - 4]
    // if (...) GOTO(0x4a637d)
    // mov eax, dword ptr [ebp + 8]
    // push esi
    // movsx eax, byte ptr [eax]
    // push eax
    // CALL(0x4aa5a2)
    // pop ecx
    // cmp eax, -1
    // pop ecx
    // if (...) GOTO(0x4a6396)
    // inc dword ptr [ebp + 8]
    // mov eax, dword ptr [esi + 0x18]
    // dec ebx
    // mov dword ptr [ebp + 0x14], eax
    // test eax, eax
    // if (...) GOTO(0x4a637d)
    // mov dword ptr [ebp + 0x14], 1
    // test ebx, ebx
    // if (...) GOTO(0x4a62d5)
    // mov eax, dword ptr [ebp + 0x10]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // or dword ptr [esi + 0xc], 0x20
    // mov eax, dword ptr [ebp - 4]
    // if (...) GOTO(0x4a6398)
    // mov eax, edi
    // sub eax, ebx
    // xor edx, edx
    // div dword ptr [ebp + 0xc]
    // if (...) GOTO(0x4a6388)
    // push ebp
    // mov ebp, esp
    // push esi
    // push dword ptr [ebp + 0x14]
    // CALL(0x4a9874)
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4a63d0)
    // push dword ptr [ebp + 0x14]
    // mov esi, eax
    // CALL(0x4a98c6)
    // add esp, 0x18
    // mov eax, esi
    // pop esi
    // pop ebp
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ebx
    // push esi
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // imul edi, dword ptr [ebp + 0x10]
    // mov ebx, dword ptr [ebp + 8]
    // mov ecx, edi
    // test edi, edi
    // mov dword ptr [ebp - 4], edi
    // mov dword ptr [ebp + 8], ecx
    // if (...) GOTO(0x4a63f4)
    // xor eax, eax
    // if (...) GOTO(0x4a649d)
    // mov esi, dword ptr [ebp + 0x14]
    // test word ptr [esi + 0xc], 0x10c
    // if (...) GOTO(0x4a6407)
    // mov eax, dword ptr [esi + 0x18]
    // mov dword ptr [ebp + 0x14], eax
    // if (...) GOTO(0x4a6413)
    // mov dword ptr [ebp + 0x14], 0x1000
    // if (...) GOTO(0x4a6413)
    // mov ecx, dword ptr [ebp + 8]
    // test word ptr [esi + 0xc], 0x10c
    // if (...) GOTO(0x4a6445)
    // mov eax, dword ptr [esi + 4]
    // test eax, eax
    // if (...) GOTO(0x4a6445)
    // cmp ecx, eax
    // mov edi, ecx
    // if (...) GOTO(0x4a642a)
    // mov edi, eax
    // push edi
    // push dword ptr [esi]
    // push ebx
    // CALL(0x4aa6c0)
    // sub dword ptr [ebp + 8], edi
    // sub dword ptr [esi + 4], edi
    // add dword ptr [esi], edi
    // add esp, 0xc
    // add ebx, edi
    // mov edi, dword ptr [ebp - 4]
    // if (...) GOTO(0x4a6490)
    // cmp ecx, dword ptr [ebp + 0x14]
    // if (...) GOTO(0x4a6478)
    // cmp dword ptr [ebp + 0x14], 0
    // mov eax, ecx
    // if (...) GOTO(0x4a645b)
    // xor edx, edx
    // div dword ptr [ebp + 0x14]
    // mov eax, ecx
    // sub eax, edx
    // push eax
    // push ebx
    // push dword ptr [esi + 0x10]
    // CALL(0x4a583a)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4a64a2)
    // cmp eax, -1
    // if (...) GOTO(0x4a64a8)
    // sub dword ptr [ebp + 8], eax
    // add ebx, eax
    // if (...) GOTO(0x4a6490)
    // push esi
    // CALL(0x4aa9f5)
    // cmp eax, -1
    // pop ecx
    // if (...) GOTO(0x4a64ac)
    // mov byte ptr [ebx], al
    // mov eax, dword ptr [esi + 0x18]
    // inc ebx
    // dec dword ptr [ebp + 8]
    // mov dword ptr [ebp + 0x14], eax
    // cmp dword ptr [ebp + 8], 0
    // if (...) GOTO(0x4a6410)
    // mov eax, dword ptr [ebp + 0x10]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // or dword ptr [esi + 0xc], 0x10
    // if (...) GOTO(0x4a64ac)
    // or dword ptr [esi + 0xc], 0x20
    // mov eax, edi
    // xor edx, edx
    // sub eax, dword ptr [ebp + 8]
    // div dword ptr [ebp + 0xc]
    // if (...) GOTO(0x4a649d)
    // push dword ptr [esp + 4]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a64ce)
    // CALL(dword)
    // if (...) GOTO(0x4a64d0)
    // xor eax, eax
    // test eax, eax
    // if (...) GOTO(0x4a64df)
    // push eax
    // CALL(0x4a9099)
    // pop ecx
    // or eax, 0xffffffff
    // return;
    // xor eax, eax
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
}