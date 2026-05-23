/**
 * func_004a65ee — Auto-décompilé
 * Adresse: 0x004a65ee [golf.exe]
 * Taille: 2440 bytes, Type: std_prologue
 * Appel: __cdecl, Locals: 0B, SEH: True
 * Appelle: 0x4a9874, 0x4aa9f5, 0x4a98c6, dword, edi, 0x4a79b2, 0x4a66bf, 0x4a7a13
 * Constantes: 0x4a6719, 0x4a9874, 0x4aa6c0, 0x4a6715, 0x4a699b, 0x4a68ab, 0x4a6ab3, 0x4a6698
 */
void func_004a65ee(void) {
    /* 488 instructions */

    // push ebp
    // mov ebp, esp
    // cmp dword ptr [ebp + 0xc], 0
    // push ebx
    // mov ebx, dword ptr [ebp + 8]
    // push edi
    // mov edi, ebx
    // if (...) GOTO(0x4a6602)
    // xor eax, eax
    // if (...) GOTO(0x4a664c)
    // push esi
    // mov esi, dword ptr [ebp + 0x10]
    // push esi
    // CALL(0x4a9874)
    // pop ecx
    // dec dword ptr [ebp + 0xc]
    // if (...) GOTO(0x4a663f)
    // dec dword ptr [esi + 4]
    // js 0x4a6621
    // mov ecx, dword ptr [esi]
    // movzx eax, byte ptr [ecx]
    // inc ecx
    // mov dword ptr [esi], ecx
    // if (...) GOTO(0x4a6628)
    // push esi
    // CALL(0x4aa9f5)
    // pop ecx
    // cmp eax, -1
    // if (...) GOTO(0x4a6636)
    // mov byte ptr [edi], al
    // inc edi
    // cmp al, 0xa
    // if (...) GOTO(0x4a663f)
    // if (...) GOTO(0x4a660d)
    // cmp edi, dword ptr [ebp + 8]
    // if (...) GOTO(0x4a663f)
    // xor ebx, ebx
    // if (...) GOTO(0x4a6642)
    // and byte ptr [edi], 0
    // push esi
    // CALL(0x4a98c6)
    // pop ecx
    // mov eax, ebx
    // pop esi
    // pop edi
    // pop ebx
    // pop ebp
    // return;
    // push ebx
    // xor ebx, ebx
    // cmp dword ptr [0x840b44], ebx
    // if (...) GOTO(0x4a666e)
    // mov eax, dword ptr [esp + 8]
    // cmp eax, 0x61
    // if (...) GOTO(0x4a66bd)
    // cmp eax, 0x7a
    // if (...) GOTO(0x4a66bd)
    // sub eax, 0x20
    // pop ebx
    // return;
    // push esi
    // mov esi, 0x84100c
    // push edi
    // push esi
    // CALL(dword)
    // cmp dword ptr [0x841008], ebx
    // mov edi, dword ptr [0x4ba080]
    // if (...) GOTO(0x4a6698)
    // push esi
    // CALL(edi)
    // push(0x13)
    // CALL(0x4a79b2)
    // pop ecx
    // push 1
    // pop ebx
    // push dword ptr [esp + 0x10]
    // CALL(0x4a66bf)
    // test ebx, ebx
    // pop ecx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4a66b4)
    // push(0x13)
    // CALL(0x4a7a13)
    // pop ecx
    // if (...) GOTO(0x4a66b7)
    // push esi
    // CALL(edi)
    // mov eax, dword ptr [esp + 0x10]
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // cmp dword ptr [0x840b44], 0
    // push ebx
    // if (...) GOTO(0x4a66ea)
    // mov eax, dword ptr [ebp + 8]
    // cmp eax, 0x61
    // if (...) GOTO(0x4a6788)
    // cmp eax, 0x7a
    // if (...) GOTO(0x4a6788)
    // sub eax, 0x20
    // if (...) GOTO(0x4a6788)
    // mov ebx, dword ptr [ebp + 8]
    // cmp ebx, 0x100
    // if (...) GOTO(0x4a671d)
    // cmp dword ptr [0x4e521c], 1
    // if (...) GOTO(0x4a670a)
    // push 2
    // push ebx
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4a6715)
    // mov eax, dword ptr [0x4e5010]
    // mov al, byte ptr [eax + ebx*2]
    // and eax, 2
    // test eax, eax
    // if (...) GOTO(0x4a671d)
    // mov eax, ebx
    // if (...) GOTO(0x4a6788)
    // mov edx, dword ptr [0x4e5010]
    // mov eax, ebx
    // sar eax, 8
    // movzx ecx, al
    // test byte ptr [edx + ecx*2 + 1], 0x80
    // if (...) GOTO(0x4a6740)
    // and byte ptr [ebp + 0xa], 0
    // mov byte ptr [ebp + 8], al
    // mov byte ptr [ebp + 9], bl
    // push 2
    // if (...) GOTO(0x4a6749)
    // and byte ptr [ebp + 9], 0
    // mov byte ptr [ebp + 8], bl
    // push 1
    // pop eax
    // lea ecx, [ebp - 4]
    // push 1
    // push 0
    // push 3
    // push ecx
    // push eax
    // lea eax, [ebp + 8]
    // push eax
    // push(0x200)
    // push dword ptr [0x840b44]
    // CALL(0x4aab46)
    // add esp, 0x20
    // test eax, eax
    // if (...) GOTO(0x4a6719)
    // cmp eax, 1
    // if (...) GOTO(0x4a677b)
    // movzx eax, byte ptr [ebp - 4]
    // if (...) GOTO(0x4a6788)
    // movzx eax, byte ptr [ebp - 3]
    // movzx ecx, byte ptr [ebp - 4]
    // shl eax, 8
    // or eax, ecx
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x20
    // push ebx
    // push esi
    // mov esi, dword ptr [ebp + 0xc]
    // push edi
    // CALL(0x4a8e53)
    // push 8
    // mov dword ptr [ebp + 0xc], eax
    // pop ecx
    // xor eax, eax
    // lea edi, [ebp - 0x20]
    // push 7
    // rep stosd dword ptr es:[edi], eax
    // pop edi
    // mov dl, byte ptr [esi]
    // mov bl, 1
    // movzx ecx, dl
    // mov eax, ecx
    // and ecx, edi
    // shr eax, 3
    // shl bl, cl
    // lea eax, [ebp + eax - 0x20]
    // or byte ptr [eax], bl
    // inc esi
    // test dl, dl
    // if (...) GOTO(0x4a67ac)
    // mov edx, dword ptr [ebp + 8]
    // test edx, edx
    // if (...) GOTO(0x4a67d4)
    // mov eax, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [eax + 0x18]
    // mov al, byte ptr [edx]
    // push 1
    // movzx esi, al
    // mov ecx, esi
    // pop ebx
    // and ecx, edi
    // shl ebx, cl
    // shr esi, 3
    // mov cl, byte ptr [ebp + esi - 0x20]
    // test cl, bl
    // if (...) GOTO(0x4a67f4)
    // test al, al
    // if (...) GOTO(0x4a67f4)
    // inc edx
    // if (...) GOTO(0x4a67d4)
    // mov ebx, edx
    // mov al, byte ptr [edx]
    // test al, al
    // if (...) GOTO(0x4a681a)
    // movzx esi, al
    // mov ecx, esi
    // push 1
    // and ecx, edi
    // pop eax
    // shl eax, cl
    // shr esi, 3
    // mov cl, byte ptr [ebp + esi - 0x20]
    // test cl, al
    // if (...) GOTO(0x4a6816)
    // inc edx
    // if (...) GOTO(0x4a67f6)
    // and byte ptr [edx], 0
    // inc edx
    // mov eax, dword ptr [ebp + 0xc]
    // pop edi
    // pop esi
    // mov dword ptr [eax + 0x18], edx
    // mov eax, ebx
    // sub eax, edx
    // neg eax
    // sbb eax, eax
    // and eax, ebx
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // push -1
    // push(0x4bc468)  // ptr?
    // push(0x4a8f7c)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 0x58
    // push ebx
    // push esi
    // push edi
    // mov dword ptr [ebp - 0x18], esp
    // CALL(dword)
    // xor edx, edx
    // mov dl, ah
    // mov dword ptr [0x840a78], edx
    // mov ecx, eax
    // and ecx, 0xff
    // mov dword ptr [0x840a74], ecx
    // shl ecx, 8
    // add ecx, edx
    // mov dword ptr [0x840a70], ecx
    // shr eax, 0x10
    // mov dword ptr [0x840a6c], eax
    // push 1
    // CALL(0x4a794d)
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4a689a)
    // push(0x1c)
    // CALL(0x4a695c)
    // pop ecx
    // CALL(0x4a8dec)
    // test eax, eax
    // if (...) GOTO(0x4a68ab)
    // push(0x10)
    // CALL(0x4a695c)
    // pop ecx
    // xor esi, esi
    // mov dword ptr [ebp - 4], esi
    // CALL(0x4a93ff)
    // CALL(dword)
    // mov dword ptr [0x842160], eax
    // CALL(0x4ab240)
    // mov dword ptr [0x840aac], eax
    // CALL(0x4aaff3)
    // CALL(0x4aaf3a)
    // CALL(0x4a50db)
    // mov dword ptr [ebp - 0x30], esi
    // lea eax, [ebp - 0x5c]
    // push eax
    // CALL(dword)
    // CALL(0x4aaee2)
    // mov dword ptr [ebp - 0x64], eax
    // test byte ptr [ebp - 0x30], 1
    // if (...) GOTO(0x4a68fa)
    // movzx eax, word ptr [ebp - 0x2c]
    // if (...) GOTO(0x4a68fd)
    // push(0xa)
    // pop eax
    // push eax
    // push dword ptr [ebp - 0x64]
    // push esi
    // push esi
    // CALL(dword)
    // push eax
    // CALL(0x45baf0)
    // mov dword ptr [ebp - 0x60], eax
    // push eax
    // CALL(0x4a5108)
    // mov eax, dword ptr [ebp - 0x14]
    // mov ecx, dword ptr [eax]
    // mov ecx, dword ptr [ecx]
    // mov dword ptr [ebp - 0x68], ecx
    // push eax
    // push ecx
    // CALL(0x4aad6a)
    // pop ecx
    // pop ecx
    // return;
    // mov esp, dword ptr [ebp - 0x18]
    // push dword ptr [ebp - 0x68]
    // CALL(0x4a5119)
    // cmp dword ptr [0x840ab4], 1
    // if (...) GOTO(0x4a6945)
    // CALL(0x4ab372)
    // push dword ptr [esp + 4]
    // CALL(0x4ab3ab)
    // push(0xff)
    // CALL(dword)
    // pop ecx
    // pop ecx
    // return;
    // cmp dword ptr [0x840ab4], 1
    // if (...) GOTO(0x4a696a)
    // CALL(0x4ab372)
    // push dword ptr [esp + 4]
    // CALL(0x4ab3ab)
    // pop ecx
    // push(0xff)
    // CALL(dword)
    // return;
    // push ebp
    // mov ebp, esp
    // push ebx
    // mov ebx, dword ptr [ebp + 8]
    // push esi
    // push edi
    // test ebx, ebx
    // if (...) GOTO(0x4a699b)
    // push dword ptr [ebp + 0xc]
    // CALL(0x4a504f)
    // pop ecx
    // if (...) GOTO(0x4a6ab3)
    // mov esi, dword ptr [ebp + 0xc]
    // test esi, esi
    // if (...) GOTO(0x4a69b0)
    // push ebx
    // CALL(0x4a5007)
    // pop ecx
    // xor eax, eax
    // if (...) GOTO(0x4a6ab3)
    // xor edi, edi
    // cmp esi, -0x20
    // if (...) GOTO(0x4a6a94)
    // push 9
    // CALL(0x4a79b2)
    // push ebx
    // CALL(0x4a7a66)
    // pop ecx
    // mov dword ptr [ebp + 0xc], eax
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a6a69)
    // cmp esi, dword ptr [0x4e4bdc]
    // if (...) GOTO(0x4a6a1f)
    // push esi
    // push ebx
    // push eax
    // CALL(0x4a8271)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4a69f0)
    // mov edi, ebx
    // if (...) GOTO(0x4a6a1b)
    // push esi
    // CALL(0x4a7dbc)
    // mov edi, eax
    // pop ecx
    // test edi, edi
    // if (...) GOTO(0x4a6a1f)
    // mov eax, dword ptr [ebx - 4]
    // dec eax
    // cmp eax, esi
    // if (...) GOTO(0x4a6a07)
    // mov eax, esi
    // push eax
    // push ebx
    // push edi
    // CALL(0x4aa6c0)
    // push ebx
    // push dword ptr [ebp + 0xc]
    // CALL(0x4a7a91)
    // add esp, 0x14
    // test edi, edi
    // if (...) GOTO(0x4a6a5f)
    // test esi, esi
    // if (...) GOTO(0x4a6a26)
    // push 1
    // pop esi
    // add esi, 0xf
    // and esi, 0xfffffff0
    // push esi
    // push 0
    // push dword ptr [0x84215c]
    // CALL(dword)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x4a6a5f)
    // mov eax, dword ptr [ebx - 4]
    // dec eax
    // cmp eax, esi
    // if (...) GOTO(0x4a6a4b)
    // mov eax, esi
    // push eax
    // push ebx
    // push edi
    // CALL(0x4aa6c0)
    // push ebx
    // push dword ptr [ebp + 0xc]
    // CALL(0x4a7a91)
    // add esp, 0x14
    // push 9
    // CALL(0x4a7a13)
    // pop ecx
    // if (...) GOTO(0x4a6a90)
    // push 9
    // CALL(0x4a7a13)
    // test esi, esi
    // pop ecx
    // if (...) GOTO(0x4a6a78)
    // push 1
    // pop esi
    // add esi, 0xf
    // and esi, 0xfffffff0
    // push esi
    // push ebx
    // push 0
    // push dword ptr [0x84215c]
    // CALL(dword)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x4a6ab1)
    // cmp dword ptr [0x840b18], 0
    // if (...) GOTO(0x4a6ab1)
    // push esi
    // CALL(0x4a8567)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a69b0)
    // if (...) GOTO(0x4a69a9)
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // push(0x19)
    // CALL(0x4a6937)
    // pop ecx
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
    // // __debugbreak()
}