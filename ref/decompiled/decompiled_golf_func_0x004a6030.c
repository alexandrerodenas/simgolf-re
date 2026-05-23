/**
 * func_004a6030 — Auto-décompilé
 * Adresse: 0x004a6030 [golf.exe]
 * Taille: 2505 bytes, Type: std_prologue
 * Appel: __cdecl, Locals: 0B, SEH: False
 * Appelle: 0x4a95bb, 0x405096, 0x4a9874, 0x4a60d0, 0x4a98c6, 0x4a99a0, 0x4a9918, 0x4a5a78
 * Constantes: 0x4a64ce, 0x4aa5a2, 0x4a6225, 0x4a60cb, 0x4a62bb, 0x4a9874, 0x4a631d, 0x4aa6c0
 */
void func_004a6030(void) {
    /* 501 instructions */

    // push ebp
    // mov ebp, esp
    // add esp, -0xc
    // wait 
    // fnstcw word ptr [ebp - 2]
    // wait 
    // mov ax, word ptr [ebp - 2]
    // or ah, 0xc
    // mov word ptr [ebp - 4], ax
    // fldcw word ptr [ebp - 4]
    // fistp qword ptr [ebp - 0xc]
    // fldcw word ptr [ebp - 2]
    // mov eax, dword ptr [ebp - 0xc]
    // mov edx, dword ptr [ebp - 8]
    // leave 
    // return;
    // push 1
    // push 0
    // push dword ptr [esp + 0xc]
    // CALL(0x4a95bb)
    // add esp, 0xc
    // return;
    // CALL(0x405096)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // push ecx
    // cmp eax, 0x1000
    // lea ecx, [esp + 8]
    // if (...) GOTO(0x4a6090)
    // sub ecx, 0x1000
    // sub eax, 0x1000
    // test dword ptr [ecx], eax
    // cmp eax, 0x1000
    // jae 0x4a607c
    // sub ecx, eax
    // mov eax, esp
    // test dword ptr [ecx], eax
    // mov esp, ecx
    // mov ecx, dword ptr [eax]
    // mov eax, dword ptr [eax + 4]
    // push eax
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // or edi, 0xffffffff
    // test byte ptr [esi + 0xc], 0x40
    // if (...) GOTO(0x4a60b4)
    // and dword ptr [esi + 0xc], 0
    // if (...) GOTO(0x4a60cb)
    // push esi
    // CALL(0x4a9874)
    // push esi
    // CALL(0x4a60d0)
    // push esi
    // mov edi, eax
    // CALL(0x4a98c6)
    // add esp, 0xc
    // mov eax, edi
    // pop edi
    // pop esi
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // or edi, 0xffffffff
    // test byte ptr [esi + 0xc], 0x83
    // if (...) GOTO(0x4a6113)
    // push esi
    // CALL(0x4a99a0)
    // push esi
    // mov edi, eax
    // CALL(0x4a9918)
    // push dword ptr [esi + 0x10]
    // CALL(0x4a5a78)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4a6101)
    // or edi, 0xffffffff
    // if (...) GOTO(0x4a6113)
    // mov eax, dword ptr [esi + 0x1c]
    // test eax, eax
    // if (...) GOTO(0x4a6113)
    // push eax
    // CALL(0x4a5007)
    // and dword ptr [esi + 0x1c], 0
    // pop ecx
    // and dword ptr [esi + 0xc], 0
    // mov eax, edi
    // pop edi
    // pop esi
    // return;
    // push esi
    // CALL(0x4a9c19)
    // mov esi, eax
    // test esi, esi
    // if (...) GOTO(0x4a612a)
    // pop esi
    // return;
    // push edi
    // push esi
    // push dword ptr [esp + 0x18]
    // push dword ptr [esp + 0x18]
    // push dword ptr [esp + 0x18]
    // CALL(0x4a9aa9)
    // push esi
    // mov edi, eax
    // CALL(0x4a98c6)
    // add esp, 0x14
    // mov eax, edi
    // pop edi
    // pop esi
    // return;
    // push(0x40)
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4a611c)
    // add esp, 0xc
    // return;
    // lea eax, [edx - 1]
    // pop ebx
    // return;
    // lea esp, [esp]
    // lea esp, [esp]
    // xor eax, eax
    // mov al, byte ptr [esp + 8]
    // push ebx
    // mov ebx, eax
    // shl eax, 8
    // mov edx, dword ptr [esp + 8]
    // test edx, 3
    // if (...) GOTO(0x4a619b)
    // mov cl, byte ptr [edx]
    // inc edx
    // cmp cl, bl
    // if (...) GOTO(0x4a6160)
    // test cl, cl
    // if (...) GOTO(0x4a61e4)
    // test edx, 3
    // if (...) GOTO(0x4a6188)
    // or ebx, eax
    // push edi
    // mov eax, ebx
    // shl ebx, 0x10
    // push esi
    // or ebx, eax
    // mov ecx, dword ptr [edx]
    // mov edi, 0x7efefeff
    // mov eax, ecx
    // mov esi, edi
    // xor ecx, ebx
    // add esi, eax
    // add edi, ecx
    // xor ecx, 0xffffffff
    // xor eax, 0xffffffff
    // xor ecx, edi
    // xor eax, esi
    // add edx, 4
    // and ecx, 0x81010100
    // if (...) GOTO(0x4a61e8)
    // and eax, 0x81010100
    // if (...) GOTO(0x4a61a6)
    // and eax, 0x1010100
    // if (...) GOTO(0x4a61e2)
    // and esi, 0x80000000
    // if (...) GOTO(0x4a61a6)
    // pop esi
    // pop edi
    // pop ebx
    // xor eax, eax
    // return;
    // mov eax, dword ptr [edx - 4]
    // cmp al, bl
    // if (...) GOTO(0x4a6225)
    // test al, al
    // if (...) GOTO(0x4a61e2)
    // cmp ah, bl
    // if (...) GOTO(0x4a621e)
    // test ah, ah
    // if (...) GOTO(0x4a61e2)
    // shr eax, 0x10
    // cmp al, bl
    // if (...) GOTO(0x4a6217)
    // test al, al
    // if (...) GOTO(0x4a61e2)
    // cmp ah, bl
    // if (...) GOTO(0x4a6210)
    // test ah, ah
    // if (...) GOTO(0x4a61e2)
    // if (...) GOTO(0x4a61a6)
    // pop esi
    // pop edi
    // lea eax, [edx - 1]
    // pop ebx
    // return;
    // lea eax, [edx - 2]
    // pop esi
    // pop edi
    // pop ebx
    // return;
    // lea eax, [edx - 3]
    // pop esi
    // pop edi
    // pop ebx
    // return;
    // lea eax, [edx - 4]
    // pop esi
    // pop edi
    // pop ebx
    // return;
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // push esi
    // CALL(0x4a9874)
    // push esi
    // CALL(0x4a9ce1)
    // mov edi, eax
    // lea eax, [esp + 0x20]
    // push eax
    // push dword ptr [esp + 0x20]
    // push esi
    // CALL(0x4a9d98)
    // push esi
    // push edi
    // mov ebx, eax
    // CALL(0x4a9d6e)
    // push esi
    // CALL(0x4a98c6)
    // add esp, 0x20
    // mov eax, ebx
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push esi
    // push dword ptr [ebp + 0x14]
    // CALL(0x4a9874)
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4a6297)
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