/**
 * func_004ad4b0 — Auto-décompilé
 * Adresse: 0x004ad4b0 [golf.exe]
 * Taille: 86245 bytes, Type: std_prologue
 * Appel: __cdecl, Locals: 0B, SEH: True
 * Appelle: 0x4a79b2, 0x4a7241, 0x4a7a13, 0x4acb20, 0x4acb9f, 0x4acbcd, 0x4ad681, 0x4ad93e
 * Constantes: 0x483b90, 0x4b3275, 0x4b680d, 0x4b6aa9, 0x4b2e9c, 0x4b319c, 0x4b04d0, 0x4a6598
 */
void func_004ad4b0(void) {
    /* 17249 instructions */

    // push ebp
    // mov ebp, esp
    // push edi
    // push esi
    // push ebx
    // mov esi, dword ptr [ebp + 0xc]
    // mov edi, dword ptr [ebp + 8]
    // lea eax, [0x840b3c]
    // cmp dword ptr [eax + 8], 0
    // if (...) GOTO(0x4ad503)
    // mov al, 0xff
    // mov edi, edi
    // or al, al
    // if (...) GOTO(0x4ad4fe)
    // mov al, byte ptr [esi]
    // inc esi
    // mov ah, byte ptr [edi]
    // inc edi
    // cmp ah, al
    // if (...) GOTO(0x4ad4cc)
    // sub al, 0x41
    // cmp al, 0x1a
    // sbb cl, cl
    // and cl, 0x20
    // add al, cl
    // add al, 0x41
    // xchg al, ah
    // sub al, 0x41
    // cmp al, 0x1a
    // sbb cl, cl
    // and cl, 0x20
    // add al, cl
    // add al, 0x41
    // cmp al, ah
    // if (...) GOTO(0x4ad4cc)
    // sbb al, al
    // sbb al, 0xff
    // movsx eax, al
    // if (...) GOTO(0x4ad57b)
    // lock inc dword ptr [0x84100c]
    // cmp dword ptr [0x841008], 0
    // if (...) GOTO(0x4ad517)
    // push 0
    // if (...) GOTO(0x4ad52c)
    // lock dec dword ptr [0x84100c]
    // push(0x13)
    // CALL(0x4a79b2)
    // mov dword ptr [esp], 1
    // mov eax, 0xff
    // xor ebx, ebx
    // // nop
    // or al, al
    // if (...) GOTO(0x4ad55f)
    // mov al, byte ptr [esi]
    // inc esi
    // mov bl, byte ptr [edi]
    // inc edi
    // cmp al, bl
    // if (...) GOTO(0x4ad534)
    // push eax
    // push ebx
    // CALL(0x4a7241)
    // mov ebx, eax
    // add esp, 4
    // CALL(0x4a7241)
    // add esp, 4
    // cmp bl, al
    // if (...) GOTO(0x4ad534)
    // sbb eax, eax
    // sbb eax, -1
    // mov ebx, eax
    // pop eax
    // or eax, eax
    // if (...) GOTO(0x4ad56f)
    // lock dec dword ptr [0x84100c]
    // if (...) GOTO(0x4ad579)
    // push(0x13)
    // CALL(0x4a7a13)
    // add esp, 4
    // mov eax, ebx
    // pop ebx
    // pop esi
    // pop edi
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // push edi
    // push esi
    // push ebx
    // mov ecx, dword ptr [ebp + 0x10]
    // or ecx, ecx
    // if (...) GOTO(0x4ad67a)
    // mov esi, dword ptr [ebp + 8]
    // mov edi, dword ptr [ebp + 0xc]
    // lea eax, [0x840b3c]
    // cmp dword ptr [eax + 8], 0
    // if (...) GOTO(0x4ad5f1)
    // mov bh, 0x41
    // mov bl, 0x5a
    // mov dh, 0x20
    // lea ecx, [ecx]
    // mov ah, byte ptr [esi]
    // or ah, ah
    // mov al, byte ptr [edi]
    // if (...) GOTO(0x4ad5d5)
    // or al, al
    // if (...) GOTO(0x4ad5d5)
    // inc esi
    // inc edi
    // cmp ah, bh
    // if (...) GOTO(0x4ad5c4)
    // cmp ah, bl
    // if (...) GOTO(0x4ad5c4)
    // add ah, dh
    // cmp al, bh
    // if (...) GOTO(0x4ad5ce)
    // cmp al, bl
    // if (...) GOTO(0x4ad5ce)
    // add al, dh
    // cmp ah, al
    // if (...) GOTO(0x4ad5df)
    // dec ecx
    // if (...) GOTO(0x4ad5ac)
    // xor ecx, ecx
    // cmp ah, al
    // if (...) GOTO(0x4ad67a)
    // mov ecx, 0xffffffff
    // if (...) GOTO(0x4ad67a)
    // neg ecx
    // if (...) GOTO(0x4ad67a)
    // lock inc dword ptr [0x84100c]
    // cmp dword ptr [0x841008], 0
    // if (...) GOTO(0x4ad605)
    // push 0
    // if (...) GOTO(0x4ad61e)
    // lock dec dword ptr [0x84100c]
    // mov ebx, ecx
    // push(0x13)
    // CALL(0x4a79b2)
    // mov dword ptr [esp], 1
    // mov ecx, ebx
    // xor eax, eax
    // xor ebx, ebx
    // mov edi, edi
    // mov al, byte ptr [esi]
    // or eax, eax
    // mov bl, byte ptr [edi]
    // if (...) GOTO(0x4ad64f)
    // or ebx, ebx
    // if (...) GOTO(0x4ad64f)
    // inc esi
    // inc edi
    // push ecx
    // push eax
    // push ebx
    // CALL(0x4a7241)
    // mov ebx, eax
    // add esp, 4
    // CALL(0x4a7241)
    // add esp, 4
    // pop ecx
    // cmp eax, ebx
    // if (...) GOTO(0x4ad655)
    // dec ecx
    // if (...) GOTO(0x4ad624)
    // xor ecx, ecx
    // cmp eax, ebx
    // if (...) GOTO(0x4ad65e)
    // mov ecx, 0xffffffff
    // if (...) GOTO(0x4ad65e)
    // neg ecx
    // pop eax
    // or eax, eax
    // if (...) GOTO(0x4ad66c)
    // lock dec dword ptr [0x84100c]
    // if (...) GOTO(0x4ad67a)
    // mov ebx, ecx
    // push(0x13)
    // CALL(0x4a7a13)
    // add esp, 4
    // mov ecx, ebx
    // mov eax, ecx
    // pop ebx
    // pop esi
    // pop edi
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x24
    // push ebx
    // mov ebx, dword ptr [ebp + 0xc]
    // push esi
    // mov esi, dword ptr [ebp + 8]
    // mov cx, word ptr [ebx + 0xa]
    // xor eax, eax
    // push edi
    // mov dword ptr [ebp - 0x14], eax
    // mov dword ptr [ebp - 0x24], eax
    // mov dword ptr [ebp - 0x20], eax
    // mov dword ptr [ebp - 0x1c], eax
    // mov ax, word ptr [esi + 0xa]
    // mov edi, ecx
    // mov edx, 0x7fff
    // xor edi, eax
    // and eax, edx
    // and ecx, edx
    // and edi, 0x8000
    // cmp ax, 0x7fff
    // lea edx, [ecx + eax]
    // mov dword ptr [ebp + 8], edx
    // jae 0x4ad881
    // cmp cx, 0x7fff
    // jae 0x4ad881
    // cmp dx, 0xbffd
    // if (...) GOTO(0x4ad881)
    // cmp dx, 0x3fbf
    // if (...) GOTO(0x4ad6ea)
    // xor eax, eax
    // if (...) GOTO(0x4ad724)
    // test ax, ax
    // mov edx, 0x7fffffff
    // if (...) GOTO(0x4ad70c)
    // inc dword ptr [ebp + 8]
    // test dword ptr [esi + 8], edx
    // if (...) GOTO(0x4ad70c)
    // xor eax, eax
    // cmp dword ptr [esi + 4], eax
    // if (...) GOTO(0x4ad70e)
    // cmp dword ptr [esi], eax
    // if (...) GOTO(0x4ad70e)
    // if (...) GOTO(0x4ad87b)
    // xor eax, eax
    // cmp cx, ax
    // if (...) GOTO(0x4ad731)
    // inc dword ptr [ebp + 8]
    // test dword ptr [ebx + 8], edx
    // if (...) GOTO(0x4ad731)
    // cmp dword ptr [ebx + 4], eax
    // if (...) GOTO(0x4ad731)
    // cmp dword ptr [ebx], eax
    // if (...) GOTO(0x4ad731)
    // mov dword ptr [esi + 8], eax
    // mov dword ptr [esi + 4], eax
    // mov dword ptr [esi], eax
    // if (...) GOTO(0x4ad89c)
    // mov dword ptr [ebp - 0x10], eax
    // lea eax, [ebp - 0x20]
    // mov dword ptr [ebp - 4], eax
    // mov dword ptr [ebp + 0xc], 5
    // mov eax, dword ptr [ebp - 0x10]
    // add eax, eax
    // cmp dword ptr [ebp + 0xc], 0
    // if (...) GOTO(0x4ad795)
    // add eax, esi
    // lea ecx, [ebx + 8]
    // mov dword ptr [ebp - 8], eax
    // mov eax, dword ptr [ebp + 0xc]
    // mov dword ptr [ebp - 0xc], ecx
    // mov dword ptr [ebp - 0x18], eax
    // mov eax, dword ptr [ebp - 8]
    // mov ecx, dword ptr [ebp - 0xc]
    // movzx eax, word ptr [eax]
    // movzx ecx, word ptr [ecx]
    // imul eax, ecx
    // mov ecx, dword ptr [ebp - 4]
    // add ecx, -4
    // push ecx
    // push eax
    // push dword ptr [ecx]
    // CALL(0x4acb20)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4ad788)
    // mov eax, dword ptr [ebp - 4]
    // inc word ptr [eax]
    // add dword ptr [ebp - 8], 2
    // sub dword ptr [ebp - 0xc], 2
    // dec dword ptr [ebp - 0x18]
    // if (...) GOTO(0x4ad75d)
    // add dword ptr [ebp - 4], 2
    // inc dword ptr [ebp - 0x10]
    // dec dword ptr [ebp + 0xc]
    // cmp dword ptr [ebp + 0xc], 0
    // if (...) GOTO(0x4ad741)
    // add dword ptr [ebp + 8], 0xc002
    // cmp word ptr [ebp + 8], 0
    // if (...) GOTO(0x4ad7d8)
    // test byte ptr [ebp - 0x19], 0x80
    // if (...) GOTO(0x4ad7d1)
    // lea eax, [ebp - 0x24]
    // push eax
    // CALL(0x4acb9f)
    // add dword ptr [ebp + 8], 0xffff
    // pop ecx
    // cmp word ptr [ebp + 8], 0
    // if (...) GOTO(0x4ad7b3)
    // cmp word ptr [ebp + 8], 0
    // if (...) GOTO(0x4ad811)
    // add dword ptr [ebp + 8], 0xffff
    // cmp word ptr [ebp + 8], 0
    // if (...) GOTO(0x4ad811)
    // movsx eax, word ptr [ebp + 8]
    // neg eax
    // add dword ptr [ebp + 8], eax
    // mov ebx, eax
    // test byte ptr [ebp - 0x24], 1
    // if (...) GOTO(0x4ad7fa)
    // inc dword ptr [ebp - 0x14]
    // lea eax, [ebp - 0x24]
    // push eax
    // CALL(0x4acbcd)
    // dec ebx
    // pop ecx
    // if (...) GOTO(0x4ad7f1)
    // cmp dword ptr [ebp - 0x14], 0
    // if (...) GOTO(0x4ad811)
    // or byte ptr [ebp - 0x24], 1
    // cmp word ptr [ebp - 0x24], 0x8000
    // if (...) GOTO(0x4ad828)
    // mov eax, dword ptr [ebp - 0x24]
    // and eax, 0x1ffff
    // cmp eax, 0x18000
    // if (...) GOTO(0x4ad85d)
    // cmp dword ptr [ebp - 0x22], -1
    // if (...) GOTO(0x4ad85a)
    // and dword ptr [ebp - 0x22], 0
    // cmp dword ptr [ebp - 0x1e], -1
    // if (...) GOTO(0x4ad855)
    // and dword ptr [ebp - 0x1e], 0
    // cmp word ptr [ebp - 0x1a], 0xffff
    // if (...) GOTO(0x4ad84f)
    // inc dword ptr [ebp + 8]
    // mov word ptr [ebp - 0x1a], 0x8000
    // if (...) GOTO(0x4ad85d)
    // inc word ptr [ebp - 0x1a]
    // if (...) GOTO(0x4ad85d)
    // inc dword ptr [ebp - 0x1e]
    // if (...) GOTO(0x4ad85d)
    // inc dword ptr [ebp - 0x22]
    // mov eax, dword ptr [ebp + 8]
    // cmp ax, 0x7fff
    // jae 0x4ad881
    // mov cx, word ptr [ebp - 0x22]
    // or eax, edi
    // mov word ptr [esi], cx
    // mov ecx, dword ptr [ebp - 0x20]
    // mov dword ptr [esi + 2], ecx
    // mov ecx, dword ptr [ebp - 0x1c]
    // mov dword ptr [esi + 6], ecx
    // mov word ptr [esi + 0xa], ax
    // if (...) GOTO(0x4ad89c)
    // neg di
    // sbb edi, edi
    // and dword ptr [esi + 4], 0
    // and edi, 0x80000000
    // add edi, 0x7fff8000
    // and dword ptr [esi], 0
    // mov dword ptr [esi + 8], edi
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // push ebx
    // mov ebx, 0x4e5848
    // xor ecx, ecx
    // sub ebx, 0x60
    // cmp dword ptr [ebp + 0xc], ecx
    // if (...) GOTO(0x4ad91a)
    // if (...) GOTO(0x4ad8c9)
    // mov eax, dword ptr [ebp + 0xc]
    // mov ebx, 0x4e59a8
    // neg eax
    // mov dword ptr [ebp + 0xc], eax
    // sub ebx, 0x60
    // cmp dword ptr [ebp + 0x10], ecx
    // if (...) GOTO(0x4ad8d4)
    // mov eax, dword ptr [ebp + 8]
    // mov word ptr [eax], cx
    // cmp dword ptr [ebp + 0xc], ecx
    // if (...) GOTO(0x4ad91a)
    // push esi
    // push edi
    // mov eax, dword ptr [ebp + 0xc]
    // add ebx, 0x54
    // sar dword ptr [ebp + 0xc], 3
    // and eax, 7
    // cmp eax, ecx
    // if (...) GOTO(0x4ad913)
    // lea eax, [eax + eax*2]
    // cmp word ptr [ebx + eax*4], 0x8000
    // lea esi, [ebx + eax*4]
    // if (...) GOTO(0x4ad906)
    // lea edi, [ebp - 0xc]
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsd dword ptr es:[edi], dword ptr [esi]
    // dec dword ptr [ebp - 0xa]
    // lea esi, [ebp - 0xc]
    // push esi
    // push dword ptr [ebp + 8]
    // CALL(0x4ad681)
    // pop ecx
    // pop ecx
    // xor ecx, ecx
    // cmp dword ptr [ebp + 0xc], ecx
    // if (...) GOTO(0x4ad8db)
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push esi
    // push(0xc)
    // CALL(0x4a79b2)
    // push dword ptr [esp + 0xc]
    // CALL(0x4ad93e)
    // push(0xc)
    // mov esi, eax
    // CALL(0x4a7a13)
    // add esp, 0xc
    // mov eax, esi
    // pop esi
    // return;
    // cmp dword ptr [0x842164], 0
    // push ebx
    // push esi
    // mov esi, dword ptr [0x840a88]
    // push edi
    // if (...) GOTO(0x4ad9b5)
    // test esi, esi
    // if (...) GOTO(0x4ad96f)
    // cmp dword ptr [0x840a90], esi
    // if (...) GOTO(0x4ad9b5)
    // CALL(0x4ad9fa)
    // test eax, eax
    // if (...) GOTO(0x4ad9b5)
    // mov esi, dword ptr [0x840a88]
    // test esi, esi
    // if (...) GOTO(0x4ad9b5)
    // mov ebx, dword ptr [esp + 0x10]
    // test ebx, ebx
    // if (...) GOTO(0x4ad9b5)
    // push ebx
    // CALL(0x4abdf0)
    // pop ecx
    // mov edi, eax
    // mov eax, dword ptr [esi]
    // test eax, eax
    // if (...) GOTO(0x4ad9b5)
    // push eax
    // CALL(0x4abdf0)
    // cmp eax, edi
    // pop ecx
    // jbe 0x4ad9a8
    // mov eax, dword ptr [esi]
    // cmp byte ptr [eax + edi], 0x3d
    // if (...) GOTO(0x4ad9a8)
    // push edi
    // push ebx
    // push eax
    // CALL(0x4ad9bb)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4ad9ad)
    // add esi, 4
    // if (...) GOTO(0x4ad980)
    // mov eax, dword ptr [esi]
    // lea eax, [eax + edi + 1]
    // if (...) GOTO(0x4ad9b7)
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // cmp dword ptr [ebp + 0x10], 0
    // if (...) GOTO(0x4ad9c8)
    // xor eax, eax
    // pop ebp
    // return;
    // push dword ptr [0x840dd8]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 8]
    // push 1
    // push dword ptr [0x841004]
    // CALL(0x4ada68)
    // add esp, 0x1c
    // test eax, eax
    // if (...) GOTO(0x4ad9f5)
    // mov eax, 0x7fffffff
    // pop ebp
    // return;
    // add eax, -2
    // pop ebp
    // return;
    // push ecx
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [0x840a90]
    // push edi
    // xor edi, edi
    // mov eax, dword ptr [esi]
    // cmp eax, edi
    // if (...) GOTO(0x4ada5b)
    // mov ebx, dword ptr [0x4ba104]
    // push edi
    // push edi
    // push edi
    // push edi
    // push -1
    // push eax
    // push edi
    // push 1
    // CALL(ebx)
    // mov ebp, eax
    // cmp ebp, edi
    // if (...) GOTO(0x4ada63)
    // push ebp
    // CALL(0x4a504f)
    // cmp eax, edi
    // pop ecx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4ada63)
    // push edi
    // push edi
    // push ebp
    // push eax
    // push -1
    // push dword ptr [esi]
    // push edi
    // push 1
    // CALL(ebx)
    // test eax, eax
    // if (...) GOTO(0x4ada63)
    // push edi
    // push dword ptr [esp + 0x14]
    // CALL(0x4add10)
    // mov eax, dword ptr [esi + 4]
    // add esi, 4
    // pop ecx
    // cmp eax, edi
    // pop ecx
    // if (...) GOTO(0x4ada13)
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // or eax, 0xffffffff
    // if (...) GOTO(0x4ada5d)
    // push ebp
    // mov ebp, esp
    // push -1
    // push(0x4bcaf0)  // ptr?
    // push(0x4a8f7c)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 0x30
    // push ebx
    // push esi
    // push edi
    // mov dword ptr [ebp - 0x18], esp
    // xor ebx, ebx
    // cmp dword ptr [0x840dd4], ebx
    // push 1
    // pop edi
    // if (...) GOTO(0x4adadb)
    // push edi
    // mov eax, 0x4bc5a8
    // push eax
    // push edi
    // push eax
    // push ebx
    // push ebx
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4adab8)
    // mov dword ptr [0x840dd4], edi
    // if (...) GOTO(0x4adadb)
    // push edi
    // mov eax, 0x4bc5a4
    // push eax
    // push edi
    // push eax
    // push ebx
    // push ebx
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4adcd1)
    // mov dword ptr [0x840dd4], 2
    // mov esi, dword ptr [ebp + 0x14]
    // cmp esi, ebx
    // if (...) GOTO(0x4adaf2)
    // push esi
    // push dword ptr [ebp + 0x10]
    // CALL(0x4adce5)
    // pop ecx
    // pop ecx
    // mov esi, eax
    // mov dword ptr [ebp + 0x14], esi
    // cmp dword ptr [ebp + 0x1c], ebx
    // if (...) GOTO(0x4adb07)
    // push dword ptr [ebp + 0x1c]
    // push dword ptr [ebp + 0x18]
    // CALL(0x4adce5)
    // pop ecx
    // pop ecx
    // mov dword ptr [ebp + 0x1c], eax
    // mov eax, dword ptr [0x840dd4]
    // cmp eax, 2
    // if (...) GOTO(0x4adb2c)
    // push dword ptr [ebp + 0x1c]
    // push dword ptr [ebp + 0x18]
    // push esi
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(dword)
    // if (...) GOTO(0x4adcd3)
    // cmp eax, edi
    // if (...) GOTO(0x4adcd1)
    // cmp dword ptr [ebp + 0x20], ebx
    // if (...) GOTO(0x4adb41)
    // mov eax, dword ptr [0x840b54]
    // mov dword ptr [ebp + 0x20], eax
    // cmp esi, ebx
    // if (...) GOTO(0x4adb4e)
    // cmp dword ptr [ebp + 0x1c], ebx
    // if (...) GOTO(0x4adbe6)
    // cmp esi, dword ptr [ebp + 0x1c]
    // if (...) GOTO(0x4adb5b)
    // push 2
    // pop eax
    // if (...) GOTO(0x4adcd3)
    // cmp dword ptr [ebp + 0x1c], edi
    // if (...) GOTO(0x4adb67)
    // mov eax, edi
    // if (...) GOTO(0x4adcd3)
    // cmp esi, edi
    // if (...) GOTO(0x4adbac)
    // lea eax, [ebp - 0x3c]
    // push eax
    // push dword ptr [ebp + 0x20]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4adcd1)
    // cmp esi, ebx
    // if (...) GOTO(0x4adbb0)
    // cmp dword ptr [ebp - 0x3c], 2
    // if (...) GOTO(0x4adbac)
    // lea eax, [ebp - 0x36]
    // cmp byte ptr [ebp - 0x36], bl
    // if (...) GOTO(0x4adbac)
    // mov dl, byte ptr [eax + 1]
    // cmp dl, bl
    // if (...) GOTO(0x4adbac)
    // mov ecx, dword ptr [ebp + 0x10]
    // mov cl, byte ptr [ecx]
    // cmp cl, byte ptr [eax]
    // if (...) GOTO(0x4adba6)
    // cmp cl, dl
    // jbe 0x4adb53
    // inc eax
    // inc eax
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4adb92)
    // push 3
    // if (...) GOTO(0x4adb55)
    // cmp dword ptr [ebp + 0x1c], ebx
    // if (...) GOTO(0x4adbe6)
    // cmp dword ptr [ebp - 0x3c], 2
    // if (...) GOTO(0x4adb60)
    // lea eax, [ebp - 0x36]
    // cmp byte ptr [ebp - 0x36], bl
    // if (...) GOTO(0x4adb60)
    // mov dl, byte ptr [eax + 1]
    // cmp dl, bl
    // if (...) GOTO(0x4adb60)
    // mov ecx, dword ptr [ebp + 0x18]
    // mov cl, byte ptr [ecx]
    // cmp cl, byte ptr [eax]
    // if (...) GOTO(0x4adbdb)
    // cmp cl, dl
    // jbe 0x4adb53
    // inc eax
    // inc eax
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4adbc3)
    // if (...) GOTO(0x4adb60)
    // push ebx
    // push ebx
    // push esi
    // push dword ptr [ebp + 0x10]
    // push 9
    // push dword ptr [ebp + 0x20]
    // CALL(dword)
    // mov dword ptr [ebp - 0x1c], eax
    // cmp eax, ebx
    // if (...) GOTO(0x4adcd1)
    // mov dword ptr [ebp - 4], ebx
    // add eax, eax
    // add eax, 3
    // and al, 0xfc
    // CALL(0x4a6070)
    // mov dword ptr [ebp - 0x18], esp
    // mov eax, esp
    // mov dword ptr [ebp - 0x24], eax
    // or dword ptr [ebp - 4], 0xffffffff
    // if (...) GOTO(0x4adc35)
    // push 1
    // pop eax
    // return;
    // mov esp, dword ptr [ebp - 0x18]
    // xor ebx, ebx
    // mov dword ptr [ebp - 0x24], ebx
    // or dword ptr [ebp - 4], 0xffffffff
    // mov esi, dword ptr [ebp + 0x14]
    // push 1
    // pop edi
    // cmp dword ptr [ebp - 0x24], ebx
    // if (...) GOTO(0x4adcd1)
    // push dword ptr [ebp - 0x1c]
    // push dword ptr [ebp - 0x24]
    // push esi
    // push dword ptr [ebp + 0x10]
    // push edi
    // push dword ptr [ebp + 0x20]
    // mov esi, dword ptr [0x4ba020]
    // CALL(esi)
    // test eax, eax
    // if (...) GOTO(0x4adcd1)
    // push ebx
    // push ebx
    // push dword ptr [ebp + 0x1c]
    // push dword ptr [ebp + 0x18]
    // push 9
    // push dword ptr [ebp + 0x20]
    // CALL(esi)
    // mov esi, eax
    // mov dword ptr [ebp - 0x20], esi
    // cmp esi, ebx
    // if (...) GOTO(0x4adcd1)
    // mov dword ptr [ebp - 4], edi
    // lea eax, [esi + esi]
    // add eax, 3
    // and al, 0xfc
    // CALL(0x4a6070)
    // mov dword ptr [ebp - 0x18], esp
    // mov edi, esp
    // mov dword ptr [ebp - 0x28], edi
    // or dword ptr [ebp - 4], 0xffffffff
    // if (...) GOTO(0x4adca0)
    // push 1
    // pop eax
    // return;
    // mov esp, dword ptr [ebp - 0x18]
    // xor ebx, ebx
    // xor edi, edi
    // or dword ptr [ebp - 4], 0xffffffff
    // mov esi, dword ptr [ebp - 0x20]
    // cmp edi, ebx
    // if (...) GOTO(0x4adcd1)
    // push esi
    // push edi
    // push dword ptr [ebp + 0x1c]
    // push dword ptr [ebp + 0x18]
    // push 1
    // push dword ptr [ebp + 0x20]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4adcd1)
    // push esi
    // push edi
    // push dword ptr [ebp - 0x1c]
    // push dword ptr [ebp - 0x24]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(dword)
    // if (...) GOTO(0x4adcd3)
    // xor eax, eax
    // lea esp, [ebp - 0x4c]
    // mov ecx, dword ptr [ebp - 0x10]
    // mov dword ptr fs:[0], ecx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov edx, dword ptr [esp + 8]
    // mov eax, dword ptr [esp + 4]
    // test edx, edx
    // push esi
    // lea ecx, [edx - 1]
    // if (...) GOTO(0x4add02)
    // cmp byte ptr [eax], 0
    // if (...) GOTO(0x4add02)
    // inc eax
    // mov esi, ecx
    // dec ecx
    // test esi, esi
    // if (...) GOTO(0x4adcf5)
    // cmp byte ptr [eax], 0
    // pop esi
    // if (...) GOTO(0x4add0d)
    // sub eax, dword ptr [esp + 4]
    // return;
    // mov eax, edx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // push ebx
    // push esi
    // push edi
    // xor edi, edi
    // cmp dword ptr [ebp + 8], edi
    // if (...) GOTO(0x4add74)
    // push(0x3d)
    // push dword ptr [ebp + 8]
    // CALL(0x4adf56)
    // mov esi, eax
    // pop ecx
    // cmp esi, edi
    // pop ecx
    // mov dword ptr [ebp - 8], esi
    // if (...) GOTO(0x4add74)
    // cmp dword ptr [ebp + 8], esi
    // if (...) GOTO(0x4add74)
    // mov eax, dword ptr [0x840a88]
    // xor ebx, ebx
    // cmp byte ptr [esi + 1], bl
    // sete bl
    // cmp eax, dword ptr [0x840a8c]
    // if (...) GOTO(0x4add5a)
    // push eax
    // CALL(0x4adeef)
    // pop ecx
    // mov dword ptr [0x840a88], eax
    // cmp eax, edi
    // if (...) GOTO(0x4addb2)
    // cmp dword ptr [ebp + 0xc], edi
    // if (...) GOTO(0x4add7c)
    // cmp dword ptr [0x840a90], edi
    // if (...) GOTO(0x4add7c)
    // CALL(0x4ad9fa)
    // test eax, eax
    // if (...) GOTO(0x4addb2)
    // or eax, 0xffffffff
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // cmp ebx, edi
    // if (...) GOTO(0x4ade90)
    // push 4
    // CALL(0x4a504f)
    // cmp eax, edi
    // pop ecx
    // mov dword ptr [0x840a88], eax
    // if (...) GOTO(0x4add74)
    // mov dword ptr [eax], edi
    // cmp dword ptr [0x840a90], edi
    // if (...) GOTO(0x4addb2)
    // push 4
    // CALL(0x4a504f)
    // cmp eax, edi
    // pop ecx
    // mov dword ptr [0x840a90], eax
    // if (...) GOTO(0x4add74)
    // mov dword ptr [eax], edi
    // sub esi, dword ptr [ebp + 8]
    // mov edi, dword ptr [0x840a88]
    // mov dword ptr [ebp - 4], edi
    // push esi
    // push dword ptr [ebp + 8]
    // CALL(0x4ade97)
    // mov esi, eax
    // pop ecx
    // test esi, esi
    // pop ecx
    // if (...) GOTO(0x4ade12)
    // cmp dword ptr [edi], 0
    // if (...) GOTO(0x4ade12)
    // test ebx, ebx
    // if (...) GOTO(0x4ade0a)
    // push dword ptr [edi + esi*4]
    // lea edi, [edi + esi*4]
    // CALL(0x4a5007)
    // pop ecx
    // cmp dword ptr [edi], 0
    // if (...) GOTO(0x4addf4)
    // mov eax, dword ptr [edi + 4]
    // inc esi
    // mov dword ptr [edi], eax
    // add edi, 4
    // if (...) GOTO(0x4adde4)
    // mov eax, esi
    // shl eax, 2
    // push eax
    // push dword ptr [ebp - 4]
    // CALL(0x4a6980)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ade44)
    // if (...) GOTO(0x4ade3f)
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [edi + esi*4], eax
    // if (...) GOTO(0x4ade44)
    // test ebx, ebx
    // if (...) GOTO(0x4ade90)
    // test esi, esi
    // if (...) GOTO(0x4ade1c)
    // neg esi
    // lea eax, [esi*4 + 8]
    // push eax
    // push edi
    // CALL(0x4a6980)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4add74)
    // mov ecx, dword ptr [ebp + 8]
    // mov dword ptr [eax + esi*4], ecx
    // and dword ptr [eax + esi*4 + 4], 0
    // mov dword ptr [0x840a88], eax
    // cmp dword ptr [ebp + 0xc], 0
    // if (...) GOTO(0x4ade90)
    // push dword ptr [ebp + 8]
    // CALL(0x4abdf0)
    // inc eax
    // inc eax
    // push eax
    // CALL(0x4a504f)
    // mov esi, eax
    // pop ecx
    // test esi, esi
    // pop ecx
    // if (...) GOTO(0x4ade90)
    // push dword ptr [ebp + 8]
    // push esi
    // CALL(0x4abca0)
    // mov eax, esi
    // pop ecx
    // sub eax, dword ptr [ebp + 8]
    // pop ecx
    // add eax, dword ptr [ebp - 8]
    // and byte ptr [eax], 0
    // inc eax
    // neg ebx
    // sbb ebx, ebx
    // not ebx
    // and ebx, eax
    // push ebx
    // push esi
    // CALL(dword)
    // push esi
    // CALL(0x4a5007)
    // pop ecx
    // xor eax, eax
    // if (...) GOTO(0x4add77)
    // push esi
    // mov esi, dword ptr [0x840a88]
    // push edi
    // mov eax, dword ptr [esi]
    // test eax, eax
    // if (...) GOTO(0x4aded2)
    // mov edi, dword ptr [esp + 0x10]
    // push edi
    // push eax
    // push dword ptr [esp + 0x14]
    // CALL(0x4ad9bb)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4adec8)
    // mov eax, dword ptr [esi]
    // mov al, byte ptr [eax + edi]
    // cmp al, 0x3d
    // if (...) GOTO(0x4adee2)
    // test al, al
    // if (...) GOTO(0x4adee2)
    // mov eax, dword ptr [esi + 4]
    // add esi, 4
    // test eax, eax
    // if (...) GOTO(0x4adea9)
    // mov eax, esi
    // sub eax, dword ptr [0x840a88]
    // sar eax, 2
    // neg eax
    // pop edi
    // pop esi
    // return;
    // mov eax, esi
    // sub eax, dword ptr [0x840a88]
    // sar eax, 2
    // if (...) GOTO(0x4adedf)
    // push edi
    // mov edi, dword ptr [esp + 8]
    // xor ecx, ecx
    // test edi, edi
    // if (...) GOTO(0x4adefe)
    // xor eax, eax
    // pop edi
    // return;
    // cmp dword ptr [edi], 0
    // lea eax, [edi + 4]
    // if (...) GOTO(0x4adf10)
    // mov edx, dword ptr [eax]
    // inc ecx
    // add eax, 4
    // test edx, edx
    // if (...) GOTO(0x4adf06)
    // push ebx
    // push ebp
    // lea eax, [ecx*4 + 4]
    // push esi
    // push eax
    // CALL(0x4a504f)
    // mov esi, eax
    // pop ecx
    // test esi, esi
    // mov ebp, esi
    // if (...) GOTO(0x4adf31)
    // push 9
    // CALL(0x4a6937)
    // pop ecx
    // mov eax, dword ptr [edi]
    // mov ebx, edi
    // test eax, eax
    // if (...) GOTO(0x4adf4c)
    // push eax
    // add ebx, 4
    // CALL(0x4adfed)
    // mov dword ptr [esi], eax
    // mov eax, dword ptr [ebx]
    // pop ecx
    // add esi, 4
    // if (...) GOTO(0x4adf35)
    // and dword ptr [esi], 0
    // mov eax, ebp
    // pop esi
    // pop ebp
    // pop ebx
    // pop edi
    // return;
    // push ebp
    // mov ebp, esp
    // cmp dword ptr [0x840dec], 0
    // push ebx
    // push esi
    // if (...) GOTO(0x4adf73)
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4a6170)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4adfe9)
    // push(0x19)
    // CALL(0x4a79b2)
    // mov esi, dword ptr [ebp + 8]
    // pop ecx
    // movzx bx, byte ptr [esi]
    // test bx, bx
    // if (...) GOTO(0x4adfd1)
    // movzx eax, bl
    // test byte ptr [eax + 0x840f01], 4
    // if (...) GOTO(0x4adfad)
    // mov al, byte ptr [esi + 1]
    // inc esi
    // test al, al
    // if (...) GOTO(0x4adfb8)
    // movzx ecx, bx
    // movzx eax, al
    // shl ecx, 8
    // or ecx, eax
    // cmp dword ptr [ebp + 0xc], ecx
    // if (...) GOTO(0x4adfc4)
    // if (...) GOTO(0x4adfb5)
    // movzx eax, bx
    // cmp dword ptr [ebp + 0xc], eax
    // if (...) GOTO(0x4adfd1)
    // inc esi
    // if (...) GOTO(0x4adf7e)
    // push(0x19)
    // CALL(0x4a7a13)
    // pop ecx
    // xor eax, eax
    // if (...) GOTO(0x4adfe9)
    // push(0x19)
    // CALL(0x4a7a13)
    // pop ecx
    // lea eax, [esi - 1]
    // if (...) GOTO(0x4adfe9)
    // push(0x19)
    // CALL(0x4a7a13)
    // mov eax, dword ptr [ebp + 0xc]
    // pop ecx
    // movzx ecx, bx
    // sub eax, ecx
    // neg eax
    // sbb eax, eax
    // not eax
    // and eax, esi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // test esi, esi
    // if (...) GOTO(0x4ae014)
    // push esi
    // CALL(0x4abdf0)
    // inc eax
    // push eax
    // CALL(0x4a504f)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ae014)
    // push esi
    // push eax
    // CALL(0x4abca0)
    // pop ecx
    // pop ecx
    // pop esi
    // return;
    // xor eax, eax
    // pop esi
    // return;
    // CALL(0x405096)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // sub esp, 0x1f0
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0x1fc]
    // push esi
    // test ebp, ebp
    // push edi
    // if (...) GOTO(0x4ae135)
    // mov edi, dword ptr [esp + 0x208]
    // test edi, edi
    // if (...) GOTO(0x4ae135)
    // mov esi, dword ptr [esp + 0x20c]
    // test esi, esi
    // if (...) GOTO(0x4ae135)
    // mov ebx, dword ptr [esp + 0x210]
    // test ebx, ebx
    // if (...) GOTO(0x4ae135)
    // lea eax, [esp + 0x17c]
    // push eax
    // CALL(0x4aec80)
    // push(0x168)
    // lea ecx, [esp + 0x1c]
    // push(0x3d)
    // push ecx
    // mov dword ptr [esp + 0x24], eax
    // CALL(0x4ae150)
    // lea edx, [esp + 0x24]
    // mov dword ptr [esp + 0x48], 2
    // push edx
    // CALL(0x4ae760)
    // mov eax, 0x48
    // mov dword ptr [esp + 0x48], 3
    // mov word ptr [esp + 0xf6], ax
    // mov word ptr [esp + 0xf8], ax
    // lea eax, [esp + 0x28]
    // mov dword ptr [esp + 0x58], 8
    // push eax
    // mov dword ptr [esp + 0x44], edi
    // mov dword ptr [esp + 0x48], esi
    // mov byte ptr [esp + 0xf8], 1
    // CALL(0x4ae910)
    // lea ecx, [esp + 0x2c]
    // push ebp
    // push ecx
    // CALL(0x4ae4d0)
    // lea edx, [esp + 0x34]
    // push 1
    // push edx
    // CALL(0x4ae380)
    // add esp, 0x28
    // push edi
    // CALL(ebx)
    // mov dword ptr [esp + 0x14], eax
    // lea eax, [esp + 0x14]
    // push 1
    // lea ecx, [esp + 0x1c]
    // push eax
    // push ecx
    // CALL(0x4ae400)
    // add esp, 0x10
    // dec esi
    // if (...) GOTO(0x4ae0f3)
    // lea edx, [esp + 0x14]
    // push edx
    // CALL(0x4ae270)
    // lea eax, [esp + 0x18]
    // push eax
    // CALL(0x4ae210)
    // add esp, 8
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x1f0
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // add esp, 0x1f0
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 8]
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // xor ebx, ebx
    // cmp eax, 0x3d
    // mov dword ptr [esi + 4], ebx
    // if (...) GOTO(0x4ae183)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 0xa
    // mov edx, dword ptr [esi]
    // mov dword ptr [edx + 0x18], 0x3d
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x1c], eax
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x14]
    // cmp eax, 0x168
    // if (...) GOTO(0x4ae1ad)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 0x13
    // mov edx, dword ptr [esi]
    // mov dword ptr [edx + 0x18], 0x168
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x1c], eax
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov edx, dword ptr [esi]
    // push edi
    // mov ecx, 0x5a
    // xor eax, eax
    // mov edi, esi
    // push esi
    // rep stosd dword ptr es:[edi], eax
    // mov dword ptr [esi], edx
    // mov dword ptr [esi + 0xc], ebx
    // CALL(0x4aee30)
    // add esp, 4
    // xor eax, eax
    // mov dword ptr [esi + 8], ebx
    // mov dword ptr [esi + 0x14], ebx
    // mov dword ptr [esi + 0x3c], ebx
    // mov dword ptr [esi + 0x40], eax
    // mov dword ptr [esi + 0x44], eax
    // mov ecx, 4
    // mov dword ptr [esi + 0x48], eax
    // pop edi
    // mov dword ptr [esi + 0x4c], eax
    // lea eax, [esi + 0x60]
    // mov dword ptr [eax - 0x10], ebx
    // mov dword ptr [eax], ebx
    // add eax, 4
    // dec ecx
    // if (...) GOTO(0x4ae1e9)
    // mov dword ptr [esi + 0x28], ebx
    // mov dword ptr [esi + 0x2c], 0x3ff00000
    // mov dword ptr [esi + 0x10], 0x64
    // pop esi
    // pop ebx
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push eax
    // CALL(0x4afa90)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // mov edi, dword ptr [esp + 0x10]
    // lea ecx, [esi + 0x40]
    // mov edx, 4
    // mov eax, dword ptr [ecx]
    // test eax, eax
    // if (...) GOTO(0x4ae23e)
    // mov dword ptr [eax + 0x80], edi
    // add ecx, 4
    // dec edx
    // if (...) GOTO(0x4ae232)
    // lea eax, [esi + 0x60]
    // mov edx, 4
    // mov ecx, dword ptr [eax - 0x10]
    // test ecx, ecx
    // if (...) GOTO(0x4ae259)
    // mov dword ptr [ecx + 0x114], edi
    // mov ecx, dword ptr [eax]
    // test ecx, ecx
    // if (...) GOTO(0x4ae265)
    // mov dword ptr [ecx + 0x114], edi
    // add eax, 4
    // dec edx
    // if (...) GOTO(0x4ae24c)
    // pop edi
    // pop esi
    // return;
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // mov eax, dword ptr [esi + 0x10]
    // cmp eax, 0x65
    // if (...) GOTO(0x4ae29f)
    // cmp eax, 0x66
    // if (...) GOTO(0x4ae29f)
    // cmp eax, 0x67
    // if (...) GOTO(0x4ae2ca)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x12
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [esi + 0x10]
    // mov dword ptr [ecx + 0x18], edx
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // if (...) GOTO(0x4ae2c7)
    // mov ecx, dword ptr [esi + 0xd8]
    // mov eax, dword ptr [esi + 0x1c]
    // cmp ecx, eax
    // jae 0x4ae2bd
    // mov edx, dword ptr [esi]
    // push esi
    // mov dword ptr [edx + 0x14], 0x42
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov ecx, dword ptr [esi + 0x144]
    // push esi
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x144]
    // mov ecx, dword ptr [eax + 0x10]
    // test ecx, ecx
    // if (...) GOTO(0x4ae356)
    // push ebx
    // push edi
    // mov ebx, 0x16
    // push esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0xe8]
    // add esp, 4
    // xor edi, edi
    // test eax, eax
    // jbe 0x4ae33a
    // mov eax, dword ptr [esi + 8]
    // test eax, eax
    // if (...) GOTO(0x4ae30f)
    // mov dword ptr [eax + 4], edi
    // mov edx, dword ptr [esi + 8]
    // mov eax, dword ptr [esi + 0xe8]
    // push esi
    // mov dword ptr [edx + 8], eax
    // mov ecx, dword ptr [esi + 8]
    // CALL(dword)
    // add esp, 4
    // mov edx, dword ptr [esi + 0x150]
    // push 0
    // push esi
    // CALL(dword)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x4ae32f)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], ebx
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0xe8]
    // inc edi
    // cmp edi, eax
    // if (...) GOTO(0x4ae2f0)
    // mov edx, dword ptr [esi + 0x144]
    // push esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x144]
    // add esp, 4
    // mov ecx, dword ptr [eax + 0x10]
    // test ecx, ecx
    // if (...) GOTO(0x4ae2de)
    // pop edi
    // pop ebx
    // mov eax, dword ptr [esi + 0x154]
    // push esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x14]
    // push esi
    // CALL(dword)
    // push esi
    // CALL(0x4afa60)
    // add esp, 0xc
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // cmp dword ptr [esi + 0x10], 0x64
    // if (...) GOTO(0x4ae3a4)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x12
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [esi + 0x10]
    // mov dword ptr [ecx + 0x18], edx
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esp + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4ae3b7)
    // push 0
    // push esi
    // CALL(0x4ae220)
    // add esp, 8
    // mov ecx, dword ptr [esi]
    // push esi
    // CALL(dword)
    // mov edx, dword ptr [esi + 0x14]
    // push esi
    // CALL(dword)
    // push esi
    // CALL(0x4b03a0)
    // mov eax, dword ptr [esi + 0x144]
    // push esi
    // CALL(dword)
    // mov edx, dword ptr [esi + 0xa8]
    // add esp, 0x10
    // xor ecx, ecx
    // mov dword ptr [esi + 0xd8], 0
    // test edx, edx
    // setne cl
    // add ecx, 0x65
    // mov dword ptr [esi + 0x10], ecx
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // cmp dword ptr [esi + 0x10], 0x65
    // if (...) GOTO(0x4ae424)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x12
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [esi + 0x10]
    // mov dword ptr [ecx + 0x18], edx
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov ecx, dword ptr [esi + 0xd8]
    // mov eax, dword ptr [esi + 0x1c]
    // cmp ecx, eax
    // if (...) GOTO(0x4ae445)
    // mov edx, dword ptr [esi]
    // push -1
    // push esi
    // mov dword ptr [edx + 0x14], 0x77
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 8
    // mov eax, dword ptr [esi + 8]
    // test eax, eax
    // if (...) GOTO(0x4ae467)
    // mov ecx, dword ptr [esi + 0xd8]
    // push esi
    // mov dword ptr [eax + 4], ecx
    // mov edx, dword ptr [esi + 8]
    // mov eax, dword ptr [esi + 0x1c]
    // mov dword ptr [edx + 8], eax
    // mov ecx, dword ptr [esi + 8]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x144]
    // mov ecx, dword ptr [eax + 0xc]
    // test ecx, ecx
    // if (...) GOTO(0x4ae47b)
    // push esi
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x1c]
    // mov ecx, dword ptr [esi + 0xd8]
    // sub eax, ecx
    // mov ecx, dword ptr [esp + 0x10]
    // cmp ecx, eax
    // jbe 0x4ae490
    // mov ecx, eax
    // mov edx, dword ptr [esi + 0x148]
    // push ecx
    // mov ecx, dword ptr [esp + 0x10]
    // lea eax, [esp + 0xc]
    // push eax
    // push ecx
    // push esi
    // mov dword ptr [esp + 0x18], 0
    // CALL(dword)
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esi + 0xd8]
    // add esp, 0x10
    // add ecx, eax
    // mov dword ptr [esi + 0xd8], ecx
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // mov eax, dword ptr [esi + 0x14]
    // test eax, eax
    // if (...) GOTO(0x4ae4ec)
    // mov eax, dword ptr [esi + 4]
    // push(0x1c)
    // push 0
    // push esi
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [esi + 0x14], eax
    // mov eax, dword ptr [esi + 0x14]
    // mov ecx, dword ptr [esp + 0xc]
    // pop esi
    // mov dword ptr [eax + 8], 0x4ae510
    // mov dword ptr [eax + 0xc], 0x4ae540
    // mov dword ptr [eax + 0x10], 0x4ae590
    // mov dword ptr [eax + 0x14], ecx
    // return;
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push esi
    // push(0x1000)
    // push 1
    // mov ecx, dword ptr [eax + 4]
    // mov esi, dword ptr [eax + 0x14]
    // push eax
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [esi + 0x18], eax
    // mov dword ptr [esi], eax
    // mov dword ptr [esi + 4], 0x1000
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // mov esi, dword ptr [edi + 0x14]
    // mov eax, dword ptr [esi + 0x14]
    // mov ecx, dword ptr [esi + 0x18]
    // push eax
    // push(0x1000)
    // push 1
    // push ecx
    // CALL(0x4a6268)
    // add esp, 0x10
    // cmp eax, 0x1000
    // if (...) GOTO(0x4ae578)
    // mov edx, dword ptr [edi]
    // push edi
    // mov dword ptr [edx + 0x14], 0x24
    // mov eax, dword ptr [edi]
    // CALL(dword)
    // add esp, 4
    // mov ecx, dword ptr [esi + 0x18]
    // mov dword ptr [esi + 4], 0x1000
    // mov dword ptr [esi], ecx
    // pop edi
    // mov eax, 1
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x10]
    // mov esi, 0x1000
    // mov ebx, dword ptr [edi + 0x14]
    // sub esi, dword ptr [ebx + 4]
    // if (...) GOTO(0x4ae5cc)
    // mov eax, dword ptr [ebx + 0x14]
    // mov ecx, dword ptr [ebx + 0x18]
    // push eax
    // push esi
    // push 1
    // push ecx
    // CALL(0x4a6268)
    // add esp, 0x10
    // cmp eax, esi
    // if (...) GOTO(0x4ae5cc)
    // mov edx, dword ptr [edi]
    // push edi
    // mov dword ptr [edx + 0x14], 0x24
    // mov eax, dword ptr [edi]
    // CALL(dword)
    // add esp, 4
    // mov ecx, dword ptr [ebx + 0x14]
    // push ecx
    // CALL(0x4a9943)
    // mov edx, dword ptr [ebx + 0x14]
    // add esp, 4
    // test byte ptr [edx + 0xc], 0x20
    // if (...) GOTO(0x4ae5f2)
    // mov eax, dword ptr [edi]
    // push edi
    // mov dword ptr [eax + 0x14], 0x24
    // mov ecx, dword ptr [edi]
    // CALL(dword)
    // add esp, 4
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push ebp
    // mov ebp, dword ptr [esp + 0x10]
    // mov eax, dword ptr [ebx + 0x10]
    // push esi
    // cmp eax, 0x64
    // push edi
    // if (...) GOTO(0x4ae62d)
    // mov eax, dword ptr [ebx]
    // push ebx
    // mov dword ptr [eax + 0x14], 0x12
    // mov ecx, dword ptr [ebx]
    // mov edx, dword ptr [ebx + 0x10]
    // mov dword ptr [ecx + 0x18], edx
    // mov eax, dword ptr [ebx]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [ebx + ebp*4 + 0x40]
    // test eax, eax
    // if (...) GOTO(0x4ae642)
    // push ebx
    // CALL(0x4afab0)
    // add esp, 4
    // mov dword ptr [ebx + ebp*4 + 0x40], eax
    // mov edi, dword ptr [esp + 0x1c]
    // xor esi, esi
    // mov ecx, dword ptr [esp + 0x20]
    // mov eax, 0x51eb851f
    // imul ecx, dword ptr [edi]
    // add ecx, 0x32
    // imul ecx
    // sar edx, 5
    // mov ecx, edx
    // shr ecx, 0x1f
    // add edx, ecx
    // test edx, edx
    // if (...) GOTO(0x4ae66e)
    // mov edx, 1
    // if (...) GOTO(0x4ae67b)
    // cmp edx, 0x7fff
    // if (...) GOTO(0x4ae67b)
    // mov edx, 0x7fff
    // mov eax, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4ae690)
    // cmp edx, 0xff
    // if (...) GOTO(0x4ae690)
    // mov edx, 0xff
    // mov eax, dword ptr [ebx + ebp*4 + 0x40]
    // add esi, 2
    // add edi, 4
    // cmp esi, 0x80
    // mov word ptr [eax + esi - 2], dx
    // if (...) GOTO(0x4ae648)
    // mov ecx, dword ptr [ebx + ebp*4 + 0x40]
    // pop edi
    // pop esi
    // pop ebp
    // mov dword ptr [ecx + 0x80], 0
    // pop ebx
    // return;
    // CALL(0x405098)
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push esi
    // mov esi, dword ptr [esp + 0x14]
    // push edi
    // mov edi, dword ptr [esp + 0x14]
    // push esi
    // push edi
    // push(0x4bcb08)  // ptr?
    // push 0
    // push ebx
    // CALL(0x4ae600)
    // push esi
    // push edi
    // push(0x4bcc08)  // ptr?
    // push 1
    // push ebx
    // CALL(0x4ae600)
    // add esp, 0x28
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [esp + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4ae716)
    // mov eax, 0x1388
    // mov ecx, 1
    // cdq 
    // idiv ecx
    // return;
    // cmp ecx, 0x64
    // if (...) GOTO(0x4ae72a)
    // mov ecx, 0x64
    // mov eax, 0x64
    // sub eax, ecx
    // shl eax, 1
    // return;
    // cmp ecx, 0x32
    // if (...) GOTO(0x4ae720)
    // mov eax, 0x1388
    // cdq 
    // idiv ecx
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 8]
    // push eax
    // CALL(0x4ae700)
    // mov ecx, dword ptr [esp + 0x10]
    // mov edx, dword ptr [esp + 8]
    // push ecx
    // push eax
    // push edx
    // CALL(0x4ae6c0)
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // cmp dword ptr [esi + 0x10], 0x64
    // if (...) GOTO(0x4ae785)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x12
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [esi + 0x10]
    // mov dword ptr [ecx + 0x18], edx
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x3c]
    // xor ebx, ebx
    // cmp eax, ebx
    // if (...) GOTO(0x4ae7a0)
    // mov ecx, dword ptr [esi + 4]
    // push(0x348)
    // push ebx
    // push esi
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [esi + 0x3c], eax
    // push ebp
    // push 1
    // push(0x4b)
    // push esi
    // mov dword ptr [esi + 0x30], 8
    // CALL(0x4ae740)
    // push esi
    // CALL(0x4ae850)
    // mov ecx, 0xffffff80
    // add esp, 0x10
    // lea eax, [esi + 0x80]
    // sub ecx, esi
    // mov dl, 5
    // mov byte ptr [eax - 0x10], bl
    // mov byte ptr [eax], 1
    // mov byte ptr [eax + 0x10], dl
    // inc eax
    // lea ebp, [ecx + eax]
    // cmp ebp, 0x10
    // if (...) GOTO(0x4ae7ca)
    // mov eax, dword ptr [esi + 0x30]
    // mov dword ptr [esi + 0xa4], ebx
    // cmp eax, 8
    // mov dword ptr [esi + 0xa0], ebx
    // mov dword ptr [esi + 0xa8], ebx
    // mov dword ptr [esi + 0xac], ebx
    // mov dword ptr [esi + 0xb0], ebx
    // pop ebp
    // if (...) GOTO(0x4ae80d)
    // mov dword ptr [esi + 0xb0], 1
    // push esi
    // mov dword ptr [esi + 0xb4], ebx
    // mov dword ptr [esi + 0xb8], ebx
    // mov dword ptr [esi + 0xbc], ebx
    // mov dword ptr [esi + 0xc0], ebx
    // mov dword ptr [esi + 0xc4], ebx
    // mov byte ptr [esi + 0xcc], bl
    // mov word ptr [esi + 0xce], 1
    // mov word ptr [esi + 0xd0], 1
    // CALL(0x4ae910)
    // add esp, 4
    // pop esi
    // pop ebx
    // return;
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push(0x4bcd1c)  // ptr?
    // push(0x4bcd08)  // ptr?
    // lea eax, [esi + 0x50]
    // push eax
    // push esi
    // CALL(0x4ae8b0)
    // push(0x4bcd5c)  // ptr?
    // lea ecx, [esi + 0x60]
    // push(0x4bcd48)  // ptr?
    // push ecx
    // push esi
    // CALL(0x4ae8b0)
    // push(0x4bcd3c)  // ptr?
    // lea edx, [esi + 0x54]
    // push(0x4bcd28)  // ptr?
    // push edx
    // push esi
    // CALL(0x4ae8b0)
    // push(0x4bce14)  // ptr?
    // lea eax, [esi + 0x64]
    // push(0x4bce00)  // ptr?
    // push eax
    // push esi
    // CALL(0x4ae8b0)
    // add esp, 0x40
    // pop esi
    // return;
    // CALL(0x405098)
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 0xc]
    // push esi
    // push edi
    // cmp dword ptr [ebx], 0
    // if (...) GOTO(0x4ae8cb)
    // mov eax, dword ptr [esp + 0x10]
    // push eax
    // CALL(0x4afad0)
    // add esp, 4
    // mov dword ptr [ebx], eax
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [ebx]
    // mov esi, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [ecx]
    // mov dword ptr [edx], eax
    // mov eax, dword ptr [ecx + 4]
    // mov dword ptr [edx + 4], eax
    // mov eax, dword ptr [ecx + 8]
    // mov dword ptr [edx + 8], eax
    // mov eax, dword ptr [ecx + 0xc]
    // mov dword ptr [edx + 0xc], eax
    // mov cl, byte ptr [ecx + 0x10]
    // mov byte ptr [edx + 0x10], cl
    // mov edi, dword ptr [ebx]
    // add edi, 0x11
    // mov ecx, 0x40
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov edx, dword ptr [ebx]
    // pop edi
    // pop esi
    // pop ebx
    // mov dword ptr [edx + 0x114], 0
    // return;
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // mov ecx, dword ptr [eax + 0x24]
    // cmp ecx, 5
    // if (...) GOTO(0x4ae95f)
    // if (...) GOTO(dword)
    // push 1
    // push eax
    // CALL(0x4ae990)
    // add esp, 8
    // return;
    // push 3
    // push eax
    // CALL(0x4ae990)
    // add esp, 8
    // return;
    // push 4
    // push eax
    // CALL(0x4ae990)
    // add esp, 8
    // return;
    // push 5
    // push eax
    // CALL(0x4ae990)
    // add esp, 8
    // return;
    // push 0
    // push eax
    // CALL(0x4ae990)
    // add esp, 8
    // return;
    // mov ecx, dword ptr [eax]
    // push eax
    // mov dword ptr [ecx + 0x14], 7
    // mov edx, dword ptr [eax]
    // CALL(dword)
    // pop ecx
    // return;
    // // nop
    // push ebx
    // if (...) GOTO(0xe96de9c0)
    // dec edx
    // add byte ptr [edi], ch
    // if (...) GOTO(0xe979e9c8)
    // dec edx
    // add byte ptr [ebx], bh
    // if (...) GOTO(0xe991e9d0)
    // dec edx
    // add byte ptr [eax - 0x6f6f6f70], dl
    // // nop
    // // nop
    // // nop
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // cmp dword ptr [esi + 0x10], 0x64
    // if (...) GOTO(0x4ae9b6)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x12
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [esi + 0x10]
    // mov dword ptr [ecx + 0x18], edx
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x14]
    // xor ebx, ebx
    // cmp eax, 5
    // mov dword ptr [esi + 0x38], eax
    // mov dword ptr [esi + 0xc8], ebx
    // mov dword ptr [esi + 0xd4], ebx
    // if (...) GOTO(0x4aec47)
    // if (...) GOTO(dword)
    // mov edi, 1
    // mov dword ptr [esi + 0xc8], edi
    // mov dword ptr [esi + 0x34], edi
    // mov esi, dword ptr [esi + 0x3c]
    // mov dword ptr [esi], edi
    // mov dword ptr [esi + 8], edi
    // mov dword ptr [esi + 0xc], edi
    // mov dword ptr [esi + 0x10], ebx
    // mov dword ptr [esi + 0x14], ebx
    // mov dword ptr [esi + 0x18], ebx
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov eax, dword ptr [esi + 0x3c]
    // mov edi, 1
    // mov dword ptr [esi + 0xd4], edi
    // mov dword ptr [esi + 0x34], 3
    // mov dword ptr [eax], 0x52
    // mov dword ptr [eax + 8], edi
    // mov dword ptr [eax + 0xc], edi
    // mov dword ptr [eax + 0x10], ebx
    // mov dword ptr [eax + 0x14], ebx
    // mov dword ptr [eax + 0x18], ebx
    // mov eax, dword ptr [esi + 0x3c]
    // mov dword ptr [eax + 0x54], 0x47
    // add eax, 0x54
    // mov dword ptr [eax + 8], edi
    // mov dword ptr [eax + 0xc], edi
    // mov dword ptr [eax + 0x10], ebx
    // mov dword ptr [eax + 0x14], ebx
    // mov dword ptr [eax + 0x18], ebx
    // mov esi, dword ptr [esi + 0x3c]
    // add esi, 0xa8
    // mov dword ptr [esi + 8], edi
    // mov dword ptr [esi + 0xc], edi
    // mov dword ptr [esi], 0x42
    // mov dword ptr [esi + 0x10], ebx
    // mov dword ptr [esi + 0x14], ebx
    // mov dword ptr [esi + 0x18], ebx
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov eax, dword ptr [esi + 0x3c]
    // mov edi, 1
    // mov ecx, 2
    // mov dword ptr [esi + 0xc8], edi
    // mov dword ptr [esi + 0x34], 3
    // mov dword ptr [eax], edi
    // mov dword ptr [eax + 8], ecx
    // mov dword ptr [eax + 0xc], ecx
    // mov dword ptr [eax + 0x10], ebx
    // mov dword ptr [eax + 0x14], ebx
    // mov dword ptr [eax + 0x18], ebx
    // mov eax, dword ptr [esi + 0x3c]
    // add eax, 0x54
    // mov dword ptr [eax], ecx
    // mov dword ptr [eax + 8], edi
    // mov dword ptr [eax + 0xc], edi
    // mov dword ptr [eax + 0x10], edi
    // mov dword ptr [eax + 0x14], edi
    // mov dword ptr [eax + 0x18], edi
    // mov esi, dword ptr [esi + 0x3c]
    // mov dword ptr [esi + 0xb0], edi
    // add esi, 0xa8
    // mov dword ptr [esi + 0xc], edi
    // mov dword ptr [esi + 0x10], edi
    // mov dword ptr [esi + 0x14], edi
    // mov dword ptr [esi + 0x18], edi
    // mov dword ptr [esi], 3
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov eax, dword ptr [esi + 0x3c]
    // mov edi, 1
    // mov dword ptr [esi + 0xd4], edi
    // mov dword ptr [esi + 0x34], 4
    // mov dword ptr [eax], 0x43
    // mov dword ptr [eax + 8], edi
    // mov dword ptr [eax + 0xc], edi
    // mov dword ptr [eax + 0x10], ebx
    // mov dword ptr [eax + 0x14], ebx
    // mov dword ptr [eax + 0x18], ebx
    // mov eax, dword ptr [esi + 0x3c]
    // mov dword ptr [eax + 0x54], 0x4d
    // add eax, 0x54
    // mov dword ptr [eax + 8], edi
    // mov dword ptr [eax + 0xc], edi
    // mov dword ptr [eax + 0x10], ebx
    // mov dword ptr [eax + 0x14], ebx
    // mov dword ptr [eax + 0x18], ebx
    // mov eax, dword ptr [esi + 0x3c]
    // add eax, 0xa8
    // mov dword ptr [eax], 0x59
    // mov dword ptr [eax + 8], edi
    // mov dword ptr [eax + 0xc], edi
    // mov dword ptr [eax + 0x10], ebx
    // mov dword ptr [eax + 0x14], ebx
    // mov dword ptr [eax + 0x18], ebx
    // mov esi, dword ptr [esi + 0x3c]
    // mov dword ptr [esi + 0x104], edi
    // add esi, 0xfc
    // mov dword ptr [esi + 0xc], edi
    // mov dword ptr [esi], 0x4b
    // mov dword ptr [esi + 0x10], ebx
    // mov dword ptr [esi + 0x14], ebx
    // mov dword ptr [esi + 0x18], ebx
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov eax, dword ptr [esi + 0x3c]
    // mov edi, 1
    // mov ecx, 2
    // mov dword ptr [esi + 0xd4], edi
    // mov dword ptr [esi + 0x34], 4
    // mov dword ptr [eax], edi
    // mov dword ptr [eax + 8], ecx
    // mov dword ptr [eax + 0xc], ecx
    // mov dword ptr [eax + 0x10], ebx
    // mov dword ptr [eax + 0x14], ebx
    // mov dword ptr [eax + 0x18], ebx
    // mov eax, dword ptr [esi + 0x3c]
    // add eax, 0x54
    // mov dword ptr [eax], ecx
    // mov dword ptr [eax + 8], edi
    // mov dword ptr [eax + 0xc], edi
    // mov dword ptr [eax + 0x10], edi
    // mov dword ptr [eax + 0x14], edi
    // mov dword ptr [eax + 0x18], edi
    // mov eax, dword ptr [esi + 0x3c]
    // mov dword ptr [eax + 0xa8], 3
    // add eax, 0xa8
    // mov dword ptr [eax + 8], edi
    // mov dword ptr [eax + 0xc], edi
    // mov dword ptr [eax + 0x10], edi
    // mov dword ptr [eax + 0x14], edi
    // mov dword ptr [eax + 0x18], edi
    // mov esi, dword ptr [esi + 0x3c]
    // add esi, 0xfc
    // pop edi
    // mov dword ptr [esi], 4
    // mov dword ptr [esi + 8], ecx
    // mov dword ptr [esi + 0xc], ecx
    // mov dword ptr [esi + 0x10], ebx
    // mov dword ptr [esi + 0x14], ebx
    // mov dword ptr [esi + 0x18], ebx
    // pop esi
    // pop ebx
    // return;
    // mov eax, dword ptr [esi + 0x20]
    // mov edi, 1
    // cmp eax, edi
    // mov dword ptr [esi + 0x34], eax
    // if (...) GOTO(0x4aebf1)
    // cmp eax, 0xa
    // if (...) GOTO(0x4aec13)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 0x18
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [esi + 0x34]
    // mov dword ptr [edx + 0x18], eax
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x1c], 0xa
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x34]
    // xor ecx, ecx
    // cmp eax, ebx
    // if (...) GOTO(0x4aec58)
    // push ebp
    // xor edx, edx
    // mov ebp, dword ptr [esi + 0x3c]
    // mov eax, edx
    // add eax, ebp
    // add edx, 0x54
    // mov dword ptr [eax], ecx
    // mov dword ptr [eax + 8], edi
    // mov dword ptr [eax + 0xc], edi
    // mov dword ptr [eax + 0x10], ebx
    // mov dword ptr [eax + 0x14], ebx
    // mov dword ptr [eax + 0x18], ebx
    // mov eax, dword ptr [esi + 0x34]
    // inc ecx
    // cmp ecx, eax
    // if (...) GOTO(0x4aec1f)
    // pop ebp
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 8
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // fucomp st(3)
    // dec edx
    // add bl, bl
    // if (...) GOTO(0xea4becb0)
    // dec edx
    // add byte ptr [ecx - 0x16], ch
    // dec edx
    // add al, dl
    // ljmp 0x4a:0xeb58004a
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // xor ecx, ecx
    // mov dword ptr [eax], 0x4aecd0
    // mov dword ptr [eax + 4], 0x4aed20
    // mov dword ptr [eax + 8], 0x4aecf0
    // mov dword ptr [eax + 0xc], 0x4aed60
    // mov dword ptr [eax + 0x10], 0x4aee10
    // mov dword ptr [eax + 0x68], ecx
    // mov dword ptr [eax + 0x6c], ecx
    // mov dword ptr [eax + 0x14], ecx
    // mov dword ptr [eax + 0x70], 0x4bceb8
    // mov dword ptr [eax + 0x74], 0x77
    // mov dword ptr [eax + 0x78], ecx
    // mov dword ptr [eax + 0x7c], ecx
    // mov dword ptr [eax + 0x80], ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push esi
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // push esi
    // CALL(0x4afa90)
    // add esp, 8
    // push 1
    // CALL(0x4a5108)
    // pop esi
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // sub esp, 0xc8
    // lea edx, [esp]
    // mov ecx, dword ptr [eax]
    // push edx
    // push eax
    // CALL(dword)
    // lea eax, [esp + 8]
    // push eax
    // push(0x4e6cf8)  // ptr?
    // push(0x4e4dc8)  // ptr?
    // CALL(0x4a622c)
    // add esp, 0xdc
    // return;
    // mov ecx, dword ptr [esp + 4]
    // mov eax, dword ptr [esp + 8]
    // push esi
    // mov esi, dword ptr [ecx]
    // test eax, eax
    // if (...) GOTO(0x4aed4c)
    // mov eax, dword ptr [esi + 0x6c]
    // test eax, eax
    // if (...) GOTO(0x4aed3c)
    // cmp dword ptr [esi + 0x68], 3
    // if (...) GOTO(0x4aed43)
    // push ecx
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x6c]
    // inc eax
    // mov dword ptr [esi + 0x6c], eax
    // pop esi
    // return;
    // cmp dword ptr [esi + 0x68], eax
    // if (...) GOTO(0x4aed58)
    // push ecx
    // CALL(dword)
    // add esp, 4
    // pop esi
    // return;
    // CALL(0x405098)
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push esi
    // push edi
    // mov eax, dword ptr [eax]
    // mov ecx, dword ptr [eax + 0x14]
    // test ecx, ecx
    // if (...) GOTO(0x4aed7c)
    // cmp ecx, dword ptr [eax + 0x74]
    // if (...) GOTO(0x4aed7c)
    // mov edx, dword ptr [eax + 0x70]
    // mov edx, dword ptr [edx + ecx*4]
    // if (...) GOTO(0x4aed99)
    // mov esi, dword ptr [eax + 0x78]
    // test esi, esi
    // if (...) GOTO(0x4aed9d)
    // mov edx, dword ptr [eax + 0x7c]
    // cmp ecx, edx
    // if (...) GOTO(0x4aed9d)
    // cmp ecx, dword ptr [eax + 0x80]
    // if (...) GOTO(0x4aed9d)
    // mov edi, ecx
    // sub edi, edx
    // mov edx, dword ptr [esi + edi*4]
    // test edx, edx
    // if (...) GOTO(0x4aeda5)
    // mov dword ptr [eax + 0x18], ecx
    // mov ecx, dword ptr [eax + 0x70]
    // mov edx, dword ptr [ecx]
    // mov cl, byte ptr [edx]
    // lea esi, [edx + 1]
    // test cl, cl
    // if (...) GOTO(0x4aedba)
    // cmp cl, 0x25
    // mov cl, byte ptr [esi]
    // if (...) GOTO(0x4aedeb)
    // inc esi
    // test cl, cl
    // if (...) GOTO(0x4aedae)
    // mov ecx, dword ptr [eax + 0x34]
    // push ecx
    // mov ecx, dword ptr [eax + 0x30]
    // push ecx
    // mov ecx, dword ptr [eax + 0x2c]
    // push ecx
    // mov ecx, dword ptr [eax + 0x28]
    // push ecx
    // mov ecx, dword ptr [eax + 0x24]
    // push ecx
    // mov ecx, dword ptr [eax + 0x20]
    // push ecx
    // mov ecx, dword ptr [eax + 0x1c]
    // mov eax, dword ptr [eax + 0x18]
    // push ecx
    // mov ecx, dword ptr [esp + 0x2c]
    // push eax
    // push edx
    // push ecx
    // CALL(0x4b65d6)
    // add esp, 0x28
    // pop edi
    // pop esi
    // return;
    // cmp cl, 0x73
    // if (...) GOTO(0x4aedba)
    // add eax, 0x18
    // push eax
    // push edx
    // mov edx, dword ptr [esp + 0x18]
    // push edx
    // CALL(0x4b65d6)
    // add esp, 0xc
    // pop edi
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // xor ecx, ecx
    // mov edx, dword ptr [eax]
    // mov dword ptr [edx + 0x6c], ecx
    // mov eax, dword ptr [eax]
    // mov dword ptr [eax + 0x14], ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ecx
    // push ebx
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x14]
    // xor ebx, ebx
    // push edi
    // mov dword ptr [edi + 4], ebx
    // CALL(0x4b04b0)
    // push(0x50)
    // push edi
    // mov dword ptr [esp + 0x18], eax
    // CALL(0x4b0460)
    // mov esi, eax
    // add esp, 0xc
    // cmp esi, ebx
    // if (...) GOTO(0x4aee74)
    // push edi
    // CALL(0x4a0890)
    // mov eax, dword ptr [edi]
    // push edi
    // mov dword ptr [eax + 0x14], 0x35
    // mov ecx, dword ptr [edi]
    // mov dword ptr [ecx + 0x18], ebx
    // mov edx, dword ptr [edi]
    // CALL(dword)
    // add esp, 8
    // mov dword ptr [esi], 0x4aef70
    // mov dword ptr [esi + 4], 0x4af0c0
    // mov dword ptr [esi + 8], 0x4af170
    // mov dword ptr [esi + 0xc], 0x4af220
    // mov dword ptr [esi + 0x10], 0x4af2d0
    // mov dword ptr [esi + 0x14], 0x4af340
    // mov dword ptr [esi + 0x18], 0x4af3b0
    // mov dword ptr [esi + 0x1c], 0x4af540
    // mov dword ptr [esi + 0x20], 0x4af730
    // mov dword ptr [esi + 0x24], 0x4af920
    // mov dword ptr [esi + 0x28], 0x4afa20
    // mov eax, dword ptr [esp + 0xc]
    // mov dword ptr [esi + 0x2c], eax
    // lea eax, [esi + 0x3c]
    // mov ecx, 2
    // mov dword ptr [eax - 8], ebx
    // mov dword ptr [eax], ebx
    // sub eax, 4
    // dec ecx
    // if (...) GOTO(0x4aeecf)
    // mov dword ptr [esi + 0x40], ebx
    // mov dword ptr [esi + 0x44], ebx
    // mov dword ptr [esi + 0x48], 0x50
    // push(0x4e6d04)  // ptr?
    // mov dword ptr [edi + 4], esi
    // CALL(0x4ad91d)
    // add esp, 4
    // cmp eax, ebx
    // if (...) GOTO(0x4aef5f)
    // lea ecx, [esp + 0x14]
    // lea edx, [esp + 0xc]
    // push ecx
    // push edx
    // push(0x4e6cfc)  // ptr?
    // push eax
    // mov byte ptr [esp + 0x24], 0x78
    // CALL(0x4b6628)
    // add esp, 0x10
    // test eax, eax
    // if (...) GOTO(0x4aef5f)
    // mov al, byte ptr [esp + 0x14]
    // cmp al, 0x6d
    // if (...) GOTO(0x4aef28)
    // cmp al, 0x4d
    // if (...) GOTO(0x4aef4c)
    // mov eax, dword ptr [esp + 0xc]
    // pop edi
    // lea eax, [eax + eax*4]
    // lea eax, [eax + eax*4]
    // lea eax, [eax + eax*4]
    // shl eax, 3
    // lea eax, [eax + eax*4]
    // lea eax, [eax + eax*4]
    // lea eax, [eax + eax*4]
    // shl eax, 3
    // mov dword ptr [esi + 0x2c], eax
    // pop esi
    // pop ebx
    // pop ecx
    // return;
    // mov eax, dword ptr [esp + 0xc]
    // lea eax, [eax + eax*4]
    // lea eax, [eax + eax*4]
    // lea eax, [eax + eax*4]
    // shl eax, 3
    // mov dword ptr [esi + 0x2c], eax
    // pop edi
    // pop esi
    // pop ebx
    // pop ecx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push ebp
    // push esi
    // mov eax, dword ptr [ebx + 4]
    // push edi
    // mov edi, dword ptr [esp + 0x1c]
    // mov dword ptr [esp + 0x14], eax
    // cmp edi, 0xffe0
    // jbe 0x4aef96
    // push 1
    // push ebx
    // CALL(0x4af0a0)
    // add esp, 8
    // mov eax, edi
    // and eax, 7
    // jbe 0x4aefaa
    // mov ecx, 8
    // sub ecx, eax
    // add edi, ecx
    // mov dword ptr [esp + 0x1c], edi
    // mov esi, dword ptr [esp + 0x18]
    // test esi, esi
    // if (...) GOTO(0x4aefb7)
    // cmp esi, 2
    // if (...) GOTO(0x4aefcd)
    // mov edx, dword ptr [ebx]
    // push ebx
    // mov dword ptr [edx + 0x14], 0xc
    // mov eax, dword ptr [ebx]
    // mov dword ptr [eax + 0x18], esi
    // mov ecx, dword ptr [ebx]
    // CALL(dword)
    // add esp, 4
    // mov edx, dword ptr [esp + 0x14]
    // xor ebp, ebp
    // mov eax, dword ptr [edx + esi*4 + 0x30]
    // test eax, eax
    // if (...) GOTO(0x4aeff2)
    // cmp dword ptr [eax + 8], edi
    // jae 0x4aefea
    // mov ebp, eax
    // mov eax, dword ptr [eax]
    // test eax, eax
    // if (...) GOTO(0x4aefdb)
    // if (...) GOTO(0x4aeff2)
    // test eax, eax
    // if (...) GOTO(0x4af084)
    // add edi, 0x10
    // test ebp, ebp
    // if (...) GOTO(0x4af002)
    // mov esi, dword ptr [esi*4 + 0x4bd09c]
    // if (...) GOTO(0x4af009)
    // mov esi, dword ptr [esi*4 + 0x4bd0a4]
    // mov eax, 0xfff0
    // sub eax, edi
    // cmp esi, eax
    // jbe 0x4af016
    // mov esi, eax
    // lea eax, [esi + edi]
    // push eax
    // push ebx
    // CALL(0x4b0460)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x4af04a)
    // shr esi, 1
    // cmp esi, 0x32
    // jae 0x4af039
    // push 2
    // push ebx
    // CALL(0x4af0a0)
    // add esp, 8
    // lea ecx, [esi + edi]
    // push ecx
    // push ebx
    // CALL(0x4b0460)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x4af027)
    // mov ecx, dword ptr [esp + 0x14]
    // lea edx, [esi + edi]
    // mov edi, dword ptr [ecx + 0x48]
    // add edi, edx
    // mov edx, dword ptr [esp + 0x1c]
    // add esi, edx
    // mov dword ptr [ecx + 0x48], edi
    // test ebp, ebp
    // mov dword ptr [eax], 0
    // mov dword ptr [eax + 4], 0
    // mov dword ptr [eax + 8], esi
    // if (...) GOTO(0x4af07d)
    // mov edx, dword ptr [esp + 0x18]
    // mov dword ptr [ecx + edx*4 + 0x30], eax
    // if (...) GOTO(0x4af080)
    // mov dword ptr [ebp], eax
    // mov edi, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [eax + 4]
    // lea edx, [ecx + eax + 0x10]
    // add ecx, edi
    // mov dword ptr [eax + 4], ecx
    // mov ecx, dword ptr [eax + 8]
    // sub ecx, edi
    // pop edi
    // pop esi
    // mov dword ptr [eax + 8], ecx
    // pop ebp
    // mov eax, edx
    // pop ebx
    // return;
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push eax
    // mov ecx, dword ptr [eax]
    // mov dword ptr [ecx + 0x14], 0x35
    // mov edx, dword ptr [eax]
    // mov ecx, dword ptr [esp + 0xc]
    // mov dword ptr [edx + 0x18], ecx
    // mov edx, dword ptr [eax]
    // CALL(dword)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0xc]
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x1c]
    // mov ebx, dword ptr [ebp + 4]
    // cmp edi, 0xffe0
    // jbe 0x4af0e2
    // push 3
    // push ebp
    // CALL(0x4af0a0)
    // add esp, 8
    // mov eax, edi
    // and eax, 7
    // jbe 0x4af0f2
    // mov ecx, 8
    // sub ecx, eax
    // add edi, ecx
    // mov eax, dword ptr [esp + 0x18]
    // test eax, eax
    // if (...) GOTO(0x4af0ff)
    // cmp eax, 2
    // if (...) GOTO(0x4af118)
    // mov edx, dword ptr [ebp]
    // push ebp
    // mov dword ptr [edx + 0x14], 0xc
    // mov ecx, dword ptr [ebp]
    // mov dword ptr [ecx + 0x18], eax
    // mov edx, dword ptr [ebp]
    // CALL(dword)
    // add esp, 4
    // lea eax, [edi + 0x10]
    // push eax
    // push ebp
    // CALL(0x4b0460)
    // mov esi, eax
    // add esp, 8
    // test esi, esi
    // if (...) GOTO(0x4af136)
    // push 4
    // push ebp
    // CALL(0x4af0a0)
    // add esp, 8
    // mov eax, dword ptr [ebx + 0x48]
    // lea ecx, [edi + 0x10]
    // add eax, ecx
    // mov dword ptr [ebx + 0x48], eax
    // mov eax, dword ptr [esp + 0x18]
    // mov edx, dword ptr [ebx + eax*4 + 0x38]
    // mov dword ptr [esi + 4], edi
    // mov dword ptr [esi], edx
    // mov dword ptr [esi + 8], 0
    // mov dword ptr [ebx + eax*4 + 0x38], esi
    // lea eax, [esi + 0x10]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 0x10]
    // mov eax, 0xffe0
    // xor edx, edx
    // div ebx
    // mov ecx, dword ptr [esp + 8]
    // push ebp
    // push esi
    // push edi
    // mov edi, dword ptr [ecx + 4]
    // mov esi, eax
    // test esi, esi
    // if (...) GOTO(0x4af19f)
    // mov eax, dword ptr [ecx]
    // push ecx
    // mov dword ptr [eax + 0x14], 0x45
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // add esp, 4
    // mov ebp, dword ptr [esp + 0x20]
    // cmp esi, ebp
    // if (...) GOTO(0x4af1a9)
    // mov esi, ebp
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x14]
    // lea eax, [ebp*4]
    // mov dword ptr [edi + 0x4c], esi
    // push eax
    // push ecx
    // push edx
    // CALL(0x4aef70)
    // add esp, 0xc
    // xor edi, edi
    // test ebp, ebp
    // mov dword ptr [esp + 0x1c], eax
    // jbe 0x4af213
    // mov eax, ebp
    // sub eax, edi
    // cmp esi, eax
    // if (...) GOTO(0x4af1da)
    // mov esi, eax
    // mov eax, esi
    // mov ecx, dword ptr [esp + 0x18]
    // imul eax, ebx
    // mov edx, dword ptr [esp + 0x14]
    // push eax
    // push ecx
    // push edx
    // CALL(0x4af0c0)
    // add esp, 0xc
    // test esi, esi
    // jbe 0x4af20b
    // mov ecx, dword ptr [esp + 0x1c]
    // mov edx, esi
    // lea ecx, [ecx + edi*4]
    // add edi, esi
    // mov dword ptr [ecx], eax
    // add ecx, 4
    // add eax, ebx
    // dec edx
    // if (...) GOTO(0x4af201)
    // cmp edi, ebp
    // if (...) GOTO(0x4af1d0)
    // mov eax, dword ptr [esp + 0x1c]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 0x10]
    // shl ebx, 7
    // mov eax, 0xffe0
    // xor edx, edx
    // div ebx
    // mov ecx, dword ptr [esp + 8]
    // push ebp
    // push esi
    // push edi
    // mov edi, dword ptr [ecx + 4]
    // mov esi, eax
    // test esi, esi
    // if (...) GOTO(0x4af252)
    // mov eax, dword ptr [ecx]
    // push ecx
    // mov dword ptr [eax + 0x14], 0x45
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // add esp, 4
    // mov ebp, dword ptr [esp + 0x20]
    // cmp esi, ebp
    // if (...) GOTO(0x4af25c)
    // mov esi, ebp
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x14]
    // lea eax, [ebp*4]
    // mov dword ptr [edi + 0x4c], esi
    // push eax
    // push ecx
    // push edx
    // CALL(0x4aef70)
    // add esp, 0xc
    // xor edi, edi
    // test ebp, ebp
    // mov dword ptr [esp + 0x20], eax
    // jbe 0x4af2cb
    // mov eax, ebp
    // sub eax, edi
    // cmp esi, eax
    // if (...) GOTO(0x4af28d)
    // mov esi, eax
    // mov eax, esi
    // mov ecx, dword ptr [esp + 0x18]
    // imul eax, dword ptr [esp + 0x1c]
    // mov edx, dword ptr [esp + 0x14]
    // shl eax, 7
    // push eax
    // push ecx
    // push edx
    // CALL(0x4af0c0)
    // add esp, 0xc
    // test esi, esi
    // jbe 0x4af2c3
    // mov ecx, dword ptr [esp + 0x20]
    // mov edx, esi
    // lea ecx, [ecx + edi*4]
    // add edi, esi
    // mov dword ptr [ecx], eax
    // add ecx, 4
    // add eax, ebx
    // dec edx
    // if (...) GOTO(0x4af2b9)
    // cmp edi, ebp
    // if (...) GOTO(0x4af283)
    // mov eax, dword ptr [esp + 0x20]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 0xc]
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // cmp ebx, 1
    // mov edi, dword ptr [esi + 4]
    // if (...) GOTO(0x4af2f9)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0xc
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x18], ebx
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // push(0x80)
    // push ebx
    // push esi
    // CALL(0x4aef70)
    // mov ecx, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [esp + 0x28]
    // mov dword ptr [eax + 4], ecx
    // mov ecx, dword ptr [esp + 0x30]
    // mov dword ptr [eax + 8], edx
    // mov edx, dword ptr [esp + 0x24]
    // mov dword ptr [eax], 0
    // mov dword ptr [eax + 0xc], ecx
    // mov dword ptr [eax + 0x20], edx
    // mov dword ptr [eax + 0x28], 0
    // mov ecx, dword ptr [edi + 0x40]
    // add esp, 0xc
    // mov dword ptr [eax + 0x2c], ecx
    // mov dword ptr [edi + 0x40], eax
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 0xc]
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // cmp ebx, 1
    // mov edi, dword ptr [esi + 4]
    // if (...) GOTO(0x4af369)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0xc
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x18], ebx
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // push(0x80)
    // push ebx
    // push esi
    // CALL(0x4aef70)
    // mov ecx, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [esp + 0x28]
    // mov dword ptr [eax + 4], ecx
    // mov ecx, dword ptr [esp + 0x30]
    // mov dword ptr [eax + 8], edx
    // mov edx, dword ptr [esp + 0x24]
    // mov dword ptr [eax], 0
    // mov dword ptr [eax + 0xc], ecx
    // mov dword ptr [eax + 0x20], edx
    // mov dword ptr [eax + 0x28], 0
    // mov ecx, dword ptr [edi + 0x44]
    // add esp, 0xc
    // mov dword ptr [eax + 0x2c], ecx
    // mov dword ptr [edi + 0x44], eax
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push ebp
    // push esi
    // mov ebp, dword ptr [ebx + 4]
    // push edi
    // xor esi, esi
    // xor edi, edi
    // mov eax, dword ptr [ebp + 0x40]
    // test eax, eax
    // if (...) GOTO(0x4af3e5)
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4af3de)
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [eax + 0xc]
    // imul edx, ecx
    // add esi, edx
    // mov edx, dword ptr [eax + 4]
    // imul edx, ecx
    // add edi, edx
    // mov eax, dword ptr [eax + 0x2c]
    // test eax, eax
    // if (...) GOTO(0x4af3c6)
    // mov eax, dword ptr [ebp + 0x44]
    // test eax, eax
    // if (...) GOTO(0x4af411)
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4af40a)
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [eax + 0xc]
    // imul edx, ecx
    // shl edx, 7
    // add esi, edx
    // mov edx, dword ptr [eax + 4]
    // imul edx, ecx
    // shl edx, 7
    // add edi, edx
    // mov eax, dword ptr [eax + 0x2c]
    // test eax, eax
    // if (...) GOTO(0x4af3ec)
    // test esi, esi
    // if (...) GOTO(0x4af52c)
    // mov eax, dword ptr [ebp + 0x48]
    // push eax
    // push edi
    // push esi
    // push ebx
    // CALL(0x4b0480)
    // add esp, 0x10
    // cmp eax, edi
    // if (...) GOTO(0x4af433)
    // mov edi, 0x3b9aca00
    // if (...) GOTO(0x4af441)
    // cdq 
    // idiv esi
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x4af441)
    // mov edi, 1
    // mov esi, dword ptr [ebp + 0x40]
    // test esi, esi
    // if (...) GOTO(0x4af4b5)
    // cmp dword ptr [esi], 0
    // if (...) GOTO(0x4af4ae)
    // mov eax, dword ptr [esi + 4]
    // xor edx, edx
    // dec eax
    // div dword ptr [esi + 0xc]
    // inc eax
    // cmp eax, edi
    // if (...) GOTO(0x4af463)
    // mov ecx, dword ptr [esi + 4]
    // mov dword ptr [esi + 0x10], ecx
    // if (...) GOTO(0x4af488)
    // mov eax, dword ptr [esi + 8]
    // mov edx, dword ptr [esi + 0xc]
    // imul eax, dword ptr [esi + 4]
    // imul edx, edi
    // lea ecx, [esi + 0x30]
    // push eax
    // push ecx
    // push ebx
    // mov dword ptr [esi + 0x10], edx
    // CALL(0x4b0490)
    // add esp, 0xc
    // mov dword ptr [esi + 0x28], 1
    // mov edx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 8]
    // push edx
    // push eax
    // push 1
    // push ebx
    // CALL(0x4af170)
    // add esp, 0x10
    // mov dword ptr [esi], eax
    // mov ecx, dword ptr [ebp + 0x4c]
    // xor eax, eax
    // mov dword ptr [esi + 0x14], ecx
    // mov dword ptr [esi + 0x18], eax
    // mov dword ptr [esi + 0x1c], eax
    // mov dword ptr [esi + 0x24], eax
    // mov esi, dword ptr [esi + 0x2c]
    // test esi, esi
    // if (...) GOTO(0x4af448)
    // mov esi, dword ptr [ebp + 0x44]
    // test esi, esi
    // if (...) GOTO(0x4af52c)
    // cmp dword ptr [esi], 0
    // if (...) GOTO(0x4af525)
    // mov eax, dword ptr [esi + 4]
    // xor edx, edx
    // dec eax
    // div dword ptr [esi + 0xc]
    // inc eax
    // cmp eax, edi
    // if (...) GOTO(0x4af4d7)
    // mov edx, dword ptr [esi + 4]
    // mov dword ptr [esi + 0x10], edx
    // if (...) GOTO(0x4af4ff)
    // mov ecx, dword ptr [esi + 8]
    // mov eax, dword ptr [esi + 0xc]
    // imul ecx, dword ptr [esi + 4]
    // imul eax, edi
    // shl ecx, 7
    // lea edx, [esi + 0x30]
    // push ecx
    // push edx
    // push ebx
    // mov dword ptr [esi + 0x10], eax
    // CALL(0x4b0490)
    // add esp, 0xc
    // mov dword ptr [esi + 0x28], 1
    // mov eax, dword ptr [esi + 0x10]
    // mov ecx, dword ptr [esi + 8]
    // push eax
    // push ecx
    // push 1
    // push ebx
    // CALL(0x4af220)
    // add esp, 0x10
    // mov dword ptr [esi], eax
    // mov edx, dword ptr [ebp + 0x4c]
    // xor eax, eax
    // mov dword ptr [esi + 0x14], edx
    // mov dword ptr [esi + 0x18], eax
    // mov dword ptr [esi + 0x1c], eax
    // mov dword ptr [esi + 0x24], eax
    // mov esi, dword ptr [esi + 0x2c]
    // test esi, esi
    // if (...) GOTO(0x4af4bc)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 0x10]
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x14]
    // mov ebp, dword ptr [esp + 0x10]
    // push edi
    // mov edi, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esi + 4]
    // lea ebx, [edi + eax]
    // cmp ebx, ecx
    // if (...) GOTO(0x4af568)
    // cmp eax, dword ptr [esi + 0xc]
    // if (...) GOTO(0x4af568)
    // cmp dword ptr [esi], 0
    // if (...) GOTO(0x4af57b)
    // mov eax, dword ptr [ebp]
    // push ebp
    // mov dword ptr [eax + 0x14], 0x14
    // mov ecx, dword ptr [ebp]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x18]
    // cmp edi, eax
    // if (...) GOTO(0x4af58b)
    // mov edx, dword ptr [esi + 0x10]
    // add edx, eax
    // cmp ebx, edx
    // jbe 0x4af5e3
    // mov eax, dword ptr [esi + 0x28]
    // test eax, eax
    // if (...) GOTO(0x4af5a5)
    // mov eax, dword ptr [ebp]
    // push ebp
    // mov dword ptr [eax + 0x14], 0x44
    // mov ecx, dword ptr [ebp]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4af5bf)
    // push 1
    // push esi
    // push ebp
    // CALL(0x4af690)
    // add esp, 0xc
    // mov dword ptr [esi + 0x24], 0
    // cmp edi, dword ptr [esi + 0x18]
    // jbe 0x4af5c9
    // mov dword ptr [esi + 0x18], edi
    // if (...) GOTO(0x4af5d7)
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, ebx
    // sub eax, ecx
    // jns 0x4af5d4
    // xor eax, eax
    // mov dword ptr [esi + 0x18], eax
    // push 0
    // push esi
    // push ebp
    // CALL(0x4af690)
    // add esp, 0xc
    // mov edi, dword ptr [esi + 0x1c]
    // cmp edi, ebx
    // jae 0x4af643
    // cmp edi, dword ptr [esp + 0x1c]
    // jae 0x4af60f
    // mov eax, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4af60b)
    // mov edx, dword ptr [ebp]
    // push ebp
    // mov dword ptr [edx + 0x14], 0x14
    // mov eax, dword ptr [ebp]
    // CALL(dword)
    // add esp, 4
    // mov edi, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4af61a)
    // mov dword ptr [esi + 0x1c], ebx
    // mov ecx, dword ptr [esi + 0x20]
    // test ecx, ecx
    // if (...) GOTO(0x4af665)
    // mov eax, dword ptr [esi + 0x18]
    // mov ebp, dword ptr [esi + 8]
    // sub edi, eax
    // sub ebx, eax
    // cmp edi, ebx
    // jae 0x4af643
    // mov ecx, dword ptr [esi]
    // push ebp
    // mov edx, dword ptr [ecx + edi*4]
    // push edx
    // CALL(0x4b0540)
    // add esp, 8
    // inc edi
    // cmp edi, ebx
    // if (...) GOTO(0x4af62f)
    // mov eax, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4af652)
    // mov dword ptr [esi + 0x24], 1
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esi + 0x18]
    // mov edx, dword ptr [esi]
    // sub eax, ecx
    // pop edi
    // pop esi
    // pop ebp
    // lea eax, [edx + eax*4]
    // pop ebx
    // return;
    // test eax, eax
    // if (...) GOTO(0x4af64b)
    // mov eax, dword ptr [ebp]
    // push ebp
    // mov dword ptr [eax + 0x14], 0x14
    // mov ecx, dword ptr [ebp]
    // CALL(dword)
    // mov eax, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [esi + 0x18]
    // mov edx, dword ptr [esi]
    // add esp, 4
    // sub eax, ecx
    // pop edi
    // pop esi
    // pop ebp
    // lea eax, [edx + eax*4]
    // pop ebx
    // return;
    // // nop
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x14]
    // push edi
    // xor edi, edi
    // mov ebx, dword ptr [esi + 8]
    // mov ebp, dword ptr [esi + 0x18]
    // mov eax, dword ptr [esi + 0x10]
    // imul ebp, ebx
    // test eax, eax
    // mov dword ptr [esp + 0x18], ebx
    // if (...) GOTO(0x4af725)
    // if (...) GOTO(0x4af6b4)
    // mov ebx, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esi + 0x14]
    // sub eax, edi
    // cmp ecx, eax
    // if (...) GOTO(0x4af6bf)
    // mov eax, ecx
    // mov ecx, dword ptr [esi + 0x18]
    // mov edx, dword ptr [esi + 0x1c]
    // add ecx, edi
    // sub edx, ecx
    // cmp eax, edx
    // if (...) GOTO(0x4af6cf)
    // mov eax, edx
    // mov edx, dword ptr [esi + 4]
    // sub edx, ecx
    // cmp eax, edx
    // if (...) GOTO(0x4af6da)
    // mov eax, edx
    // test eax, eax
    // if (...) GOTO(0x4af725)
    // imul eax, ebx
    // mov ebx, eax
    // mov eax, dword ptr [esp + 0x1c]
    // test eax, eax
    // if (...) GOTO(0x4af701)
    // mov eax, dword ptr [esi]
    // push ebx
    // push ebp
    // lea edx, [esi + 0x30]
    // mov ecx, dword ptr [eax + edi*4]
    // mov eax, dword ptr [esp + 0x1c]
    // push ecx
    // push edx
    // push eax
    // CALL(dword)
    // if (...) GOTO(0x4af714)
    // mov ecx, dword ptr [esi]
    // push ebx
    // lea eax, [esi + 0x30]
    // push ebp
    // mov edx, dword ptr [ecx + edi*4]
    // mov ecx, dword ptr [esp + 0x1c]
    // push edx
    // push eax
    // push ecx
    // CALL(dword)
    // mov edx, dword ptr [esi + 0x14]
    // mov eax, dword ptr [esi + 0x10]
    // add edi, edx
    // add esp, 0x14
    // add ebp, ebx
    // cmp edi, eax
    // if (...) GOTO(0x4af6b0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(0x405098)
    // // nop
    // mov eax, dword ptr [esp + 0x10]
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x14]
    // mov ebx, dword ptr [esp + 0x10]
    // push edi
    // mov edi, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esi + 4]
    // lea ebp, [edi + eax]
    // cmp ebp, ecx
    // if (...) GOTO(0x4af758)
    // cmp eax, dword ptr [esi + 0xc]
    // if (...) GOTO(0x4af758)
    // cmp dword ptr [esi], 0
    // if (...) GOTO(0x4af769)
    // mov eax, dword ptr [ebx]
    // push ebx
    // mov dword ptr [eax + 0x14], 0x14
    // mov ecx, dword ptr [ebx]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x18]
    // cmp edi, eax
    // if (...) GOTO(0x4af779)
    // mov edx, dword ptr [esi + 0x10]
    // add edx, eax
    // cmp ebp, edx
    // jbe 0x4af7cf
    // mov eax, dword ptr [esi + 0x28]
    // test eax, eax
    // if (...) GOTO(0x4af791)
    // mov eax, dword ptr [ebx]
    // push ebx
    // mov dword ptr [eax + 0x14], 0x44
    // mov ecx, dword ptr [ebx]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4af7ab)
    // push 1
    // push esi
    // push ebx
    // CALL(0x4af880)
    // add esp, 0xc
    // mov dword ptr [esi + 0x24], 0
    // cmp edi, dword ptr [esi + 0x18]
    // jbe 0x4af7b5
    // mov dword ptr [esi + 0x18], edi
    // if (...) GOTO(0x4af7c3)
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, ebp
    // sub eax, ecx
    // jns 0x4af7c0
    // xor eax, eax
    // mov dword ptr [esi + 0x18], eax
    // push 0
    // push esi
    // push ebx
    // CALL(0x4af880)
    // add esp, 0xc
    // mov edi, dword ptr [esi + 0x1c]
    // cmp edi, ebp
    // jae 0x4af830
    // cmp edi, dword ptr [esp + 0x1c]
    // jae 0x4af7f9
    // mov eax, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4af7f5)
    // mov edx, dword ptr [ebx]
    // push ebx
    // mov dword ptr [edx + 0x14], 0x14
    // mov eax, dword ptr [ebx]
    // CALL(dword)
    // add esp, 4
    // mov edi, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4af804)
    // mov dword ptr [esi + 0x1c], ebp
    // mov ecx, dword ptr [esi + 0x20]
    // test ecx, ecx
    // if (...) GOTO(0x4af852)
    // mov eax, dword ptr [esi + 0x18]
    // mov ebx, dword ptr [esi + 8]
    // sub edi, eax
    // sub ebp, eax
    // shl ebx, 7
    // cmp edi, ebp
    // jae 0x4af830
    // mov ecx, dword ptr [esi]
    // push ebx
    // mov edx, dword ptr [ecx + edi*4]
    // push edx
    // CALL(0x4b0540)
    // add esp, 8
    // inc edi
    // cmp edi, ebp
    // if (...) GOTO(0x4af81c)
    // mov eax, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4af83f)
    // mov dword ptr [esi + 0x24], 1
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esi + 0x18]
    // mov edx, dword ptr [esi]
    // sub eax, ecx
    // pop edi
    // pop esi
    // pop ebp
    // lea eax, [edx + eax*4]
    // pop ebx
    // return;
    // test eax, eax
    // if (...) GOTO(0x4af838)
    // mov eax, dword ptr [ebx]
    // push ebx
    // mov dword ptr [eax + 0x14], 0x14
    // mov ecx, dword ptr [ebx]
    // CALL(dword)
    // mov eax, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [esi + 0x18]
    // mov edx, dword ptr [esi]
    // add esp, 4
    // sub eax, ecx
    // pop edi
    // pop esi
    // pop ebp
    // lea eax, [edx + eax*4]
    // pop ebx
    // return;
    // CALL(0x405098)
    // // nop
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x14]
    // push edi
    // xor edi, edi
    // mov ebx, dword ptr [esi + 8]
    // mov eax, dword ptr [esi + 0x10]
    // shl ebx, 7
    // mov ebp, ebx
    // mov dword ptr [esp + 0x18], ebx
    // imul ebp, dword ptr [esi + 0x18]
    // test eax, eax
    // if (...) GOTO(0x4af91a)
    // if (...) GOTO(0x4af8a7)
    // mov ebx, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esi + 0x14]
    // sub eax, edi
    // cmp ecx, eax
    // if (...) GOTO(0x4af8b2)
    // mov eax, ecx
    // mov edx, dword ptr [esi + 0x18]
    // mov ecx, edi
    // add ecx, edx
    // mov edx, dword ptr [esi + 0x1c]
    // sub edx, ecx
    // cmp eax, edx
    // if (...) GOTO(0x4af8c4)
    // mov eax, edx
    // mov edx, dword ptr [esi + 4]
    // sub edx, ecx
    // cmp eax, edx
    // if (...) GOTO(0x4af8cf)
    // mov eax, edx
    // test eax, eax
    // if (...) GOTO(0x4af91a)
    // imul eax, ebx
    // mov ebx, eax
    // mov eax, dword ptr [esp + 0x1c]
    // test eax, eax
    // if (...) GOTO(0x4af8f6)
    // mov eax, dword ptr [esi]
    // push ebx
    // push ebp
    // lea edx, [esi + 0x30]
    // mov ecx, dword ptr [eax + edi*4]
    // mov eax, dword ptr [esp + 0x1c]
    // push ecx
    // push edx
    // push eax
    // CALL(dword)
    // if (...) GOTO(0x4af909)
    // mov ecx, dword ptr [esi]
    // push ebx
    // lea eax, [esi + 0x30]
    // push ebp
    // mov edx, dword ptr [ecx + edi*4]
    // mov ecx, dword ptr [esp + 0x1c]
    // push edx
    // push eax
    // push ecx
    // CALL(dword)
    // mov edx, dword ptr [esi + 0x14]
    // mov eax, dword ptr [esi + 0x10]
    // add edi, edx
    // add esp, 0x14
    // add ebp, ebx
    // cmp edi, eax
    // if (...) GOTO(0x4af8a3)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // // nop
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0xc]
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x18]
    // mov esi, dword ptr [ebp + 4]
    // xor ebx, ebx
    // cmp edi, ebx
    // if (...) GOTO(0x4af93a)
    // cmp edi, 2
    // if (...) GOTO(0x4af953)
    // mov eax, dword ptr [ebp]
    // push ebp
    // mov dword ptr [eax + 0x14], 0xc
    // mov ecx, dword ptr [ebp]
    // mov dword ptr [ecx + 0x18], edi
    // mov edx, dword ptr [ebp]
    // CALL(dword)
    // add esp, 4
    // cmp edi, 1
    // if (...) GOTO(0x4af9a4)
    // mov edi, dword ptr [esi + 0x40]
    // cmp edi, ebx
    // if (...) GOTO(0x4af979)
    // cmp dword ptr [edi + 0x28], ebx
    // if (...) GOTO(0x4af972)
    // lea eax, [edi + 0x30]
    // mov dword ptr [edi + 0x28], ebx
    // push eax
    // push ebp
    // CALL(dword)
    // add esp, 8
    // mov edi, dword ptr [edi + 0x2c]
    // cmp edi, ebx
    // if (...) GOTO(0x4af95f)
    // mov edi, dword ptr [esi + 0x44]
    // mov dword ptr [esi + 0x40], ebx
    // cmp edi, ebx
    // if (...) GOTO(0x4af99d)
    // cmp dword ptr [edi + 0x28], ebx
    // if (...) GOTO(0x4af996)
    // lea ecx, [edi + 0x30]
    // mov dword ptr [edi + 0x28], ebx
    // push ecx
    // push ebp
    // CALL(dword)
    // add esp, 8
    // mov edi, dword ptr [edi + 0x2c]
    // cmp edi, ebx
    // if (...) GOTO(0x4af983)
    // mov edi, dword ptr [esp + 0x18]
    // mov dword ptr [esi + 0x44], ebx
    // mov eax, dword ptr [esi + edi*4 + 0x38]
    // mov dword ptr [esi + edi*4 + 0x38], ebx
    // cmp eax, ebx
    // if (...) GOTO(0x4af9db)
    // mov edx, dword ptr [eax + 8]
    // mov ecx, dword ptr [eax + 4]
    // mov edi, dword ptr [eax]
    // lea ebx, [edx + ecx + 0x10]
    // push ebx
    // push eax
    // push ebp
    // CALL(0x4b0470)
    // mov edx, dword ptr [esi + 0x48]
    // add esp, 0xc
    // sub edx, ebx
    // mov eax, edi
    // test edi, edi
    // mov dword ptr [esi + 0x48], edx
    // if (...) GOTO(0x4af9b0)
    // mov edi, dword ptr [esp + 0x18]
    // xor ebx, ebx
    // mov eax, dword ptr [esi + edi*4 + 0x30]
    // mov dword ptr [esi + edi*4 + 0x30], ebx
    // cmp eax, ebx
    // if (...) GOTO(0x4afa0c)
    // mov edx, dword ptr [eax + 8]
    // mov ecx, dword ptr [eax + 4]
    // mov edi, dword ptr [eax]
    // lea ebx, [edx + ecx + 0x10]
    // push ebx
    // push eax
    // push ebp
    // CALL(0x4b0470)
    // mov edx, dword ptr [esi + 0x48]
    // add esp, 0xc
    // sub edx, ebx
    // mov eax, edi
    // test edi, edi
    // mov dword ptr [esi + 0x48], edx
    // if (...) GOTO(0x4af9e7)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // mov esi, 1
    // push esi
    // push edi
    // CALL(0x4af920)
    // add esp, 8
    // dec esi
    // jns 0x4afa2b
    // mov eax, dword ptr [edi + 4]
    // push(0x50)
    // push eax
    // push edi
    // CALL(0x4b0470)
    // push edi
    // mov dword ptr [edi + 4], 0
    // CALL(0x4a0890)
    // add esp, 0x10
    // pop edi
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push 1
    // push esi
    // mov eax, dword ptr [esi + 4]
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0xc]
    // add esp, 8
    // neg ecx
    // sbb ecx, ecx
    // and ecx, 0x64
    // add ecx, 0x64
    // mov dword ptr [esi + 0x10], ecx
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // xor edi, edi
    // mov eax, dword ptr [esi + 4]
    // cmp eax, edi
    // if (...) GOTO(0x4afaa6)
    // push esi
    // CALL(dword)
    // add esp, 4
    // mov dword ptr [esi + 4], edi
    // mov dword ptr [esi + 0x10], edi
    // pop edi
    // pop esi
    // return;
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push(0x84)
    // push 0
    // push eax
    // mov ecx, dword ptr [eax + 4]
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [eax + 0x80], 0
    // return;
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push(0x118)
    // push 0
    // push eax
    // mov ecx, dword ptr [eax + 4]
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [eax + 0x114], 0
    // return;
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push(0x18)
    // push 1
    // mov eax, dword ptr [esi + 4]
    // push esi
    // CALL(dword)
    // mov dword ptr [esi + 0x154], eax
    // mov dword ptr [eax], 0x4afb60
    // mov ecx, dword ptr [esi + 0x154]
    // add esp, 0xc
    // mov dword ptr [ecx + 4], 0x4afc40
    // mov edx, dword ptr [esi + 0x154]
    // mov dword ptr [edx + 8], 0x4afdc0
    // mov eax, dword ptr [esi + 0x154]
    // mov dword ptr [eax + 0xc], 0x4b0060
    // mov ecx, dword ptr [esi + 0x154]
    // mov dword ptr [ecx + 0x10], 0x4b0300
    // mov edx, dword ptr [esi + 0x154]
    // pop esi
    // mov dword ptr [edx + 0x14], 0x4b0320
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 0x14]
    // cmp esi, 0xfffd
    // push edi
    // if (...) GOTO(0x4afbac)
    // mov eax, dword ptr [esp + 0x10]
    // mov edi, dword ptr [esp + 0xc]
    // push eax
    // push edi
    // CALL(0x4afbf0)
    // lea ecx, [esi + 2]
    // push ecx
    // push edi
    // CALL(0x4afc10)
    // add esp, 0x10
    // mov edx, esi
    // dec esi
    // test edx, edx
    // if (...) GOTO(0x4afbac)
    // push ebx
    // lea ebx, [esi + 1]
    // mov esi, dword ptr [esp + 0x18]
    // xor eax, eax
    // mov al, byte ptr [esi]
    // push eax
    // push edi
    // CALL(0x4afbb0)
    // add esp, 8
    // inc esi
    // dec ebx
    // if (...) GOTO(0x4afb99)
    // pop ebx
    // pop edi
    // pop esi
    // return;
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // mov dl, byte ptr [esp + 0xc]
    // mov eax, dword ptr [esi + 0x14]
    // mov ecx, dword ptr [eax]
    // mov byte ptr [ecx], dl
    // mov edx, dword ptr [eax]
    // mov ecx, dword ptr [eax + 4]
    // inc edx
    // dec ecx
    // mov dword ptr [eax], edx
    // mov dword ptr [eax + 4], ecx
    // if (...) GOTO(0x4afbea)
    // push esi
    // CALL(dword)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4afbea)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x16
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push(0xff)
    // push esi
    // CALL(0x4afbb0)
    // mov eax, dword ptr [esp + 0x14]
    // push eax
    // push esi
    // CALL(0x4afbb0)
    // add esp, 0x10
    // pop esi
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 0xc]
    // xor eax, eax
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // mov al, bh
    // push eax
    // push esi
    // CALL(0x4afbb0)
    // and ebx, 0xff
    // push ebx
    // push esi
    // CALL(0x4afbb0)
    // add esp, 0x10
    // pop esi
    // pop ebx
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push(0xd8)
    // push esi
    // CALL(0x4afbf0)
    // mov eax, dword ptr [esi + 0xc8]
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x4afc66)
    // push esi
    // CALL(0x4afc80)
    // add esp, 4
    // mov eax, dword ptr [esi + 0xd4]
    // test eax, eax
    // if (...) GOTO(0x4afc79)
    // push esi
    // CALL(0x4afd20)
    // add esp, 4
    // pop esi
    // return;
    // CALL(0x405099)
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push(0xe0)
    // push esi
    // CALL(0x4afbf0)
    // push(0x10)
    // push esi
    // CALL(0x4afc10)
    // push(0x4a)
    // push esi
    // CALL(0x4afbb0)
    // push(0x46)
    // push esi
    // CALL(0x4afbb0)
    // push(0x49)
    // push esi
    // CALL(0x4afbb0)
    // push(0x46)
    // push esi
    // CALL(0x4afbb0)
    // push 0
    // push esi
    // CALL(0x4afbb0)
    // push 1
    // push esi
    // CALL(0x4afbb0)
    // add esp, 0x40
    // push 1
    // push esi
    // CALL(0x4afbb0)
    // xor eax, eax
    // mov al, byte ptr [esi + 0xcc]
    // push eax
    // push esi
    // CALL(0x4afbb0)
    // xor ecx, ecx
    // mov cx, word ptr [esi + 0xce]
    // push ecx
    // push esi
    // CALL(0x4afc10)
    // xor edx, edx
    // mov dx, word ptr [esi + 0xd0]
    // push edx
    // push esi
    // CALL(0x4afc10)
    // push 0
    // push esi
    // CALL(0x4afbb0)
    // push 0
    // push esi
    // CALL(0x4afbb0)
    // add esp, 0x30
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push(0xee)
    // push esi
    // CALL(0x4afbf0)
    // push(0xe)
    // push esi
    // CALL(0x4afc10)
    // push(0x41)
    // push esi
    // CALL(0x4afbb0)
    // push(0x64)
    // push esi
    // CALL(0x4afbb0)
    // push(0x6f)
    // push esi
    // CALL(0x4afbb0)
    // push(0x62)
    // push esi
    // CALL(0x4afbb0)
    // push(0x65)
    // push esi
    // CALL(0x4afbb0)
    // push(0x64)
    // push esi
    // CALL(0x4afc10)
    // add esp, 0x40
    // push 0
    // push esi
    // CALL(0x4afc10)
    // push 0
    // push esi
    // CALL(0x4afc10)
    // mov eax, dword ptr [esi + 0x38]
    // add esp, 0x10
    // sub eax, 3
    // if (...) GOTO(0x4afda5)
    // sub eax, 2
    // if (...) GOTO(0x4afd98)
    // push 0
    // push esi
    // CALL(0x4afbb0)
    // add esp, 8
    // pop esi
    // return;
    // push 2
    // push esi
    // CALL(0x4afbb0)
    // add esp, 8
    // pop esi
    // return;
    // push 1
    // push esi
    // CALL(0x4afbb0)
    // add esp, 8
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x10]
    // push edi
    // xor ebp, ebp
    // mov ecx, dword ptr [esi + 0x34]
    // mov eax, dword ptr [esi + 0x3c]
    // xor edi, edi
    // test ecx, ecx
    // if (...) GOTO(0x4afdf2)
    // lea ebx, [eax + 0x10]
    // mov eax, dword ptr [ebx]
    // push eax
    // push esi
    // CALL(0x4afec0)
    // add esp, 8
    // add ebp, eax
    // mov eax, dword ptr [esi + 0x34]
    // inc edi
    // add ebx, 0x54
    // cmp edi, eax
    // if (...) GOTO(0x4afdd9)
    // mov eax, dword ptr [esi + 0xac]
    // test eax, eax
    // if (...) GOTO(0x4afe50)
    // mov eax, dword ptr [esi + 0xdc]
    // test eax, eax
    // if (...) GOTO(0x4afe50)
    // cmp dword ptr [esi + 0x30], 8
    // if (...) GOTO(0x4afe50)
    // mov ecx, dword ptr [esi + 0x34]
    // mov eax, dword ptr [esi + 0x3c]
    // mov edx, 1
    // test ecx, ecx
    // mov edi, edx
    // if (...) GOTO(0x4afe31)
    // add eax, 0x18
    // cmp dword ptr [eax - 4], edx
    // if (...) GOTO(0x4afe29)
    // cmp dword ptr [eax], edx
    // if (...) GOTO(0x4afe2b)
    // xor edi, edi
    // add eax, 0x54
    // dec ecx
    // if (...) GOTO(0x4afe20)
    // test ebp, ebp
    // if (...) GOTO(0x4afe52)
    // test edi, edi
    // if (...) GOTO(0x4afe52)
    // mov ecx, dword ptr [esi]
    // xor edi, edi
    // push edi
    // push esi
    // mov dword ptr [ecx + 0x14], 0x4a
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 8
    // if (...) GOTO(0x4afe52)
    // xor edi, edi
    // mov eax, dword ptr [esi + 0xac]
    // test eax, eax
    // if (...) GOTO(0x4afe6f)
    // push(0xc9)
    // push esi
    // CALL(0x4affa0)
    // add esp, 8
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov eax, dword ptr [esi + 0xdc]
    // test eax, eax
    // if (...) GOTO(0x4afe8c)
    // push(0xc2)
    // push esi
    // CALL(0x4affa0)
    // add esp, 8
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // test edi, edi
    // if (...) GOTO(0x4afea3)
    // push(0xc0)
    // push esi
    // CALL(0x4affa0)
    // add esp, 8
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // push(0xc1)
    // push esi
    // CALL(0x4affa0)
    // add esp, 8
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push ebp
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x18]
    // mov esi, dword ptr [ebx + edi*4 + 0x40]
    // test esi, esi
    // mov dword ptr [esp + 0x14], esi
    // if (...) GOTO(0x4afeee)
    // mov eax, dword ptr [ebx]
    // push ebx
    // mov dword ptr [eax + 0x14], 0x33
    // mov ecx, dword ptr [ebx]
    // mov dword ptr [ecx + 0x18], edi
    // mov edx, dword ptr [ebx]
    // CALL(dword)
    // add esp, 4
    // xor ebp, ebp
    // mov eax, esi
    // mov ecx, 0x40
    // cmp word ptr [eax], 0xff
    // jbe 0x4aff03
    // mov ebp, 1
    // add eax, 2
    // dec ecx
    // if (...) GOTO(0x4afef7)
    // mov eax, dword ptr [esi + 0x80]
    // test eax, eax
    // if (...) GOTO(0x4aff8f)
    // push(0xdb)
    // push ebx
    // CALL(0x4afbf0)
    // mov eax, ebp
    // neg eax
    // sbb eax, eax
    // and eax, 0x40
    // add eax, 0x43
    // push eax
    // push ebx
    // CALL(0x4afc10)
    // mov ecx, ebp
    // shl ecx, 4
    // add ecx, edi
    // push ecx
    // push ebx
    // CALL(0x4afbb0)
    // add esp, 0x18
    // mov edi, 0x4bd0ac
    // mov edx, dword ptr [edi]
    // mov eax, dword ptr [esp + 0x14]
    // xor esi, esi
    // mov si, word ptr [eax + edx*2]
    // test ebp, ebp
    // if (...) GOTO(0x4aff66)
    // mov ecx, esi
    // shr ecx, 8
    // push ecx
    // push ebx
    // CALL(0x4afbb0)
    // add esp, 8
    // and esi, 0xff
    // push esi
    // push ebx
    // CALL(0x4afbb0)
    // add edi, 4
    // add esp, 8
    // cmp edi, 0x4bd1ac
    // if (...) GOTO(0x4aff47)
    // mov edx, dword ptr [esp + 0x14]
    // mov dword ptr [edx + 0x80], 1
    // pop edi
    // mov eax, ebp
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 8]
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // push eax
    // push esi
    // CALL(0x4afbf0)
    // mov eax, dword ptr [esi + 0x34]
    // lea ecx, [eax + eax*2 + 8]
    // push ecx
    // push esi
    // CALL(0x4afc10)
    // mov ecx, dword ptr [esi + 0x1c]
    // mov eax, 0xffff
    // add esp, 0x10
    // cmp ecx, eax
    // if (...) GOTO(0x4affd4)
    // cmp dword ptr [esi + 0x18], eax
    // if (...) GOTO(0x4affea)
    // mov edx, dword ptr [esi]
    // push esi
    // mov dword ptr [edx + 0x14], 0x28
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x18], eax
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x30]
    // push eax
    // push esi
    // CALL(0x4afbb0)
    // mov ecx, dword ptr [esi + 0x1c]
    // push ecx
    // push esi
    // CALL(0x4afc10)
    // mov edx, dword ptr [esi + 0x18]
    // push edx
    // push esi
    // CALL(0x4afc10)
    // mov eax, dword ptr [esi + 0x34]
    // push eax
    // push esi
    // CALL(0x4afbb0)
    // mov eax, dword ptr [esi + 0x34]
    // mov edi, dword ptr [esi + 0x3c]
    // add esp, 0x20
    // xor ebx, ebx
    // test eax, eax
    // if (...) GOTO(0x4b0054)
    // mov ecx, dword ptr [edi]
    // push ecx
    // push esi
    // CALL(0x4afbb0)
    // mov edx, dword ptr [edi + 8]
    // mov ecx, dword ptr [edi + 0xc]
    // shl edx, 4
    // add edx, ecx
    // push edx
    // push esi
    // CALL(0x4afbb0)
    // mov eax, dword ptr [edi + 0x10]
    // push eax
    // push esi
    // CALL(0x4afbb0)
    // mov eax, dword ptr [esi + 0x34]
    // add esp, 0x18
    // inc ebx
    // add edi, 0x54
    // cmp ebx, eax
    // if (...) GOTO(0x4b0021)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // mov eax, dword ptr [esi + 0xac]
    // test eax, eax
    // if (...) GOTO(0x4b007e)
    // push esi
    // CALL(0x4b01e0)
    // add esp, 4
    // if (...) GOTO(0x4b00ff)
    // mov eax, dword ptr [esi + 0xec]
    // xor ebp, ebp
    // test eax, eax
    // if (...) GOTO(0x4b00ff)
    // push ebx
    // push edi
    // lea ebx, [esi + 0xf0]
    // mov eax, dword ptr [esi + 0xdc]
    // mov edi, dword ptr [ebx]
    // test eax, eax
    // if (...) GOTO(0x4b00d4)
    // mov eax, dword ptr [esi + 0x134]
    // test eax, eax
    // if (...) GOTO(0x4b00c3)
    // mov eax, dword ptr [esi + 0x13c]
    // test eax, eax
    // if (...) GOTO(0x4b00ef)
    // mov eax, dword ptr [edi + 0x14]
    // push 0
    // push eax
    // push esi
    // CALL(0x4b0120)
    // add esp, 0xc
    // if (...) GOTO(0x4b00ef)
    // mov ecx, dword ptr [edi + 0x18]
    // push 1
    // push ecx
    // push esi
    // CALL(0x4b0120)
    // add esp, 0xc
    // if (...) GOTO(0x4b00ef)
    // mov edx, dword ptr [edi + 0x14]
    // push 0
    // push edx
    // push esi
    // CALL(0x4b0120)
    // mov eax, dword ptr [edi + 0x18]
    // push 1
    // push eax
    // push esi
    // CALL(0x4b0120)
    // add esp, 0x18
    // mov eax, dword ptr [esi + 0xec]
    // inc ebp
    // add ebx, 4
    // cmp ebp, eax
    // if (...) GOTO(0x4b0092)
    // pop edi
    // pop ebx
    // mov eax, dword ptr [esi + 0xc0]
    // test eax, eax
    // if (...) GOTO(0x4b0112)
    // push esi
    // CALL(0x4b01f0)
    // add esp, 4
    // push esi
    // CALL(0x4b0220)
    // add esp, 4
    // pop esi
    // pop ebp
    // return;
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 0xc]
    // push ebx
    // mov ebx, dword ptr [esp + 0xc]
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // test eax, eax
    // if (...) GOTO(0x4b013c)
    // mov edi, dword ptr [esi + ebx*4 + 0x60]
    // add ebx, 0x10
    // if (...) GOTO(0x4b0140)
    // mov edi, dword ptr [esi + ebx*4 + 0x50]
    // test edi, edi
    // if (...) GOTO(0x4b015a)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x31
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x18], ebx
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [edi + 0x114]
    // test eax, eax
    // if (...) GOTO(0x4b01db)
    // push ebp
    // push(0xc4)
    // push esi
    // CALL(0x4afbf0)
    // add esp, 8
    // xor ebp, ebp
    // mov eax, 1
    // xor ecx, ecx
    // mov cl, byte ptr [eax + edi]
    // add ebp, ecx
    // inc eax
    // cmp eax, 0x10
    // if (...) GOTO(0x4b017a)
    // lea edx, [ebp + 0x13]
    // push edx
    // push esi
    // CALL(0x4afc10)
    // push ebx
    // push esi
    // CALL(0x4afbb0)
    // add esp, 0x10
    // mov ebx, 1
    // xor eax, eax
    // mov al, byte ptr [ebx + edi]
    // push eax
    // push esi
    // CALL(0x4afbb0)
    // add esp, 8
    // inc ebx
    // cmp ebx, 0x10
    // if (...) GOTO(0x4b01a0)
    // xor ebx, ebx
    // test ebp, ebp
    // if (...) GOTO(0x4b01d0)
    // xor ecx, ecx
    // mov cl, byte ptr [edi + ebx + 0x11]
    // push ecx
    // push esi
    // CALL(0x4afbb0)
    // add esp, 8
    // inc ebx
    // cmp ebx, ebp
    // if (...) GOTO(0x4b01bb)
    // mov dword ptr [edi + 0x114], 1
    // pop ebp
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // // nop
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push(0xdd)
    // push esi
    // CALL(0x4afbf0)
    // push 4
    // push esi
    // CALL(0x4afc10)
    // mov eax, dword ptr [esi + 0xc0]
    // push eax
    // push esi
    // CALL(0x4afc10)
    // add esp, 0x18
    // pop esi
    // return;
    // CALL(0x405098)
    // // nop
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // push(0xda)
    // push esi
    // CALL(0x4afbf0)
    // mov eax, dword ptr [esi + 0xec]
    // lea ecx, [eax + eax + 6]
    // push ecx
    // push esi
    // CALL(0x4afc10)
    // mov edx, dword ptr [esi + 0xec]
    // push edx
    // push esi
    // CALL(0x4afbb0)
    // mov eax, dword ptr [esi + 0xec]
    // add esp, 0x18
    // xor ebp, ebp
    // test eax, eax
    // if (...) GOTO(0x4b02c4)
    // push ebx
    // lea ebx, [esi + 0xf0]
    // mov edi, dword ptr [ebx]
    // mov eax, dword ptr [edi]
    // push eax
    // push esi
    // CALL(0x4afbb0)
    // mov ecx, dword ptr [esi + 0xdc]
    // mov eax, dword ptr [edi + 0x14]
    // mov edi, dword ptr [edi + 0x18]
    // add esp, 8
    // test ecx, ecx
    // if (...) GOTO(0x4b02a6)
    // mov ecx, dword ptr [esi + 0x134]
    // test ecx, ecx
    // if (...) GOTO(0x4b02a4)
    // mov ecx, dword ptr [esi + 0x13c]
    // xor edi, edi
    // test ecx, ecx
    // if (...) GOTO(0x4b02a6)
    // mov ecx, dword ptr [esi + 0xac]
    // test ecx, ecx
    // if (...) GOTO(0x4b02a6)
    // xor eax, eax
    // shl eax, 4
    // add eax, edi
    // push eax
    // push esi
    // CALL(0x4afbb0)
    // mov eax, dword ptr [esi + 0xec]
    // add esp, 8
    // inc ebp
    // add ebx, 4
    // cmp ebp, eax
    // if (...) GOTO(0x4b0266)
    // pop ebx
    // mov ecx, dword ptr [esi + 0x134]
    // push ecx
    // push esi
    // CALL(0x4afbb0)
    // mov edx, dword ptr [esi + 0x138]
    // push edx
    // push esi
    // CALL(0x4afbb0)
    // mov eax, dword ptr [esi + 0x13c]
    // mov edi, dword ptr [esi + 0x140]
    // shl eax, 4
    // add eax, edi
    // push eax
    // push esi
    // CALL(0x4afbb0)
    // add esp, 0x18
    // pop edi
    // pop esi
    // pop ebp
    // return;
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push(0xd9)
    // push eax
    // CALL(0x4afbf0)
    // add esp, 8
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x10]
    // push(0xd8)
    // push edi
    // CALL(0x4afbf0)
    // add esp, 8
    // xor esi, esi
    // lea ebx, [edi + 0x40]
    // cmp dword ptr [ebx], 0
    // if (...) GOTO(0x4b0349)
    // push esi
    // push edi
    // CALL(0x4afec0)
    // add esp, 8
    // inc esi
    // add ebx, 4
    // cmp esi, 4
    // if (...) GOTO(0x4b033a)
    // mov eax, dword ptr [edi + 0xac]
    // test eax, eax
    // if (...) GOTO(0x4b038e)
    // xor esi, esi
    // lea ebx, [edi + 0x60]
    // mov eax, dword ptr [ebx - 0x10]
    // test eax, eax
    // if (...) GOTO(0x4b0374)
    // push 0
    // push esi
    // push edi
    // CALL(0x4b0120)
    // add esp, 0xc
    // cmp dword ptr [ebx], 0
    // if (...) GOTO(0x4b0385)
    // push 1
    // push esi
    // push edi
    // CALL(0x4b0120)
    // add esp, 0xc
    // inc esi
    // add ebx, 4
    // cmp esi, 4
    // if (...) GOTO(0x4b0361)
    // push(0xd9)
    // push edi
    // CALL(0x4afbf0)
    // add esp, 8
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push 0
    // push esi
    // CALL(0x4b51e0)
    // mov eax, dword ptr [esi + 0xa8]
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x4b03d1)
    // push esi
    // CALL(0x4b4a60)
    // push esi
    // CALL(0x4b4040)
    // push 0
    // push esi
    // CALL(0x4b3a80)
    // add esp, 0x10
    // push esi
    // CALL(0x4b34b0)
    // mov eax, dword ptr [esi + 0xac]
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b03f4)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 1
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // if (...) GOTO(0x4b040b)
    // mov eax, dword ptr [esi + 0xdc]
    // push esi
    // test eax, eax
    // if (...) GOTO(0x4b0406)
    // CALL(0x4b1f30)
    // if (...) GOTO(0x4b040b)
    // CALL(0x4b12b0)
    // mov eax, dword ptr [esi + 0xa0]
    // add esp, 4
    // cmp eax, 1
    // if (...) GOTO(0x4b0427)
    // mov eax, dword ptr [esi + 0xb0]
    // test eax, eax
    // if (...) GOTO(0x4b0427)
    // xor eax, eax
    // if (...) GOTO(0x4b042c)
    // mov eax, 1
    // push eax
    // push esi
    // CALL(0x4b06f0)
    // push 0
    // push esi
    // CALL(0x4b0560)
    // push esi
    // CALL(0x4afaf0)
    // mov edx, dword ptr [esi + 4]
    // push esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x154]
    // push esi
    // CALL(dword)
    // add esp, 0x1c
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 8]
    // push eax
    // CALL(0x4a504f)
    // add esp, 4
    // return;
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 8]
    // push eax
    // CALL(0x4a5007)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 0xc]
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push eax
    // mov ecx, dword ptr [eax]
    // mov dword ptr [ecx + 0x14], 0x30
    // mov edx, dword ptr [eax]
    // CALL(dword)
    // pop ecx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // xor eax, eax
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [esp + 8]
    // mov eax, dword ptr [esp + 4]
    // lea eax, [eax + ecx - 1]
    // cdq 
    // idiv ecx
    // return;
    // mov eax, dword ptr [esp + 4]
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // lea ecx, [eax + esi - 1]
    // mov eax, ecx
    // cdq 
    // idiv esi
    // mov eax, ecx
    // pop esi
    // sub eax, edx
    // return;
    // // nop
    // CALL(0x405097)
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 4]
    // mov edx, dword ptr [esp + 0x10]
    // push ebx
    // mov ebx, dword ptr [esp + 0x18]
    // lea eax, [ecx + eax*4]
    // mov ecx, dword ptr [esp + 0x10]
    // test ebx, ebx
    // lea edx, [ecx + edx*4]
    // if (...) GOTO(0x4b0534)
    // push ebp
    // push esi
    // push edi
    // mov ecx, dword ptr [esp + 0x28]
    // mov esi, dword ptr [eax]
    // mov edi, dword ptr [edx]
    // mov ebp, ecx
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, ebp
    // add eax, 4
    // add edx, 4
    // and ecx, 3
    // dec ebx
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x4b0512)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [esp + 8]
    // push edi
    // mov edi, dword ptr [esp + 8]
    // mov edx, ecx
    // xor eax, eax
    // shr ecx, 2
    // rep stosd dword ptr es:[edi], eax
    // mov ecx, edx
    // and ecx, 3
    // rep stosb byte ptr es:[edi], al
    // pop edi
    // return;
    // CALL(0x405099)
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push(0x40)
    // push 1
    // push esi
    // mov eax, dword ptr [esi + 4]
    // CALL(dword)
    // mov dword ptr [esi + 0x148], eax
    // mov dword ptr [eax], 0x4b05f0
    // mov ecx, dword ptr [esi + 0xa8]
    // add esp, 0xc
    // test ecx, ecx
    // if (...) GOTO(0x4b05e4)
    // mov ecx, dword ptr [esp + 0x10]
    // test ecx, ecx
    // if (...) GOTO(0x4b05a5)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 4
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // pop esi
    // pop ebp
    // return;
    // mov edx, dword ptr [esi + 0x34]
    // mov ecx, dword ptr [esi + 0x3c]
    // xor ebp, ebp
    // test edx, edx
    // if (...) GOTO(0x4b05e4)
    // push ebx
    // push edi
    // lea edi, [ecx + 0x1c]
    // lea ebx, [eax + 0x18]
    // mov ecx, dword ptr [edi - 0x10]
    // mov edx, dword ptr [edi]
    // mov eax, dword ptr [esi + 4]
    // shl ecx, 3
    // shl edx, 3
    // push ecx
    // push edx
    // push 1
    // push esi
    // CALL(dword)
    // add esp, 0x10
    // mov dword ptr [ebx], eax
    // mov eax, dword ptr [esi + 0x34]
    // inc ebp
    // add ebx, 4
    // add edi, 0x54
    // cmp ebp, eax
    // if (...) GOTO(0x4b05b9)
    // pop edi
    // pop ebx
    // pop esi
    // pop ebp
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [esp + 4]
    // mov edx, dword ptr [ecx + 0xa8]
    // mov eax, dword ptr [ecx + 0x148]
    // test edx, edx
    // if (...) GOTO(0x4b063d)
    // mov edx, dword ptr [esp + 8]
    // mov dword ptr [eax + 8], 0
    // test edx, edx
    // mov dword ptr [eax + 0xc], 0
    // mov dword ptr [eax + 0x10], 0
    // mov dword ptr [eax + 0x14], edx
    // if (...) GOTO(0x4b0636)
    // mov eax, dword ptr [ecx]
    // push ecx
    // mov dword ptr [eax + 0x14], 4
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // add esp, 4
    // return;
    // mov dword ptr [eax + 4], 0x4b0640
    // return;
    // // nop
    // // nop
    // push ebx
    // push ebp
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x14]
    // mov esi, dword ptr [edi + 0x148]
    // mov ecx, dword ptr [edi + 0xe8]
    // mov eax, dword ptr [esi + 8]
    // cmp eax, ecx
    // jae 0x4b06eb
    // mov ebp, dword ptr [esp + 0x1c]
    // lea ebx, [esi + 0xc]
    // cmp dword ptr [ebx], 8
    // jae 0x4b068f
    // mov eax, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [edi + 0x14c]
    // push 8
    // lea edx, [esi + 0x18]
    // push ebx
    // push edx
    // mov edx, dword ptr [esp + 0x24]
    // push eax
    // push ebp
    // push edx
    // push edi
    // CALL(dword)
    // mov eax, dword ptr [ebx]
    // add esp, 0x1c
    // cmp eax, 8
    // if (...) GOTO(0x4b06eb)
    // mov eax, dword ptr [edi + 0x150]
    // lea ecx, [esi + 0x18]
    // push ecx
    // push edi
    // CALL(dword)
    // add esp, 8
    // test eax, eax
    // mov eax, dword ptr [esi + 0x10]
    // if (...) GOTO(0x4b06d9)
    // test eax, eax
    // if (...) GOTO(0x4b06bb)
    // mov eax, dword ptr [ebp]
    // inc eax
    // mov dword ptr [ebp], eax
    // mov dword ptr [esi + 0x10], 0
    // mov edx, dword ptr [esi + 8]
    // mov dword ptr [ebx], 0
    // inc edx
    // mov dword ptr [esi + 8], edx
    // mov ecx, dword ptr [edi + 0xe8]
    // mov eax, edx
    // cmp eax, ecx
    // if (...) GOTO(0x4b0666)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // test eax, eax
    // if (...) GOTO(0x4b06eb)
    // mov eax, dword ptr [ebp]
    // dec eax
    // mov dword ptr [ebp], eax
    // mov dword ptr [esi + 0x10], 1
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // push ebx
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x10]
    // push(0x68)
    // push 1
    // mov eax, dword ptr [edi + 4]
    // push edi
    // CALL(dword)
    // mov ebx, eax
    // mov eax, dword ptr [esp + 0x20]
    // xor esi, esi
    // add esp, 0xc
    // mov dword ptr [edi + 0x150], ebx
    // cmp eax, esi
    // mov dword ptr [ebx], 0x4b07b0
    // if (...) GOTO(0x4b077e)
    // mov ecx, dword ptr [edi + 0x34]
    // mov eax, dword ptr [edi + 0x3c]
    // cmp ecx, esi
    // mov dword ptr [esp + 0x10], esi
    // if (...) GOTO(0x4b07a7)
    // push ebp
    // lea esi, [eax + 0xc]
    // add ebx, 0x40
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [esi + 0x14]
    // mov ebp, dword ptr [edi + 4]
    // push eax
    // push eax
    // push ecx
    // CALL(0x4b04d0)
    // mov edx, dword ptr [esi - 4]
    // add esp, 8
    // push eax
    // mov eax, dword ptr [esi + 0x10]
    // push edx
    // push eax
    // CALL(0x4b04d0)
    // add esp, 8
    // push eax
    // push 0
    // push 1
    // push edi
    // CALL(dword)
    // mov dword ptr [ebx], eax
    // mov eax, dword ptr [esp + 0x2c]
    // mov ecx, dword ptr [edi + 0x34]
    // add esp, 0x18
    // inc eax
    // add ebx, 4
    // add esi, 0x54
    // cmp eax, ecx
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4b0731)
    // pop ebp
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov ecx, dword ptr [edi + 4]
    // push(0x500)
    // push 1
    // push edi
    // CALL(dword)
    // add esp, 0xc
    // lea ecx, [ebx + 0x18]
    // mov edx, 0xa
    // mov dword ptr [ecx], eax
    // add ecx, 4
    // add eax, 0x80
    // dec edx
    // if (...) GOTO(0x4b0797)
    // mov dword ptr [ebx + 0x40], esi
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // CALL(0x405099)
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // push esi
    // mov edi, dword ptr [esi + 0x150]
    // mov dword ptr [edi + 8], 0
    // CALL(0x4b0860)
    // mov eax, dword ptr [esp + 0x14]
    // add esp, 4
    // sub eax, 0
    // if (...) GOTO(0x4b0835)
    // sub eax, 2
    // if (...) GOTO(0x4b0813)
    // dec eax
    // if (...) GOTO(0x4b07f1)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 4
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // pop edi
    // pop esi
    // return;
    // mov eax, dword ptr [edi + 0x40]
    // test eax, eax
    // if (...) GOTO(0x4b0809)
    // mov edx, dword ptr [esi]
    // push esi
    // mov dword ptr [edx + 0x14], 4
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov dword ptr [edi + 4], 0x4b0b20
    // pop edi
    // pop esi
    // return;
    // mov eax, dword ptr [edi + 0x40]
    // test eax, eax
    // if (...) GOTO(0x4b082b)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 4
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov dword ptr [edi + 4], 0x4b0d70
    // pop edi
    // pop esi
    // return;
    // mov eax, dword ptr [edi + 0x40]
    // test eax, eax
    // if (...) GOTO(0x4b084d)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 4
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov dword ptr [edi + 4], 0x4b08b0
    // pop edi
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [esp + 4]
    // push esi
    // mov edx, 1
    // mov esi, dword ptr [ecx + 0xec]
    // mov eax, dword ptr [ecx + 0x150]
    // cmp esi, edx
    // if (...) GOTO(0x4b08a1)
    // mov edx, dword ptr [ecx + 0xe8]
    // mov esi, dword ptr [eax + 8]
    // mov ecx, dword ptr [ecx + 0xf0]
    // dec edx
    // cmp esi, edx
    // jae 0x4b089e
    // mov edx, dword ptr [ecx + 0xc]
    // xor ecx, ecx
    // mov dword ptr [eax + 0x14], edx
    // mov dword ptr [eax + 0xc], ecx
    // mov dword ptr [eax + 0x10], ecx
    // pop esi
    // return;
    // mov edx, dword ptr [ecx + 0x48]
    // xor ecx, ecx
    // mov dword ptr [eax + 0x14], edx
    // mov dword ptr [eax + 0xc], ecx
    // mov dword ptr [eax + 0x10], ecx
    // pop esi
    // return;
    // // nop
    // // nop
    // sub esp, 0x2c
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x3c]
    // push edi
    // mov ecx, dword ptr [esi + 0x100]
    // mov eax, dword ptr [esi + 0xe8]
    // mov ebp, dword ptr [esi + 0x150]
    // dec ecx
    // dec eax
    // mov dword ptr [esp + 0x28], ecx
    // mov edx, dword ptr [ebp + 0x14]
    // mov dword ptr [esp + 0x38], eax
    // mov eax, dword ptr [ebp + 0x10]
    // cmp eax, edx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4b0ae9)
    // if (...) GOTO(0x4b08ef)
    // mov ecx, dword ptr [esp + 0x28]
    // mov ebx, dword ptr [ebp + 0xc]
    // cmp ebx, ecx
    // mov dword ptr [esp + 0x14], ebx
    // if (...) GOTO(0x4b0ad2)
    // mov eax, dword ptr [esi + 0xec]
    // xor edi, edi
    // cmp eax, edi
    // mov dword ptr [esp + 0x2c], edi
    // if (...) GOTO(0x4b0aa8)
    // mov eax, dword ptr [esp + 0x44]
    // add esi, 0xf0
    // mov dword ptr [esp + 0x24], eax
    // mov dword ptr [esp + 0x30], esi
    // mov eax, dword ptr [esp + 0x28]
    // mov esi, dword ptr [esi]
    // cmp ebx, eax
    // jae 0x4b0933
    // mov ebx, dword ptr [esi + 0x34]
    // if (...) GOTO(0x4b0936)
    // mov ebx, dword ptr [esi + 0x44]
    // mov ecx, dword ptr [esi + 0x40]
    // mov edx, dword ptr [esp + 0x10]
    // imul ecx, dword ptr [esp + 0x14]
    // lea eax, [edx*8]
    // mov dword ptr [esp + 0x34], ecx
    // mov dword ptr [esp + 0x1c], eax
    // mov eax, dword ptr [esi + 0x38]
    // test eax, eax
    // mov dword ptr [esp + 0x20], 0
    // if (...) GOTO(0x4b0a71)
    // if (...) GOTO(0x4b096a)
    // mov ecx, dword ptr [esp + 0x34]
    // mov eax, dword ptr [esp + 0x38]
    // mov edx, dword ptr [ebp + 8]
    // cmp edx, eax
    // if (...) GOTO(0x4b09d4)
    // mov edx, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esp + 0x20]
    // add eax, edx
    // mov edx, dword ptr [esi + 0x48]
    // cmp eax, edx
    // if (...) GOTO(0x4b09d4)
    // mov ecx, dword ptr [esi + 0x34]
    // mov edx, dword ptr [ebp + edi*4 + 0x18]
    // shl ecx, 7
    // push ecx
    // push edx
    // CALL(0x4b0540)
    // mov ecx, dword ptr [esi + 0x34]
    // add esp, 8
    // xor eax, eax
    // test ecx, ecx
    // if (...) GOTO(0x4b0a4d)
    // lea ecx, [ebp + edi*4 + 0x18]
    // mov dword ptr [esp + 0x18], ecx
    // mov edx, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [ebp + edi*4 + 0x14]
    // inc eax
    // mov edx, dword ptr [edx]
    // mov cx, word ptr [ecx]
    // mov word ptr [edx], cx
    // mov edx, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esi + 0x34]
    // add edx, 4
    // cmp eax, ecx
    // mov dword ptr [esp + 0x18], edx
    // if (...) GOTO(0x4b09af)
    // if (...) GOTO(0x4b0a4d)
    // push ebx
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esp + 0x48]
    // push ecx
    // mov ecx, dword ptr [ebp + edi*4 + 0x18]
    // mov edx, dword ptr [eax + 0x160]
    // push ecx
    // mov ecx, dword ptr [esp + 0x34]
    // mov ecx, dword ptr [ecx]
    // push ecx
    // push esi
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x34]
    // add esp, 0x1c
    // cmp ebx, eax
    // if (...) GOTO(0x4b0a4d)
    // mov edx, ebx
    // shl edx, 0x19
    // sub edx, ebx
    // add edx, eax
    // lea eax, [ebx + edi]
    // shl edx, 7
    // mov ecx, dword ptr [ebp + eax*4 + 0x18]
    // push edx
    // push ecx
    // CALL(0x4b0540)
    // mov eax, dword ptr [esi + 0x34]
    // add esp, 8
    // cmp ebx, eax
    // mov dword ptr [esp + 0x18], ebx
    // if (...) GOTO(0x4b0a4d)
    // lea edx, [ebx + edi]
    // lea eax, [ebp + edx*4 + 0x18]
    // mov ecx, dword ptr [eax - 4]
    // mov edx, dword ptr [eax]
    // add eax, 4
    // mov cx, word ptr [ecx]
    // mov word ptr [edx], cx
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esi + 0x34]
    // inc ecx
    // cmp ecx, edx
    // mov dword ptr [esp + 0x18], ecx
    // if (...) GOTO(0x4b0a2f)
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esi + 0x34]
    // add eax, 8
    // add edi, ecx
    // mov ecx, dword ptr [esi + 0x38]
    // mov dword ptr [esp + 0x1c], eax
    // mov eax, dword ptr [esp + 0x20]
    // inc eax
    // cmp eax, ecx
    // mov dword ptr [esp + 0x20], eax
    // if (...) GOTO(0x4b0966)
    // mov edx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esp + 0x2c]
    // mov esi, dword ptr [esp + 0x30]
    // add edx, 4
    // mov ebx, dword ptr [esp + 0x14]
    // mov dword ptr [esp + 0x24], edx
    // mov edx, dword ptr [esp + 0x40]
    // inc eax
    // add esi, 4
    // mov dword ptr [esp + 0x2c], eax
    // mov ecx, dword ptr [edx + 0xec]
    // mov dword ptr [esp + 0x30], esi
    // cmp eax, ecx
    // if (...) GOTO(0x4b0924)
    // mov esi, edx
    // mov eax, dword ptr [esi + 0x164]
    // lea ecx, [ebp + 0x18]
    // push ecx
    // push esi
    // CALL(dword)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x4b0b06)
    // mov eax, dword ptr [esp + 0x28]
    // inc ebx
    // cmp ebx, eax
    // mov dword ptr [esp + 0x14], ebx
    // jbe 0x4b08fe
    // mov eax, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [ebp + 0x14]
    // inc eax
    // cmp eax, ecx
    // mov dword ptr [ebp + 0xc], 0
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4b08eb)
    // mov edx, dword ptr [ebp + 8]
    // push esi
    // inc edx
    // mov dword ptr [ebp + 8], edx
    // CALL(0x4b0860)
    // add esp, 4
    // mov eax, 1
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x2c
    // return;
    // mov edx, dword ptr [esp + 0x10]
    // pop edi
    // mov dword ptr [ebp + 0x10], edx
    // mov dword ptr [ebp + 0xc], ebx
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // add esp, 0x2c
    // return;
    // CALL(0x405098)
    // // nop
    // sub esp, 0x30
    // mov ecx, dword ptr [esp + 0x34]
    // push ebx
    // push esi
    // push edi
    // mov ebx, dword ptr [ecx + 0xe8]
    // mov eax, dword ptr [ecx + 0x34]
    // mov edi, dword ptr [ecx + 0x150]
    // mov esi, dword ptr [ecx + 0x3c]
    // dec ebx
    // mov dword ptr [esp + 0x2c], edi
    // test eax, eax
    // mov dword ptr [esp + 0x28], ebx
    // mov dword ptr [esp + 0x34], 0
    // mov dword ptr [esp + 0x10], esi
    // if (...) GOTO(0x4b0d4f)
    // mov eax, dword ptr [esp + 0x44]
    // lea edx, [edi + 0x40]
    // push ebp
    // mov dword ptr [esp + 0x24], eax
    // mov dword ptr [esp + 0x20], edx
    // if (...) GOTO(0x4b0b77)
    // mov edi, dword ptr [esp + 0x30]
    // mov ebx, dword ptr [esp + 0x2c]
    // mov ecx, dword ptr [esp + 0x44]
    // mov eax, dword ptr [esi + 0xc]
    // push 1
    // push eax
    // imul eax, dword ptr [edi + 8]
    // mov edx, dword ptr [ecx + 4]
    // push eax
    // mov eax, dword ptr [esp + 0x2c]
    // mov eax, dword ptr [eax]
    // push eax
    // push ecx
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0xc]
    // mov dword ptr [esp + 0x48], eax
    // mov eax, dword ptr [edi + 8]
    // add esp, 0x14
    // cmp eax, ebx
    // jae 0x4b0ba7
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x4b0bbe)
    // mov eax, dword ptr [esi + 0x20]
    // xor edx, edx
    // div ecx
    // test edx, edx
    // mov dword ptr [esp + 0x10], edx
    // if (...) GOTO(0x4b0bba)
    // mov dword ptr [esp + 0x10], ecx
    // mov ecx, dword ptr [esp + 0x10]
    // mov ebx, dword ptr [esi + 0x1c]
    // mov ebp, dword ptr [esi + 8]
    // mov eax, ebx
    // xor edx, edx
    // div ebp
    // mov dword ptr [esp + 0x1c], ebp
    // mov edi, edx
    // test edi, edi
    // if (...) GOTO(0x4b0bda)
    // mov edx, ebp
    // sub edx, edi
    // mov edi, edx
    // test ecx, ecx
    // if (...) GOTO(0x4b0c70)
    // mov ebp, dword ptr [esp + 0x34]
    // mov dword ptr [esp + 0x18], 0
    // mov dword ptr [esp + 0x28], ecx
    // mov edx, dword ptr [esp + 0x18]
    // mov esi, dword ptr [ebp]
    // mov eax, dword ptr [esp + 0x44]
    // push ebx
    // push 0
    // push edx
    // mov edx, dword ptr [esp + 0x30]
    // mov ecx, dword ptr [eax + 0x160]
    // push esi
    // mov edx, dword ptr [edx]
    // push edx
    // mov edx, dword ptr [esp + 0x28]
    // push edx
    // push eax
    // CALL(dword)
    // add esp, 0x1c
    // test edi, edi
    // if (...) GOTO(0x4b0c4b)
    // mov eax, ebx
    // mov ecx, edi
    // shl eax, 7
    // shl ecx, 7
    // add esi, eax
    // push ecx
    // push esi
    // CALL(0x4b0540)
    // mov cx, word ptr [esi - 0x80]
    // add esp, 8
    // test edi, edi
    // if (...) GOTO(0x4b0c4b)
    // mov eax, edi
    // mov word ptr [esi], cx
    // add esi, 0x80
    // dec eax
    // if (...) GOTO(0x4b0c3f)
    // mov ecx, dword ptr [esp + 0x18]
    // mov eax, dword ptr [esp + 0x28]
    // add ebp, 4
    // add ecx, 8
    // dec eax
    // mov dword ptr [esp + 0x18], ecx
    // mov dword ptr [esp + 0x28], eax
    // if (...) GOTO(0x4b0bf2)
    // mov ecx, dword ptr [esp + 0x10]
    // mov esi, dword ptr [esp + 0x14]
    // mov ebp, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [esp + 0x30]
    // mov edx, dword ptr [esp + 0x2c]
    // cmp dword ptr [eax + 8], edx
    // if (...) GOTO(0x4b0d16)
    // add ebx, edi
    // xor edx, edx
    // mov eax, ebx
    // mov dword ptr [esp + 0x28], ecx
    // div ebp
    // mov dword ptr [esp + 0x3c], eax
    // mov eax, dword ptr [esi + 0xc]
    // cmp ecx, eax
    // if (...) GOTO(0x4b0d16)
    // mov edx, dword ptr [esp + 0x34]
    // shl ebx, 7
    // lea ecx, [edx + ecx*4]
    // mov dword ptr [esp + 0x10], ebx
    // mov dword ptr [esp + 0x18], ecx
    // if (...) GOTO(0x4b0cb0)
    // mov ecx, dword ptr [esp + 0x18]
    // mov eax, dword ptr [esp + 0x10]
    // mov edi, dword ptr [ecx]
    // mov ebx, dword ptr [ecx - 4]
    // push eax
    // push edi
    // CALL(0x4b0540)
    // mov eax, dword ptr [esp + 0x44]
    // add esp, 8
    // test eax, eax
    // jbe 0x4b0cfb
    // mov ecx, ebp
    // mov ebp, eax
    // shl ecx, 7
    // mov edx, dword ptr [esp + 0x1c]
    // mov si, word ptr [ecx + ebx - 0x80]
    // test edx, edx
    // if (...) GOTO(0x4b0cec)
    // mov eax, edi
    // mov word ptr [eax], si
    // add eax, 0x80
    // dec edx
    // if (...) GOTO(0x4b0ce1)
    // add edi, ecx
    // add ebx, ecx
    // dec ebp
    // if (...) GOTO(0x4b0cd2)
    // mov esi, dword ptr [esp + 0x14]
    // mov ebp, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [esp + 0x28]
    // mov edx, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esi + 0xc]
    // inc eax
    // add edx, 4
    // cmp eax, ecx
    // mov dword ptr [esp + 0x28], eax
    // mov dword ptr [esp + 0x18], edx
    // if (...) GOTO(0x4b0cac)
    // mov ebp, dword ptr [esp + 0x20]
    // mov ebx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esp + 0x38]
    // mov ecx, 4
    // add ebp, ecx
    // add ebx, ecx
    // mov ecx, dword ptr [esp + 0x44]
    // inc eax
    // add esi, 0x54
    // mov dword ptr [esp + 0x38], eax
    // mov edx, dword ptr [ecx + 0x34]
    // mov dword ptr [esp + 0x20], ebp
    // cmp eax, edx
    // mov dword ptr [esp + 0x24], ebx
    // mov dword ptr [esp + 0x14], esi
    // if (...) GOTO(0x4b0b6b)
    // pop ebp
    // mov edx, dword ptr [esp + 0x44]
    // push edx
    // push ecx
    // CALL(0x4b0d70)
    // add esp, 8
    // pop edi
    // pop esi
    // pop ebx
    // add esp, 0x30
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x30
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x40]
    // push edi
    // xor ebx, ebx
    // mov eax, dword ptr [esi + 0xec]
    // mov edi, dword ptr [esi + 0x150]
    // test eax, eax
    // mov dword ptr [esp + 0x24], edi
    // if (...) GOTO(0x4b0deb)
    // lea eax, [esp + 0x30]
    // lea ecx, [esi + 0xf0]
    // mov dword ptr [esp + 0x18], eax
    // mov dword ptr [esp + 0x10], ecx
    // mov edx, dword ptr [esp + 0x10]
    // mov ebp, dword ptr [edi + 8]
    // push 0
    // mov eax, dword ptr [edx]
    // mov edx, dword ptr [esi + 4]
    // mov ecx, dword ptr [eax + 0xc]
    // mov eax, dword ptr [eax + 4]
    // imul ebp, ecx
    // push ecx
    // mov ecx, dword ptr [edi + eax*4 + 0x40]
    // push ebp
    // push ecx
    // push esi
    // CALL(dword)
    // mov ecx, dword ptr [esp + 0x2c]
    // mov ebp, dword ptr [esp + 0x24]
    // add esp, 0x14
    // inc ebx
    // mov dword ptr [ecx], eax
    // mov eax, dword ptr [esi + 0xec]
    // add ebp, 4
    // add ecx, 4
    // cmp ebx, eax
    // mov dword ptr [esp + 0x10], ebp
    // mov dword ptr [esp + 0x18], ecx
    // if (...) GOTO(0x4b0da3)
    // mov eax, dword ptr [edi + 0x10]
    // mov ecx, dword ptr [edi + 0x14]
    // cmp eax, ecx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4b0f25)
    // mov ebp, dword ptr [edi + 0xc]
    // mov ecx, dword ptr [esi + 0x100]
    // cmp ebp, ecx
    // mov dword ptr [esp + 0x28], ebp
    // jae 0x4b0f0e
    // mov eax, dword ptr [esi + 0xec]
    // xor ebx, ebx
    // cmp eax, ebx
    // mov dword ptr [esp + 0x20], ebx
    // if (...) GOTO(0x4b0ee2)
    // lea edx, [esp + 0x30]
    // lea eax, [esi + 0xf0]
    // mov dword ptr [esp + 0x18], edx
    // mov dword ptr [esp + 0x14], eax
    // mov ecx, dword ptr [esp + 0x14]
    // mov dword ptr [esp + 0x1c], 0
    // mov edi, dword ptr [ecx]
    // mov ecx, dword ptr [edi + 0x34]
    // mov edx, dword ptr [edi + 0x38]
    // mov eax, ecx
    // imul eax, ebp
    // test edx, edx
    // if (...) GOTO(0x4b0eae)
    // mov edx, dword ptr [esp + 0x18]
    // shl eax, 7
    // mov dword ptr [esp + 0x2c], eax
    // mov eax, dword ptr [edx]
    // mov edx, dword ptr [esp + 0x10]
    // lea ebp, [eax + edx*4]
    // mov eax, dword ptr [ebp]
    // mov edx, dword ptr [esp + 0x2c]
    // add eax, edx
    // xor edx, edx
    // test ecx, ecx
    // if (...) GOTO(0x4b0e97)
    // mov ecx, dword ptr [esp + 0x24]
    // lea esi, [ecx + ebx*4 + 0x18]
    // mov dword ptr [esi], eax
    // mov ecx, dword ptr [edi + 0x34]
    // inc ebx
    // add esi, 4
    // add eax, 0x80
    // inc edx
    // cmp edx, ecx
    // if (...) GOTO(0x4b0e80)
    // mov esi, dword ptr [esp + 0x44]
    // mov eax, dword ptr [esp + 0x1c]
    // mov edx, dword ptr [edi + 0x38]
    // inc eax
    // add ebp, 4
    // cmp eax, edx
    // mov dword ptr [esp + 0x1c], eax
    // if (...) GOTO(0x4b0e69)
    // mov ebp, dword ptr [esp + 0x28]
    // mov edi, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x18]
    // mov eax, dword ptr [esp + 0x20]
    // mov ecx, 4
    // add edi, ecx
    // add edx, ecx
    // mov ecx, dword ptr [esi + 0xec]
    // inc eax
    // cmp eax, ecx
    // mov dword ptr [esp + 0x20], eax
    // mov dword ptr [esp + 0x14], edi
    // mov dword ptr [esp + 0x18], edx
    // if (...) GOTO(0x4b0e38)
    // mov edi, dword ptr [esp + 0x24]
    // mov edx, dword ptr [esi + 0x164]
    // lea eax, [edi + 0x18]
    // push eax
    // push esi
    // CALL(dword)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x4b0f42)
    // mov eax, dword ptr [esi + 0x100]
    // inc ebp
    // cmp ebp, eax
    // mov dword ptr [esp + 0x28], ebp
    // if (...) GOTO(0x4b0e12)
    // mov eax, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [edi + 0x14]
    // inc eax
    // cmp eax, ecx
    // mov dword ptr [edi + 0xc], 0
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4b0dfd)
    // mov edx, dword ptr [edi + 8]
    // push esi
    // inc edx
    // mov dword ptr [edi + 8], edx
    // CALL(0x4b0860)
    // add esp, 4
    // mov eax, 1
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x30
    // return;
    // mov ecx, dword ptr [esp + 0x10]
    // mov dword ptr [edi + 0xc], ebp
    // mov dword ptr [edi + 0x10], ecx
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // add esp, 0x30
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x510
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x528]
    // push edi
    // cmp dword ptr [esi], 0
    // if (...) GOTO(0x4b0f8f)
    // mov eax, dword ptr [esp + 0x524]
    // push(0x500)
    // push 1
    // push eax
    // mov ecx, dword ptr [eax + 4]
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [esi], eax
    // mov edx, dword ptr [esi]
    // mov ebx, dword ptr [esp + 0x528]
    // mov eax, 1
    // mov dword ptr [esp + 0x10], edx
    // xor ebp, ebp
    // mov dword ptr [esp + 0x14], eax
    // xor ecx, ecx
    // mov cl, byte ptr [eax + ebx]
    // mov esi, ecx
    // cmp esi, 1
    // if (...) GOTO(0x4b0fde)
    // mov bl, al
    // mov edx, ecx
    // mov bh, bl
    // lea edi, [esp + ebp + 0x18]
    // mov eax, ebx
    // shl eax, 0x10
    // mov ax, bx
    // mov ebx, dword ptr [esp + 0x528]
    // shr ecx, 2
    // rep stosd dword ptr es:[edi], eax
    // mov ecx, edx
    // and ecx, 3
    // add ebp, esi
    // rep stosb byte ptr es:[edi], al
    // mov eax, dword ptr [esp + 0x14]
    // inc eax
    // cmp eax, 0x10
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4b0fa7)
    // mov byte ptr [esp + ebp + 0x18], 0
    // mov dl, byte ptr [esp + 0x18]
    // xor ecx, ecx
    // xor eax, eax
    // test dl, dl
    // movsx esi, dl
    // if (...) GOTO(0x4b1027)
    // movsx edx, byte ptr [esp + eax + 0x18]
    // cmp edx, esi
    // if (...) GOTO(0x4b101c)
    // lea edx, [esp + eax*4 + 0x11c]
    // movsx edi, byte ptr [esp + eax + 0x19]
    // inc eax
    // mov dword ptr [edx], ecx
    // add edx, 4
    // inc ecx
    // cmp edi, esi
    // if (...) GOTO(0x4b100c)
    // mov dl, byte ptr [esp + eax + 0x18]
    // shl ecx, 1
    // inc esi
    // test dl, dl
    // if (...) GOTO(0x4b0ffc)
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, 0x40
    // xor eax, eax
    // lea edi, [edx + 0x400]
    // test ebp, ebp
    // rep stosd dword ptr es:[edi], eax
    // if (...) GOTO(0x4b106f)
    // lea ecx, [esp + 0x11c]
    // mov edi, dword ptr [esp + 0x10]
    // mov esi, dword ptr [ecx]
    // xor edx, edx
    // add ecx, 4
    // mov dl, byte ptr [ebx + eax + 0x11]
    // mov dword ptr [edi + edx*4], esi
    // xor edx, edx
    // mov dl, byte ptr [ebx + eax + 0x11]
    // inc eax
    // mov esi, edx
    // mov dl, byte ptr [esp + eax + 0x17]
    // cmp eax, ebp
    // mov byte ptr [esi + edi + 0x400], dl
    // if (...) GOTO(0x4b1045)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x510
    // return;
    // CALL(0x405098)
    // // nop
    // sub esp, 0x82c
    // mov ecx, 8
    // xor eax, eax
    // push ebx
    // push ebp
    // push esi
    // push edi
    // lea edi, [esp + 0x10]
    // mov ebp, dword ptr [esp + 0x848]
    // rep stosd dword ptr es:[edi], eax
    // stosb byte ptr es:[edi], al
    // mov ecx, 0x101
    // xor eax, eax
    // lea edi, [esp + 0x34]
    // mov dword ptr [ebp + 0x400], 1
    // rep stosd dword ptr es:[edi], eax
    // mov ecx, 0x101
    // or eax, 0xffffffff
    // lea edi, [esp + 0x438]
    // rep stosd dword ptr es:[edi], eax
    // or eax, 0xffffffff
    // mov edi, 0x3b9aca00
    // xor ecx, ecx
    // mov esi, ebp
    // mov edx, dword ptr [esi]
    // test edx, edx
    // if (...) GOTO(0x4b10e1)
    // cmp edx, edi
    // if (...) GOTO(0x4b10e1)
    // mov edi, edx
    // mov eax, ecx
    // inc ecx
    // add esi, 4
    // cmp ecx, 0x100
    // if (...) GOTO(0x4b10d3)
    // or edx, 0xffffffff
    // mov ebx, 0x3b9aca00
    // xor ecx, ecx
    // mov edi, ebp
    // mov esi, dword ptr [edi]
    // test esi, esi
    // if (...) GOTO(0x4b110b)
    // cmp esi, ebx
    // if (...) GOTO(0x4b110b)
    // cmp ecx, eax
    // if (...) GOTO(0x4b110b)
    // mov ebx, esi
    // mov edx, ecx
    // inc ecx
    // add edi, 4
    // cmp ecx, 0x100
    // if (...) GOTO(0x4b10f9)
    // test edx, edx
    // if (...) GOTO(0x4b1193)
    // mov ecx, dword ptr [ebp + edx*4]
    // mov ebx, dword ptr [ebp + eax*4]
    // mov edi, dword ptr [esp + eax*4 + 0x34]
    // add ebx, ecx
    // mov ecx, dword ptr [esp + eax*4 + 0x438]
    // inc edi
    // mov dword ptr [ebp + eax*4], ebx
    // mov dword ptr [ebp + edx*4], 0
    // test ecx, ecx
    // mov dword ptr [esp + eax*4 + 0x34], edi
    // if (...) GOTO(0x4b115b)
    // mov eax, ecx
    // mov edi, dword ptr [esp + eax*4 + 0x34]
    // mov ecx, dword ptr [esp + eax*4 + 0x438]
    // inc edi
    // test ecx, ecx
    // mov dword ptr [esp + eax*4 + 0x34], edi
    // if (...) GOTO(0x4b1145)
    // mov esi, dword ptr [esp + edx*4 + 0x34]
    // mov dword ptr [esp + eax*4 + 0x438], edx
    // mov eax, dword ptr [esp + edx*4 + 0x438]
    // inc esi
    // test eax, eax
    // mov dword ptr [esp + edx*4 + 0x34], esi
    // if (...) GOTO(0x4b10c7)
    // mov edx, dword ptr [esp + eax*4 + 0x34]
    // inc edx
    // mov dword ptr [esp + eax*4 + 0x34], edx
    // mov eax, dword ptr [esp + eax*4 + 0x438]
    // test eax, eax
    // if (...) GOTO(0x4b117a)
    // if (...) GOTO(0x4b10c7)
    // mov ebx, dword ptr [esp + 0x840]
    // lea edi, [esp + 0x34]
    // mov ebp, 0x101
    // mov esi, dword ptr [edi]
    // test esi, esi
    // if (...) GOTO(0x4b11cb)
    // cmp esi, 0x20
    // if (...) GOTO(0x4b11bf)
    // mov edx, dword ptr [ebx]
    // push ebx
    // mov dword ptr [edx + 0x14], 0x26
    // mov eax, dword ptr [ebx]
    // CALL(dword)
    // add esp, 4
    // mov cl, byte ptr [esp + esi + 0x10]
    // lea eax, [esp + esi + 0x10]
    // inc cl
    // mov byte ptr [eax], cl
    // add edi, 4
    // dec ebp
    // if (...) GOTO(0x4b11a3)
    // mov edx, 0x20
    // mov cl, byte ptr [esp + edx + 0x10]
    // test cl, cl
    // jbe 0x4b1224
    // lea esi, [edx - 2]
    // mov eax, esi
    // mov bl, byte ptr [esp + eax + 0x10]
    // test bl, bl
    // if (...) GOTO(0x4b11f4)
    // mov bl, byte ptr [esp + eax + 0xf]
    // dec eax
    // test bl, bl
    // if (...) GOTO(0x4b11eb)
    // sub cl, 2
    // mov byte ptr [esp + edx + 0x10], cl
    // mov cl, byte ptr [esp + edx + 0xf]
    // inc cl
    // mov byte ptr [esp + edx + 0xf], cl
    // mov bl, byte ptr [esp + eax + 0x11]
    // add bl, 2
    // mov byte ptr [esp + eax + 0x11], bl
    // mov cl, byte ptr [esp + eax + 0x10]
    // lea eax, [esp + eax + 0x10]
    // dec cl
    // mov byte ptr [eax], cl
    // mov cl, byte ptr [esp + edx + 0x10]
    // test cl, cl
    // if (...) GOTO(0x4b11e1)
    // dec edx
    // cmp edx, 0x10
    // if (...) GOTO(0x4b11d6)
    // mov al, byte ptr [esp + edx + 0x10]
    // test al, al
    // if (...) GOTO(0x4b123b)
    // mov al, byte ptr [esp + edx + 0xf]
    // dec edx
    // test al, al
    // if (...) GOTO(0x4b1232)
    // mov cl, byte ptr [esp + edx + 0x10]
    // mov edi, dword ptr [esp + 0x844]
    // lea eax, [esp + edx + 0x10]
    // dec cl
    // mov esi, 1
    // mov byte ptr [eax], cl
    // mov edx, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esp + 0x14]
    // mov ecx, edi
    // mov dword ptr [ecx], edx
    // mov edx, dword ptr [esp + 0x18]
    // mov dword ptr [ecx + 4], eax
    // mov eax, dword ptr [esp + 0x1c]
    // mov dword ptr [ecx + 8], edx
    // mov dl, byte ptr [esp + 0x20]
    // mov dword ptr [ecx + 0xc], eax
    // mov byte ptr [ecx + 0x10], dl
    // xor edx, edx
    // xor eax, eax
    // lea ecx, [esp + 0x34]
    // cmp dword ptr [ecx], esi
    // if (...) GOTO(0x4b1288)
    // mov byte ptr [edx + edi + 0x11], al
    // inc edx
    // inc eax
    // add ecx, 4
    // cmp eax, 0xff
    // if (...) GOTO(0x4b127f)
    // inc esi
    // cmp esi, 0x20
    // if (...) GOTO(0x4b1279)
    // mov dword ptr [edi + 0x114], 0
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x82c
    // return;
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push(0x6c)
    // push 1
    // mov eax, dword ptr [esi + 4]
    // push esi
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [esi + 0x164], eax
    // mov dword ptr [eax], 0x4b12f0
    // add eax, 0x2c
    // mov ecx, 4
    // xor edx, edx
    // pop esi
    // mov dword ptr [eax + 0x10], edx
    // mov dword ptr [eax], edx
    // mov dword ptr [eax + 0x30], edx
    // mov dword ptr [eax + 0x20], edx
    // add eax, 4
    // dec ecx
    // if (...) GOTO(0x4b12d9)
    // return;
    // CALL(0x405099)
    // mov eax, dword ptr [esp + 8]
    // sub esp, 8
    // xor edx, edx
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0x14]
    // cmp eax, edx
    // mov ebx, dword ptr [esi + 0x164]
    // if (...) GOTO(0x4b1319)
    // mov dword ptr [ebx + 4], 0x4b1ca0
    // mov dword ptr [ebx + 8], 0x4b1e20
    // if (...) GOTO(0x4b1327)
    // mov dword ptr [ebx + 4], 0x4b1480
    // mov dword ptr [ebx + 8], 0x4b1c20
    // mov eax, dword ptr [esi + 0xec]
    // mov dword ptr [esp + 8], edx
    // cmp eax, edx
    // if (...) GOTO(0x4b1464)
    // lea eax, [ebx + 0x14]
    // lea ecx, [esi + 0xf0]
    // push ebp
    // push edi
    // mov dword ptr [esp + 0x14], eax
    // mov dword ptr [esp + 0x1c], ecx
    // mov eax, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [eax]
    // mov edi, dword ptr [eax + 0x14]
    // mov ebp, dword ptr [eax + 0x18]
    // cmp edi, edx
    // if (...) GOTO(0x4b136d)
    // cmp edi, 4
    // if (...) GOTO(0x4b136d)
    // cmp dword ptr [esi + edi*4 + 0x50], edx
    // if (...) GOTO(0x4b1383)
    // cmp dword ptr [esp + 0x20], edx
    // if (...) GOTO(0x4b1383)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 0x31
    // mov edx, dword ptr [esi]
    // mov dword ptr [edx + 0x18], edi
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // test ebp, ebp
    // if (...) GOTO(0x4b139c)
    // cmp ebp, 4
    // if (...) GOTO(0x4b139c)
    // mov eax, dword ptr [esi + ebp*4 + 0x60]
    // test eax, eax
    // if (...) GOTO(0x4b13b2)
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x4b13ba)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 0x31
    // mov edx, dword ptr [esi]
    // mov dword ptr [edx + 0x18], ebp
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x4b140e)
    // mov eax, dword ptr [ebx + edi*4 + 0x4c]
    // test eax, eax
    // if (...) GOTO(0x4b13d6)
    // mov ecx, dword ptr [esi + 4]
    // push(0x404)
    // push 1
    // push esi
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [ebx + edi*4 + 0x4c], eax
    // mov edi, dword ptr [ebx + edi*4 + 0x4c]
    // mov ecx, 0x101
    // xor eax, eax
    // rep stosd dword ptr es:[edi], eax
    // mov eax, dword ptr [ebx + ebp*4 + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x4b13ff)
    // mov edx, dword ptr [esi + 4]
    // push(0x404)
    // push 1
    // push esi
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [ebx + ebp*4 + 0x5c], eax
    // mov edi, dword ptr [ebx + ebp*4 + 0x5c]
    // mov ecx, 0x101
    // xor eax, eax
    // rep stosd dword ptr es:[edi], eax
    // if (...) GOTO(0x4b1431)
    // mov ecx, dword ptr [esi + edi*4 + 0x50]
    // lea eax, [ebx + edi*4 + 0x2c]
    // push eax
    // push ecx
    // push esi
    // CALL(0x4b0f60)
    // mov eax, dword ptr [esi + ebp*4 + 0x60]
    // lea edx, [ebx + ebp*4 + 0x3c]
    // push edx
    // push eax
    // push esi
    // CALL(0x4b0f60)
    // add esp, 0x18
    // mov ecx, dword ptr [esp + 0x14]
    // mov eax, dword ptr [esp + 0x10]
    // mov ebp, dword ptr [esp + 0x1c]
    // xor edx, edx
    // mov dword ptr [ecx], edx
    // add ecx, 4
    // mov dword ptr [esp + 0x14], ecx
    // mov ecx, dword ptr [esi + 0xec]
    // inc eax
    // add ebp, 4
    // cmp eax, ecx
    // mov dword ptr [esp + 0x10], eax
    // mov dword ptr [esp + 0x1c], ebp
    // if (...) GOTO(0x4b134c)
    // pop edi
    // pop ebp
    // mov dword ptr [ebx + 0xc], edx
    // mov dword ptr [ebx + 0x10], edx
    // mov ecx, dword ptr [esi + 0xc0]
    // mov dword ptr [ebx + 0x28], edx
    // mov dword ptr [ebx + 0x24], ecx
    // pop esi
    // pop ebx
    // add esp, 8
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x28
    // push ebx
    // mov ebx, dword ptr [esp + 0x30]
    // push ebp
    // push esi
    // mov eax, dword ptr [ebx + 0x14]
    // mov ebp, dword ptr [ebx + 0x164]
    // push edi
    // lea edi, [esp + 0x1c]
    // mov ecx, dword ptr [eax]
    // lea esi, [ebp + 0xc]
    // mov dword ptr [esp + 0x14], ecx
    // mov edx, dword ptr [eax + 4]
    // mov eax, dword ptr [ebx + 0xc0]
    // mov ecx, 6
    // mov dword ptr [esp + 0x18], edx
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // test eax, eax
    // mov dword ptr [esp + 0x34], ebx
    // if (...) GOTO(0x4b14e3)
    // mov eax, dword ptr [ebp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4b14e3)
    // mov eax, dword ptr [ebp + 0x28]
    // lea ecx, [esp + 0x14]
    // push eax
    // push ecx
    // CALL(0x4b1ae0)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x4b14e3)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // add esp, 0x28
    // return;
    // mov eax, dword ptr [ebx + 0x108]
    // mov dword ptr [esp + 0x10], 0
    // test eax, eax
    // if (...) GOTO(0x4b1563)
    // mov esi, dword ptr [esp + 0x40]
    // lea edx, [ebx + 0x10c]
    // mov dword ptr [esp + 0x3c], edx
    // mov eax, dword ptr [esp + 0x3c]
    // mov eax, dword ptr [eax]
    // mov ecx, dword ptr [ebx + eax*4 + 0xf0]
    // lea edi, [esp + eax*4 + 0x24]
    // mov edx, dword ptr [ecx + 0x18]
    // mov ecx, dword ptr [ecx + 0x14]
    // mov eax, dword ptr [ebp + edx*4 + 0x3c]
    // mov edx, dword ptr [ebp + ecx*4 + 0x2c]
    // mov ecx, dword ptr [esi]
    // push eax
    // mov eax, dword ptr [edi]
    // push edx
    // push eax
    // lea edx, [esp + 0x20]
    // push ecx
    // push edx
    // CALL(0x4b15c0)
    // add esp, 0x14
    // test eax, eax
    // if (...) GOTO(0x4b14d9)
    // mov eax, dword ptr [esi]
    // add esi, 4
    // movsx ecx, word ptr [eax]
    // mov eax, dword ptr [esp + 0x10]
    // mov dword ptr [edi], ecx
    // mov edi, dword ptr [esp + 0x3c]
    // mov ecx, dword ptr [ebx + 0x108]
    // inc eax
    // add edi, 4
    // cmp eax, ecx
    // mov dword ptr [esp + 0x10], eax
    // mov dword ptr [esp + 0x3c], edi
    // if (...) GOTO(0x4b1503)
    // mov edx, dword ptr [ebx + 0x14]
    // mov eax, dword ptr [esp + 0x14]
    // lea esi, [esp + 0x1c]
    // lea edi, [ebp + 0xc]
    // mov dword ptr [edx], eax
    // mov ecx, dword ptr [ebx + 0x14]
    // mov edx, dword ptr [esp + 0x18]
    // mov dword ptr [ecx + 4], edx
    // mov ecx, 6
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ebx, dword ptr [ebx + 0xc0]
    // test ebx, ebx
    // if (...) GOTO(0x4b15a5)
    // mov eax, dword ptr [ebp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4b15a2)
    // mov eax, dword ptr [ebp + 0x28]
    // mov dword ptr [ebp + 0x24], ebx
    // inc eax
    // and eax, 7
    // mov dword ptr [ebp + 0x28], eax
    // dec dword ptr [ebp + 0x24]
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // add esp, 0x28
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 8
    // mov eax, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esp + 0x14]
    // movsx eax, word ptr [eax]
    // sub eax, ecx
    // mov dword ptr [esp], eax
    // mov ecx, eax
    // jns 0x4b15df
    // neg ecx
    // dec eax
    // mov dword ptr [esp], eax
    // xor eax, eax
    // test ecx, ecx
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4b15f2)
    // inc eax
    // sar ecx, 1
    // if (...) GOTO(0x4b15e9)
    // mov dword ptr [esp + 0x14], eax
    // mov ecx, dword ptr [esp + 0x18]
    // push ebx
    // push ebp
    // push esi
    // movsx ebx, byte ptr [eax + ecx + 0x400]
    // mov esi, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [ecx + eax*4]
    // test ebx, ebx
    // mov ebp, dword ptr [esi + 0xc]
    // push edi
    // mov dword ptr [esp + 0x28], ecx
    // if (...) GOTO(0x4b162b)
    // mov edx, dword ptr [esi + 0x20]
    // mov eax, dword ptr [edx]
    // mov dword ptr [eax + 0x14], 0x27
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov ecx, dword ptr [eax]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x28]
    // mov edi, 1
    // mov ecx, ebx
    // add ebp, ebx
    // shl edi, cl
    // mov ecx, 0x18
    // sub ecx, ebp
    // dec edi
    // and edi, eax
    // shl edi, cl
    // mov ecx, dword ptr [esi + 8]
    // or edi, ecx
    // cmp ebp, 8
    // mov dword ptr [esp + 0x28], edi
    // if (...) GOTO(0x4b16b8)
    // mov edx, dword ptr [esi]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x2a]
    // mov byte ptr [edx], bl
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b167d)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b19c4)
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b16a9)
    // mov eax, dword ptr [esi]
    // mov byte ptr [eax], 0
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b16a9)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b19c4)
    // sub ebp, 8
    // shl edi, 8
    // cmp ebp, 8
    // mov dword ptr [esp + 0x28], edi
    // if (...) GOTO(0x4b1654)
    // mov eax, dword ptr [esp + 0x24]
    // mov dword ptr [esi + 8], edi
    // test eax, eax
    // mov dword ptr [esi + 0xc], ebp
    // if (...) GOTO(0x4b1762)
    // lea ebx, [eax + ebp]
    // mov ebp, 1
    // mov ecx, eax
    // shl ebp, cl
    // mov ecx, dword ptr [esp + 0x10]
    // dec ebp
    // and ebp, ecx
    // mov ecx, 0x18
    // sub ecx, ebx
    // shl ebp, cl
    // or ebp, edi
    // cmp ebx, 8
    // mov dword ptr [esp + 0x24], ebp
    // if (...) GOTO(0x4b175c)
    // mov ecx, dword ptr [esi]
    // xor eax, eax
    // mov al, byte ptr [esp + 0x26]
    // mov byte ptr [ecx], al
    // mov edx, dword ptr [esi]
    // mov ecx, dword ptr [esi + 4]
    // inc edx
    // dec ecx
    // mov dword ptr [esp + 0x24], eax
    // mov dword ptr [esi], edx
    // mov dword ptr [esi + 4], ecx
    // if (...) GOTO(0x4b1722)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b19c4)
    // mov eax, dword ptr [esp + 0x24]
    // cmp eax, 0xff
    // if (...) GOTO(0x4b174d)
    // mov edx, dword ptr [esi]
    // mov byte ptr [edx], 0
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b174d)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b19c4)
    // sub ebx, 8
    // shl ebp, 8
    // cmp ebx, 8
    // mov dword ptr [esp + 0x24], ebp
    // if (...) GOTO(0x4b16f1)
    // mov dword ptr [esi + 8], ebp
    // mov dword ptr [esi + 0xc], ebx
    // xor eax, eax
    // mov edx, 0x4bd0b0
    // mov dword ptr [esp + 0x24], eax
    // mov dword ptr [esp + 0x14], edx
    // mov ecx, dword ptr [edx]
    // mov edi, dword ptr [esp + 0x20]
    // movsx ecx, word ptr [edi + ecx*2]
    // test ecx, ecx
    // mov dword ptr [esp + 0x1c], ecx
    // if (...) GOTO(0x4b178d)
    // inc eax
    // mov dword ptr [esp + 0x24], eax
    // if (...) GOTO(0x4b1991)
    // cmp eax, 0xf
    // if (...) GOTO(0x4b1874)
    // mov eax, dword ptr [esp + 0x2c]
    // mov ebp, dword ptr [esi + 0xc]
    // movsx ebx, byte ptr [eax + 0x4f0]
    // mov edx, dword ptr [eax + 0x3c0]
    // test ebx, ebx
    // mov dword ptr [esp + 0x28], edx
    // if (...) GOTO(0x4b17c9)
    // mov eax, dword ptr [esi + 0x20]
    // mov ecx, dword ptr [eax]
    // mov dword ptr [ecx + 0x14], 0x27
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov edx, dword ptr [eax]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x28]
    // mov edi, 1
    // mov ecx, ebx
    // add ebp, ebx
    // shl edi, cl
    // mov ecx, 0x18
    // sub ecx, ebp
    // dec edi
    // and edi, eax
    // shl edi, cl
    // mov ecx, dword ptr [esi + 8]
    // or edi, ecx
    // cmp ebp, 8
    // mov dword ptr [esp + 0x28], edi
    // if (...) GOTO(0x4b1856)
    // mov eax, dword ptr [esi]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x2a]
    // mov byte ptr [eax], bl
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b181b)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b19c4)
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b1847)
    // mov ecx, dword ptr [esi]
    // mov byte ptr [ecx], 0
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b1847)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b19c4)
    // sub ebp, 8
    // shl edi, 8
    // cmp ebp, 8
    // mov dword ptr [esp + 0x28], edi
    // if (...) GOTO(0x4b17f2)
    // mov eax, dword ptr [esp + 0x24]
    // mov dword ptr [esi + 8], edi
    // sub eax, 0x10
    // mov dword ptr [esi + 0xc], ebp
    // cmp eax, 0xf
    // mov dword ptr [esp + 0x24], eax
    // if (...) GOTO(0x4b1796)
    // mov ecx, dword ptr [esp + 0x1c]
    // test ecx, ecx
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x4b188f)
    // neg ecx
    // mov dword ptr [esp + 0x1c], ecx
    // mov ecx, dword ptr [esp + 0x10]
    // dec ecx
    // mov dword ptr [esp + 0x10], ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // mov edx, 1
    // sar ecx, 1
    // mov dword ptr [esp + 0x24], edx
    // if (...) GOTO(0x4b18a5)
    // inc edx
    // sar ecx, 1
    // if (...) GOTO(0x4b189c)
    // mov dword ptr [esp + 0x24], edx
    // mov ecx, dword ptr [esp + 0x2c]
    // mov ebp, dword ptr [esi + 0xc]
    // shl eax, 4
    // add eax, edx
    // movsx ebx, byte ptr [eax + ecx + 0x400]
    // mov edx, dword ptr [ecx + eax*4]
    // test ebx, ebx
    // mov dword ptr [esp + 0x28], edx
    // if (...) GOTO(0x4b18db)
    // mov eax, dword ptr [esi + 0x20]
    // mov ecx, dword ptr [eax]
    // mov dword ptr [ecx + 0x14], 0x27
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov edx, dword ptr [eax]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x28]
    // mov edi, 1
    // mov ecx, ebx
    // add ebp, ebx
    // shl edi, cl
    // mov ecx, 0x18
    // sub ecx, ebp
    // dec edi
    // and edi, eax
    // shl edi, cl
    // mov ecx, dword ptr [esi + 8]
    // or edi, ecx
    // cmp ebp, 8
    // mov dword ptr [esp + 0x28], edi
    // if (...) GOTO(0x4b1964)
    // mov eax, dword ptr [esi]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x2a]
    // mov byte ptr [eax], bl
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b192d)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b19c4)
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b1955)
    // mov ecx, dword ptr [esi]
    // mov byte ptr [ecx], 0
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b1955)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b19c4)
    // sub ebp, 8
    // shl edi, 8
    // cmp ebp, 8
    // mov dword ptr [esp + 0x28], edi
    // if (...) GOTO(0x4b1904)
    // mov edx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esp + 0x10]
    // push edx
    // push eax
    // push esi
    // mov dword ptr [esi + 8], edi
    // mov dword ptr [esi + 0xc], ebp
    // CALL(0x4b1a10)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4b19c4)
    // mov edx, dword ptr [esp + 0x14]
    // mov dword ptr [esp + 0x24], 0
    // mov eax, dword ptr [esp + 0x24]
    // add edx, 4
    // cmp edx, 0x4bd1ac
    // mov dword ptr [esp + 0x14], edx
    // if (...) GOTO(0x4b1771)
    // test eax, eax
    // if (...) GOTO(0x4b19ce)
    // mov eax, dword ptr [esp + 0x2c]
    // movsx ecx, byte ptr [eax + 0x400]
    // mov edx, dword ptr [eax]
    // push ecx
    // push edx
    // push esi
    // CALL(0x4b1a10)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4b19ce)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // add esp, 8
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // add esp, 8
    // return;
    // CALL(0x405099)
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // mov eax, dword ptr [edi + 0x20]
    // push eax
    // mov esi, dword ptr [eax + 0x14]
    // CALL(dword)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b19fa)
    // pop edi
    // pop esi
    // return;
    // mov eax, dword ptr [esi]
    // mov dword ptr [edi], eax
    // mov ecx, dword ptr [esi + 4]
    // mov dword ptr [edi + 4], ecx
    // pop edi
    // mov eax, 1
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 0x10]
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x10]
    // push edi
    // test ebx, ebx
    // mov ebp, dword ptr [esi + 0xc]
    // if (...) GOTO(0x4b1a3a)
    // mov eax, dword ptr [esi + 0x20]
    // mov ecx, dword ptr [eax]
    // mov dword ptr [ecx + 0x14], 0x27
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov edx, dword ptr [eax]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x18]
    // mov edi, 1
    // mov ecx, ebx
    // add ebp, ebx
    // shl edi, cl
    // mov ecx, 0x18
    // sub ecx, ebp
    // dec edi
    // and edi, eax
    // shl edi, cl
    // mov ecx, dword ptr [esi + 8]
    // or edi, ecx
    // cmp ebp, 8
    // mov dword ptr [esp + 0x14], edi
    // if (...) GOTO(0x4b1abf)
    // mov eax, dword ptr [esi]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x16]
    // mov byte ptr [eax], bl
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b1a88)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b1acf)
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b1ab0)
    // mov ecx, dword ptr [esi]
    // mov byte ptr [ecx], 0
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b1ab0)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b1acf)
    // sub ebp, 8
    // shl edi, 8
    // cmp ebp, 8
    // mov dword ptr [esp + 0x14], edi
    // if (...) GOTO(0x4b1a63)
    // mov dword ptr [esi + 8], edi
    // mov dword ptr [esi + 0xc], ebp
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push esi
    // CALL(0x4b1b70)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b1af4)
    // pop esi
    // return;
    // mov eax, dword ptr [esi]
    // mov byte ptr [eax], 0xff
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b1b16)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b1b16)
    // pop esi
    // return;
    // mov cl, byte ptr [esp + 0xc]
    // mov edx, dword ptr [esi]
    // sub cl, 0x30
    // mov byte ptr [edx], cl
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b1b3e)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b1b3e)
    // pop esi
    // return;
    // mov ecx, dword ptr [esi + 0x20]
    // xor eax, eax
    // mov edx, dword ptr [ecx + 0xec]
    // test edx, edx
    // if (...) GOTO(0x4b1b65)
    // lea ecx, [esi + 0x10]
    // mov dword ptr [ecx], 0
    // mov edx, dword ptr [esi + 0x20]
    // inc eax
    // add ecx, 4
    // cmp eax, dword ptr [edx + 0xec]
    // if (...) GOTO(0x4b1b50)
    // mov eax, 1
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x10]
    // push edi
    // mov ecx, 0x18
    // mov edi, dword ptr [esi + 0xc]
    // mov ebp, 0x7f
    // add edi, 7
    // sub ecx, edi
    // shl ebp, cl
    // mov ecx, dword ptr [esi + 8]
    // or ebp, ecx
    // cmp edi, 8
    // mov dword ptr [esp + 0x14], ebp
    // if (...) GOTO(0x4b1bf6)
    // mov eax, dword ptr [esi]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x16]
    // mov byte ptr [eax], bl
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b1bbf)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b1c0e)
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b1be7)
    // mov ecx, dword ptr [esi]
    // mov byte ptr [ecx], 0
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esi + 4]
    // inc ecx
    // dec eax
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4b1be7)
    // push esi
    // CALL(0x4b19e0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b1c0e)
    // sub edi, 8
    // shl ebp, 8
    // cmp edi, 8
    // mov dword ptr [esp + 0x14], ebp
    // if (...) GOTO(0x4b1b9a)
    // xor eax, eax
    // mov dword ptr [esi + 8], ebp
    // mov dword ptr [esi + 0xc], edi
    // mov dword ptr [esi + 8], eax
    // mov dword ptr [esi + 0xc], eax
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x24
    // push ebx
    // mov ebx, dword ptr [esp + 0x2c]
    // push ebp
    // push esi
    // mov eax, dword ptr [ebx + 0x14]
    // mov ecx, dword ptr [ebx + 0x164]
    // push edi
    // lea edi, [esp + 0x18]
    // mov edx, dword ptr [eax]
    // lea ebp, [ecx + 0xc]
    // mov dword ptr [esp + 0x10], edx
    // mov eax, dword ptr [eax + 4]
    // mov ecx, 6
    // mov esi, ebp
    // mov dword ptr [esp + 0x14], eax
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // lea ecx, [esp + 0x10]
    // mov dword ptr [esp + 0x30], ebx
    // push ecx
    // CALL(0x4b1b70)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b1c77)
    // mov edx, dword ptr [ebx]
    // push ebx
    // mov dword ptr [edx + 0x14], 0x16
    // mov eax, dword ptr [ebx]
    // CALL(dword)
    // add esp, 4
    // mov ecx, dword ptr [ebx + 0x14]
    // mov edx, dword ptr [esp + 0x10]
    // lea esi, [esp + 0x18]
    // mov edi, ebp
    // mov dword ptr [ecx], edx
    // mov eax, dword ptr [ebx + 0x14]
    // mov ecx, dword ptr [esp + 0x14]
    // mov dword ptr [eax + 4], ecx
    // mov ecx, 6
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x24
    // return;
    // // nop
    // push ecx
    // push ebx
    // mov ebx, dword ptr [esp + 0xc]
    // push esi
    // mov eax, dword ptr [ebx + 0xc0]
    // mov esi, dword ptr [ebx + 0x164]
    // test eax, eax
    // if (...) GOTO(0x4b1ced)
    // mov eax, dword ptr [esi + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4b1cea)
    // mov ecx, dword ptr [ebx + 0xec]
    // xor eax, eax
    // test ecx, ecx
    // if (...) GOTO(0x4b1ce1)
    // lea ecx, [esi + 0x14]
    // mov dword ptr [ecx], 0
    // mov edx, dword ptr [ebx + 0xec]
    // inc eax
    // add ecx, 4
    // cmp eax, edx
    // if (...) GOTO(0x4b1ccd)
    // mov eax, dword ptr [ebx + 0xc0]
    // mov dword ptr [esi + 0x24], eax
    // dec dword ptr [esi + 0x24]
    // mov eax, dword ptr [ebx + 0x108]
    // mov dword ptr [esp + 8], 0
    // test eax, eax
    // if (...) GOTO(0x4b1d73)
    // lea ecx, [ebx + 0x10c]
    // push ebp
    // mov ebp, dword ptr [esp + 0x18]
    // push edi
    // mov dword ptr [esp + 0x18], ecx
    // mov edx, dword ptr [esp + 0x18]
    // mov edi, dword ptr [edx]
    // mov eax, dword ptr [ebx + edi*4 + 0xf0]
    // mov ecx, dword ptr [eax + 0x18]
    // mov eax, dword ptr [eax + 0x14]
    // mov edx, dword ptr [esi + ecx*4 + 0x5c]
    // mov ecx, dword ptr [esi + eax*4 + 0x4c]
    // mov eax, dword ptr [ebp]
    // push edx
    // mov edx, dword ptr [esi + edi*4 + 0x14]
    // push ecx
    // push edx
    // push eax
    // CALL(0x4b1d80)
    // mov ecx, dword ptr [ebp]
    // mov eax, dword ptr [esp + 0x20]
    // add esp, 0x10
    // inc eax
    // movsx edx, word ptr [ecx]
    // mov dword ptr [esi + edi*4 + 0x14], edx
    // mov edi, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [ebx + 0x108]
    // add edi, 4
    // add ebp, 4
    // cmp eax, ecx
    // mov dword ptr [esp + 0x10], eax
    // mov dword ptr [esp + 0x18], edi
    // if (...) GOTO(0x4b1d0f)
    // pop edi
    // pop ebp
    // pop esi
    // mov eax, 1
    // pop ebx
    // pop ecx
    // return;
    // pop esi
    // mov eax, 1
    // pop ebx
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 8]
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push ebp
    // push esi
    // push edi
    // movsx ecx, word ptr [ebx]
    // sub ecx, eax
    // jns 0x4b1d95
    // neg ecx
    // xor eax, eax
    // test ecx, ecx
    // if (...) GOTO(0x4b1da0)
    // inc eax
    // sar ecx, 1
    // if (...) GOTO(0x4b1d9b)
    // mov ecx, dword ptr [esp + 0x1c]
    // mov esi, dword ptr [esp + 0x20]
    // mov edi, 0x4bd0b0
    // mov edx, dword ptr [ecx + eax*4]
    // inc edx
    // mov dword ptr [ecx + eax*4], edx
    // xor edx, edx
    // mov eax, dword ptr [edi]
    // movsx eax, word ptr [ebx + eax*2]
    // test eax, eax
    // if (...) GOTO(0x4b1dc3)
    // inc edx
    // if (...) GOTO(0x4b1e0a)
    // cmp edx, 0xf
    // if (...) GOTO(0x4b1de6)
    // mov ecx, edx
    // shr ecx, 4
    // mov ebp, ecx
    // neg ebp
    // shl ebp, 4
    // add edx, ebp
    // mov ebp, dword ptr [esi + 0x3c0]
    // inc ebp
    // dec ecx
    // if (...) GOTO(0x4b1ddc)
    // mov dword ptr [esi + 0x3c0], ebp
    // test eax, eax
    // if (...) GOTO(0x4b1dec)
    // neg eax
    // sar eax, 1
    // mov ecx, 1
    // if (...) GOTO(0x4b1dfa)
    // inc ecx
    // sar eax, 1
    // if (...) GOTO(0x4b1df5)
    // shl edx, 4
    // add edx, ecx
    // mov ecx, dword ptr [esi + edx*4]
    // inc ecx
    // lea eax, [esi + edx*4]
    // xor edx, edx
    // mov dword ptr [eax], ecx
    // add edi, 4
    // cmp edi, 0x4bd1ac
    // if (...) GOTO(0x4b1db6)
    // test edx, edx
    // if (...) GOTO(0x4b1e1b)
    // inc dword ptr [esi]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // sub esp, 0x28
    // push esi
    // mov esi, dword ptr [esp + 0x30]
    // xor ecx, ecx
    // xor edx, edx
    // mov eax, dword ptr [esi + 0x164]
    // mov dword ptr [esp + 0xc], ecx
    // mov dword ptr [esp + 0x1c], edx
    // mov dword ptr [esp + 4], eax
    // mov eax, dword ptr [esi + 0xec]
    // mov dword ptr [esp + 0x10], ecx
    // mov dword ptr [esp + 0x20], edx
    // mov dword ptr [esp + 0x14], ecx
    // mov dword ptr [esp + 0x24], edx
    // mov dword ptr [esp + 0x18], ecx
    // test eax, eax
    // mov dword ptr [esp + 0x28], edx
    // mov dword ptr [esp + 8], edx
    // if (...) GOTO(0x4b1f23)
    // push ebx
    // lea eax, [esi + 0xf0]
    // push ebp
    // push edi
    // mov dword ptr [esp + 0x3c], eax
    // mov ecx, dword ptr [esp + 0x3c]
    // mov eax, dword ptr [ecx]
    // mov edi, dword ptr [eax + 0x14]
    // mov ebx, dword ptr [eax + 0x18]
    // mov eax, dword ptr [esp + edi*4 + 0x18]
    // lea ebp, [esp + edi*4 + 0x18]
    // test eax, eax
    // if (...) GOTO(0x4b1ec0)
    // mov eax, dword ptr [esi + edi*4 + 0x50]
    // test eax, eax
    // if (...) GOTO(0x4b1ea2)
    // push esi
    // CALL(0x4afad0)
    // add esp, 4
    // mov dword ptr [esi + edi*4 + 0x50], eax
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esi + edi*4 + 0x50]
    // mov eax, dword ptr [edx + edi*4 + 0x4c]
    // push eax
    // push ecx
    // push esi
    // CALL(0x4b1080)
    // add esp, 0xc
    // mov dword ptr [ebp], 1
    // mov eax, dword ptr [esp + ebx*4 + 0x28]
    // lea edi, [esp + ebx*4 + 0x28]
    // test eax, eax
    // if (...) GOTO(0x4b1efe)
    // mov eax, dword ptr [esi + ebx*4 + 0x60]
    // test eax, eax
    // if (...) GOTO(0x4b1ee1)
    // push esi
    // CALL(0x4afad0)
    // add esp, 4
    // mov dword ptr [esi + ebx*4 + 0x60], eax
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esi + ebx*4 + 0x60]
    // mov eax, dword ptr [edx + ebx*4 + 0x5c]
    // push eax
    // push ecx
    // push esi
    // CALL(0x4b1080)
    // add esp, 0xc
    // mov dword ptr [edi], 1
    // mov eax, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x3c]
    // mov ecx, dword ptr [esi + 0xec]
    // inc eax
    // add edx, 4
    // cmp eax, ecx
    // mov dword ptr [esp + 0x14], eax
    // mov dword ptr [esp + 0x3c], edx
    // if (...) GOTO(0x4b1e75)
    // pop edi
    // pop ebp
    // pop ebx
    // pop esi
    // add esp, 0x28
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push(0x6c)
    // push 1
    // mov eax, dword ptr [esi + 4]
    // push esi
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [esi + 0x164], eax
    // mov dword ptr [eax], 0x4b1f70
    // lea ecx, [eax + 0x5c]
    // mov edx, 4
    // xor esi, esi
    // mov dword ptr [ecx - 0x10], esi
    // mov dword ptr [ecx], esi
    // add ecx, 4
    // dec edx
    // if (...) GOTO(0x4b1f58)
    // mov dword ptr [eax + 0x40], esi
    // pop esi
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // sub esp, 8
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x18]
    // push edi
    // mov edi, dword ptr [esp + 0x20]
    // mov ebx, dword ptr [esi + 0x164]
    // xor ebp, ebp
    // xor eax, eax
    // mov dword ptr [ebx + 0x20], esi
    // mov dword ptr [ebx + 0xc], edi
    // mov edx, dword ptr [esi + 0x134]
    // mov ecx, dword ptr [esi + 0x13c]
    // cmp edx, ebp
    // sete al
    // cmp ecx, ebp
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4b1fbe)
    // cmp eax, ebp
    // if (...) GOTO(0x4b1fb5)
    // mov dword ptr [ebx + 4], 0x4b2140
    // if (...) GOTO(0x4b1fec)
    // mov dword ptr [ebx + 4], 0x4b28c0
    // if (...) GOTO(0x4b1fec)
    // cmp eax, ebp
    // if (...) GOTO(0x4b1fcb)
    // mov dword ptr [ebx + 4], 0x4b2d30
    // if (...) GOTO(0x4b1fec)
    // mov eax, dword ptr [ebx + 0x40]
    // mov dword ptr [ebx + 4], 0x4b2eb0
    // cmp eax, ebp
    // if (...) GOTO(0x4b1fec)
    // mov eax, dword ptr [esi + 4]
    // push(0x3e8)
    // push 1
    // push esi
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [ebx + 0x40], eax
    // cmp edi, ebp
    // if (...) GOTO(0x4b1ff9)
    // mov dword ptr [ebx + 8], 0x4b33c0
    // if (...) GOTO(0x4b2000)
    // mov dword ptr [ebx + 8], 0x4b3380
    // mov eax, dword ptr [esi + 0xec]
    // mov dword ptr [esp + 0x14], ebp
    // cmp eax, ebp
    // if (...) GOTO(0x4b2116)
    // lea ecx, [ebx + 0x24]
    // lea ebp, [esi + 0xf0]
    // mov dword ptr [esp + 0x1c], ecx
    // mov edx, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x10]
    // mov eax, dword ptr [ebp]
    // test ecx, ecx
    // mov dword ptr [edx], 0
    // if (...) GOTO(0x4b2060)
    // mov ecx, dword ptr [esi + 0x13c]
    // test ecx, ecx
    // if (...) GOTO(0x4b20ef)
    // mov edi, dword ptr [eax + 0x14]
    // test edi, edi
    // if (...) GOTO(0x4b207f)
    // cmp edi, 4
    // if (...) GOTO(0x4b207f)
    // mov eax, dword ptr [esi + edi*4 + 0x50]
    // test eax, eax
    // if (...) GOTO(0x4b2095)
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x4b209d)
    // if (...) GOTO(0x4b207f)
    // mov edi, dword ptr [eax + 0x18]
    // test edi, edi
    // mov dword ptr [ebx + 0x34], edi
    // if (...) GOTO(0x4b207f)
    // cmp edi, 4
    // if (...) GOTO(0x4b207f)
    // mov eax, dword ptr [esi + edi*4 + 0x60]
    // test eax, eax
    // if (...) GOTO(0x4b2095)
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x4b209d)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x31
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x18], edi
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x4b20c8)
    // mov eax, dword ptr [ebx + edi*4 + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x4b20b9)
    // mov eax, dword ptr [esi + 4]
    // push(0x404)
    // push 1
    // push esi
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [ebx + edi*4 + 0x5c], eax
    // mov edi, dword ptr [ebx + edi*4 + 0x5c]
    // mov ecx, 0x101
    // xor eax, eax
    // rep stosd dword ptr es:[edi], eax
    // if (...) GOTO(0x4b20ef)
    // mov eax, dword ptr [esp + 0x10]
    // test eax, eax
    // if (...) GOTO(0x4b20dc)
    // mov edx, dword ptr [esi + edi*4 + 0x50]
    // lea ecx, [ebx + edi*4 + 0x4c]
    // push ecx
    // push edx
    // if (...) GOTO(0x4b20e6)
    // mov ecx, dword ptr [esi + edi*4 + 0x60]
    // lea eax, [ebx + edi*4 + 0x4c]
    // push eax
    // push ecx
    // push esi
    // CALL(0x4b0f60)
    // add esp, 0xc
    // mov eax, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esi + 0xec]
    // inc eax
    // add ebp, 4
    // add edx, 4
    // cmp eax, ecx
    // mov dword ptr [esp + 0x14], eax
    // mov dword ptr [esp + 0x1c], edx
    // if (...) GOTO(0x4b201f)
    // xor ebp, ebp
    // mov dword ptr [ebx + 0x38], ebp
    // mov dword ptr [ebx + 0x3c], ebp
    // mov dword ptr [ebx + 0x18], ebp
    // mov dword ptr [ebx + 0x1c], ebp
    // mov edx, dword ptr [esi + 0xc0]
    // pop edi
    // mov dword ptr [ebx + 0x48], ebp
    // pop esi
    // mov dword ptr [ebx + 0x44], edx
    // pop ebp
    // pop ebx
    // add esp, 8
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x18
    // push ebx
    // mov ebx, dword ptr [esp + 0x20]
    // push esi
    // push edi
    // mov eax, dword ptr [ebx + 0x14]
    // mov esi, dword ptr [ebx + 0x164]
    // mov edi, dword ptr [ebx + 0x140]
    // mov ecx, dword ptr [eax]
    // mov dword ptr [esi + 0x10], ecx
    // mov edx, dword ptr [ebx + 0x14]
    // mov eax, dword ptr [edx + 4]
    // mov dword ptr [esi + 0x14], eax
    // mov eax, dword ptr [ebx + 0xc0]
    // test eax, eax
    // if (...) GOTO(0x4b2185)
    // mov eax, dword ptr [esi + 0x44]
    // test eax, eax
    // if (...) GOTO(0x4b2185)
    // mov ecx, dword ptr [esi + 0x48]
    // push ecx
    // push esi
    // CALL(0x4b2460)
    // add esp, 8
    // mov eax, dword ptr [ebx + 0x108]
    // mov dword ptr [esp + 0x1c], 0
    // test eax, eax
    // if (...) GOTO(0x4b23e0)
    // mov eax, dword ptr [esp + 0x2c]
    // lea ecx, [ebx + 0x10c]
    // movsx edx, di
    // push ebp
    // mov dword ptr [esp + 0x24], edx
    // mov dword ptr [esp + 0x1c], eax
    // mov dword ptr [esp + 0x18], ecx
    // mov eax, dword ptr [esp + 0x1c]
    // mov edx, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [eax]
    // mov edi, dword ptr [edx]
    // movsx edx, word ptr [ecx]
    // mov cl, byte ptr [esp + 0x24]
    // mov ebp, dword ptr [ebx + edi*4 + 0xf0]
    // sar edx, cl
    // mov ecx, dword ptr [esi + edi*4 + 0x24]
    // mov eax, edx
    // mov dword ptr [esi + edi*4 + 0x24], edx
    // sub eax, ecx
    // mov dword ptr [esp + 0x14], eax
    // jns 0x4b21ee
    // mov ecx, dword ptr [esp + 0x14]
    // neg eax
    // dec ecx
    // mov dword ptr [esp + 0x14], ecx
    // xor edi, edi
    // test eax, eax
    // mov dword ptr [esp + 0x10], edi
    // if (...) GOTO(0x4b2201)
    // inc edi
    // sar eax, 1
    // if (...) GOTO(0x4b21f8)
    // mov dword ptr [esp + 0x10], edi
    // mov ecx, dword ptr [esi + 0xc]
    // mov eax, dword ptr [ebp + 0x14]
    // test ecx, ecx
    // if (...) GOTO(0x4b221d)
    // mov edx, dword ptr [esi + eax*4 + 0x5c]
    // mov ecx, dword ptr [edx + edi*4]
    // lea eax, [edx + edi*4]
    // inc ecx
    // mov dword ptr [eax], ecx
    // if (...) GOTO(0x4b22f8)
    // mov eax, dword ptr [esi + eax*4 + 0x4c]
    // mov ebx, dword ptr [esi + 0x1c]
    // movsx ebp, byte ptr [eax + edi + 0x400]
    // mov eax, dword ptr [eax + edi*4]
    // test ebp, ebp
    // mov dword ptr [esp + 0x30], eax
    // if (...) GOTO(0x4b224e)
    // mov ecx, dword ptr [esi + 0x20]
    // mov edx, dword ptr [ecx]
    // mov dword ptr [edx + 0x14], 0x27
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov ecx, dword ptr [eax]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b22f4)
    // mov eax, dword ptr [esp + 0x30]
    // mov edi, 1
    // mov ecx, ebp
    // add ebx, ebp
    // shl edi, cl
    // mov ecx, 0x18
    // sub ecx, ebx
    // dec edi
    // and edi, eax
    // shl edi, cl
    // mov ecx, dword ptr [esi + 0x18]
    // or edi, ecx
    // cmp ebx, 8
    // mov dword ptr [esp + 0x30], edi
    // if (...) GOTO(0x4b22ea)
    // mov ebp, ebx
    // shr ebp, 3
    // mov edx, ebp
    // neg edx
    // lea ebx, [ebx + edx*8]
    // mov ecx, dword ptr [esi + 0x10]
    // xor eax, eax
    // mov al, byte ptr [esp + 0x32]
    // mov byte ptr [ecx], al
    // mov edx, dword ptr [esi + 0x10]
    // mov ecx, dword ptr [esi + 0x14]
    // inc edx
    // dec ecx
    // mov dword ptr [esp + 0x30], eax
    // mov dword ptr [esi + 0x10], edx
    // mov dword ptr [esi + 0x14], ecx
    // if (...) GOTO(0x4b22ba)
    // push esi
    // CALL(0x4b2420)
    // mov eax, dword ptr [esp + 0x34]
    // add esp, 4
    // cmp eax, 0xff
    // if (...) GOTO(0x4b22e0)
    // mov edx, dword ptr [esi + 0x10]
    // mov byte ptr [edx], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b22e0)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // shl edi, 8
    // dec ebp
    // mov dword ptr [esp + 0x30], edi
    // if (...) GOTO(0x4b228e)
    // mov dword ptr [esi + 0x18], edi
    // mov edi, dword ptr [esp + 0x10]
    // mov dword ptr [esi + 0x1c], ebx
    // mov ebx, dword ptr [esp + 0x2c]
    // test edi, edi
    // if (...) GOTO(0x4b23af)
    // mov eax, dword ptr [esi + 0xc]
    // mov ebp, dword ptr [esi + 0x1c]
    // test eax, eax
    // if (...) GOTO(0x4b23af)
    // mov ecx, dword ptr [esp + 0x10]
    // add ebp, edi
    // mov edi, 1
    // shl edi, cl
    // mov ecx, dword ptr [esp + 0x14]
    // dec edi
    // and edi, ecx
    // mov ecx, 0x18
    // sub ecx, ebp
    // shl edi, cl
    // mov ecx, dword ptr [esi + 0x18]
    // or edi, ecx
    // cmp ebp, 8
    // mov dword ptr [esp + 0x30], edi
    // if (...) GOTO(0x4b23a9)
    // mov eax, ebp
    // shr eax, 3
    // mov dword ptr [esp + 0x14], eax
    // neg eax
    // lea ebp, [ebp + eax*8]
    // mov eax, dword ptr [esi + 0x10]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x32]
    // mov byte ptr [eax], bl
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b236c)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b2393)
    // mov ecx, dword ptr [esi + 0x10]
    // mov byte ptr [ecx], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b2393)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x14]
    // shl edi, 8
    // dec eax
    // mov dword ptr [esp + 0x30], edi
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4b2348)
    // mov ebx, dword ptr [esp + 0x2c]
    // mov dword ptr [esi + 0x18], edi
    // mov dword ptr [esi + 0x1c], ebp
    // mov edi, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [esp + 0x20]
    // mov ecx, 4
    // add edi, ecx
    // add edx, ecx
    // mov ecx, dword ptr [ebx + 0x108]
    // inc eax
    // cmp eax, ecx
    // mov dword ptr [esp + 0x20], eax
    // mov dword ptr [esp + 0x18], edi
    // mov dword ptr [esp + 0x1c], edx
    // if (...) GOTO(0x4b21b5)
    // pop ebp
    // mov edx, dword ptr [ebx + 0x14]
    // mov eax, dword ptr [esi + 0x10]
    // mov dword ptr [edx], eax
    // mov ecx, dword ptr [ebx + 0x14]
    // mov edx, dword ptr [esi + 0x14]
    // mov dword ptr [ecx + 4], edx
    // mov ebx, dword ptr [ebx + 0xc0]
    // test ebx, ebx
    // if (...) GOTO(0x4b2412)
    // mov eax, dword ptr [esi + 0x44]
    // test eax, eax
    // if (...) GOTO(0x4b240f)
    // mov eax, dword ptr [esi + 0x48]
    // mov dword ptr [esi + 0x44], ebx
    // inc eax
    // and eax, 7
    // mov dword ptr [esi + 0x48], eax
    // dec dword ptr [esi + 0x44]
    // pop edi
    // pop esi
    // mov eax, 1
    // pop ebx
    // add esp, 0x18
    // return;
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov edi, dword ptr [eax + 0x14]
    // CALL(dword)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b244e)
    // mov eax, dword ptr [esi + 0x20]
    // mov ecx, dword ptr [eax]
    // mov dword ptr [ecx + 0x14], 0x16
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov edx, dword ptr [eax]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [edi]
    // mov dword ptr [esi + 0x10], eax
    // mov ecx, dword ptr [edi + 4]
    // mov dword ptr [esi + 0x14], ecx
    // pop edi
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push esi
    // CALL(0x4b25d0)
    // mov eax, dword ptr [esi + 0xc]
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x4b24c2)
    // push esi
    // CALL(0x4b2510)
    // mov eax, dword ptr [esi + 0x10]
    // add esp, 4
    // mov byte ptr [eax], 0xff
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b249d)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov cl, byte ptr [esp + 0xc]
    // mov edx, dword ptr [esi + 0x10]
    // sub cl, 0x30
    // mov byte ptr [edx], cl
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b24c2)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov ecx, dword ptr [esi + 0x20]
    // mov eax, dword ptr [ecx + 0x134]
    // test eax, eax
    // if (...) GOTO(0x4b24f5)
    // mov edx, dword ptr [ecx + 0xec]
    // xor eax, eax
    // test edx, edx
    // if (...) GOTO(0x4b2503)
    // lea ecx, [esi + 0x24]
    // mov dword ptr [ecx], 0
    // mov edx, dword ptr [esi + 0x20]
    // inc eax
    // add ecx, 4
    // cmp eax, dword ptr [edx + 0xec]
    // if (...) GOTO(0x4b24de)
    // pop esi
    // return;
    // mov dword ptr [esi + 0x38], 0
    // mov dword ptr [esi + 0x3c], 0
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ecx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // xor eax, eax
    // cmp dword ptr [esi + 0xc], eax
    // if (...) GOTO(0x4b25c5)
    // push ebp
    // push edi
    // mov edi, dword ptr [esi + 0x1c]
    // mov edx, dword ptr [esi + 0x18]
    // add edi, 7
    // mov ecx, 0x18
    // sub ecx, edi
    // mov ebp, 0x7f
    // shl ebp, cl
    // or ebp, edx
    // cmp edi, 8
    // mov dword ptr [esp + 0x14], ebp
    // if (...) GOTO(0x4b25b4)
    // mov eax, edi
    // push ebx
    // shr eax, 3
    // mov dword ptr [esp + 0x10], eax
    // neg eax
    // lea edi, [edi + eax*8]
    // mov eax, dword ptr [esi + 0x10]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x1a]
    // mov byte ptr [eax], bl
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b2578)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b259f)
    // mov ecx, dword ptr [esi + 0x10]
    // mov byte ptr [ecx], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b259f)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x10]
    // shl ebp, 8
    // dec eax
    // mov dword ptr [esp + 0x18], ebp
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4b2554)
    // xor eax, eax
    // pop ebx
    // mov dword ptr [esi + 0x1c], edi
    // mov dword ptr [esi + 0x18], ebp
    // pop edi
    // mov dword ptr [esi + 0x18], eax
    // mov dword ptr [esi + 0x1c], eax
    // pop ebp
    // pop esi
    // pop ecx
    // return;
    // mov dword ptr [esi + 0x18], eax
    // mov dword ptr [esi + 0x1c], eax
    // pop esi
    // pop ecx
    // return;
    // // nop
    // // nop
    // push ecx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // mov eax, dword ptr [esi + 0x38]
    // test eax, eax
    // jbe 0x4b27bf
    // push ebx
    // push ebp
    // push edi
    // xor edi, edi
    // sar eax, 1
    // mov dword ptr [esp + 0x10], edi
    // if (...) GOTO(0x4b25f7)
    // inc edi
    // sar eax, 1
    // if (...) GOTO(0x4b25ee)
    // mov dword ptr [esp + 0x10], edi
    // mov edx, dword ptr [esi + 0xc]
    // mov ecx, dword ptr [esi + 0x34]
    // mov eax, edi
    // shl eax, 4
    // test edx, edx
    // if (...) GOTO(0x4b2614)
    // mov ecx, dword ptr [esi + ecx*4 + 0x5c]
    // lea eax, [ecx + eax*4]
    // inc dword ptr [eax]
    // if (...) GOTO(0x4b26eb)
    // mov ecx, dword ptr [esi + ecx*4 + 0x4c]
    // mov ebx, dword ptr [esi + 0x1c]
    // movsx ebp, byte ptr [ecx + eax + 0x400]
    // mov edx, dword ptr [ecx + eax*4]
    // test ebp, ebp
    // mov dword ptr [esp + 0x18], edx
    // if (...) GOTO(0x4b2645)
    // mov eax, dword ptr [esi + 0x20]
    // mov ecx, dword ptr [eax]
    // mov dword ptr [ecx + 0x14], 0x27
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov edx, dword ptr [eax]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b26eb)
    // mov eax, dword ptr [esp + 0x18]
    // mov edi, 1
    // mov ecx, ebp
    // add ebx, ebp
    // shl edi, cl
    // mov ecx, 0x18
    // sub ecx, ebx
    // dec edi
    // and edi, eax
    // shl edi, cl
    // mov ecx, dword ptr [esi + 0x18]
    // or edi, ecx
    // cmp ebx, 8
    // mov dword ptr [esp + 0x18], edi
    // if (...) GOTO(0x4b26e1)
    // mov ebp, ebx
    // shr ebp, 3
    // mov eax, ebp
    // neg eax
    // lea ebx, [ebx + eax*8]
    // mov ecx, dword ptr [esi + 0x10]
    // xor eax, eax
    // mov al, byte ptr [esp + 0x1a]
    // mov byte ptr [ecx], al
    // mov edx, dword ptr [esi + 0x10]
    // mov ecx, dword ptr [esi + 0x14]
    // inc edx
    // dec ecx
    // mov dword ptr [esp + 0x18], eax
    // mov dword ptr [esi + 0x10], edx
    // mov dword ptr [esi + 0x14], ecx
    // if (...) GOTO(0x4b26b1)
    // push esi
    // CALL(0x4b2420)
    // mov eax, dword ptr [esp + 0x1c]
    // add esp, 4
    // cmp eax, 0xff
    // if (...) GOTO(0x4b26d7)
    // mov edx, dword ptr [esi + 0x10]
    // mov byte ptr [edx], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b26d7)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // shl edi, 8
    // dec ebp
    // mov dword ptr [esp + 0x18], edi
    // if (...) GOTO(0x4b2685)
    // mov dword ptr [esi + 0x18], edi
    // mov edi, dword ptr [esp + 0x10]
    // mov dword ptr [esi + 0x1c], ebx
    // test edi, edi
    // if (...) GOTO(0x4b279d)
    // mov ecx, dword ptr [esi + 0xc]
    // mov eax, dword ptr [esi + 0x38]
    // mov ebp, dword ptr [esi + 0x1c]
    // test ecx, ecx
    // if (...) GOTO(0x4b279d)
    // mov ecx, dword ptr [esp + 0x10]
    // add ebp, edi
    // mov edi, 1
    // shl edi, cl
    // mov ecx, 0x18
    // sub ecx, ebp
    // dec edi
    // and edi, eax
    // shl edi, cl
    // mov ecx, dword ptr [esi + 0x18]
    // or edi, ecx
    // cmp ebp, 8
    // mov dword ptr [esp + 0x18], edi
    // if (...) GOTO(0x4b2797)
    // mov eax, ebp
    // shr eax, 3
    // mov dword ptr [esp + 0x10], eax
    // neg eax
    // lea ebp, [ebp + eax*8]
    // mov eax, dword ptr [esi + 0x10]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x1a]
    // mov byte ptr [eax], bl
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b275e)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b2785)
    // mov ecx, dword ptr [esi + 0x10]
    // mov byte ptr [ecx], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b2785)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x10]
    // shl edi, 8
    // dec eax
    // mov dword ptr [esp + 0x18], edi
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4b273a)
    // mov dword ptr [esi + 0x18], edi
    // mov dword ptr [esi + 0x1c], ebp
    // mov edx, dword ptr [esi + 0x3c]
    // mov eax, dword ptr [esi + 0x40]
    // push edx
    // push eax
    // push esi
    // mov dword ptr [esi + 0x38], 0
    // CALL(0x4b27d0)
    // add esp, 0xc
    // mov dword ptr [esi + 0x3c], 0
    // pop edi
    // pop ebp
    // pop ebx
    // pop esi
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ecx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // mov eax, dword ptr [esi + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b28b1)
    // mov eax, dword ptr [esp + 0x14]
    // test eax, eax
    // jbe 0x4b28b1
    // push ebx
    // push ebp
    // push edi
    // mov dword ptr [esp + 0x10], eax
    // mov eax, dword ptr [esi + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b2896)
    // mov eax, dword ptr [esp + 0x1c]
    // mov edi, dword ptr [esi + 0x1c]
    // inc edi
    // mov ecx, 0x18
    // mov dl, byte ptr [eax]
    // sub ecx, edi
    // and edx, 1
    // shl edx, cl
    // mov ecx, dword ptr [esi + 0x18]
    // or edx, ecx
    // cmp edi, 8
    // mov ebp, edx
    // mov dword ptr [esp + 0x18], ebp
    // if (...) GOTO(0x4b2890)
    // mov eax, edi
    // shr eax, 3
    // mov dword ptr [esp + 0x20], eax
    // neg eax
    // lea edi, [edi + eax*8]
    // mov eax, dword ptr [esi + 0x10]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x1a]
    // mov byte ptr [eax], bl
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b2857)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b287e)
    // mov ecx, dword ptr [esi + 0x10]
    // mov byte ptr [ecx], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b287e)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x20]
    // shl ebp, 8
    // dec eax
    // mov dword ptr [esp + 0x18], ebp
    // mov dword ptr [esp + 0x20], eax
    // if (...) GOTO(0x4b2833)
    // mov dword ptr [esi + 0x18], ebp
    // mov dword ptr [esi + 0x1c], edi
    // mov ecx, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [esp + 0x10]
    // inc ecx
    // dec eax
    // mov dword ptr [esp + 0x1c], ecx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4b27f4)
    // pop edi
    // pop ebp
    // pop ebx
    // pop esi
    // pop ecx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x24
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0x30]
    // push esi
    // mov ecx, dword ptr [ebp + 0x14]
    // mov esi, dword ptr [ebp + 0x164]
    // mov eax, dword ptr [ebp + 0x140]
    // mov ebx, dword ptr [ebp + 0x138]
    // mov edx, dword ptr [ecx]
    // mov dword ptr [esp + 0x18], eax
    // mov dword ptr [esi + 0x10], edx
    // mov eax, dword ptr [ebp + 0x14]
    // mov ecx, dword ptr [eax + 4]
    // mov dword ptr [esi + 0x14], ecx
    // mov eax, dword ptr [ebp + 0xc0]
    // test eax, eax
    // if (...) GOTO(0x4b290f)
    // mov eax, dword ptr [esi + 0x44]
    // test eax, eax
    // if (...) GOTO(0x4b290f)
    // mov edx, dword ptr [esi + 0x48]
    // push edx
    // push esi
    // CALL(0x4b2460)
    // add esp, 8
    // mov eax, dword ptr [esp + 0x38]
    // xor edx, edx
    // mov dword ptr [esp + 0x38], edx
    // mov ecx, dword ptr [eax]
    // mov eax, dword ptr [ebp + 0x134]
    // cmp eax, ebx
    // mov dword ptr [esp + 0x2c], ecx
    // if (...) GOTO(0x4b2cea)
    // sub ebx, eax
    // lea ecx, [eax*4 + 0x4bd0ac]
    // inc ebx
    // push edi
    // mov dword ptr [esp + 0x18], ecx
    // mov dword ptr [esp + 0x2c], ebx
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [eax]
    // mov eax, dword ptr [esp + 0x30]
    // movsx edi, word ptr [eax + ecx*2]
    // test edi, edi
    // if (...) GOTO(0x4b295c)
    // inc edx
    // mov dword ptr [esp + 0x3c], edx
    // if (...) GOTO(0x4b2cb2)
    // if (...) GOTO(0x4b2974)
    // mov ecx, dword ptr [esp + 0x1c]
    // neg edi
    // sar edi, cl
    // mov eax, edi
    // mov dword ptr [esp + 0x14], eax
    // not eax
    // mov dword ptr [esp + 0x28], eax
    // if (...) GOTO(0x4b2982)
    // mov ecx, dword ptr [esp + 0x1c]
    // sar edi, cl
    // mov dword ptr [esp + 0x14], edi
    // mov dword ptr [esp + 0x28], edi
    // test edi, edi
    // if (...) GOTO(0x4b2990)
    // inc edx
    // mov dword ptr [esp + 0x3c], edx
    // if (...) GOTO(0x4b2cb2)
    // mov eax, dword ptr [esi + 0x38]
    // test eax, eax
    // jbe 0x4b29a4
    // push esi
    // CALL(0x4b25d0)
    // mov edx, dword ptr [esp + 0x40]
    // add esp, 4
    // cmp edx, 0xf
    // if (...) GOTO(0x4b2ace)
    // mov eax, edx
    // shr eax, 4
    // mov dword ptr [esp + 0x24], eax
    // neg eax
    // shl eax, 4
    // add edx, eax
    // mov dword ptr [esp + 0x3c], edx
    // mov ecx, dword ptr [esi + 0xc]
    // mov eax, dword ptr [esi + 0x34]
    // test ecx, ecx
    // if (...) GOTO(0x4b29da)
    // mov eax, dword ptr [esi + eax*4 + 0x5c]
    // inc dword ptr [eax + 0x3c0]
    // if (...) GOTO(0x4b2abf)
    // mov eax, dword ptr [esi + eax*4 + 0x4c]
    // mov ebp, dword ptr [esi + 0x1c]
    // movsx ebx, byte ptr [eax + 0x4f0]
    // mov ecx, dword ptr [eax + 0x3c0]
    // test ebx, ebx
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x4b2a11)
    // mov edx, dword ptr [esi + 0x20]
    // mov eax, dword ptr [edx]
    // mov dword ptr [eax + 0x14], 0x27
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov ecx, dword ptr [eax]
    // CALL(dword)
    // mov edx, dword ptr [esp + 0x40]
    // add esp, 4
    // mov eax, dword ptr [esi + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b2abf)
    // mov eax, dword ptr [esp + 0x10]
    // mov edi, 1
    // mov ecx, ebx
    // add ebp, ebx
    // shl edi, cl
    // mov ecx, 0x18
    // sub ecx, ebp
    // dec edi
    // and edi, eax
    // shl edi, cl
    // mov ecx, dword ptr [esi + 0x18]
    // or edi, ecx
    // cmp ebp, 8
    // mov dword ptr [esp + 0x10], edi
    // if (...) GOTO(0x4b2ab1)
    // mov eax, ebp
    // shr eax, 3
    // mov dword ptr [esp + 0x20], eax
    // neg eax
    // lea ebp, [ebp + eax*8]
    // mov edx, dword ptr [esi + 0x10]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x12]
    // mov byte ptr [edx], bl
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b2a78)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b2a9f)
    // mov eax, dword ptr [esi + 0x10]
    // mov byte ptr [eax], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b2a9f)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x20]
    // shl edi, 8
    // dec eax
    // mov dword ptr [esp + 0x10], edi
    // mov dword ptr [esp + 0x20], eax
    // if (...) GOTO(0x4b2a54)
    // mov edx, dword ptr [esp + 0x3c]
    // mov dword ptr [esi + 0x18], edi
    // mov edi, dword ptr [esp + 0x14]
    // mov dword ptr [esi + 0x1c], ebp
    // mov eax, dword ptr [esp + 0x24]
    // dec eax
    // mov dword ptr [esp + 0x24], eax
    // if (...) GOTO(0x4b29c1)
    // mov ebp, 1
    // sar edi, 1
    // mov dword ptr [esp + 0x14], ebp
    // if (...) GOTO(0x4b2ae4)
    // inc ebp
    // sar edi, 1
    // if (...) GOTO(0x4b2adb)
    // mov dword ptr [esp + 0x14], ebp
    // shl edx, 4
    // mov ecx, dword ptr [esi + 0x34]
    // add edx, ebp
    // mov eax, edx
    // mov edx, dword ptr [esi + 0xc]
    // test edx, edx
    // if (...) GOTO(0x4b2b03)
    // mov ecx, dword ptr [esi + ecx*4 + 0x5c]
    // lea eax, [ecx + eax*4]
    // inc dword ptr [eax]
    // if (...) GOTO(0x4b2bdd)
    // mov ecx, dword ptr [esi + ecx*4 + 0x4c]
    // mov edi, dword ptr [esi + 0x1c]
    // movsx ebx, byte ptr [ecx + eax + 0x400]
    // mov edx, dword ptr [ecx + eax*4]
    // test ebx, ebx
    // mov dword ptr [esp + 0x3c], edx
    // if (...) GOTO(0x4b2b34)
    // mov eax, dword ptr [esi + 0x20]
    // mov ecx, dword ptr [eax]
    // mov dword ptr [ecx + 0x14], 0x27
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov edx, dword ptr [eax]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b2bdd)
    // mov eax, dword ptr [esp + 0x3c]
    // mov ebp, 1
    // mov ecx, ebx
    // add edi, ebx
    // shl ebp, cl
    // mov ecx, 0x18
    // sub ecx, edi
    // dec ebp
    // and ebp, eax
    // shl ebp, cl
    // mov ecx, dword ptr [esi + 0x18]
    // or ebp, ecx
    // cmp edi, 8
    // mov dword ptr [esp + 0x3c], ebp
    // if (...) GOTO(0x4b2bd3)
    // mov eax, edi
    // shr eax, 3
    // mov dword ptr [esp + 0x24], eax
    // neg eax
    // lea edi, [edi + eax*8]
    // mov eax, dword ptr [esi + 0x10]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x3e]
    // mov byte ptr [eax], bl
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b2b9a)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b2bc1)
    // mov ecx, dword ptr [esi + 0x10]
    // mov byte ptr [ecx], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b2bc1)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x24]
    // shl ebp, 8
    // dec eax
    // mov dword ptr [esp + 0x3c], ebp
    // mov dword ptr [esp + 0x24], eax
    // if (...) GOTO(0x4b2b76)
    // mov dword ptr [esi + 0x18], ebp
    // mov ebp, dword ptr [esp + 0x14]
    // mov dword ptr [esi + 0x1c], edi
    // mov edi, dword ptr [esi + 0x1c]
    // test ebp, ebp
    // if (...) GOTO(0x4b2bfb)
    // mov edx, dword ptr [esi + 0x20]
    // mov eax, dword ptr [edx]
    // mov dword ptr [eax + 0x14], 0x27
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov ecx, dword ptr [eax]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b2ca2)
    // mov ecx, dword ptr [esp + 0x14]
    // add edi, ebp
    // mov eax, dword ptr [esp + 0x28]
    // mov ebp, 1
    // shl ebp, cl
    // mov ecx, 0x18
    // sub ecx, edi
    // dec ebp
    // and ebp, eax
    // shl ebp, cl
    // mov ecx, dword ptr [esi + 0x18]
    // or ebp, ecx
    // cmp edi, 8
    // mov dword ptr [esp + 0x3c], ebp
    // if (...) GOTO(0x4b2c9c)
    // mov eax, edi
    // shr eax, 3
    // mov dword ptr [esp + 0x28], eax
    // neg eax
    // lea edi, [edi + eax*8]
    // mov edx, dword ptr [esi + 0x10]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x3e]
    // mov byte ptr [edx], bl
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b2c63)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b2c8a)
    // mov eax, dword ptr [esi + 0x10]
    // mov byte ptr [eax], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b2c8a)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x28]
    // shl ebp, 8
    // dec eax
    // mov dword ptr [esp + 0x3c], ebp
    // mov dword ptr [esp + 0x28], eax
    // if (...) GOTO(0x4b2c3f)
    // mov dword ptr [esi + 0x18], ebp
    // mov dword ptr [esi + 0x1c], edi
    // mov ebp, dword ptr [esp + 0x38]
    // mov dword ptr [esp + 0x3c], 0
    // mov edx, dword ptr [esp + 0x3c]
    // mov ecx, dword ptr [esp + 0x18]
    // mov eax, dword ptr [esp + 0x2c]
    // add ecx, 4
    // dec eax
    // mov dword ptr [esp + 0x18], ecx
    // mov dword ptr [esp + 0x2c], eax
    // if (...) GOTO(0x4b2940)
    // test edx, edx
    // pop edi
    // if (...) GOTO(0x4b2cea)
    // mov ecx, dword ptr [esi + 0x38]
    // inc ecx
    // mov eax, ecx
    // mov dword ptr [esi + 0x38], ecx
    // cmp eax, 0x7fff
    // if (...) GOTO(0x4b2cea)
    // push esi
    // CALL(0x4b25d0)
    // add esp, 4
    // mov ecx, dword ptr [ebp + 0x14]
    // mov edx, dword ptr [esi + 0x10]
    // mov dword ptr [ecx], edx
    // mov eax, dword ptr [ebp + 0x14]
    // mov ecx, dword ptr [esi + 0x14]
    // mov dword ptr [eax + 4], ecx
    // mov ebp, dword ptr [ebp + 0xc0]
    // test ebp, ebp
    // if (...) GOTO(0x4b2d1c)
    // mov eax, dword ptr [esi + 0x44]
    // test eax, eax
    // if (...) GOTO(0x4b2d19)
    // mov edx, dword ptr [esi + 0x48]
    // mov dword ptr [esi + 0x44], ebp
    // inc edx
    // and edx, 7
    // mov dword ptr [esi + 0x48], edx
    // dec dword ptr [esi + 0x44]
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // add esp, 0x24
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10
    // push ebx
    // mov ebx, dword ptr [esp + 0x18]
    // push esi
    // mov ecx, dword ptr [ebx + 0x14]
    // mov esi, dword ptr [ebx + 0x164]
    // mov eax, dword ptr [ebx + 0x140]
    // mov edx, dword ptr [ecx]
    // mov dword ptr [esp + 0x14], eax
    // mov dword ptr [esi + 0x10], edx
    // mov eax, dword ptr [ebx + 0x14]
    // mov ecx, dword ptr [eax + 4]
    // mov dword ptr [esi + 0x14], ecx
    // mov eax, dword ptr [ebx + 0xc0]
    // test eax, eax
    // if (...) GOTO(0x4b2d78)
    // mov eax, dword ptr [esi + 0x44]
    // test eax, eax
    // if (...) GOTO(0x4b2d78)
    // mov edx, dword ptr [esi + 0x48]
    // push edx
    // push esi
    // CALL(0x4b2460)
    // add esp, 8
    // mov eax, dword ptr [ebx + 0x108]
    // mov dword ptr [esp + 0x10], 0
    // test eax, eax
    // if (...) GOTO(0x4b2e6a)
    // mov eax, dword ptr [esp + 0x20]
    // push ebp
    // push edi
    // mov dword ptr [esp + 0x28], eax
    // mov eax, dword ptr [esi + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b2e46)
    // mov ecx, dword ptr [esp + 0x28]
    // mov ebp, dword ptr [esi + 0x1c]
    // inc ebp
    // mov edx, dword ptr [ecx]
    // mov cl, byte ptr [esp + 0x1c]
    // movsx edi, word ptr [edx]
    // sar edi, cl
    // mov ecx, 0x18
    // sub ecx, ebp
    // and edi, 1
    // shl edi, cl
    // mov ecx, dword ptr [esi + 0x18]
    // or edi, ecx
    // cmp ebp, 8
    // mov dword ptr [esp + 0x10], edi
    // if (...) GOTO(0x4b2e40)
    // mov eax, ebp
    // shr eax, 3
    // mov dword ptr [esp + 0x14], eax
    // neg eax
    // lea ebp, [ebp + eax*8]
    // mov eax, dword ptr [esi + 0x10]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x12]
    // mov byte ptr [eax], bl
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b2e03)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b2e2a)
    // mov ecx, dword ptr [esi + 0x10]
    // mov byte ptr [ecx], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b2e2a)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x14]
    // shl edi, 8
    // dec eax
    // mov dword ptr [esp + 0x10], edi
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4b2ddf)
    // mov ebx, dword ptr [esp + 0x24]
    // mov dword ptr [esi + 0x18], edi
    // mov dword ptr [esi + 0x1c], ebp
    // mov eax, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x28]
    // mov ecx, dword ptr [ebx + 0x108]
    // inc eax
    // add edx, 4
    // cmp eax, ecx
    // mov dword ptr [esp + 0x18], eax
    // mov dword ptr [esp + 0x28], edx
    // if (...) GOTO(0x4b2d98)
    // pop edi
    // pop ebp
    // mov edx, dword ptr [ebx + 0x14]
    // mov eax, dword ptr [esi + 0x10]
    // mov dword ptr [edx], eax
    // mov ecx, dword ptr [ebx + 0x14]
    // mov edx, dword ptr [esi + 0x14]
    // mov dword ptr [ecx + 4], edx
    // mov ebx, dword ptr [ebx + 0xc0]
    // test ebx, ebx
    // if (...) GOTO(0x4b2e9c)
    // mov eax, dword ptr [esi + 0x44]
    // test eax, eax
    // if (...) GOTO(0x4b2e99)
    // mov eax, dword ptr [esi + 0x48]
    // mov dword ptr [esi + 0x44], ebx
    // inc eax
    // and eax, 7
    // mov dword ptr [esi + 0x48], eax
    // dec dword ptr [esi + 0x44]
    // pop esi
    // mov eax, 1
    // pop ebx
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // sub esp, 0x128
    // mov eax, dword ptr [esp + 0x12c]
    // push ebx
    // push ebp
    // push esi
    // mov ecx, dword ptr [eax + 0x138]
    // mov edx, dword ptr [eax + 0x14]
    // mov esi, dword ptr [eax + 0x164]
    // mov ebp, dword ptr [eax + 0x140]
    // mov dword ptr [esp + 0x28], ecx
    // mov ecx, dword ptr [edx]
    // mov dword ptr [esi + 0x10], ecx
    // mov edx, dword ptr [eax + 0x14]
    // push edi
    // mov ecx, dword ptr [edx + 4]
    // mov dword ptr [esi + 0x14], ecx
    // mov ecx, dword ptr [eax + 0xc0]
    // test ecx, ecx
    // if (...) GOTO(0x4b2f06)
    // mov eax, dword ptr [esi + 0x44]
    // test eax, eax
    // if (...) GOTO(0x4b2f06)
    // mov edx, dword ptr [esi + 0x48]
    // push edx
    // push esi
    // CALL(0x4b2460)
    // add esp, 8
    // mov ecx, dword ptr [esp + 0x13c]
    // mov eax, dword ptr [esp + 0x140]
    // mov dword ptr [esp + 0x30], 0
    // mov ebx, dword ptr [ecx + 0x134]
    // mov edi, dword ptr [eax]
    // mov eax, dword ptr [esp + 0x2c]
    // mov edx, ebx
    // cmp edx, eax
    // mov dword ptr [esp + 0x34], edi
    // if (...) GOTO(0x4b2f5d)
    // mov eax, dword ptr [edx*4 + 0x4bd0ac]
    // movsx eax, word ptr [edi + eax*2]
    // test eax, eax
    // if (...) GOTO(0x4b2f43)
    // neg eax
    // mov ecx, ebp
    // sar eax, cl
    // cmp eax, 1
    // mov dword ptr [esp + edx*4 + 0x38], eax
    // if (...) GOTO(0x4b2f54)
    // mov dword ptr [esp + 0x30], edx
    // mov eax, dword ptr [esp + 0x2c]
    // inc edx
    // cmp edx, eax
    // if (...) GOTO(0x4b2f32)
    // mov eax, dword ptr [esi + 0x40]
    // mov edx, dword ptr [esi + 0x3c]
    // mov ecx, dword ptr [esp + 0x2c]
    // add eax, edx
    // mov dword ptr [esp + 0x20], eax
    // mov eax, ebx
    // xor edi, edi
    // cmp eax, ecx
    // mov dword ptr [esp + 0x24], edi
    // mov dword ptr [esp + 0x18], edi
    // mov dword ptr [esp + 0x1c], eax
    // if (...) GOTO(0x4b332a)
    // mov ebx, dword ptr [esp + eax*4 + 0x38]
    // test ebx, ebx
    // mov dword ptr [esp + 0x14], ebx
    // if (...) GOTO(0x4b2f9b)
    // inc edi
    // mov dword ptr [esp + 0x24], edi
    // if (...) GOTO(0x4b32de)
    // cmp edi, 0xf
    // if (...) GOTO(0x4b30e7)
    // cmp eax, dword ptr [esp + 0x30]
    // if (...) GOTO(0x4b30e7)
    // push esi
    // CALL(0x4b25d0)
    // mov ecx, dword ptr [esi + 0xc]
    // mov eax, dword ptr [esi + 0x34]
    // add esp, 4
    // test ecx, ecx
    // if (...) GOTO(0x4b2fd0)
    // mov eax, dword ptr [esi + eax*4 + 0x5c]
    // inc dword ptr [eax + 0x3c0]
    // if (...) GOTO(0x4b30b1)
    // mov eax, dword ptr [esi + eax*4 + 0x4c]
    // mov ebp, dword ptr [esi + 0x1c]
    // movsx ebx, byte ptr [eax + 0x4f0]
    // mov ecx, dword ptr [eax + 0x3c0]
    // test ebx, ebx
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x4b3003)
    // mov edx, dword ptr [esi + 0x20]
    // mov eax, dword ptr [edx]
    // mov dword ptr [eax + 0x14], 0x27
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov ecx, dword ptr [eax]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b30ad)
    // mov eax, dword ptr [esp + 0x10]
    // mov edi, 1
    // mov ecx, ebx
    // add ebp, ebx
    // shl edi, cl
    // mov ecx, 0x18
    // sub ecx, ebp
    // dec edi
    // and edi, eax
    // shl edi, cl
    // mov ecx, dword ptr [esi + 0x18]
    // or edi, ecx
    // cmp ebp, 8
    // mov dword ptr [esp + 0x10], edi
    // if (...) GOTO(0x4b30a3)
    // mov eax, ebp
    // shr eax, 3
    // mov dword ptr [esp + 0x28], eax
    // neg eax
    // lea ebp, [ebp + eax*8]
    // mov edx, dword ptr [esi + 0x10]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x12]
    // mov byte ptr [edx], bl
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b306a)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b3091)
    // mov eax, dword ptr [esi + 0x10]
    // mov byte ptr [eax], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b3091)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x28]
    // shl edi, 8
    // dec eax
    // mov dword ptr [esp + 0x10], edi
    // mov dword ptr [esp + 0x28], eax
    // if (...) GOTO(0x4b3046)
    // mov dword ptr [esi + 0x18], edi
    // mov edi, dword ptr [esp + 0x24]
    // mov dword ptr [esi + 0x1c], ebp
    // mov ebx, dword ptr [esp + 0x14]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x20]
    // push ecx
    // sub edi, 0x10
    // push edx
    // push esi
    // mov dword ptr [esp + 0x30], edi
    // CALL(0x4b27d0)
    // mov eax, dword ptr [esi + 0x40]
    // add esp, 0xc
    // mov dword ptr [esp + 0x20], eax
    // mov eax, dword ptr [esp + 0x1c]
    // cmp edi, 0xf
    // mov dword ptr [esp + 0x18], 0
    // if (...) GOTO(0x4b2fa4)
    // cmp ebx, 1
    // if (...) GOTO(0x4b3104)
    // mov edx, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [esp + 0x18]
    // and bl, 1
    // mov byte ptr [edx + ecx], bl
    // inc ecx
    // mov dword ptr [esp + 0x18], ecx
    // if (...) GOTO(0x4b32de)
    // push esi
    // CALL(0x4b25d0)
    // mov ecx, dword ptr [esi + 0xc]
    // mov eax, dword ptr [esi + 0x34]
    // shl edi, 4
    // add esp, 4
    // inc edi
    // test ecx, ecx
    // if (...) GOTO(0x4b3129)
    // mov eax, dword ptr [esi + eax*4 + 0x5c]
    // lea edi, [eax + edi*4]
    // inc dword ptr [edi]
    // if (...) GOTO(0x4b31ff)
    // mov eax, dword ptr [esi + eax*4 + 0x4c]
    // movsx ebx, byte ptr [eax + edi + 0x400]
    // mov ecx, dword ptr [eax + edi*4]
    // mov edi, dword ptr [esi + 0x1c]
    // test ebx, ebx
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x4b315a)
    // mov edx, dword ptr [esi + 0x20]
    // mov eax, dword ptr [edx]
    // mov dword ptr [eax + 0x14], 0x27
    // mov eax, dword ptr [esi + 0x20]
    // push eax
    // mov ecx, dword ptr [eax]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b32b4)
    // mov eax, dword ptr [esp + 0x10]
    // mov ebp, 1
    // mov ecx, ebx
    // add edi, ebx
    // shl ebp, cl
    // mov ecx, 0x18
    // sub ecx, edi
    // dec ebp
    // and ebp, eax
    // shl ebp, cl
    // mov ecx, dword ptr [esi + 0x18]
    // or ebp, ecx
    // cmp edi, 8
    // mov dword ptr [esp + 0x10], ebp
    // if (...) GOTO(0x4b31f9)
    // mov eax, edi
    // shr eax, 3
    // mov dword ptr [esp + 0x14], eax
    // neg eax
    // lea edi, [edi + eax*8]
    // mov edx, dword ptr [esi + 0x10]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x12]
    // mov byte ptr [edx], bl
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b31c0)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b31e7)
    // mov eax, dword ptr [esi + 0x10]
    // mov byte ptr [eax], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b31e7)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x14]
    // shl ebp, 8
    // dec eax
    // mov dword ptr [esp + 0x10], ebp
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4b319c)
    // mov dword ptr [esi + 0x18], ebp
    // mov dword ptr [esi + 0x1c], edi
    // mov eax, dword ptr [esi + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b32b4)
    // mov ecx, dword ptr [esp + 0x1c]
    // mov ebp, dword ptr [esi + 0x1c]
    // xor eax, eax
    // inc ebp
    // mov edx, dword ptr [ecx*4 + 0x4bd0ac]
    // mov ecx, dword ptr [esp + 0x34]
    // cmp word ptr [ecx + edx*2], ax
    // mov ecx, 0x18
    // setge al
    // and eax, 1
    // sub ecx, ebp
    // shl eax, cl
    // mov ecx, dword ptr [esi + 0x18]
    // or eax, ecx
    // cmp ebp, 8
    // mov edi, eax
    // mov dword ptr [esp + 0x14], edi
    // if (...) GOTO(0x4b32ae)
    // mov eax, ebp
    // shr eax, 3
    // mov dword ptr [esp + 0x28], eax
    // neg eax
    // lea ebp, [ebp + eax*8]
    // mov edx, dword ptr [esi + 0x10]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0x16]
    // mov byte ptr [edx], bl
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b3275)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // cmp ebx, 0xff
    // if (...) GOTO(0x4b329c)
    // mov eax, dword ptr [esi + 0x10]
    // mov byte ptr [eax], 0
    // mov ecx, dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x14]
    // inc ecx
    // dec eax
    // mov dword ptr [esi + 0x10], ecx
    // mov dword ptr [esi + 0x14], eax
    // if (...) GOTO(0x4b329c)
    // push esi
    // CALL(0x4b2420)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x28]
    // shl edi, 8
    // dec eax
    // mov dword ptr [esp + 0x14], edi
    // mov dword ptr [esp + 0x28], eax
    // if (...) GOTO(0x4b3251)
    // mov dword ptr [esi + 0x18], edi
    // mov dword ptr [esi + 0x1c], ebp
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x20]
    // push ecx
    // push edx
    // push esi
    // CALL(0x4b27d0)
    // mov eax, dword ptr [esi + 0x40]
    // add esp, 0xc
    // mov dword ptr [esp + 0x20], eax
    // xor eax, eax
    // mov dword ptr [esp + 0x18], eax
    // mov dword ptr [esp + 0x24], eax
    // mov edi, eax
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x2c]
    // inc eax
    // cmp eax, ecx
    // mov dword ptr [esp + 0x1c], eax
    // if (...) GOTO(0x4b2f85)
    // test edi, edi
    // if (...) GOTO(0x4b32fb)
    // mov eax, dword ptr [esp + 0x18]
    // test eax, eax
    // jbe 0x4b332a
    // mov ebx, dword ptr [esi + 0x38]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edi, dword ptr [esi + 0x3c]
    // inc ebx
    // mov eax, ebx
    // add edi, ecx
    // cmp eax, 0x7fff
    // mov dword ptr [esi + 0x38], ebx
    // mov dword ptr [esi + 0x3c], edi
    // mov ecx, edi
    // if (...) GOTO(0x4b3321)
    // cmp ecx, 0x3a9
    // jbe 0x4b332a
    // push esi
    // CALL(0x4b25d0)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x13c]
    // mov ecx, dword ptr [esi + 0x10]
    // mov edx, dword ptr [eax + 0x14]
    // mov dword ptr [edx], ecx
    // mov edx, dword ptr [eax + 0x14]
    // mov ecx, dword ptr [esi + 0x14]
    // mov dword ptr [edx + 4], ecx
    // mov eax, dword ptr [eax + 0xc0]
    // test eax, eax
    // if (...) GOTO(0x4b3363)
    // mov ecx, dword ptr [esi + 0x44]
    // test ecx, ecx
    // if (...) GOTO(0x4b3360)
    // mov edx, dword ptr [esi + 0x48]
    // mov dword ptr [esi + 0x44], eax
    // inc edx
    // and edx, 7
    // mov dword ptr [esi + 0x48], edx
    // dec dword ptr [esi + 0x44]
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // add esp, 0x128
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // mov eax, dword ptr [edi + 0x14]
    // mov esi, dword ptr [edi + 0x164]
    // push esi
    // mov ecx, dword ptr [eax]
    // mov dword ptr [esi + 0x10], ecx
    // mov edx, dword ptr [edi + 0x14]
    // mov eax, dword ptr [edx + 4]
    // mov dword ptr [esi + 0x14], eax
    // CALL(0x4b25d0)
    // push esi
    // CALL(0x4b2510)
    // mov ecx, dword ptr [edi + 0x14]
    // mov edx, dword ptr [esi + 0x10]
    // add esp, 8
    // mov dword ptr [ecx], edx
    // mov eax, dword ptr [edi + 0x14]
    // mov ecx, dword ptr [esi + 0x14]
    // pop edi
    // mov dword ptr [eax + 4], ecx
    // pop esi
    // return;
    // sub esp, 0x1c
    // push esi
    // mov esi, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esi + 0x164]
    // push eax
    // mov dword ptr [esp + 0xc], eax
    // CALL(0x4b25d0)
    // mov edx, dword ptr [esi + 0x134]
    // add esp, 4
    // xor ecx, ecx
    // test edx, edx
    // sete cl
    // xor eax, eax
    // mov dword ptr [esp + 0xc], ecx
    // mov dword ptr [esp + 0x10], eax
    // mov dword ptr [esp + 0x14], eax
    // mov dword ptr [esp + 0x18], eax
    // mov dword ptr [esp + 0x1c], eax
    // mov dword ptr [esp + 4], eax
    // mov eax, dword ptr [esi + 0xec]
    // test eax, eax
    // if (...) GOTO(0x4b34a6)
    // push ebx
    // lea edx, [esi + 0xf0]
    // push ebp
    // push edi
    // mov dword ptr [esp + 0x30], edx
    // mov eax, dword ptr [esp + 0x30]
    // test ecx, ecx
    // mov eax, dword ptr [eax]
    // if (...) GOTO(0x4b3436)
    // mov edx, dword ptr [esi + 0x13c]
    // test edx, edx
    // if (...) GOTO(0x4b3481)
    // mov ebx, dword ptr [eax + 0x14]
    // if (...) GOTO(0x4b3439)
    // mov ebx, dword ptr [eax + 0x18]
    // mov eax, dword ptr [esp + ebx*4 + 0x1c]
    // lea ebp, [esp + ebx*4 + 0x1c]
    // test eax, eax
    // if (...) GOTO(0x4b3481)
    // test ecx, ecx
    // lea edi, [esi + ebx*4 + 0x50]
    // if (...) GOTO(0x4b3451)
    // lea edi, [esi + ebx*4 + 0x60]
    // cmp dword ptr [edi], 0
    // if (...) GOTO(0x4b3461)
    // push esi
    // CALL(0x4afad0)
    // add esp, 4
    // mov dword ptr [edi], eax
    // mov ecx, dword ptr [esp + 0x14]
    // mov eax, dword ptr [edi]
    // mov edx, dword ptr [ecx + ebx*4 + 0x5c]
    // push edx
    // push eax
    // push esi
    // CALL(0x4b1080)
    // mov ecx, dword ptr [esp + 0x24]
    // add esp, 0xc
    // mov dword ptr [ebp], 1
    // mov eax, dword ptr [esp + 0x10]
    // mov edi, dword ptr [esp + 0x30]
    // mov edx, dword ptr [esi + 0xec]
    // inc eax
    // add edi, 4
    // cmp eax, edx
    // mov dword ptr [esp + 0x10], eax
    // mov dword ptr [esp + 0x30], edi
    // if (...) GOTO(0x4b341d)
    // pop edi
    // pop ebp
    // pop ebx
    // pop esi
    // add esp, 0x1c
    // return;
    // CALL(0x405099)
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // push(0x30)
    // push 1
    // push edi
    // mov eax, dword ptr [edi + 4]
    // CALL(dword)
    // mov esi, eax
    // add esp, 0xc
    // mov dword ptr [edi + 0x160], esi
    // mov dword ptr [esi], 0x4b3550
    // mov eax, dword ptr [edi + 0xbc]
    // sub eax, 0
    // if (...) GOTO(0x4b3515)
    // dec eax
    // if (...) GOTO(0x4b3505)
    // dec eax
    // if (...) GOTO(0x4b34f5)
    // mov ecx, dword ptr [edi]
    // push edi
    // mov dword ptr [ecx + 0x14], 0x2f
    // mov edx, dword ptr [edi]
    // CALL(dword)
    // add esp, 4
    // if (...) GOTO(0x4b3523)
    // mov dword ptr [esi + 4], 0x4b38c0
    // mov dword ptr [esi + 0x1c], 0x4b6360
    // if (...) GOTO(0x4b3523)
    // mov dword ptr [esi + 4], 0x4b3720
    // mov dword ptr [esi + 8], 0x4b6110
    // if (...) GOTO(0x4b3523)
    // mov dword ptr [esi + 4], 0x4b3720
    // mov dword ptr [esi + 8], 0x4b5d50
    // lea eax, [esi + 0x20]
    // pop edi
    // mov ecx, 4
    // pop esi
    // mov dword ptr [eax - 0x14], 0
    // mov dword ptr [eax], 0
    // add eax, 4
    // dec ecx
    // if (...) GOTO(0x4b352d)
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10
    // push ebp
    // push edi
    // mov edi, dword ptr [esp + 0x1c]
    // mov dword ptr [esp + 0xc], 0
    // mov ecx, dword ptr [edi + 0x34]
    // mov ebp, dword ptr [edi + 0x160]
    // mov eax, dword ptr [edi + 0x3c]
    // mov dword ptr [esp + 0x14], ebp
    // test ecx, ecx
    // if (...) GOTO(0x4b370d)
    // add eax, 0x10
    // push ebx
    // push esi
    // mov dword ptr [esp + 0x10], eax
    // mov eax, dword ptr [esp + 0x10]
    // mov esi, dword ptr [eax]
    // test esi, esi
    // if (...) GOTO(0x4b3599)
    // cmp esi, 4
    // if (...) GOTO(0x4b3599)
    // mov eax, dword ptr [edi + esi*4 + 0x40]
    // test eax, eax
    // if (...) GOTO(0x4b35af)
    // mov ecx, dword ptr [edi]
    // push edi
    // mov dword ptr [ecx + 0x14], 0x33
    // mov edx, dword ptr [edi]
    // mov dword ptr [edx + 0x18], esi
    // mov eax, dword ptr [edi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [edi + 0xbc]
    // mov ebx, dword ptr [edi + esi*4 + 0x40]
    // sub eax, 0
    // if (...) GOTO(0x4b36b1)
    // dec eax
    // if (...) GOTO(0x4b3661)
    // dec eax
    // if (...) GOTO(0x4b35e2)
    // mov ecx, dword ptr [edi]
    // push edi
    // mov dword ptr [ecx + 0x14], 0x2f
    // mov edx, dword ptr [edi]
    // CALL(dword)
    // add esp, 4
    // if (...) GOTO(0x4b36ec)
    // mov eax, dword ptr [ebp + esi*4 + 0x20]
    // test eax, eax
    // if (...) GOTO(0x4b35fe)
    // mov eax, dword ptr [edi + 4]
    // push(0x100)
    // push 1
    // push edi
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [ebp + esi*4 + 0x20], eax
    // mov esi, dword ptr [ebp + esi*4 + 0x20]
    // mov edi, esi
    // mov esi, 0x4bd270
    // mov edx, edi
    // mov ecx, ebx
    // add edi, 0x20
    // mov eax, 0x4bd270
    // add ebx, 0x10
    // xor ebp, ebp
    // add eax, 8
    // mov bp, word ptr [ecx]
    // add ecx, 2
    // mov dword ptr [esp + 0x18], ebp
    // add edx, 4
    // fild dword ptr [esp + 0x18]
    // cmp eax, 0x4bd2b0
    // fmul qword ptr [eax - 8]
    // fmul qword ptr [esi]
    // fmul qword ptr [0x4bd2b0]
    // fdivr qword ptr [0x4ba2a0]
    // fstp dword ptr [edx - 4]
    // if (...) GOTO(0x4b3618)
    // add esi, 8
    // cmp esi, 0x4bd2b0
    // if (...) GOTO(0x4b3609)
    // mov ebp, dword ptr [esp + 0x1c]
    // mov edi, dword ptr [esp + 0x24]
    // if (...) GOTO(0x4b36ec)
    // mov eax, dword ptr [ebp + esi*4 + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b367d)
    // mov ecx, dword ptr [edi + 4]
    // push(0x100)
    // push 1
    // push edi
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [ebp + esi*4 + 0xc], eax
    // mov esi, dword ptr [ebp + esi*4 + 0xc]
    // mov eax, 0x4bd1f0
    // mov ecx, ebx
    // sub ecx, eax
    // movsx ebx, word ptr [eax]
    // xor edx, edx
    // add esi, 4
    // mov dx, word ptr [ecx + eax]
    // add eax, 2
    // imul edx, ebx
    // add edx, 0x400
    // sar edx, 0xb
    // mov dword ptr [esi - 4], edx
    // cmp eax, 0x4bd270
    // if (...) GOTO(0x4b368a)
    // if (...) GOTO(0x4b36ec)
    // mov eax, dword ptr [ebp + esi*4 + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b36cd)
    // mov eax, dword ptr [edi + 4]
    // push(0x100)
    // push 1
    // push edi
    // CALL(dword)
    // add esp, 0xc
    // mov dword ptr [ebp + esi*4 + 0xc], eax
    // mov esi, dword ptr [ebp + esi*4 + 0xc]
    // mov eax, ebx
    // mov ecx, 0x40
    // xor edx, edx
    // add esi, 4
    // mov dx, word ptr [eax]
    // add eax, 2
    // shl edx, 3
    // mov dword ptr [esi - 4], edx
    // dec ecx
    // if (...) GOTO(0x4b36d8)
    // mov eax, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [edi + 0x34]
    // inc eax
    // add edx, 0x54
    // cmp eax, ecx
    // mov dword ptr [esp + 0x14], eax
    // mov dword ptr [esp + 0x10], edx
    // if (...) GOTO(0x4b3582)
    // pop esi
    // pop ebx
    // pop edi
    // pop ebp
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10c
    // mov eax, dword ptr [esp + 0x110]
    // mov edx, dword ptr [esp + 0x114]
    // mov eax, dword ptr [eax + 0x160]
    // mov ecx, dword ptr [eax + 8]
    // mov dword ptr [esp + 4], ecx
    // mov ecx, dword ptr [edx + 0x10]
    // mov edx, dword ptr [eax + ecx*4 + 0xc]
    // mov eax, dword ptr [esp + 0x120]
    // mov ecx, dword ptr [esp + 0x118]
    // mov dword ptr [esp + 8], edx
    // lea edx, [ecx + eax*4]
    // mov eax, dword ptr [esp + 0x128]
    // test eax, eax
    // mov dword ptr [esp + 0x118], edx
    // jbe 0x4b38b2
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0x124]
    // push esi
    // push edi
    // mov dword ptr [esp + 0x10], eax
    // mov esi, dword ptr [esp + 0x128]
    // lea ecx, [esp + 0x1c]
    // mov edi, 8
    // mov eax, dword ptr [esi]
    // mov edx, dword ptr [esp + 0x134]
    // add eax, edx
    // xor edx, edx
    // add ecx, 4
    // add esi, 4
    // mov dl, byte ptr [eax]
    // add ecx, 4
    // sub edx, 0x80
    // inc eax
    // mov dword ptr [ecx - 8], edx
    // xor edx, edx
    // mov dl, byte ptr [eax]
    // add ecx, 4
    // sub edx, 0x80
    // inc eax
    // mov dword ptr [ecx - 8], edx
    // xor edx, edx
    // mov dl, byte ptr [eax]
    // add ecx, 4
    // sub edx, 0x80
    // inc eax
    // mov dword ptr [ecx - 8], edx
    // xor edx, edx
    // mov dl, byte ptr [eax]
    // add ecx, 4
    // sub edx, 0x80
    // inc eax
    // mov dword ptr [ecx - 8], edx
    // xor edx, edx
    // mov dl, byte ptr [eax]
    // add ecx, 4
    // sub edx, 0x80
    // inc eax
    // mov dword ptr [ecx - 8], edx
    // xor edx, edx
    // mov dl, byte ptr [eax]
    // add ecx, 4
    // sub edx, 0x80
    // inc eax
    // mov dword ptr [ecx - 8], edx
    // xor edx, edx
    // mov dl, byte ptr [eax]
    // add ecx, 4
    // sub edx, 0x80
    // mov dword ptr [ecx - 8], edx
    // xor edx, edx
    // mov dl, byte ptr [eax + 1]
    // sub edx, 0x80
    // dec edi
    // mov dword ptr [ecx - 4], edx
    // if (...) GOTO(0x4b3792)
    // lea eax, [esp + 0x1c]
    // push eax
    // CALL(dword)
    // mov edi, ebp
    // mov ebp, dword ptr [esp + 0x1c]
    // lea ecx, [esp + 0x20]
    // add esp, 4
    // lea esi, [esp + 0x1c]
    // sub ebp, ecx
    // mov ebx, 0x40
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [esi + ebp]
    // test eax, eax
    // mov edx, ecx
    // if (...) GOTO(0x4b3871)
    // sar edx, 1
    // sub edx, eax
    // cmp edx, ecx
    // if (...) GOTO(0x4b386b)
    // mov eax, edx
    // cdq 
    // idiv ecx
    // neg eax
    // if (...) GOTO(0x4b3880)
    // xor eax, eax
    // neg eax
    // if (...) GOTO(0x4b3880)
    // sar edx, 1
    // add eax, edx
    // cmp eax, ecx
    // if (...) GOTO(0x4b387e)
    // cdq 
    // idiv ecx
    // if (...) GOTO(0x4b3880)
    // xor eax, eax
    // mov word ptr [edi], ax
    // add esi, 4
    // add edi, 2
    // dec ebx
    // if (...) GOTO(0x4b384f)
    // mov ecx, dword ptr [esp + 0x134]
    // mov eax, dword ptr [esp + 0x10]
    // add ecx, 8
    // dec eax
    // mov ebp, edi
    // mov dword ptr [esp + 0x134], ecx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4b3782)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x10c
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // sub esp, 0x110
    // mov eax, dword ptr [esp + 0x114]
    // mov edx, dword ptr [esp + 0x118]
    // mov eax, dword ptr [eax + 0x160]
    // mov ecx, dword ptr [eax + 0x1c]
    // mov dword ptr [esp + 8], ecx
    // mov ecx, dword ptr [edx + 0x10]
    // mov edx, dword ptr [eax + ecx*4 + 0x20]
    // mov eax, dword ptr [esp + 0x124]
    // mov ecx, dword ptr [esp + 0x11c]
    // mov dword ptr [esp + 0xc], edx
    // lea edx, [ecx + eax*4]
    // mov eax, dword ptr [esp + 0x12c]
    // test eax, eax
    // mov dword ptr [esp + 0x11c], edx
    // jbe 0x4b3a72
    // push ebx
    // push ebp
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x130]
    // mov dword ptr [esp + 0x14], eax
    // mov esi, dword ptr [esp + 0x12c]
    // lea ecx, [esp + 0x20]
    // mov ebp, 8
    // mov eax, dword ptr [esp + 0x138]
    // mov edx, dword ptr [esi]
    // add eax, edx
    // xor edx, edx
    // add ecx, 4
    // add esi, 4
    // mov dl, byte ptr [eax]
    // add ecx, 4
    // sub edx, 0x80
    // inc eax
    // mov dword ptr [esp + 0x10], edx
    // xor edx, edx
    // fild dword ptr [esp + 0x10]
    // add ecx, 4
    // fstp dword ptr [ecx - 0xc]
    // mov dl, byte ptr [eax]
    // add ecx, 4
    // sub edx, 0x80
    // inc eax
    // mov dword ptr [esp + 0x10], edx
    // xor edx, edx
    // fild dword ptr [esp + 0x10]
    // add ecx, 4
    // fstp dword ptr [ecx - 0x10]
    // mov dl, byte ptr [eax]
    // add ecx, 4
    // sub edx, 0x80
    // inc eax
    // mov dword ptr [esp + 0x10], edx
    // xor edx, edx
    // fild dword ptr [esp + 0x10]
    // add ecx, 4
    // fstp dword ptr [ecx - 0x14]
    // mov dl, byte ptr [eax]
    // add ecx, 4
    // sub edx, 0x80
    // inc eax
    // mov dword ptr [esp + 0x10], edx
    // xor edx, edx
    // fild dword ptr [esp + 0x10]
    // fstp dword ptr [ecx - 0x14]
    // mov dl, byte ptr [eax]
    // sub edx, 0x80
    // inc eax
    // mov dword ptr [esp + 0x10], edx
    // xor edx, edx
    // fild dword ptr [esp + 0x10]
    // fstp dword ptr [ecx - 0x10]
    // mov dl, byte ptr [eax]
    // sub edx, 0x80
    // inc eax
    // mov dword ptr [esp + 0x10], edx
    // xor edx, edx
    // fild dword ptr [esp + 0x10]
    // fstp dword ptr [ecx - 0xc]
    // mov dl, byte ptr [eax]
    // sub edx, 0x80
    // mov dword ptr [esp + 0x10], edx
    // xor edx, edx
    // fild dword ptr [esp + 0x10]
    // fstp dword ptr [ecx - 8]
    // mov dl, byte ptr [eax + 1]
    // sub edx, 0x80
    // dec ebp
    // mov dword ptr [esp + 0x10], edx
    // fild dword ptr [esp + 0x10]
    // fstp dword ptr [ecx - 4]
    // if (...) GOTO(0x4b3932)
    // lea eax, [esp + 0x20]
    // push eax
    // CALL(dword)
    // mov ebx, dword ptr [esp + 0x20]
    // lea ecx, [esp + 0x24]
    // add esp, 4
    // lea esi, [esp + 0x20]
    // sub ebx, ecx
    // mov ebp, 0x40
    // fld dword ptr [ebx + esi]
    // fmul dword ptr [esi]
    // fadd dword ptr [0x4bd2b8]
    // CALL(0x4a6030)
    // sub eax, 0x4000
    // add esi, 4
    // mov word ptr [edi], ax
    // add edi, 2
    // dec ebp
    // if (...) GOTO(0x4b3a2d)
    // mov ecx, dword ptr [esp + 0x138]
    // mov eax, dword ptr [esp + 0x14]
    // add ecx, 8
    // dec eax
    // mov dword ptr [esp + 0x138], ecx
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4b3922)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x110
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 8]
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b3a9f)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 4
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov edx, dword ptr [esi + 4]
    // push(0x40)
    // push 1
    // push esi
    // CALL(dword)
    // mov dword ptr [esi + 0x14c], eax
    // mov dword ptr [eax], 0x4b3b30
    // mov ecx, dword ptr [esi + 0x15c]
    // add esp, 0xc
    // mov edx, dword ptr [ecx + 8]
    // test edx, edx
    // if (...) GOTO(0x4b3ad8)
    // push esi
    // mov dword ptr [eax + 4], 0x4b3d40
    // CALL(0x4b3f10)
    // add esp, 4
    // pop esi
    // pop ebp
    // return;
    // mov dword ptr [eax + 4], 0x4b3b80
    // mov edx, dword ptr [esi + 0x34]
    // mov ecx, dword ptr [esi + 0x3c]
    // xor ebp, ebp
    // test edx, edx
    // if (...) GOTO(0x4b3b29)
    // push ebx
    // push edi
    // lea edi, [ecx + 8]
    // lea ebx, [eax + 8]
    // mov eax, dword ptr [edi + 0x14]
    // mov edx, dword ptr [esi + 0xe4]
    // imul eax, dword ptr [esi + 0xe0]
    // shl eax, 3
    // push edx
    // mov ecx, dword ptr [esi + 4]
    // cdq 
    // idiv dword ptr [edi]
    // push eax
    // push 1
    // push esi
    // CALL(dword)
    // add esp, 0x10
    // mov dword ptr [ebx], eax
    // mov eax, dword ptr [esi + 0x34]
    // inc ebp
    // add ebx, 4
    // add edi, 0x54
    // cmp ebp, eax
    // if (...) GOTO(0x4b3af3)
    // pop edi
    // pop ebx
    // pop esi
    // pop ebp
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 8]
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // test eax, eax
    // mov esi, dword ptr [edi + 0x14c]
    // if (...) GOTO(0x4b3b55)
    // mov eax, dword ptr [edi]
    // push edi
    // mov dword ptr [eax + 0x14], 4
    // mov ecx, dword ptr [edi]
    // CALL(dword)
    // add esp, 4
    // mov edx, dword ptr [edi + 0x1c]
    // mov dword ptr [esi + 0x34], 0
    // mov dword ptr [esi + 0x30], edx
    // mov dword ptr [esi + 0x38], 0
    // mov eax, dword ptr [edi + 0xe4]
    // pop edi
    // shl eax, 1
    // mov dword ptr [esi + 0x3c], eax
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 0xc]
    // push ebx
    // push ebp
    // push esi
    // mov ecx, dword ptr [eax]
    // mov esi, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esp + 0x1c]
    // push edi
    // mov edi, dword ptr [esi + 0x14c]
    // cmp ecx, eax
    // jae 0x4b3cf8
    // mov eax, dword ptr [esp + 0x28]
    // mov edx, dword ptr [esp + 0x2c]
    // cmp dword ptr [eax], edx
    // jae 0x4b3cf8
    // mov eax, dword ptr [esp + 0x20]
    // mov ebx, dword ptr [esi + 0xe4]
    // mov ebp, dword ptr [edi + 0x34]
    // sub eax, ecx
    // sub ebx, ebp
    // cmp ebx, eax
    // if (...) GOTO(0x4b3bc7)
    // mov ebx, eax
    // mov eax, dword ptr [edi + 0x34]
    // mov edx, dword ptr [esi + 0x158]
    // push ebx
    // push eax
    // mov eax, dword ptr [esp + 0x20]
    // lea ebp, [edi + 8]
    // push ebp
    // lea ecx, [eax + ecx*4]
    // push ecx
    // push esi
    // CALL(dword)
    // mov eax, dword ptr [esp + 0x30]
    // add esp, 0x14
    // mov ecx, dword ptr [eax]
    // add ecx, ebx
    // mov dword ptr [eax], ecx
    // mov edx, dword ptr [edi + 0x34]
    // mov ecx, dword ptr [edi + 0x30]
    // add edx, ebx
    // sub ecx, ebx
    // mov dword ptr [edi + 0x34], edx
    // mov eax, edx
    // mov dword ptr [edi + 0x30], ecx
    // if (...) GOTO(0x4b3c43)
    // cmp eax, dword ptr [esi + 0xe4]
    // if (...) GOTO(0x4b3c43)
    // mov eax, dword ptr [esi + 0x34]
    // xor ebx, ebx
    // test eax, eax
    // if (...) GOTO(0x4b3c3a)
    // mov edx, dword ptr [esi + 0xe4]
    // mov eax, dword ptr [edi + 0x34]
    // mov ecx, dword ptr [esi + 0x18]
    // push edx
    // mov edx, dword ptr [ebp]
    // push eax
    // push ecx
    // push edx
    // CALL(0x4b3d00)
    // mov eax, dword ptr [esi + 0x34]
    // add esp, 0x10
    // inc ebx
    // add ebp, 4
    // cmp ebx, eax
    // if (...) GOTO(0x4b3c14)
    // mov eax, dword ptr [esi + 0xe4]
    // mov dword ptr [edi + 0x34], eax
    // mov ecx, dword ptr [edi + 0x34]
    // mov eax, dword ptr [esi + 0xe4]
    // cmp ecx, eax
    // if (...) GOTO(0x4b3c7d)
    // mov ebx, dword ptr [esp + 0x28]
    // mov ecx, dword ptr [esp + 0x24]
    // mov edx, dword ptr [esi + 0x15c]
    // mov eax, dword ptr [ebx]
    // push eax
    // push ecx
    // lea eax, [edi + 8]
    // push 0
    // push eax
    // push esi
    // CALL(dword)
    // mov dword ptr [edi + 0x34], 0
    // mov eax, dword ptr [ebx]
    // add esp, 0x14
    // inc eax
    // mov dword ptr [ebx], eax
    // if (...) GOTO(0x4b3c81)
    // mov ebx, dword ptr [esp + 0x28]
    // mov eax, dword ptr [edi + 0x30]
    // test eax, eax
    // if (...) GOTO(0x4b3c92)
    // mov edx, dword ptr [esp + 0x2c]
    // mov eax, dword ptr [ebx]
    // cmp eax, edx
    // if (...) GOTO(0x4b3ca9)
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [eax]
    // mov eax, dword ptr [esp + 0x20]
    // cmp ecx, eax
    // if (...) GOTO(0x4b3ba0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov eax, dword ptr [esi + 0x34]
    // mov edi, dword ptr [esi + 0x3c]
    // xor ebp, ebp
    // test eax, eax
    // if (...) GOTO(0x4b3cee)
    // mov ebx, dword ptr [esp + 0x24]
    // add edi, 0xc
    // mov eax, dword ptr [edi]
    // mov edx, dword ptr [esp + 0x28]
    // mov ecx, eax
    // imul ecx, dword ptr [esp + 0x2c]
    // imul eax, dword ptr [edx]
    // push ecx
    // mov ecx, dword ptr [ebx]
    // push eax
    // mov eax, dword ptr [edi + 0x10]
    // shl eax, 3
    // push eax
    // push ecx
    // CALL(0x4b3d00)
    // mov eax, dword ptr [esi + 0x34]
    // add esp, 0x10
    // inc ebp
    // add ebx, 4
    // add edi, 0x54
    // cmp ebp, eax
    // if (...) GOTO(0x4b3cbc)
    // mov eax, dword ptr [esp + 0x28]
    // mov edx, dword ptr [esp + 0x2c]
    // mov dword ptr [eax], edx
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // push ebp
    // mov ebp, dword ptr [esp + 0x14]
    // push esi
    // mov esi, dword ptr [esp + 0x14]
    // cmp esi, ebp
    // if (...) GOTO(0x4b3d31)
    // push ebx
    // push edi
    // mov edi, dword ptr [esp + 0x14]
    // lea ebx, [esi - 1]
    // mov eax, dword ptr [esp + 0x18]
    // push eax
    // push 1
    // push esi
    // push edi
    // push ebx
    // push edi
    // CALL(0x4b04f0)
    // add esp, 0x18
    // inc esi
    // cmp esi, ebp
    // if (...) GOTO(0x4b3d17)
    // pop edi
    // pop ebx
    // pop esi
    // pop ebp
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0xc
    // push ebx
    // push ebp
    // mov ebx, dword ptr [esp + 0x2c]
    // push esi
    // mov esi, dword ptr [esp + 0x1c]
    // push edi
    // mov ecx, dword ptr [ebx]
    // mov eax, dword ptr [esi + 0xe4]
    // mov edi, dword ptr [esi + 0x14c]
    // lea eax, [eax + eax*2]
    // mov dword ptr [esp + 0x18], eax
    // mov eax, dword ptr [esp + 0x38]
    // cmp ecx, eax
    // jae 0x4b3f08
    // mov edx, dword ptr [esp + 0x28]
    // mov eax, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [edx]
    // cmp edx, eax
    // jae 0x4b3e48
    // mov ecx, dword ptr [edi + 0x34]
    // mov ebp, dword ptr [edi + 0x3c]
    // sub eax, edx
    // sub ebp, ecx
    // cmp ebp, eax
    // mov dword ptr [esp + 0x20], ebp
    // if (...) GOTO(0x4b3d9a)
    // mov dword ptr [esp + 0x20], eax
    // mov ebp, eax
    // mov eax, dword ptr [esi + 0x158]
    // push ebp
    // push ecx
    // mov ecx, dword ptr [esp + 0x2c]
    // lea ebx, [edi + 8]
    // lea edx, [ecx + edx*4]
    // push ebx
    // push edx
    // push esi
    // CALL(dword)
    // mov eax, dword ptr [edi + 0x30]
    // mov ecx, dword ptr [esi + 0x1c]
    // add esp, 0x14
    // cmp eax, ecx
    // if (...) GOTO(0x4b3e28)
    // mov eax, dword ptr [esi + 0x34]
    // mov dword ptr [esp + 0x14], 0
    // test eax, eax
    // if (...) GOTO(0x4b3e28)
    // mov dword ptr [esp + 0x10], ebx
    // mov eax, dword ptr [esi + 0xe4]
    // mov ebx, 1
    // cmp eax, ebx
    // if (...) GOTO(0x4b3e0d)
    // or ebp, 0xffffffff
    // mov ecx, dword ptr [esp + 0x10]
    // mov edx, dword ptr [esi + 0x18]
    // push edx
    // push 1
    // mov eax, dword ptr [ecx]
    // push ebp
    // push eax
    // push 0
    // push eax
    // CALL(0x4b04f0)
    // mov eax, dword ptr [esi + 0xe4]
    // add esp, 0x18
    // inc ebx
    // dec ebp
    // cmp ebx, eax
    // if (...) GOTO(0x4b3de4)
    // mov ebp, dword ptr [esp + 0x20]
    // mov eax, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esi + 0x34]
    // inc eax
    // add edx, 4
    // cmp eax, ecx
    // mov dword ptr [esp + 0x14], eax
    // mov dword ptr [esp + 0x10], edx
    // if (...) GOTO(0x4b3dd2)
    // mov eax, dword ptr [esp + 0x28]
    // mov ebx, dword ptr [esp + 0x34]
    // mov edx, dword ptr [eax]
    // add edx, ebp
    // mov dword ptr [eax], edx
    // mov ecx, dword ptr [edi + 0x34]
    // mov eax, dword ptr [edi + 0x30]
    // add ecx, ebp
    // sub eax, ebp
    // mov dword ptr [edi + 0x34], ecx
    // mov dword ptr [edi + 0x30], eax
    // if (...) GOTO(0x4b3e95)
    // mov eax, dword ptr [edi + 0x30]
    // test eax, eax
    // if (...) GOTO(0x4b3f08)
    // mov eax, dword ptr [edi + 0x34]
    // mov ecx, dword ptr [edi + 0x3c]
    // cmp eax, ecx
    // if (...) GOTO(0x4b3e95)
    // mov eax, dword ptr [esi + 0x34]
    // xor ebp, ebp
    // test eax, eax
    // if (...) GOTO(0x4b3e8f)
    // lea ebx, [edi + 8]
    // mov ecx, dword ptr [edi + 0x3c]
    // mov edx, dword ptr [edi + 0x34]
    // mov eax, dword ptr [esi + 0x18]
    // push ecx
    // mov ecx, dword ptr [ebx]
    // push edx
    // push eax
    // push ecx
    // CALL(0x4b3d00)
    // mov eax, dword ptr [esi + 0x34]
    // add esp, 0x10
    // inc ebp
    // add ebx, 4
    // cmp ebp, eax
    // if (...) GOTO(0x4b3e69)
    // mov ebx, dword ptr [esp + 0x34]
    // mov edx, dword ptr [edi + 0x3c]
    // mov dword ptr [edi + 0x34], edx
    // mov eax, dword ptr [edi + 0x34]
    // mov ecx, dword ptr [edi + 0x3c]
    // cmp eax, ecx
    // if (...) GOTO(0x4b3efa)
    // mov edx, dword ptr [ebx]
    // mov eax, dword ptr [esp + 0x30]
    // mov ecx, dword ptr [esi + 0x15c]
    // push edx
    // mov edx, dword ptr [edi + 0x38]
    // push eax
    // lea eax, [edi + 8]
    // push edx
    // push eax
    // push esi
    // CALL(dword)
    // mov ebp, dword ptr [ebx]
    // add esp, 0x14
    // mov eax, dword ptr [esp + 0x18]
    // inc ebp
    // mov dword ptr [ebx], ebp
    // mov ecx, dword ptr [esi + 0xe4]
    // mov edx, dword ptr [edi + 0x38]
    // add edx, ecx
    // mov ecx, edx
    // mov dword ptr [edi + 0x38], edx
    // cmp ecx, eax
    // if (...) GOTO(0x4b3ee0)
    // mov dword ptr [edi + 0x38], 0
    // cmp dword ptr [edi + 0x34], eax
    // if (...) GOTO(0x4b3eec)
    // mov dword ptr [edi + 0x34], 0
    // mov edx, dword ptr [esi + 0xe4]
    // mov eax, dword ptr [edi + 0x34]
    // add edx, eax
    // mov dword ptr [edi + 0x3c], edx
    // mov eax, dword ptr [esp + 0x38]
    // mov ecx, dword ptr [ebx]
    // cmp ecx, eax
    // if (...) GOTO(0x4b3d70)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0xc
    // return;
    // sub esp, 0x18
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0x24]
    // push edi
    // mov ebx, dword ptr [ebp + 0xe4]
    // mov eax, dword ptr [ebp + 0x34]
    // imul eax, ebx
    // mov ecx, dword ptr [ebp + 4]
    // mov edi, dword ptr [ebp + 0x14c]
    // lea edx, [eax + eax*4]
    // shl edx, 2
    // push edx
    // push 1
    // push ebp
    // CALL(dword)
    // mov ecx, dword ptr [ebp + 0x34]
    // add esp, 0xc
    // mov dword ptr [esp + 0x28], eax
    // mov eax, dword ptr [ebp + 0x3c]
    // test ecx, ecx
    // mov dword ptr [esp + 0x14], 0
    // if (...) GOTO(0x4b402d)
    // push esi
    // lea esi, [ebx + ebx*2]
    // shl esi, 2
    // lea ecx, [eax + 8]
    // add edi, 8
    // mov dword ptr [esp + 0x20], esi
    // mov dword ptr [esp + 0x10], ecx
    // mov dword ptr [esp + 0x1c], edi
    // if (...) GOTO(0x4b3f7b)
    // mov ecx, dword ptr [esp + 0x10]
    // mov esi, dword ptr [esp + 0x20]
    // lea eax, [ebx + ebx*2]
    // mov edi, dword ptr [ebp + 4]
    // push eax
    // mov eax, dword ptr [ecx + 0x14]
    // imul eax, dword ptr [ebp + 0xe0]
    // shl eax, 3
    // cdq 
    // idiv dword ptr [ecx]
    // push eax
    // push 1
    // push ebp
    // CALL(dword)
    // mov ecx, dword ptr [esp + 0x3c]
    // add esp, 0x10
    // lea edi, [ecx + ebx*4]
    // mov ecx, esi
    // mov edx, ecx
    // mov esi, eax
    // shr ecx, 2
    // mov dword ptr [esp + 0x24], edi
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // test ebx, ebx
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x4b3fee)
    // mov esi, dword ptr [esp + 0x2c]
    // mov ecx, ebx
    // shl ecx, 4
    // add ecx, esi
    // lea edx, [eax + ebx*8]
    // sub esi, eax
    // mov dword ptr [esp + 0x14], ebx
    // mov edi, dword ptr [edx]
    // add edx, 4
    // mov dword ptr [esi + eax], edi
    // mov edi, dword ptr [eax]
    // mov dword ptr [ecx], edi
    // mov edi, dword ptr [esp + 0x14]
    // add eax, 4
    // add ecx, 4
    // dec edi
    // mov dword ptr [esp + 0x14], edi
    // if (...) GOTO(0x4b3fd1)
    // mov ecx, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [esp + 0x24]
    // lea edx, [ebx + ebx*4]
    // mov dword ptr [ecx], eax
    // mov eax, dword ptr [esp + 0x2c]
    // add ecx, 4
    // lea edx, [eax + edx*4]
    // mov eax, dword ptr [esp + 0x18]
    // mov dword ptr [esp + 0x2c], edx
    // mov edx, dword ptr [esp + 0x10]
    // mov dword ptr [esp + 0x1c], ecx
    // mov ecx, dword ptr [ebp + 0x34]
    // inc eax
    // add edx, 0x54
    // cmp eax, ecx
    // mov dword ptr [esp + 0x18], eax
    // mov dword ptr [esp + 0x10], edx
    // if (...) GOTO(0x4b3f73)
    // pop esi
    // pop edi
    // pop ebp
    // pop ebx
    // add esp, 0x18
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 8
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x14]
    // push edi
    // push(0x34)
    // push 1
    // mov eax, dword ptr [esi + 4]
    // push esi
    // mov dword ptr [esp + 0x18], 1
    // CALL(dword)
    // mov ebp, eax
    // xor edi, edi
    // mov dword ptr [esi + 0x15c], ebp
    // add esp, 0xc
    // mov dword ptr [ebp], 0x4b01e0
    // mov dword ptr [ebp + 4], 0x4b41d0
    // mov dword ptr [ebp + 8], edi
    // mov eax, dword ptr [esi + 0xb4]
    // cmp eax, edi
    // mov dword ptr [esp + 0x18], ebp
    // if (...) GOTO(0x4b4099)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 0x17
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov ecx, dword ptr [esi + 0x34]
    // mov eax, dword ptr [esi + 0x3c]
    // cmp ecx, edi
    // mov dword ptr [esp + 0x10], edi
    // if (...) GOTO(0x4b4196)
    // push ebx
    // lea ebx, [eax + 0xc]
    // lea edi, [ebp + 0xc]
    // mov ecx, dword ptr [ebx - 4]
    // mov eax, dword ptr [esi + 0xe0]
    // cmp ecx, eax
    // if (...) GOTO(0x4b40f0)
    // mov edx, dword ptr [ebx]
    // cmp edx, dword ptr [esi + 0xe4]
    // if (...) GOTO(0x4b40f0)
    // mov eax, dword ptr [esi + 0xb8]
    // test eax, eax
    // if (...) GOTO(0x4b40e5)
    // mov dword ptr [edi], 0x4b48c0
    // mov dword ptr [ebp + 8], 1
    // if (...) GOTO(0x4b417b)
    // mov dword ptr [edi], 0x4b43f0
    // if (...) GOTO(0x4b417b)
    // lea edx, [ecx + ecx]
    // cmp edx, eax
    // if (...) GOTO(0x4b414a)
    // mov ebp, dword ptr [ebx]
    // cmp ebp, dword ptr [esi + 0xe4]
    // if (...) GOTO(0x4b4115)
    // mov ebp, dword ptr [esp + 0x1c]
    // mov dword ptr [esp + 0x10], 0
    // mov dword ptr [edi], 0x4b4440
    // if (...) GOTO(0x4b417b)
    // mov ebp, dword ptr [esp + 0x1c]
    // cmp edx, eax
    // if (...) GOTO(0x4b414a)
    // mov edx, dword ptr [ebx]
    // shl edx, 1
    // cmp edx, dword ptr [esi + 0xe4]
    // if (...) GOTO(0x4b414a)
    // mov eax, dword ptr [esi + 0xb8]
    // test eax, eax
    // if (...) GOTO(0x4b4142)
    // mov dword ptr [edi], 0x4b45d0
    // mov dword ptr [ebp + 8], 1
    // if (...) GOTO(0x4b417b)
    // mov dword ptr [edi], 0x4b44f0
    // if (...) GOTO(0x4b417b)
    // cdq 
    // idiv ecx
    // test edx, edx
    // if (...) GOTO(0x4b416a)
    // mov eax, dword ptr [esi + 0xe4]
    // cdq 
    // idiv dword ptr [ebx]
    // test edx, edx
    // if (...) GOTO(0x4b416a)
    // mov dword ptr [esp + 0x10], edx
    // mov dword ptr [edi], 0x4b4260
    // if (...) GOTO(0x4b417b)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x25
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x14]
    // mov ecx, dword ptr [esi + 0x34]
    // inc eax
    // add edi, 4
    // add ebx, 0x54
    // cmp eax, ecx
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4b40b2)
    // pop ebx
    // mov eax, dword ptr [esi + 0xb8]
    // test eax, eax
    // if (...) GOTO(0x4b41bc)
    // mov eax, dword ptr [esp + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b41bc)
    // mov edx, dword ptr [esi]
    // push 0
    // push esi
    // mov dword ptr [edx + 0x14], 0x62
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 8
    // pop edi
    // pop esi
    // pop ebp
    // add esp, 8
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ecx
    // push ebx
    // mov ebx, dword ptr [esp + 0xc]
    // push ebp
    // push edi
    // mov eax, dword ptr [ebx + 0x34]
    // mov ebp, dword ptr [ebx + 0x15c]
    // mov edi, dword ptr [ebx + 0x3c]
    // mov dword ptr [esp + 0x14], 0
    // test eax, eax
    // if (...) GOTO(0x4b4251)
    // mov eax, dword ptr [esp + 0x1c]
    // push esi
    // mov esi, dword ptr [esp + 0x1c]
    // add ebp, 0xc
    // lea ecx, [eax*4]
    // mov eax, dword ptr [esp + 0x24]
    // sub eax, esi
    // mov dword ptr [esp + 0x10], ecx
    // mov dword ptr [esp + 0x20], eax
    // if (...) GOTO(0x4b4217)
    // mov eax, dword ptr [esp + 0x20]
    // mov edx, dword ptr [edi + 0xc]
    // mov eax, dword ptr [eax + esi]
    // imul edx, dword ptr [esp + 0x28]
    // lea ecx, [eax + edx*4]
    // mov edx, dword ptr [esi]
    // push ecx
    // mov ecx, dword ptr [esp + 0x14]
    // add edx, ecx
    // push edx
    // push edi
    // push ebx
    // CALL(dword)
    // mov eax, dword ptr [esp + 0x28]
    // mov ecx, dword ptr [ebx + 0x34]
    // add esp, 0x10
    // inc eax
    // add esi, 4
    // add ebp, 4
    // add edi, 0x54
    // cmp eax, ecx
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x4b4213)
    // pop esi
    // pop edi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x1c
    // mov ecx, dword ptr [esp + 0x20]
    // push ebx
    // mov ebx, dword ptr [esp + 0x28]
    // push ebp
    // mov eax, dword ptr [ecx + 0xe0]
    // push esi
    // cdq 
    // idiv dword ptr [ebx + 8]
    // push edi
    // mov edi, dword ptr [ecx + 0xe4]
    // mov ebp, dword ptr [ebx + 0x1c]
    // mov ecx, dword ptr [ecx + 0x18]
    // shl ebp, 3
    // mov dword ptr [esp + 0x28], ebp
    // mov esi, eax
    // mov eax, edi
    // cdq 
    // idiv dword ptr [ebx + 0xc]
    // mov dword ptr [esp + 0x18], eax
    // imul eax, esi
    // mov dword ptr [esp + 0x24], eax
    // cdq 
    // sub eax, edx
    // sar eax, 1
    // mov dword ptr [esp + 0x20], eax
    // mov eax, esi
    // imul eax, ebp
    // push eax
    // push ecx
    // push edi
    // mov edi, dword ptr [esp + 0x44]
    // push edi
    // CALL(0x4b4390)
    // mov eax, dword ptr [ebx + 0xc]
    // add esp, 0x10
    // test eax, eax
    // mov dword ptr [esp + 0x1c], 0
    // if (...) GOTO(0x4b4384)
    // mov edx, dword ptr [esp + 0x3c]
    // mov dword ptr [esp + 0x30], edi
    // mov dword ptr [esp + 0x38], edx
    // mov eax, dword ptr [esp + 0x38]
    // xor ebx, ebx
    // test ebp, ebp
    // mov ecx, dword ptr [eax]
    // mov dword ptr [esp + 0x10], ecx
    // jbe 0x4b434c
    // mov dword ptr [esp + 0x14], ebp
    // mov eax, dword ptr [esp + 0x18]
    // xor ebp, ebp
    // test eax, eax
    // if (...) GOTO(0x4b4324)
    // mov edi, dword ptr [esp + 0x30]
    // mov dword ptr [esp + 0x3c], eax
    // mov eax, dword ptr [edi]
    // add eax, ebx
    // test esi, esi
    // if (...) GOTO(0x4b4316)
    // mov ecx, esi
    // xor edx, edx
    // mov dl, byte ptr [eax]
    // add ebp, edx
    // inc eax
    // dec ecx
    // if (...) GOTO(0x4b430c)
    // mov eax, dword ptr [esp + 0x3c]
    // add edi, 4
    // dec eax
    // mov dword ptr [esp + 0x3c], eax
    // if (...) GOTO(0x4b4302)
    // mov eax, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [esp + 0x10]
    // add eax, ebp
    // add ebx, esi
    // cdq 
    // idiv dword ptr [esp + 0x24]
    // inc ecx
    // mov dword ptr [esp + 0x10], ecx
    // mov byte ptr [ecx - 1], al
    // mov eax, dword ptr [esp + 0x14]
    // dec eax
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4b42f0)
    // mov ebp, dword ptr [esp + 0x28]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x38]
    // mov ebx, dword ptr [esp + 0x30]
    // add edx, 4
    // lea eax, [ecx*4]
    // mov dword ptr [esp + 0x38], edx
    // mov edx, dword ptr [esp + 0x34]
    // add ebx, eax
    // mov eax, dword ptr [esp + 0x1c]
    // mov dword ptr [esp + 0x30], ebx
    // mov ecx, dword ptr [edx + 0xc]
    // inc eax
    // cmp eax, ecx
    // mov dword ptr [esp + 0x1c], eax
    // if (...) GOTO(0x4b42dc)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x1c
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [esp + 0xc]
    // push ebp
    // mov ebp, dword ptr [esp + 0x14]
    // sub ebp, ecx
    // test ebp, ebp
    // if (...) GOTO(0x4b43ea)
    // mov eax, dword ptr [esp + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b43ea)
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0x10]
    // push edi
    // mov dword ptr [esp + 0x20], eax
    // mov edi, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [esi]
    // add edi, eax
    // mov ecx, ebp
    // mov edx, ecx
    // add esi, 4
    // mov al, byte ptr [edi - 1]
    // mov bl, al
    // mov bh, bl
    // mov eax, ebx
    // shl eax, 0x10
    // mov ax, bx
    // shr ecx, 2
    // rep stosd dword ptr es:[edi], eax
    // mov ecx, edx
    // and ecx, 3
    // rep stosb byte ptr es:[edi], al
    // mov eax, dword ptr [esp + 0x20]
    // dec eax
    // mov dword ptr [esp + 0x20], eax
    // if (...) GOTO(0x4b43b2)
    // pop edi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // mov edx, dword ptr [esp + 0x10]
    // push edi
    // mov eax, dword ptr [esi + 0x18]
    // mov ecx, dword ptr [esi + 0xe4]
    // mov edi, dword ptr [esp + 0x18]
    // push eax
    // push ecx
    // push 0
    // push edi
    // push 0
    // push edx
    // CALL(0x4b04f0)
    // mov eax, dword ptr [esp + 0x28]
    // mov edx, dword ptr [esi + 0x18]
    // mov ecx, dword ptr [eax + 0x1c]
    // mov eax, dword ptr [esi + 0xe4]
    // shl ecx, 3
    // push ecx
    // push edx
    // push eax
    // push edi
    // CALL(0x4b4390)
    // add esp, 0x28
    // pop edi
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // push ecx
    // push ebp
    // mov ebp, dword ptr [esp + 0x10]
    // push esi
    // push edi
    // mov edi, dword ptr [ebp + 0x1c]
    // mov esi, dword ptr [esp + 0x1c]
    // shl edi, 3
    // mov dword ptr [esp + 0xc], edi
    // lea eax, [edi + edi]
    // push eax
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [eax + 0x18]
    // mov edx, dword ptr [eax + 0xe4]
    // push ecx
    // push edx
    // push esi
    // CALL(0x4b4390)
    // mov eax, dword ptr [ebp + 0xc]
    // add esp, 0x10
    // test eax, eax
    // mov dword ptr [esp + 0x14], 0
    // if (...) GOTO(0x4b44e2)
    // push ebx
    // mov ebx, dword ptr [esp + 0x24]
    // mov edx, esi
    // sub ebx, esi
    // mov dword ptr [esp + 0x20], edx
    // mov dword ptr [esp + 0x24], ebx
    // mov ecx, dword ptr [ebx + edx]
    // mov eax, dword ptr [edx]
    // xor esi, esi
    // test edi, edi
    // jbe 0x4b44ca
    // xor edx, edx
    // xor ebx, ebx
    // mov dl, byte ptr [eax + 1]
    // mov bl, byte ptr [eax]
    // mov ebp, esi
    // xor esi, 1
    // add ebp, edx
    // add eax, 2
    // add ebx, ebp
    // sar ebx, 1
    // mov byte ptr [ecx], bl
    // inc ecx
    // dec edi
    // if (...) GOTO(0x4b449d)
    // mov edi, dword ptr [esp + 0x10]
    // mov ebp, dword ptr [esp + 0x1c]
    // mov edx, dword ptr [esp + 0x20]
    // mov ebx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [ebp + 0xc]
    // inc eax
    // add edx, 4
    // cmp eax, ecx
    // mov dword ptr [esp + 0x18], eax
    // mov dword ptr [esp + 0x20], edx
    // if (...) GOTO(0x4b4492)
    // pop ebx
    // pop edi
    // pop esi
    // pop ebp
    // pop ecx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // sub esp, 0xc
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0x1c]
    // push esi
    // mov esi, dword ptr [esp + 0x24]
    // mov ebx, dword ptr [ebp + 0x1c]
    // shl ebx, 3
    // mov dword ptr [esp + 0x14], ebx
    // lea eax, [ebx + ebx]
    // push eax
    // mov eax, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [eax + 0x18]
    // mov edx, dword ptr [eax + 0xe4]
    // push ecx
    // push edx
    // push esi
    // CALL(0x4b4390)
    // mov eax, dword ptr [ebp + 0xc]
    // add esp, 0x10
    // test eax, eax
    // mov dword ptr [esp + 0x10], 0
    // if (...) GOTO(0x4b45c3)
    // mov eax, dword ptr [esp + 0x28]
    // mov edx, esi
    // push edi
    // mov dword ptr [esp + 0x10], edx
    // mov dword ptr [esp + 0x20], eax
    // mov ecx, dword ptr [esp + 0x20]
    // mov eax, dword ptr [edx]
    // test ebx, ebx
    // mov esi, dword ptr [ecx]
    // mov ecx, dword ptr [edx + 4]
    // mov edi, 1
    // jbe 0x4b45a0
    // mov dword ptr [esp + 0x28], ebx
    // xor edx, edx
    // xor ebx, ebx
    // mov dl, byte ptr [ecx + 1]
    // mov bl, byte ptr [eax + 1]
    // mov ebp, edx
    // xor edx, edx
    // mov dl, byte ptr [eax]
    // add ebp, ebx
    // xor ebx, ebx
    // add eax, 2
    // mov bl, byte ptr [ecx]
    // add ecx, 2
    // add ebx, edi
    // xor edi, 3
    // add ebx, ebp
    // add edx, ebx
    // sar edx, 2
    // mov byte ptr [esi], dl
    // mov edx, dword ptr [esp + 0x28]
    // inc esi
    // dec edx
    // mov dword ptr [esp + 0x28], edx
    // if (...) GOTO(0x4b455e)
    // mov ebx, dword ptr [esp + 0x18]
    // mov ebp, dword ptr [esp + 0x24]
    // mov edx, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esp + 0x14]
    // mov esi, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [ebp + 0xc]
    // add edx, 8
    // inc eax
    // add esi, 4
    // cmp eax, ecx
    // mov dword ptr [esp + 0x10], edx
    // mov dword ptr [esp + 0x14], eax
    // mov dword ptr [esp + 0x20], esi
    // if (...) GOTO(0x4b4546)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0xc
    // return;
    // CALL(0x405098)
    // // nop
    // sub esp, 0x2c
    // mov eax, dword ptr [esp + 0x38]
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0x3c]
    // push esi
    // push edi
    // mov esi, dword ptr [ebp + 0x1c]
    // mov edi, dword ptr [esp + 0x40]
    // shl esi, 3
    // mov edx, dword ptr [edi + 0x18]
    // lea ebx, [eax - 4]
    // mov eax, dword ptr [edi + 0xe4]
    // lea ecx, [esi + esi]
    // push ecx
    // add eax, 2
    // push edx
    // push eax
    // push ebx
    // CALL(0x4b4390)
    // mov eax, dword ptr [edi + 0xb8]
    // add esp, 0x10
    // mov dword ptr [esp + 0x28], 0
    // lea ecx, [eax + eax*4]
    // shl ecx, 4
    // shl eax, 4
    // mov edx, ecx
    // mov ecx, 0x4000
    // mov dword ptr [esp + 0x40], eax
    // mov eax, dword ptr [ebp + 0xc]
    // sub ecx, edx
    // test eax, eax
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x4b48b1)
    // mov eax, dword ptr [esp + 0x4c]
    // add esi, -2
    // mov dword ptr [esp + 0x4c], eax
    // mov eax, ebx
    // mov dword ptr [esp + 0x38], esi
    // mov dword ptr [esp + 0x24], eax
    // mov ecx, dword ptr [esp + 0x4c]
    // mov ebx, dword ptr [eax + 4]
    // mov edi, dword ptr [eax]
    // mov ebp, dword ptr [eax + 0xc]
    // mov edx, dword ptr [ecx]
    // lea ecx, [ebx + 2]
    // mov dword ptr [esp + 0x1c], ecx
    // xor ecx, ecx
    // mov cl, byte ptr [edi]
    // mov esi, dword ptr [eax + 8]
    // mov dword ptr [esp + 0x2c], ecx
    // lea ecx, [ebp + 2]
    // mov dword ptr [esp + 0x30], ecx
    // lea ecx, [edi + 2]
    // mov dword ptr [esp + 0x20], ecx
    // mov dword ptr [esp + 0x48], edx
    // xor ecx, ecx
    // xor edx, edx
    // mov cl, byte ptr [ebp + 1]
    // mov dl, byte ptr [ebp]
    // mov ebp, ecx
    // xor ecx, ecx
    // mov cl, byte ptr [edi + 1]
    // mov edi, dword ptr [esp + 0x1c]
    // mov dword ptr [esp + 0x14], edx
    // xor edx, edx
    // mov dl, byte ptr [esi]
    // add ebp, ecx
    // xor ecx, ecx
    // mov dword ptr [esp + 0x18], edx
    // mov cl, byte ptr [edi]
    // xor edx, edx
    // mov dl, byte ptr [ebx]
    // mov edi, ecx
    // lea eax, [esi + 2]
    // add edi, edx
    // xor ecx, ecx
    // add edi, ebp
    // mov cl, byte ptr [eax]
    // mov ebp, dword ptr [esp + 0x14]
    // add ecx, edi
    // mov edi, dword ptr [esp + 0x18]
    // add ecx, edi
    // mov edi, dword ptr [esp + 0x2c]
    // add ecx, edi
    // mov dword ptr [esp + 0x34], eax
    // add ecx, ebp
    // mov ebp, dword ptr [esp + 0x20]
    // xor eax, eax
    // mov al, byte ptr [ebp]
    // mov ebp, eax
    // xor eax, eax
    // add ebp, edi
    // mov edi, dword ptr [esp + 0x30]
    // mov al, byte ptr [edi]
    // lea ecx, [ebp + ecx*2]
    // add eax, ecx
    // xor ecx, ecx
    // mov cl, byte ptr [esi + 1]
    // mov ebp, dword ptr [esp + 0x14]
    // mov esi, ecx
    // xor ecx, ecx
    // mov cl, byte ptr [ebx + 1]
    // add edx, esi
    // add ecx, edx
    // mov edx, dword ptr [esp + 0x18]
    // add eax, ebp
    // add ecx, edx
    // imul eax, dword ptr [esp + 0x40]
    // imul ecx, dword ptr [esp + 0x10]
    // lea edx, [eax + ecx + 0x8000]
    // mov eax, dword ptr [esp + 0x48]
    // mov ecx, dword ptr [esp + 0x34]
    // mov esi, dword ptr [esp + 0x20]
    // sar edx, 0x10
    // mov byte ptr [eax], dl
    // mov edx, dword ptr [esp + 0x38]
    // inc eax
    // mov dword ptr [esp + 0x48], eax
    // mov eax, dword ptr [esp + 0x1c]
    // test edx, edx
    // jbe 0x4b47e6
    // mov dword ptr [esp + 0x20], edx
    // xor edx, edx
    // xor ebx, ebx
    // mov dl, byte ptr [edi + 1]
    // mov bl, byte ptr [esi + 1]
    // add edx, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [ecx - 1]
    // add eax, 2
    // add edx, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [eax - 3]
    // add ecx, 2
    // add edx, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [edi]
    // add esi, 2
    // add edx, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [esi - 2]
    // add edi, 2
    // add edx, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [eax]
    // add edx, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [ecx]
    // add edx, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [edi - 3]
    // lea ebp, [ebx + edx*2]
    // xor ebx, ebx
    // mov bl, byte ptr [esi - 3]
    // xor edx, edx
    // add ebp, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [esi]
    // mov dl, byte ptr [eax - 1]
    // add ebp, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [edi]
    // add ebp, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [ecx - 1]
    // imul ebp, dword ptr [esp + 0x40]
    // add ebx, edx
    // xor edx, edx
    // mov dl, byte ptr [ecx - 2]
    // add ebx, edx
    // xor edx, edx
    // mov dl, byte ptr [eax - 2]
    // add ebx, edx
    // imul ebx, dword ptr [esp + 0x10]
    // lea edx, [ebx + ebp + 0x8000]
    // mov ebp, dword ptr [esp + 0x48]
    // sar edx, 0x10
    // mov byte ptr [ebp], dl
    // mov edx, dword ptr [esp + 0x20]
    // inc ebp
    // dec edx
    // mov dword ptr [esp + 0x48], ebp
    // mov dword ptr [esp + 0x20], edx
    // if (...) GOTO(0x4b4743)
    // xor edx, edx
    // xor ebx, ebx
    // mov dl, byte ptr [edi + 1]
    // mov bl, byte ptr [eax - 1]
    // mov dword ptr [esp + 0x30], edx
    // xor edx, edx
    // mov dl, byte ptr [esi + 1]
    // mov dword ptr [esp + 0x20], edx
    // xor edx, edx
    // mov dl, byte ptr [ecx + 1]
    // mov dword ptr [esp + 0x1c], edx
    // xor edx, edx
    // mov dl, byte ptr [eax + 1]
    // mov ebp, edx
    // xor edx, edx
    // mov dl, byte ptr [ecx - 1]
    // mov dword ptr [esp + 0x2c], ebp
    // add edx, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [edi]
    // add ebx, ebp
    // mov ebp, edx
    // xor edx, edx
    // add ebx, ebp
    // mov dl, byte ptr [esi]
    // mov ebp, dword ptr [esp + 0x20]
    // add edx, ebx
    // mov ebx, dword ptr [esp + 0x1c]
    // add edx, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [edi - 1]
    // add edx, ebp
    // mov ebp, dword ptr [esp + 0x30]
    // mov edi, ebx
    // mov ebx, dword ptr [esp + 0x20]
    // add edx, ebp
    // add edi, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [esi - 1]
    // lea edx, [edi + edx*2]
    // mov edi, dword ptr [esp + 0x4c]
    // add ebx, edx
    // xor edx, edx
    // mov dl, byte ptr [ecx]
    // xor ecx, ecx
    // mov cl, byte ptr [eax]
    // mov eax, dword ptr [esp + 0x2c]
    // add eax, edx
    // add ebx, ebp
    // imul ebx, dword ptr [esp + 0x40]
    // add ecx, eax
    // mov eax, dword ptr [esp + 0x1c]
    // add ecx, eax
    // mov eax, dword ptr [esp + 0x48]
    // imul ecx, dword ptr [esp + 0x10]
    // add edi, 4
    // lea edx, [ebx + ecx + 0x8000]
    // mov ecx, dword ptr [esp + 0x24]
    // sar edx, 0x10
    // mov byte ptr [eax], dl
    // mov edx, dword ptr [esp + 0x44]
    // lea eax, [ecx + 8]
    // mov ecx, dword ptr [esp + 0x28]
    // mov esi, dword ptr [edx + 0xc]
    // inc ecx
    // cmp ecx, esi
    // mov dword ptr [esp + 0x24], eax
    // mov dword ptr [esp + 0x28], ecx
    // mov dword ptr [esp + 0x4c], edi
    // if (...) GOTO(0x4b464f)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x2c
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // sub esp, 0x18
    // push ebx
    // mov ebx, dword ptr [esp + 0x24]
    // push ebp
    // mov ebp, dword ptr [esp + 0x2c]
    // push esi
    // mov esi, dword ptr [ebx + 0x1c]
    // push edi
    // mov edi, dword ptr [esp + 0x2c]
    // shl esi, 3
    // mov ecx, dword ptr [edi + 0xe4]
    // mov eax, dword ptr [edi + 0x18]
    // push esi
    // add ecx, 2
    // push eax
    // lea edx, [ebp - 4]
    // push ecx
    // push edx
    // CALL(0x4b4390)
    // mov eax, dword ptr [edi + 0xb8]
    // mov ecx, 0x80
    // sub ecx, eax
    // add esp, 0x10
    // shl eax, 6
    // mov dword ptr [esp + 0x10], eax
    // mov eax, dword ptr [ebx + 0xc]
    // shl ecx, 9
    // test eax, eax
    // mov dword ptr [esp + 0x14], ecx
    // mov dword ptr [esp + 0x1c], 0
    // if (...) GOTO(0x4b4a57)
    // mov eax, dword ptr [esp + 0x38]
    // add esi, -2
    // mov dword ptr [esp + 0x38], eax
    // lea eax, [ebp + 4]
    // mov dword ptr [esp + 0x24], esi
    // mov dword ptr [esp + 0x20], eax
    // mov ecx, dword ptr [esp + 0x38]
    // mov edi, dword ptr [eax - 8]
    // mov ebp, dword ptr [eax]
    // mov edx, dword ptr [ecx]
    // mov ecx, dword ptr [eax - 4]
    // mov dword ptr [esp + 0x34], edx
    // xor eax, eax
    // mov al, byte ptr [ecx]
    // xor edx, edx
    // mov dl, byte ptr [ebp]
    // mov esi, eax
    // mov eax, edx
    // xor edx, edx
    // mov dl, byte ptr [edi]
    // mov ebx, esi
    // add ebx, eax
    // xor eax, eax
    // mov al, byte ptr [ebp + 1]
    // add edx, ebx
    // inc ebp
    // inc edi
    // xor ebx, ebx
    // inc ecx
    // mov bl, byte ptr [edi]
    // mov dword ptr [esp + 0x2c], edx
    // add eax, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [ecx]
    // add edx, edx
    // add eax, ebx
    // sub edx, esi
    // imul esi, dword ptr [esp + 0x14]
    // add edx, eax
    // mov ebx, dword ptr [esp + 0x24]
    // imul edx, dword ptr [esp + 0x10]
    // lea edx, [edx + esi + 0x8000]
    // mov esi, dword ptr [esp + 0x34]
    // sar edx, 0x10
    // mov byte ptr [esi], dl
    // mov edx, dword ptr [esp + 0x2c]
    // inc esi
    // mov dword ptr [esp + 0x2c], eax
    // test ebx, ebx
    // mov dword ptr [esp + 0x34], esi
    // jbe 0x4b4a07
    // mov dword ptr [esp + 0x18], ebx
    // xor eax, eax
    // xor ebx, ebx
    // mov al, byte ptr [ecx]
    // mov bl, byte ptr [edi + 1]
    // inc ecx
    // inc edi
    // mov esi, eax
    // inc ebp
    // xor eax, eax
    // sub edx, esi
    // mov al, byte ptr [ebp]
    // imul esi, dword ptr [esp + 0x14]
    // add eax, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [ecx]
    // add eax, ebx
    // mov ebx, dword ptr [esp + 0x2c]
    // add edx, eax
    // mov dword ptr [esp + 0x2c], eax
    // add edx, ebx
    // imul edx, dword ptr [esp + 0x10]
    // lea edx, [edx + esi + 0x8000]
    // mov esi, dword ptr [esp + 0x34]
    // sar edx, 0x10
    // mov byte ptr [esi], dl
    // mov edx, ebx
    // mov ebx, dword ptr [esp + 0x18]
    // inc esi
    // dec ebx
    // mov dword ptr [esp + 0x34], esi
    // mov dword ptr [esp + 0x18], ebx
    // if (...) GOTO(0x4b49b2)
    // xor ebx, ebx
    // add eax, eax
    // mov bl, byte ptr [ecx]
    // mov ecx, ebx
    // mov ebx, dword ptr [esp + 0x38]
    // sub eax, ecx
    // imul ecx, dword ptr [esp + 0x14]
    // add eax, edx
    // mov edx, dword ptr [esp + 0x30]
    // imul eax, dword ptr [esp + 0x10]
    // add ebx, 4
    // lea ecx, [eax + ecx + 0x8000]
    // mov eax, dword ptr [esp + 0x20]
    // sar ecx, 0x10
    // mov byte ptr [esi], cl
    // mov ecx, dword ptr [esp + 0x1c]
    // mov esi, dword ptr [edx + 0xc]
    // inc ecx
    // add eax, 4
    // cmp ecx, esi
    // mov dword ptr [esp + 0x1c], ecx
    // mov dword ptr [esp + 0x38], ebx
    // mov dword ptr [esp + 0x20], eax
    // if (...) GOTO(0x4b4938)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x18
    // return;
    // // nop
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // push(0xc)
    // push 1
    // mov eax, dword ptr [esi + 4]
    // push esi
    // CALL(dword)
    // mov edi, eax
    // add esp, 0xc
    // mov dword ptr [esi + 0x158], edi
    // mov ebx, 4
    // mov dword ptr [edi], 0x4b01e0
    // mov eax, dword ptr [esi + 0x24]
    // dec eax
    // cmp eax, ebx
    // if (...) GOTO(0x4b4ac9)
    // if (...) GOTO(dword)
    // cmp dword ptr [esi + 0x20], 1
    // if (...) GOTO(0x4b4ae0)
    // if (...) GOTO(0x4b4acf)
    // cmp dword ptr [esi + 0x20], 3
    // if (...) GOTO(0x4b4ae0)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 7
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // if (...) GOTO(0x4b4add)
    // cmp dword ptr [esi + 0x20], ebx
    // if (...) GOTO(0x4b4ae0)
    // mov edx, dword ptr [esi]
    // push esi
    // mov dword ptr [edx + 0x14], 7
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // if (...) GOTO(0x4b4add)
    // cmp dword ptr [esi + 0x20], 1
    // if (...) GOTO(0x4b4ae0)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 7
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x38]
    // lea ecx, [eax - 1]
    // cmp ecx, ebx
    // if (...) GOTO(0x4b4c45)
    // if (...) GOTO(dword)
    // cmp dword ptr [esi + 0x34], 1
    // if (...) GOTO(0x4b4b0c)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 8
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x24]
    // cmp eax, 1
    // if (...) GOTO(0x4b4b1f)
    // mov dword ptr [edi + 4], 0x4b50d0
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // cmp eax, 2
    // if (...) GOTO(0x4b4b35)
    // mov dword ptr [edi], 0x4b4ca0
    // mov dword ptr [edi + 4], 0x4b4eb0
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // cmp eax, 3
    // if (...) GOTO(0x4b4be8)
    // mov dword ptr [edi + 4], 0x4b50d0
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // cmp dword ptr [esi + 0x34], 3
    // if (...) GOTO(0x4b4b60)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 8
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // cmp dword ptr [esi + 0x24], 2
    // if (...) GOTO(0x4b4c65)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x19
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // cmp dword ptr [esi + 0x34], 3
    // if (...) GOTO(0x4b4b96)
    // mov edx, dword ptr [esi]
    // push esi
    // mov dword ptr [edx + 0x14], 8
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x24]
    // cmp eax, 2
    // if (...) GOTO(0x4b4baf)
    // mov dword ptr [edi], 0x4b4ca0
    // mov dword ptr [edi + 4], 0x4b4d80
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // cmp eax, 3
    // if (...) GOTO(0x4b4c65)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 0x19
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // cmp dword ptr [esi + 0x34], ebx
    // if (...) GOTO(0x4b4be3)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 8
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // cmp dword ptr [esi + 0x24], ebx
    // if (...) GOTO(0x4b4c65)
    // mov edx, dword ptr [esi]
    // push esi
    // mov dword ptr [edx + 0x14], 0x19
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // cmp dword ptr [esi + 0x34], ebx
    // if (...) GOTO(0x4b4c13)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 8
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x24]
    // cmp eax, ebx
    // if (...) GOTO(0x4b4c2b)
    // mov dword ptr [edi], 0x4b4ca0
    // mov dword ptr [edi + 4], 0x4b4f60
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // cmp eax, 5
    // if (...) GOTO(0x4b4c65)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x19
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // cmp eax, dword ptr [esi + 0x24]
    // if (...) GOTO(0x4b4c54)
    // mov edx, dword ptr [esi + 0x34]
    // mov eax, dword ptr [esi + 0x20]
    // cmp edx, eax
    // if (...) GOTO(0x4b4c65)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x19
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov dword ptr [edi + 4], 0x4b5140
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // xchg esi, eax
    // dec edx
    // dec ebx
    // add byte ptr [esi - 0x61ffb4b6], bl
    // dec edx
    // dec ebx
    // add byte ptr [edx + ecx*2 + 0x4ab4004b], dh
    // dec ebx
    // add ch, dh
    // dec edx
    // dec ebx
    // add byte ptr [ecx + 0x4b], cl
    // dec ebx
    // add byte ptr [edi + 0x4b], bh
    // dec ebx
    // add ch, cl
    // dec ebx
    // dec ebx
    // add ch, bh
    // dec ebx
    // dec ebx
    // add byte ptr [eax - 0x6f6f6f70], dl
    // // nop
    // // nop
    // // nop
    // sub esp, 8
    // mov eax, dword ptr [esp + 0xc]
    // push ebx
    // push ebp
    // push esi
    // mov ecx, dword ptr [eax + 4]
    // mov esi, dword ptr [eax + 0x158]
    // push edi
    // push(0x2000)
    // push 1
    // push eax
    // CALL(dword)
    // mov dword ptr [esi + 8], eax
    // xor edx, edx
    // add esp, 0xc
    // xor ebx, ebx
    // xor edi, edi
    // xor esi, esi
    // mov dword ptr [esp + 0x14], edx
    // mov dword ptr [esp + 0x10], edx
    // mov dword ptr [esp + 0x1c], 0x807fff
    // mov ecx, 0x8000
    // add eax, 0x800
    // mov ebp, dword ptr [esp + 0x1c]
    // mov dword ptr [eax - 0x800], edx
    // mov dword ptr [eax - 0x400], esi
    // mov dword ptr [eax], ecx
    // mov dword ptr [eax + 0x400], edi
    // mov dword ptr [eax + 0x800], ebx
    // mov dword ptr [eax + 0xc00], ebp
    // mov ebp, dword ptr [esp + 0x10]
    // mov dword ptr [eax + 0x1000], ebp
    // mov ebp, dword ptr [esp + 0x14]
    // mov dword ptr [eax + 0x1400], ebp
    // mov ebp, dword ptr [esp + 0x1c]
    // add ebp, 0x8000
    // add ecx, 0x1d2f
    // mov dword ptr [esp + 0x1c], ebp
    // mov ebp, dword ptr [esp + 0x10]
    // sub ebp, 0x6b2f
    // add edx, 0x4c8b
    // mov dword ptr [esp + 0x10], ebp
    // mov ebp, dword ptr [esp + 0x14]
    // add eax, 4
    // add esi, 0x9646
    // sub edi, 0x2b33
    // sub ebx, 0x54cd
    // sub ebp, 0x14d1
    // cmp ecx, 0x1d91d1
    // mov dword ptr [esp + 0x14], ebp
    // if (...) GOTO(0x4b4ce6)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 8
    // return;
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10
    // mov ecx, dword ptr [esp + 0x14]
    // mov eax, dword ptr [ecx + 0x158]
    // mov ecx, dword ptr [ecx + 0x18]
    // mov dword ptr [esp], ecx
    // mov ecx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [eax + 8]
    // dec ecx
    // js 0x4b4ea3
    // mov edx, dword ptr [esp + 0x20]
    // push ebx
    // push ebp
    // push esi
    // shl edx, 2
    // inc ecx
    // push edi
    // mov edi, dword ptr [esp + 0x2c]
    // mov dword ptr [esp + 0x34], ecx
    // mov ecx, dword ptr [esp + 0x28]
    // mov ebp, dword ptr [edi + 8]
    // mov esi, dword ptr [ecx]
    // mov ebp, dword ptr [edx + ebp]
    // add ecx, 4
    // mov dword ptr [esp + 0x24], ebp
    // mov dword ptr [esp + 0x28], ecx
    // mov ecx, dword ptr [edi]
    // mov ebp, dword ptr [esp + 0x10]
    // mov ebx, dword ptr [edx + ecx]
    // mov ecx, dword ptr [edi + 4]
    // mov ecx, dword ptr [edx + ecx]
    // add edx, 4
    // test ebp, ebp
    // mov dword ptr [esp + 0x1c], edx
    // jbe 0x4b4e90
    // mov edx, dword ptr [esp + 0x24]
    // sub ebx, ecx
    // sub edx, ecx
    // mov dword ptr [esp + 0x30], ebx
    // mov dword ptr [esp + 0x18], edx
    // mov dword ptr [esp + 0x24], ebp
    // xor edx, edx
    // mov dl, byte ptr [esi]
    // add esi, 3
    // mov edi, edx
    // xor edx, edx
    // mov dl, byte ptr [esi - 2]
    // mov ebp, edx
    // xor edx, edx
    // mov dl, byte ptr [esi - 1]
    // mov ebx, dword ptr [eax + ebp*4 + 0x400]
    // mov dword ptr [esp + 0x14], edx
    // mov edx, dword ptr [eax + edx*4 + 0x800]
    // add edx, ebx
    // mov ebx, dword ptr [eax + edi*4]
    // add edx, ebx
    // mov ebx, dword ptr [esp + 0x30]
    // sar edx, 0x10
    // mov byte ptr [ebx + ecx], dl
    // mov edx, dword ptr [esp + 0x14]
    // mov ebx, dword ptr [eax + edx*4 + 0x1400]
    // add ebx, dword ptr [eax + ebp*4 + 0x1000]
    // add ebx, dword ptr [eax + edi*4 + 0xc00]
    // sar ebx, 0x10
    // mov byte ptr [ecx], bl
    // mov edx, dword ptr [eax + edx*4 + 0x1c00]
    // mov ebx, dword ptr [eax + ebp*4 + 0x1800]
    // mov ebp, dword ptr [eax + edi*4 + 0x1400]
    // mov edi, dword ptr [esp + 0x18]
    // add edx, ebx
    // add edx, ebp
    // sar edx, 0x10
    // mov byte ptr [edi + ecx], dl
    // mov edx, dword ptr [esp + 0x24]
    // inc ecx
    // dec edx
    // mov dword ptr [esp + 0x24], edx
    // if (...) GOTO(0x4b4dff)
    // mov edi, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x34]
    // dec ecx
    // mov dword ptr [esp + 0x34], ecx
    // if (...) GOTO(0x4b4db6)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push ecx
    // mov eax, dword ptr [esp + 8]
    // push esi
    // mov ecx, dword ptr [eax + 0x158]
    // mov edx, dword ptr [eax + 0x18]
    // mov eax, dword ptr [esp + 0x1c]
    // mov dword ptr [esp + 4], edx
    // mov esi, dword ptr [ecx + 8]
    // dec eax
    // js 0x4b4f5b
    // mov ecx, dword ptr [esp + 0x18]
    // push ebx
    // push ebp
    // inc eax
    // push edi
    // lea edi, [ecx*4]
    // mov dword ptr [esp + 0x18], eax
    // mov ecx, dword ptr [esp + 0x1c]
    // add edi, 4
    // mov dword ptr [esp + 0x24], edi
    // mov eax, dword ptr [ecx]
    // add ecx, 4
    // mov dword ptr [esp + 0x1c], ecx
    // mov ecx, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [ecx]
    // mov ecx, dword ptr [ecx + edi - 4]
    // mov dword ptr [esp + 0x28], ecx
    // xor ecx, ecx
    // test edx, edx
    // jbe 0x4b4f4d
    // xor edx, edx
    // mov dl, byte ptr [eax]
    // add eax, 3
    // mov edi, edx
    // xor edx, edx
    // mov dl, byte ptr [eax - 2]
    // mov ebp, edx
    // xor edx, edx
    // mov dl, byte ptr [eax - 1]
    // mov ebx, dword ptr [esi + ebp*4 + 0x400]
    // mov ebp, dword ptr [esi + edi*4]
    // mov edx, dword ptr [esi + edx*4 + 0x800]
    // mov edi, dword ptr [esp + 0x28]
    // add edx, ebx
    // add edx, ebp
    // sar edx, 0x10
    // mov byte ptr [ecx + edi], dl
    // mov edx, dword ptr [esp + 0x10]
    // inc ecx
    // cmp ecx, edx
    // if (...) GOTO(0x4b4f0c)
    // mov edi, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esp + 0x18]
    // dec eax
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x4b4ee4)
    // pop edi
    // pop ebp
    // pop ebx
    // pop esi
    // pop ecx
    // return;
    // // nop
    // // nop
    // sub esp, 0x14
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x28]
    // dec edx
    // mov eax, dword ptr [ecx + 0x158]
    // mov ecx, dword ptr [ecx + 0x18]
    // mov dword ptr [esp], ecx
    // mov eax, dword ptr [eax + 8]
    // js 0x4b50c3
    // mov ecx, dword ptr [esp + 0x24]
    // push ebx
    // shl ecx, 2
    // push ebp
    // inc edx
    // push esi
    // mov esi, dword ptr [esp + 0x2c]
    // push edi
    // mov dword ptr [esp + 0x34], edx
    // mov edi, dword ptr [esp + 0x2c]
    // mov ebx, dword ptr [esi + 8]
    // mov edx, dword ptr [edi]
    // mov ebx, dword ptr [ebx + ecx]
    // add edi, 4
    // mov dword ptr [esp + 0x14], ebx
    // mov ebx, dword ptr [esi + 0xc]
    // mov dword ptr [esp + 0x2c], edi
    // mov edi, dword ptr [esi]
    // mov dword ptr [esp + 0x28], edx
    // mov ebx, dword ptr [ecx + ebx]
    // mov ebp, dword ptr [ecx + edi]
    // mov edi, dword ptr [esi + 4]
    // mov dword ptr [esp + 0x38], ebx
    // mov ebx, dword ptr [esp + 0x10]
    // mov edi, dword ptr [ecx + edi]
    // add ecx, 4
    // test ebx, ebx
    // mov dword ptr [esp + 0x20], ecx
    // jbe 0x4b50b0
    // mov ecx, dword ptr [esp + 0x38]
    // sub edi, ebp
    // sub ecx, ebp
    // mov dword ptr [esp + 0x1c], edi
    // mov dword ptr [esp + 0x18], ecx
    // mov ecx, dword ptr [esp + 0x14]
    // sub ecx, ebp
    // mov dword ptr [esp + 0x38], ebx
    // mov dword ptr [esp + 0x14], ecx
    // if (...) GOTO(0x4b4ffd)
    // mov edx, dword ptr [esp + 0x28]
    // xor ecx, ecx
    // xor ebx, ebx
    // mov cl, byte ptr [edx]
    // mov bl, byte ptr [edx + 1]
    // mov esi, ecx
    // mov ecx, 0xff
    // sub ecx, esi
    // mov esi, 0xff
    // sub esi, ebx
    // xor ebx, ebx
    // mov bl, byte ptr [edx + 2]
    // mov dl, byte ptr [edx + 3]
    // mov edi, 0xff
    // sub edi, ebx
    // mov ebx, dword ptr [esp + 0x18]
    // mov byte ptr [ebx + ebp], dl
    // mov edx, dword ptr [esp + 0x28]
    // mov ebx, dword ptr [eax + esi*4 + 0x400]
    // add edx, 4
    // mov dword ptr [esp + 0x28], edx
    // mov edx, dword ptr [eax + edi*4 + 0x800]
    // add edx, ebx
    // mov ebx, dword ptr [eax + ecx*4]
    // add edx, ebx
    // sar edx, 0x10
    // mov byte ptr [ebp], dl
    // mov edx, dword ptr [eax + edi*4 + 0x1400]
    // mov ebx, dword ptr [eax + esi*4 + 0x1000]
    // add edx, ebx
    // mov ebx, dword ptr [eax + ecx*4 + 0xc00]
    // add edx, ebx
    // mov ebx, dword ptr [esp + 0x1c]
    // sar edx, 0x10
    // mov byte ptr [ebx + ebp], dl
    // mov edx, dword ptr [eax + edi*4 + 0x1c00]
    // mov ebx, dword ptr [eax + esi*4 + 0x1800]
    // mov edi, dword ptr [eax + ecx*4 + 0x1400]
    // mov ecx, dword ptr [esp + 0x14]
    // add edx, ebx
    // add edx, edi
    // sar edx, 0x10
    // mov byte ptr [ecx + ebp], dl
    // mov ecx, dword ptr [esp + 0x38]
    // inc ebp
    // dec ecx
    // mov dword ptr [esp + 0x38], ecx
    // if (...) GOTO(0x4b4ff9)
    // mov esi, dword ptr [esp + 0x30]
    // mov ecx, dword ptr [esp + 0x20]
    // mov edx, dword ptr [esp + 0x34]
    // dec edx
    // mov dword ptr [esp + 0x34], edx
    // if (...) GOTO(0x4b4f96)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x14
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push ecx
    // mov eax, dword ptr [esp + 8]
    // push edi
    // mov edi, dword ptr [eax + 0x18]
    // mov eax, dword ptr [eax + 0x20]
    // mov dword ptr [esp + 4], eax
    // mov eax, dword ptr [esp + 0x1c]
    // dec eax
    // js 0x4b5134
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x10]
    // push ebx
    // inc eax
    // push ebp
    // push esi
    // lea ebp, [ecx*4]
    // mov dword ptr [esp + 0x18], eax
    // mov eax, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [edx]
    // add edx, 4
    // add ebp, 4
    // mov eax, dword ptr [eax]
    // mov esi, dword ptr [eax + ebp - 4]
    // xor eax, eax
    // test edi, edi
    // jbe 0x4b5126
    // mov bl, byte ptr [ecx]
    // mov byte ptr [eax + esi], bl
    // mov ebx, dword ptr [esp + 0x10]
    // add ecx, ebx
    // inc eax
    // cmp eax, edi
    // if (...) GOTO(0x4b5116)
    // mov eax, dword ptr [esp + 0x18]
    // dec eax
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x4b50fe)
    // pop esi
    // pop ebp
    // pop ebx
    // pop edi
    // pop ecx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push ebp
    // push edi
    // mov ebp, dword ptr [eax + 0x34]
    // mov edi, dword ptr [eax + 0x18]
    // mov eax, dword ptr [esp + 0x1c]
    // dec eax
    // js 0x4b51d0
    // mov ecx, dword ptr [esp + 0x18]
    // inc eax
    // push ebx
    // push esi
    // lea edx, [ecx*4]
    // mov dword ptr [esp + 0x20], eax
    // mov dword ptr [esp + 0x14], edx
    // xor ebx, ebx
    // test ebp, ebp
    // mov dword ptr [esp + 0x24], ebx
    // if (...) GOTO(0x4b51aa)
    // mov edx, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [esp + 0x18]
    // mov esi, dword ptr [esp + 0x14]
    // mov ecx, dword ptr [eax]
    // mov eax, dword ptr [edx]
    // mov esi, dword ptr [eax + esi]
    // xor eax, eax
    // test edi, edi
    // jbe 0x4b519e
    // add ecx, ebx
    // mov bl, byte ptr [ecx]
    // add ecx, ebp
    // mov byte ptr [eax + esi], bl
    // inc eax
    // cmp eax, edi
    // if (...) GOTO(0x4b518e)
    // mov ebx, dword ptr [esp + 0x24]
    // inc ebx
    // add edx, 4
    // cmp ebx, ebp
    // mov dword ptr [esp + 0x24], ebx
    // if (...) GOTO(0x4b5177)
    // mov edx, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esp + 0x14]
    // mov eax, 4
    // add edx, eax
    // add ecx, eax
    // mov eax, dword ptr [esp + 0x20]
    // mov dword ptr [esp + 0x18], edx
    // dec eax
    // mov dword ptr [esp + 0x14], ecx
    // mov dword ptr [esp + 0x20], eax
    // if (...) GOTO(0x4b5169)
    // pop esi
    // pop ebx
    // pop edi
    // pop ebp
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // push(0x24)
    // push 1
    // mov eax, dword ptr [esi + 4]
    // push esi
    // CALL(dword)
    // mov edi, eax
    // xor ebx, ebx
    // mov dword ptr [esi + 0x144], edi
    // push esi
    // mov dword ptr [edi], 0x4b5810
    // mov dword ptr [edi + 4], 0x4b5ca0
    // mov dword ptr [edi + 8], 0x4b5cd0
    // mov dword ptr [edi + 0x10], ebx
    // CALL(0x4b52a0)
    // mov eax, dword ptr [esi + 0xa4]
    // add esp, 0x10
    // cmp eax, ebx
    // if (...) GOTO(0x4b5230)
    // push esi
    // CALL(0x4b5470)
    // add esp, 4
    // if (...) GOTO(0x4b5240)
    // mov dword ptr [esi + 0xdc], ebx
    // mov dword ptr [esi + 0xa0], 1
    // cmp dword ptr [esi + 0xdc], ebx
    // if (...) GOTO(0x4b5252)
    // mov dword ptr [esi + 0xb0], 1
    // cmp dword ptr [esp + 0x14], ebx
    // if (...) GOTO(0x4b5272)
    // cmp dword ptr [esi + 0xb0], ebx
    // if (...) GOTO(0x4b5269)
    // mov dword ptr [edi + 0x14], 1
    // if (...) GOTO(0x4b5275)
    // mov dword ptr [edi + 0x14], 2
    // if (...) GOTO(0x4b5275)
    // mov dword ptr [edi + 0x14], ebx
    // mov dword ptr [edi + 0x20], ebx
    // mov dword ptr [edi + 0x18], ebx
    // cmp dword ptr [esi + 0xb0], ebx
    // if (...) GOTO(0x4b5292)
    // mov ecx, dword ptr [esi + 0xa0]
    // shl ecx, 1
    // mov dword ptr [edi + 0x1c], ecx
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov edx, dword ptr [esi + 0xa0]
    // mov dword ptr [edi + 0x1c], edx
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // // nop
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x10]
    // push edi
    // mov eax, dword ptr [esi + 0x1c]
    // test eax, eax
    // jbe 0x4b52c4
    // mov eax, dword ptr [esi + 0x18]
    // test eax, eax
    // jbe 0x4b52c4
    // mov eax, dword ptr [esi + 0x34]
    // test eax, eax
    // if (...) GOTO(0x4b52c4)
    // mov eax, dword ptr [esi + 0x20]
    // test eax, eax
    // if (...) GOTO(0x4b52d5)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x1f
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov ecx, dword ptr [esi + 0x1c]
    // mov eax, 0xffdc
    // cmp ecx, eax
    // if (...) GOTO(0x4b52e6)
    // cmp dword ptr [esi + 0x18], eax
    // if (...) GOTO(0x4b52fc)
    // mov edx, dword ptr [esi]
    // push esi
    // mov dword ptr [edx + 0x14], 0x28
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x18], eax
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // cmp dword ptr [esi + 0x30], 8
    // if (...) GOTO(0x4b531b)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0xd
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [esi + 0x30]
    // mov dword ptr [ecx + 0x18], edx
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov ecx, dword ptr [esi + 0x34]
    // mov eax, 0xa
    // cmp ecx, eax
    // if (...) GOTO(0x4b5345)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 0x18
    // mov edx, dword ptr [esi]
    // mov ecx, dword ptr [esi + 0x34]
    // mov dword ptr [edx + 0x18], ecx
    // mov edx, dword ptr [esi]
    // mov dword ptr [edx + 0x1c], eax
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov ecx, dword ptr [esi + 0x34]
    // mov eax, dword ptr [esi + 0x3c]
    // mov ebp, 1
    // xor ebx, ebx
    // test ecx, ecx
    // mov dword ptr [esi + 0xe0], ebp
    // mov dword ptr [esi + 0xe4], ebp
    // if (...) GOTO(0x4b53c1)
    // lea edi, [eax + 0xc]
    // mov eax, dword ptr [edi - 4]
    // test eax, eax
    // if (...) GOTO(0x4b537c)
    // cmp eax, 4
    // if (...) GOTO(0x4b537c)
    // mov eax, dword ptr [edi]
    // test eax, eax
    // if (...) GOTO(0x4b537c)
    // cmp eax, 4
    // if (...) GOTO(0x4b538d)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 0x10
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0xe0]
    // mov ecx, dword ptr [edi - 4]
    // cmp eax, ecx
    // if (...) GOTO(0x4b539c)
    // mov eax, ecx
    // mov dword ptr [esi + 0xe0], eax
    // mov eax, dword ptr [esi + 0xe4]
    // mov ecx, dword ptr [edi]
    // cmp eax, ecx
    // if (...) GOTO(0x4b53b0)
    // mov eax, ecx
    // mov dword ptr [esi + 0xe4], eax
    // mov eax, dword ptr [esi + 0x34]
    // inc ebx
    // add edi, 0x54
    // cmp ebx, eax
    // if (...) GOTO(0x4b5365)
    // mov ecx, dword ptr [esi + 0x34]
    // mov eax, dword ptr [esi + 0x3c]
    // xor ebx, ebx
    // test ecx, ecx
    // if (...) GOTO(0x4b544c)
    // lea edi, [eax + 0x24]
    // mov ecx, dword ptr [edi - 0x1c]
    // mov dword ptr [edi - 0x20], ebx
    // mov dword ptr [edi], 8
    // imul ecx, dword ptr [esi + 0x18]
    // mov eax, dword ptr [esi + 0xe0]
    // shl eax, 3
    // push eax
    // push ecx
    // CALL(0x4b04c0)
    // mov dword ptr [edi - 8], eax
    // mov eax, dword ptr [edi - 0x18]
    // imul eax, dword ptr [esi + 0x1c]
    // mov edx, dword ptr [esi + 0xe4]
    // shl edx, 3
    // push edx
    // push eax
    // CALL(0x4b04c0)
    // mov edx, dword ptr [edi - 0x1c]
    // mov dword ptr [edi - 4], eax
    // imul edx, dword ptr [esi + 0x18]
    // mov ecx, dword ptr [esi + 0xe0]
    // push ecx
    // push edx
    // CALL(0x4b04c0)
    // mov ecx, dword ptr [edi - 0x18]
    // mov dword ptr [edi + 4], eax
    // imul ecx, dword ptr [esi + 0x1c]
    // mov eax, dword ptr [esi + 0xe4]
    // push eax
    // push ecx
    // CALL(0x4b04c0)
    // add esp, 0x20
    // mov dword ptr [edi + 8], eax
    // mov dword ptr [edi + 0xc], ebp
    // mov eax, dword ptr [esi + 0x34]
    // inc ebx
    // add edi, 0x54
    // cmp ebx, eax
    // if (...) GOTO(0x4b53d0)
    // mov edx, dword ptr [esi + 0xe4]
    // mov eax, dword ptr [esi + 0x1c]
    // shl edx, 3
    // push edx
    // push eax
    // CALL(0x4b04c0)
    // add esp, 8
    // mov dword ptr [esi + 0xe8], eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // sub esp, 0xa48
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0xa58]
    // push edi
    // xor edi, edi
    // cmp dword ptr [esi + 0xa0], edi
    // if (...) GOTO(0x4b54a1)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x11
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x18], edi
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov ebx, dword ptr [esi + 0xa4]
    // mov dword ptr [esp + 0x18], ebx
    // cmp dword ptr [ebx + 0x14], edi
    // if (...) GOTO(0x4b54cb)
    // cmp dword ptr [ebx + 0x18], 0x3f
    // if (...) GOTO(0x4b54cb)
    // mov ecx, dword ptr [esi + 0x34]
    // mov dword ptr [esi + 0xdc], edi
    // cmp ecx, edi
    // if (...) GOTO(0x4b54ee)
    // xor eax, eax
    // lea edi, [esp + 0x30]
    // if (...) GOTO(0x4b54ec)
    // mov ecx, dword ptr [esi + 0x34]
    // mov dword ptr [esi + 0xdc], 1
    // cmp ecx, edi
    // if (...) GOTO(0x4b54ee)
    // and ecx, 0xffffff
    // lea edi, [esp + 0x58]
    // shl ecx, 6
    // or eax, 0xffffffff
    // rep stosd dword ptr es:[edi], eax
    // mov ecx, dword ptr [esi + 0xa0]
    // mov eax, 1
    // cmp ecx, eax
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4b578e)
    // mov edi, dword ptr [ebx]
    // test edi, edi
    // mov dword ptr [esp + 0x14], edi
    // if (...) GOTO(0x4b5514)
    // cmp edi, 4
    // if (...) GOTO(0x4b5533)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x18
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x18], edi
    // mov edx, dword ptr [esi]
    // mov dword ptr [edx + 0x1c], 4
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // xor ebp, ebp
    // test edi, edi
    // if (...) GOTO(0x4b5593)
    // mov edi, dword ptr [ebx + 4]
    // test edi, edi
    // if (...) GOTO(0x4b5545)
    // cmp edi, dword ptr [esi + 0x34]
    // if (...) GOTO(0x4b555f)
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esp + 0x10]
    // push esi
    // mov dword ptr [ecx + 0x14], 0x11
    // mov edx, dword ptr [esi]
    // mov dword ptr [edx + 0x18], eax
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // test ebp, ebp
    // if (...) GOTO(0x4b5581)
    // cmp edi, dword ptr [ebx]
    // if (...) GOTO(0x4b5581)
    // mov edx, dword ptr [esi]
    // mov ecx, dword ptr [esp + 0x10]
    // push esi
    // mov dword ptr [edx + 0x14], 0x11
    // mov eax, dword ptr [esi]
    // mov dword ptr [eax + 0x18], ecx
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x14]
    // inc ebp
    // add ebx, 4
    // cmp ebp, eax
    // if (...) GOTO(0x4b5539)
    // mov ebx, dword ptr [esp + 0x18]
    // mov edi, eax
    // mov ebp, dword ptr [ebx + 0x14]
    // mov ecx, dword ptr [ebx + 0x18]
    // mov eax, dword ptr [ebx + 0x1c]
    // mov edx, dword ptr [ebx + 0x20]
    // cmp dword ptr [esi + 0xdc], 0
    // mov dword ptr [esp + 0x2c], ebp
    // mov dword ptr [esp + 0x1c], ecx
    // mov dword ptr [esp + 0x28], eax
    // mov dword ptr [esp + 0x20], edx
    // if (...) GOTO(0x4b5704)
    // test ebp, ebp
    // if (...) GOTO(0x4b55e0)
    // cmp ebp, 0x40
    // if (...) GOTO(0x4b55e0)
    // cmp ecx, ebp
    // if (...) GOTO(0x4b55e0)
    // cmp ecx, 0x40
    // if (...) GOTO(0x4b55e0)
    // test eax, eax
    // if (...) GOTO(0x4b55e0)
    // cmp eax, 0xd
    // if (...) GOTO(0x4b55e0)
    // test edx, edx
    // if (...) GOTO(0x4b55e0)
    // cmp edx, 0xd
    // if (...) GOTO(0x4b55fe)
    // mov eax, dword ptr [esi]
    // mov edx, dword ptr [esp + 0x10]
    // push esi
    // mov dword ptr [eax + 0x14], 0xf
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x18], edx
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // mov ecx, dword ptr [esp + 0x20]
    // add esp, 4
    // test ebp, ebp
    // if (...) GOTO(0x4b561f)
    // test ecx, ecx
    // if (...) GOTO(0x4b563e)
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esp + 0x10]
    // push esi
    // mov dword ptr [ecx + 0x14], 0xf
    // mov edx, dword ptr [esi]
    // mov dword ptr [edx + 0x18], eax
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // if (...) GOTO(0x4b563b)
    // cmp edi, 1
    // if (...) GOTO(0x4b563e)
    // mov edx, dword ptr [esi]
    // mov ecx, dword ptr [esp + 0x10]
    // push esi
    // mov dword ptr [edx + 0x14], 0xf
    // mov eax, dword ptr [esi]
    // mov dword ptr [eax + 0x18], ecx
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // test edi, edi
    // if (...) GOTO(0x4b5770)
    // lea eax, [ebx + 4]
    // mov dword ptr [esp + 0x24], edi
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4b5657)
    // mov ebp, dword ptr [esp + 0x2c]
    // mov ecx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [ecx]
    // shl edx, 8
    // test ebp, ebp
    // lea edi, [esp + edx + 0x58]
    // if (...) GOTO(0x4b5689)
    // cmp dword ptr [edi], 0
    // if (...) GOTO(0x4b5689)
    // mov eax, dword ptr [esi]
    // mov ebp, dword ptr [esp + 0x10]
    // push esi
    // mov dword ptr [eax + 0x14], 0xf
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x18], ebp
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // if (...) GOTO(0x4b568d)
    // mov ebp, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esp + 0x2c]
    // mov ecx, dword ptr [esp + 0x1c]
    // cmp eax, ecx
    // if (...) GOTO(0x4b56e8)
    // mov ebx, ecx
    // lea edi, [edi + eax*4]
    // sub ebx, eax
    // inc ebx
    // mov eax, dword ptr [edi]
    // test eax, eax
    // if (...) GOTO(0x4b56b1)
    // mov eax, dword ptr [esp + 0x28]
    // test eax, eax
    // if (...) GOTO(0x4b56d8)
    // if (...) GOTO(0x4b56c2)
    // mov ecx, dword ptr [esp + 0x28]
    // cmp ecx, eax
    // if (...) GOTO(0x4b56c2)
    // mov eax, dword ptr [esp + 0x20]
    // dec ecx
    // cmp eax, ecx
    // if (...) GOTO(0x4b56d8)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0xf
    // mov ecx, dword ptr [esi]
    // mov dword ptr [ecx + 0x18], ebp
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esp + 0x20]
    // mov dword ptr [edi], eax
    // add edi, 4
    // dec ebx
    // if (...) GOTO(0x4b56a1)
    // mov ebx, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esp + 0x14]
    // mov eax, dword ptr [esp + 0x24]
    // add ecx, 4
    // dec eax
    // mov dword ptr [esp + 0x14], ecx
    // mov dword ptr [esp + 0x24], eax
    // if (...) GOTO(0x4b5653)
    // if (...) GOTO(0x4b5770)
    // test ebp, ebp
    // if (...) GOTO(0x4b5715)
    // cmp ecx, 0x3f
    // if (...) GOTO(0x4b5715)
    // test eax, eax
    // if (...) GOTO(0x4b5715)
    // test edx, edx
    // if (...) GOTO(0x4b572f)
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [esp + 0x10]
    // push esi
    // mov dword ptr [ecx + 0x14], 0xf
    // mov edx, dword ptr [esi]
    // mov dword ptr [edx + 0x18], eax
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // test edi, edi
    // if (...) GOTO(0x4b5770)
    // add ebx, 4
    // mov ebp, edi
    // mov eax, dword ptr [ebx]
    // lea edi, [esp + eax*4 + 0x30]
    // mov eax, dword ptr [esp + eax*4 + 0x30]
    // test eax, eax
    // if (...) GOTO(0x4b5760)
    // mov edx, dword ptr [esi]
    // mov ecx, dword ptr [esp + 0x10]
    // push esi
    // mov dword ptr [edx + 0x14], 0x11
    // mov eax, dword ptr [esi]
    // mov dword ptr [eax + 0x18], ecx
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // add ebx, 4
    // dec ebp
    // mov dword ptr [edi], 1
    // if (...) GOTO(0x4b5738)
    // mov ebx, dword ptr [esp + 0x18]
    // mov eax, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esi + 0xa0]
    // add ebx, 0x24
    // inc eax
    // cmp eax, ecx
    // mov dword ptr [esp + 0x18], ebx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4b5505)
    // mov eax, dword ptr [esi + 0xdc]
    // test eax, eax
    // if (...) GOTO(0x4b57d5)
    // mov eax, dword ptr [esi + 0x34]
    // xor edi, edi
    // test eax, eax
    // if (...) GOTO(0x4b5804)
    // lea ebx, [esp + 0x58]
    // mov ebp, 0x2c
    // cmp dword ptr [ebx], 0
    // if (...) GOTO(0x4b57bc)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], ebp
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x34]
    // inc edi
    // add ebx, 0x100
    // cmp edi, eax
    // if (...) GOTO(0x4b57aa)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0xa48
    // return;
    // mov eax, dword ptr [esi + 0x34]
    // xor edi, edi
    // test eax, eax
    // if (...) GOTO(0x4b5804)
    // lea ebx, [esp + 0x30]
    // mov ebp, 0x2c
    // cmp dword ptr [ebx], 0
    // if (...) GOTO(0x4b57f9)
    // mov edx, dword ptr [esi]
    // push esi
    // mov dword ptr [edx + 0x14], ebp
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x34]
    // inc edi
    // add ebx, 4
    // cmp edi, eax
    // if (...) GOTO(0x4b57e7)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0xa48
    // return;
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // mov edi, dword ptr [esi + 0x144]
    // mov eax, dword ptr [edi + 0x14]
    // sub eax, 0
    // if (...) GOTO(0x4b5907)
    // dec eax
    // if (...) GOTO(0x4b5844)
    // dec eax
    // if (...) GOTO(0x4b5883)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x2f
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // if (...) GOTO(0x4b599a)
    // push esi
    // CALL(0x4b59d0)
    // push esi
    // CALL(0x4b5ad0)
    // mov eax, dword ptr [esi + 0x134]
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x4b58e2)
    // mov eax, dword ptr [esi + 0x13c]
    // test eax, eax
    // if (...) GOTO(0x4b58e2)
    // mov eax, dword ptr [esi + 0xac]
    // test eax, eax
    // if (...) GOTO(0x4b58e2)
    // mov eax, dword ptr [edi + 0x18]
    // mov dword ptr [edi + 0x14], 2
    // inc eax
    // mov dword ptr [edi + 0x18], eax
    // mov eax, dword ptr [esi + 0xb0]
    // test eax, eax
    // if (...) GOTO(0x4b589c)
    // push esi
    // CALL(0x4b59d0)
    // push esi
    // CALL(0x4b5ad0)
    // add esp, 8
    // mov edx, dword ptr [esi + 0x164]
    // push 0
    // push esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x150]
    // push 2
    // push esi
    // CALL(dword)
    // mov eax, dword ptr [edi + 0x20]
    // add esp, 0x10
    // test eax, eax
    // if (...) GOTO(0x4b58c9)
    // mov ecx, dword ptr [esi + 0x154]
    // push esi
    // CALL(dword)
    // add esp, 4
    // mov edx, dword ptr [esi + 0x154]
    // push esi
    // CALL(dword)
    // add esp, 4
    // mov dword ptr [edi + 0xc], 0
    // if (...) GOTO(0x4b599a)
    // mov eax, dword ptr [esi + 0x164]
    // push 1
    // push esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x150]
    // push 2
    // push esi
    // CALL(dword)
    // add esp, 0x10
    // mov dword ptr [edi + 0xc], 0
    // if (...) GOTO(0x4b599a)
    // push esi
    // CALL(0x4b59d0)
    // push esi
    // CALL(0x4b5ad0)
    // mov eax, dword ptr [esi + 0xa8]
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x4b5940)
    // mov edx, dword ptr [esi + 0x158]
    // push esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x15c]
    // push esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x14c]
    // push 0
    // push esi
    // CALL(dword)
    // add esp, 0x10
    // mov edx, dword ptr [esi + 0x160]
    // push esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0xb0]
    // mov eax, dword ptr [esi + 0x164]
    // push ecx
    // push esi
    // CALL(dword)
    // mov ecx, dword ptr [edi + 0x1c]
    // xor eax, eax
    // mov edx, dword ptr [esi + 0x150]
    // cmp ecx, 1
    // setle al
    // dec eax
    // and eax, 3
    // push eax
    // push esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x148]
    // push 0
    // push esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0xb0]
    // add esp, 0x1c
    // test eax, eax
    // if (...) GOTO(0x4b5993)
    // mov dword ptr [edi + 0xc], 0
    // if (...) GOTO(0x4b599a)
    // mov dword ptr [edi + 0xc], 1
    // mov edx, dword ptr [edi + 0x1c]
    // mov eax, dword ptr [edi + 0x18]
    // dec edx
    // xor ecx, ecx
    // cmp eax, edx
    // sete cl
    // mov dword ptr [edi + 0x10], ecx
    // mov ecx, dword ptr [esi + 8]
    // test ecx, ecx
    // if (...) GOTO(0x4b59be)
    // mov dword ptr [ecx + 0xc], eax
    // mov edx, dword ptr [esi + 8]
    // mov eax, dword ptr [edi + 0x1c]
    // mov dword ptr [edx + 0x10], eax
    // pop edi
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x10]
    // push edi
    // xor edi, edi
    // mov ecx, dword ptr [esi + 0xa4]
    // cmp ecx, edi
    // if (...) GOTO(0x4b5a59)
    // mov eax, dword ptr [esi + 0x144]
    // mov eax, dword ptr [eax + 0x20]
    // lea edx, [eax + eax*8]
    // mov eax, dword ptr [ecx + edx*4]
    // mov dword ptr [esi + 0xec], eax
    // mov eax, dword ptr [ecx + edx*4]
    // lea edx, [ecx + edx*4]
    // cmp eax, edi
    // if (...) GOTO(0x4b5a30)
    // lea ebp, [esi + 0xf0]
    // lea ebx, [edx + 4]
    // mov ecx, dword ptr [ebx]
    // add ebx, 4
    // add ebp, 4
    // lea eax, [ecx*8]
    // sub eax, ecx
    // inc edi
    // lea ecx, [eax + eax*2]
    // mov eax, dword ptr [esi + 0x3c]
    // lea ecx, [eax + ecx*4]
    // mov dword ptr [ebp - 4], ecx
    // mov eax, dword ptr [edx]
    // cmp edi, eax
    // if (...) GOTO(0x4b5a0c)
    // mov eax, dword ptr [edx + 0x14]
    // pop edi
    // mov dword ptr [esi + 0x134], eax
    // mov ecx, dword ptr [edx + 0x18]
    // mov dword ptr [esi + 0x138], ecx
    // mov eax, dword ptr [edx + 0x1c]
    // mov dword ptr [esi + 0x13c], eax
    // mov ecx, dword ptr [edx + 0x20]
    // mov dword ptr [esi + 0x140], ecx
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov eax, dword ptr [esi + 0x34]
    // mov ebx, 4
    // cmp eax, ebx
    // if (...) GOTO(0x4b5a83)
    // mov edx, dword ptr [esi]
    // push esi
    // mov dword ptr [edx + 0x14], 0x18
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [esi + 0x34]
    // mov dword ptr [eax + 0x18], ecx
    // mov edx, dword ptr [esi]
    // mov dword ptr [edx + 0x1c], ebx
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x34]
    // xor edx, edx
    // cmp eax, edi
    // mov dword ptr [esi + 0xec], eax
    // if (...) GOTO(0x4b5aae)
    // xor ecx, ecx
    // lea eax, [esi + 0xf0]
    // mov ebp, dword ptr [esi + 0x3c]
    // add ebp, ecx
    // inc edx
    // mov dword ptr [eax], ebp
    // mov ebp, dword ptr [esi + 0x34]
    // add eax, ebx
    // add ecx, 0x54
    // cmp edx, ebp
    // if (...) GOTO(0x4b5a9a)
    // mov dword ptr [esi + 0x134], edi
    // mov dword ptr [esi + 0x13c], edi
    // mov dword ptr [esi + 0x140], edi
    // mov dword ptr [esi + 0x138], 0x3f
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // // nop
    // push ecx
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0x10]
    // mov ebx, 1
    // push edi
    // mov eax, dword ptr [esi + 0xec]
    // cmp eax, ebx
    // if (...) GOTO(0x4b5b3a)
    // mov ecx, dword ptr [esi + 0xf0]
    // mov eax, dword ptr [ecx + 0x1c]
    // mov dword ptr [esi + 0x100], eax
    // mov edx, dword ptr [ecx + 0x20]
    // mov dword ptr [esi + 0x104], edx
    // mov edi, dword ptr [ecx + 0xc]
    // mov eax, dword ptr [ecx + 0x20]
    // xor edx, edx
    // div edi
    // mov dword ptr [ecx + 0x34], ebx
    // mov dword ptr [ecx + 0x38], ebx
    // mov dword ptr [ecx + 0x3c], ebx
    // mov dword ptr [ecx + 0x40], 8
    // mov dword ptr [ecx + 0x44], ebx
    // test edx, edx
    // if (...) GOTO(0x4b5b22)
    // mov edx, edi
    // mov dword ptr [ecx + 0x48], edx
    // mov dword ptr [esi + 0x108], ebx
    // mov dword ptr [esi + 0x10c], 0
    // if (...) GOTO(0x4b5c72)
    // xor edi, edi
    // cmp eax, edi
    // if (...) GOTO(0x4b5b45)
    // cmp eax, 4
    // if (...) GOTO(0x4b5b6a)
    // mov eax, dword ptr [esi]
    // push esi
    // mov dword ptr [eax + 0x14], 0x18
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [esi + 0xec]
    // mov dword ptr [ecx + 0x18], edx
    // mov eax, dword ptr [esi]
    // mov dword ptr [eax + 0x1c], 4
    // mov ecx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov edx, dword ptr [esi + 0xe0]
    // mov eax, dword ptr [esi + 0x18]
    // shl edx, 3
    // push edx
    // push eax
    // CALL(0x4b04c0)
    // mov ecx, dword ptr [esi + 0xe4]
    // mov edx, dword ptr [esi + 0x1c]
    // shl ecx, 3
    // push ecx
    // push edx
    // mov dword ptr [esi + 0x100], eax
    // CALL(0x4b04c0)
    // mov dword ptr [esi + 0x104], eax
    // mov eax, dword ptr [esi + 0xec]
    // add esp, 0x10
    // cmp eax, edi
    // mov dword ptr [esi + 0x108], edi
    // mov dword ptr [esp + 0x14], edi
    // if (...) GOTO(0x4b5c72)
    // lea eax, [esi + 0xf0]
    // push ebp
    // mov dword ptr [esp + 0x10], eax
    // mov ecx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [ecx]
    // mov edi, dword ptr [ecx + 8]
    // mov eax, dword ptr [ecx + 0x1c]
    // mov ebp, dword ptr [ecx + 0xc]
    // mov dword ptr [ecx + 0x34], edi
    // lea edx, [edi*8]
    // mov ebx, ebp
    // mov dword ptr [ecx + 0x40], edx
    // xor edx, edx
    // div edi
    // imul ebx, edi
    // mov dword ptr [ecx + 0x38], ebp
    // mov dword ptr [ecx + 0x3c], ebx
    // test edx, edx
    // if (...) GOTO(0x4b5bf3)
    // mov edx, edi
    // mov eax, dword ptr [ecx + 0x20]
    // mov dword ptr [ecx + 0x44], edx
    // xor edx, edx
    // div ebp
    // test edx, edx
    // if (...) GOTO(0x4b5c03)
    // mov edx, ebp
    // mov dword ptr [ecx + 0x48], edx
    // mov eax, dword ptr [esi + 0x108]
    // add eax, ebx
    // cmp eax, 0xa
    // if (...) GOTO(0x4b5c24)
    // mov ecx, dword ptr [esi]
    // push esi
    // mov dword ptr [ecx + 0x14], 0xb
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // add esp, 4
    // mov eax, ebx
    // dec ebx
    // test eax, eax
    // if (...) GOTO(0x4b5c4f)
    // lea eax, [ebx + 1]
    // mov ecx, dword ptr [esi + 0x108]
    // mov edx, dword ptr [esp + 0x18]
    // mov dword ptr [esi + ecx*4 + 0x10c], edx
    // mov edx, dword ptr [esi + 0x108]
    // inc edx
    // dec eax
    // mov dword ptr [esi + 0x108], edx
    // if (...) GOTO(0x4b5c2e)
    // mov eax, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esi + 0xec]
    // inc eax
    // add edx, 4
    // cmp eax, ecx
    // mov dword ptr [esp + 0x18], eax
    // mov dword ptr [esp + 0x10], edx
    // if (...) GOTO(0x4b5bc2)
    // pop ebp
    // mov eax, dword ptr [esi + 0xc4]
    // test eax, eax
    // if (...) GOTO(0x4b5c95)
    // imul eax, dword ptr [esi + 0x100]
    // cmp eax, 0xffff
    // if (...) GOTO(0x4b5c8f)
    // mov eax, 0xffff
    // mov dword ptr [esi + 0xc0], eax
    // pop edi
    // pop esi
    // pop ebx
    // pop ecx
    // return;
    // CALL(0x405098)
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push esi
    // mov eax, dword ptr [esi + 0x144]
    // mov dword ptr [eax + 0xc], 0
    // mov ecx, dword ptr [esi + 0x154]
    // CALL(dword)
    // mov edx, dword ptr [esi + 0x154]
    // push esi
    // CALL(dword)
    // add esp, 8
    // pop esi
    // return;
    // CALL(0x405099)
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // push edi
    // mov eax, dword ptr [edi + 0x164]
    // mov esi, dword ptr [edi + 0x144]
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x14]
    // add esp, 4
    // sub eax, 0
    // if (...) GOTO(0x4b5d2a)
    // dec eax
    // if (...) GOTO(0x4b5d19)
    // dec eax
    // if (...) GOTO(0x4b5d3e)
    // mov eax, dword ptr [edi + 0xb0]
    // test eax, eax
    // if (...) GOTO(0x4b5d3b)
    // mov eax, dword ptr [esi + 0x20]
    // mov dword ptr [esi + 0x14], 1
    // inc eax
    // pop edi
    // mov dword ptr [esi + 0x20], eax
    // mov eax, dword ptr [esi + 0x18]
    // inc eax
    // mov dword ptr [esi + 0x18], eax
    // pop esi
    // return;
    // mov eax, dword ptr [esi + 0x18]
    // mov dword ptr [esi + 0x14], 2
    // inc eax
    // pop edi
    // mov dword ptr [esi + 0x18], eax
    // pop esi
    // return;
    // mov dword ptr [esi + 0x14], 2
    // mov eax, dword ptr [edi + 0xb0]
    // test eax, eax
    // if (...) GOTO(0x4b5d3e)
    // inc dword ptr [esi + 0x20]
    // mov eax, dword ptr [esi + 0x18]
    // pop edi
    // inc eax
    // mov dword ptr [esi + 0x18], eax
    // pop esi
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // sub esp, 0x14
    // mov eax, dword ptr [esp + 0x18]
    // push ebx
    // push ebp
    // push esi
    // push edi
    // add eax, 8
    // mov dword ptr [esp + 0x20], 8
    // mov esi, dword ptr [eax + 0x14]
    // mov ecx, dword ptr [eax - 8]
    // mov edi, dword ptr [eax + 0x10]
    // lea edx, [ecx + esi]
    // sub ecx, esi
    // mov dword ptr [esp + 0x18], ecx
    // mov ecx, dword ptr [eax - 4]
    // lea esi, [ecx + edi]
    // sub ecx, edi
    // mov edi, dword ptr [eax + 0xc]
    // mov dword ptr [esp + 0x14], ecx
    // mov ecx, dword ptr [eax]
    // lea ebx, [edi + ecx]
    // sub ecx, edi
    // mov edi, dword ptr [eax + 8]
    // mov dword ptr [esp + 0x10], ecx
    // mov ecx, dword ptr [eax + 4]
    // lea ebp, [ecx + edi]
    // sub ecx, edi
    // mov edi, ecx
    // lea ecx, [edx + ebp]
    // sub edx, ebp
    // mov ebp, edx
    // lea edx, [ebx + esi]
    // sub esi, ebx
    // mov dword ptr [esp + 0x1c], edi
    // lea ebx, [edx + ecx]
    // sub ecx, edx
    // shl ecx, 2
    // mov dword ptr [eax + 8], ecx
    // lea ecx, [esi + ebp]
    // movsx edx, cx
    // shl ebx, 2
    // lea ecx, [edx + edx*2]
    // mov dword ptr [eax - 8], ebx
    // shl ecx, 3
    // sub ecx, edx
    // lea ecx, [ecx + ecx*2]
    // lea ecx, [edx + ecx*4]
    // shl ecx, 4
    // add ecx, edx
    // movsx edx, bp
    // lea ebx, [edx + edx*2]
    // shl ebx, 4
    // add ebx, edx
    // shl ebx, 6
    // sub ebx, edx
    // lea edx, [ecx + ebx*2 + 0x400]
    // sar edx, 0xb
    // mov dword ptr [eax], edx
    // movsx edx, si
    // lea esi, [edx + edx*2]
    // lea esi, [esi + esi*4]
    // shl esi, 2
    // sub esi, edx
    // lea esi, [edx + esi*8]
    // shl esi, 5
    // add esi, edx
    // mov edx, dword ptr [esp + 0x10]
    // sub ecx, esi
    // add ecx, 0x400
    // sar ecx, 0xb
    // mov dword ptr [eax + 0x10], ecx
    // mov ecx, dword ptr [esp + 0x14]
    // lea ebx, [edi + ecx]
    // mov ecx, dword ptr [esp + 0x18]
    // lea ebp, [edx + ecx]
    // lea edx, [ebx + ebp]
    // movsx edx, dx
    // lea ecx, [edx + edx*4]
    // shl ecx, 6
    // add ecx, edx
    // lea ecx, [ecx + ecx*4]
    // lea edx, [edx + ecx*2]
    // mov ecx, dword ptr [esp + 0x14]
    // lea esi, [edx + edx*2]
    // mov edx, dword ptr [esp + 0x18]
    // add edx, edi
    // movsx edi, dx
    // mov edx, dword ptr [esp + 0x10]
    // imul edi, edi, 0xffffe333
    // add ecx, edx
    // add eax, 0x20
    // movsx edx, cx
    // mov ecx, edx
    // neg ecx
    // shl ecx, 2
    // sub ecx, edx
    // shl ecx, 3
    // sub ecx, edx
    // shl ecx, 8
    // sub ecx, edx
    // shl ecx, 1
    // sub ecx, edx
    // movsx edx, bx
    // mov ebx, edx
    // shl ebx, 6
    // sub ebx, edx
    // shl ebx, 2
    // sub ebx, edx
    // shl ebx, 4
    // add ebx, edx
    // lea edx, [edx + ebx*4]
    // mov ebx, edx
    // mov edx, esi
    // sub edx, ebx
    // movsx ebx, bp
    // lea ebp, [ebx + ebx*2]
    // lea ebp, [ebx + ebp*8]
    // shl ebp, 5
    // sub ebp, ebx
    // movsx ebx, word ptr [esp + 0x1c]
    // imul ebx, ebx, 0x98e
    // add ebx, edx
    // shl ebp, 2
    // lea ebx, [ebx + edi + 0x400]
    // sub esi, ebp
    // sar ebx, 0xb
    // mov dword ptr [eax - 0xc], ebx
    // movsx ebx, word ptr [esp + 0x10]
    // imul ebx, ebx, 0x41b3
    // add ebx, esi
    // lea ebx, [ebx + ecx + 0x400]
    // sar ebx, 0xb
    // mov dword ptr [eax - 0x14], ebx
    // movsx ebx, word ptr [esp + 0x14]
    // imul ebx, ebx, 0x6254
    // add ebx, edx
    // lea ecx, [ebx + ecx + 0x400]
    // sar ecx, 0xb
    // mov dword ptr [eax - 0x1c], ecx
    // movsx ecx, word ptr [esp + 0x18]
    // add esi, ecx
    // lea edx, [ecx + ecx*2]
    // shl edx, 9
    // add edx, ecx
    // lea edx, [ecx + edx*4]
    // lea ecx, [esi + edx*2]
    // lea edx, [ecx + edi + 0x400]
    // mov ecx, dword ptr [esp + 0x20]
    // sar edx, 0xb
    // mov dword ptr [eax - 0x24], edx
    // dec ecx
    // mov dword ptr [esp + 0x20], ecx
    // if (...) GOTO(0x4b5d66)
    // mov eax, dword ptr [esp + 0x28]
    // mov dword ptr [esp + 0x28], 8
    // add eax, 0x40
    // mov esi, dword ptr [eax + 0xa0]
    // mov ecx, dword ptr [eax - 0x40]
    // mov edi, dword ptr [eax + 0x80]
    // lea edx, [ecx + esi]
    // sub ecx, esi
    // mov dword ptr [esp + 0x18], ecx
    // mov ecx, dword ptr [eax - 0x20]
    // lea esi, [ecx + edi]
    // sub ecx, edi
    // mov edi, dword ptr [eax + 0x60]
    // mov dword ptr [esp + 0x14], ecx
    // mov ecx, dword ptr [eax]
    // lea ebx, [edi + ecx]
    // sub ecx, edi
    // mov edi, dword ptr [eax + 0x40]
    // mov dword ptr [esp + 0x10], ecx
    // mov ecx, dword ptr [eax + 0x20]
    // lea ebp, [ecx + edi]
    // sub ecx, edi
    // mov edi, ecx
    // lea ecx, [edx + ebp]
    // sub edx, ebp
    // mov ebp, edx
    // lea edx, [ebx + esi]
    // sub esi, ebx
    // mov dword ptr [esp + 0x1c], edi
    // lea ebx, [edx + ecx + 2]
    // sub ecx, edx
    // add ecx, 2
    // sar ecx, 2
    // mov dword ptr [eax + 0x40], ecx
    // lea ecx, [esi + ebp]
    // movsx edx, cx
    // sar ebx, 2
    // lea ecx, [edx + edx*2]
    // mov dword ptr [eax - 0x40], ebx
    // shl ecx, 3
    // sub ecx, edx
    // lea ecx, [ecx + ecx*2]
    // lea ecx, [edx + ecx*4]
    // shl ecx, 4
    // add ecx, edx
    // movsx edx, bp
    // lea ebx, [edx + edx*2]
    // shl ebx, 4
    // add ebx, edx
    // shl ebx, 6
    // sub ebx, edx
    // lea edx, [ecx + ebx*2 + 0x4000]
    // sar edx, 0xf
    // mov dword ptr [eax], edx
    // movsx edx, si
    // lea esi, [edx + edx*2]
    // lea esi, [esi + esi*4]
    // shl esi, 2
    // sub esi, edx
    // lea esi, [edx + esi*8]
    // shl esi, 5
    // add esi, edx
    // mov edx, dword ptr [esp + 0x10]
    // sub ecx, esi
    // add ecx, 0x4000
    // sar ecx, 0xf
    // mov dword ptr [eax + 0x80], ecx
    // mov ecx, dword ptr [esp + 0x14]
    // lea ebx, [edi + ecx]
    // mov ecx, dword ptr [esp + 0x18]
    // lea ebp, [edx + ecx]
    // lea edx, [ebx + ebp]
    // movsx edx, dx
    // lea ecx, [edx + edx*4]
    // shl ecx, 6
    // add ecx, edx
    // lea ecx, [ecx + ecx*4]
    // lea edx, [edx + ecx*2]
    // mov ecx, dword ptr [esp + 0x14]
    // lea esi, [edx + edx*2]
    // mov edx, dword ptr [esp + 0x18]
    // add edx, edi
    // movsx edi, dx
    // imul edi, edi, 0xffffe333
    // mov edx, dword ptr [esp + 0x10]
    // add eax, 4
    // add ecx, edx
    // movsx edx, cx
    // mov ecx, edx
    // neg ecx
    // shl ecx, 2
    // sub ecx, edx
    // shl ecx, 3
    // sub ecx, edx
    // shl ecx, 8
    // sub ecx, edx
    // shl ecx, 1
    // sub ecx, edx
    // movsx edx, bx
    // mov ebx, edx
    // shl ebx, 6
    // sub ebx, edx
    // shl ebx, 2
    // sub ebx, edx
    // shl ebx, 4
    // add ebx, edx
    // lea edx, [edx + ebx*4]
    // mov ebx, edx
    // mov edx, esi
    // sub edx, ebx
    // movsx ebx, bp
    // lea ebp, [ebx + ebx*2]
    // lea ebp, [ebx + ebp*8]
    // shl ebp, 5
    // sub ebp, ebx
    // movsx ebx, word ptr [esp + 0x1c]
    // imul ebx, ebx, 0x98e
    // add ebx, edx
    // shl ebp, 2
    // lea ebx, [ebx + edi + 0x4000]
    // sub esi, ebp
    // sar ebx, 0xf
    // mov dword ptr [eax + 0x9c], ebx
    // movsx ebx, word ptr [esp + 0x10]
    // imul ebx, ebx, 0x41b3
    // add ebx, esi
    // lea ebx, [ebx + ecx + 0x4000]
    // sar ebx, 0xf
    // mov dword ptr [eax + 0x5c], ebx
    // movsx ebx, word ptr [esp + 0x14]
    // imul ebx, ebx, 0x6254
    // add ebx, edx
    // lea ecx, [ebx + ecx + 0x4000]
    // sar ecx, 0xf
    // mov dword ptr [eax + 0x1c], ecx
    // movsx ecx, word ptr [esp + 0x18]
    // add esi, ecx
    // lea edx, [ecx + ecx*2]
    // shl edx, 9
    // add edx, ecx
    // lea edx, [ecx + edx*4]
    // lea ecx, [esi + edx*2]
    // lea edx, [ecx + edi + 0x4000]
    // mov ecx, dword ptr [esp + 0x28]
    // sar edx, 0xf
    // mov dword ptr [eax - 0x24], edx
    // dec ecx
    // mov dword ptr [esp + 0x28], ecx
    // if (...) GOTO(0x4b5f36)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x14
    // return;
    // // nop
    // sub esp, 0x14
    // mov eax, dword ptr [esp + 0x18]
    // push ebx
    // push ebp
    // push esi
    // push edi
    // add eax, 8
    // mov dword ptr [esp + 0x20], 8
    // mov ecx, dword ptr [eax + 0x14]
    // mov edx, dword ptr [eax - 8]
    // mov edi, dword ptr [eax + 0x10]
    // lea esi, [edx + ecx]
    // sub edx, ecx
    // mov ecx, dword ptr [eax - 4]
    // lea ebx, [ecx + edi]
    // sub ecx, edi
    // mov edi, dword ptr [eax + 0xc]
    // mov ebp, ecx
    // mov ecx, dword ptr [eax]
    // add edi, ecx
    // mov dword ptr [esp + 0x10], edi
    // mov edi, dword ptr [eax + 0xc]
    // sub ecx, edi
    // mov edi, dword ptr [eax + 8]
    // mov dword ptr [esp + 0x14], ecx
    // mov ecx, dword ptr [eax + 4]
    // add edi, ecx
    // mov dword ptr [esp + 0x18], edi
    // mov edi, dword ptr [eax + 8]
    // sub ecx, edi
    // mov edi, dword ptr [esp + 0x18]
    // mov dword ptr [esp + 0x1c], ecx
    // lea ecx, [edi + esi]
    // sub esi, edi
    // mov edi, dword ptr [esp + 0x10]
    // add edi, ebx
    // add edi, ecx
    // mov dword ptr [eax - 8], edi
    // mov edi, dword ptr [esp + 0x10]
    // add edi, ebx
    // sub ecx, edi
    // mov edi, dword ptr [esp + 0x10]
    // mov dword ptr [eax + 8], ecx
    // mov ecx, esi
    // sub ecx, edi
    // add ecx, ebx
    // lea edi, [ecx + ecx*4]
    // lea edi, [edi + edi*8]
    // lea ecx, [ecx + edi*4]
    // sar ecx, 8
    // lea edi, [ecx + esi]
    // sub esi, ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // mov dword ptr [eax + 0x10], esi
    // mov esi, dword ptr [esp + 0x14]
    // mov dword ptr [eax], edi
    // add ecx, esi
    // lea esi, [edx + ebp]
    // mov edi, ecx
    // sub edi, esi
    // lea ebx, [edi + edi*2]
    // shl ebx, 4
    // add ebx, edi
    // lea edi, [ecx + ecx*2]
    // shl edi, 3
    // sub edi, ecx
    // shl ebx, 1
    // lea edi, [edi + edi*2]
    // sar ebx, 8
    // lea ecx, [ecx + edi*2]
    // lea edi, [esi + esi*4]
    // sar ecx, 8
    // lea edi, [esi + edi*4]
    // add ecx, ebx
    // shl edi, 3
    // sub edi, esi
    // shl edi, 1
    // mov esi, edi
    // mov edi, dword ptr [esp + 0x14]
    // sar esi, 8
    // add edi, ebp
    // add esi, ebx
    // lea ebx, [edi + edi*4]
    // lea ebx, [ebx + ebx*8]
    // lea edi, [edi + ebx*4]
    // sar edi, 8
    // lea ebx, [edi + edx]
    // sub edx, edi
    // lea edi, [edx + ecx]
    // sub edx, ecx
    // mov ecx, dword ptr [esp + 0x20]
    // mov dword ptr [eax + 4], edx
    // lea edx, [ebx + esi]
    // sub ebx, esi
    // mov dword ptr [eax + 0xc], edi
    // mov dword ptr [eax - 4], edx
    // mov dword ptr [eax + 0x14], ebx
    // add eax, 0x20
    // dec ecx
    // mov dword ptr [esp + 0x20], ecx
    // if (...) GOTO(0x4b6126)
    // mov eax, dword ptr [esp + 0x28]
    // mov dword ptr [esp + 0x28], 8
    // add eax, 0x40
    // mov ecx, dword ptr [eax + 0xa0]
    // mov edx, dword ptr [eax - 0x40]
    // mov edi, dword ptr [eax + 0x80]
    // lea esi, [edx + ecx]
    // sub edx, ecx
    // mov ecx, dword ptr [eax - 0x20]
    // lea ebx, [ecx + edi]
    // sub ecx, edi
    // mov edi, dword ptr [eax + 0x60]
    // mov ebp, ecx
    // mov ecx, dword ptr [eax]
    // add edi, ecx
    // mov dword ptr [esp + 0x10], edi
    // mov edi, dword ptr [eax + 0x60]
    // sub ecx, edi
    // mov edi, dword ptr [eax + 0x40]
    // mov dword ptr [esp + 0x14], ecx
    // mov ecx, dword ptr [eax + 0x20]
    // add edi, ecx
    // mov dword ptr [esp + 0x18], edi
    // mov edi, dword ptr [eax + 0x40]
    // sub ecx, edi
    // mov edi, dword ptr [esp + 0x18]
    // mov dword ptr [esp + 0x1c], ecx
    // lea ecx, [edi + esi]
    // sub esi, edi
    // mov edi, dword ptr [esp + 0x10]
    // add edi, ebx
    // add edi, ecx
    // mov dword ptr [eax - 0x40], edi
    // mov edi, dword ptr [esp + 0x10]
    // add edi, ebx
    // sub ecx, edi
    // mov edi, dword ptr [esp + 0x10]
    // mov dword ptr [eax + 0x40], ecx
    // mov ecx, esi
    // sub ecx, edi
    // add ecx, ebx
    // lea edi, [ecx + ecx*4]
    // lea edi, [edi + edi*8]
    // lea ecx, [ecx + edi*4]
    // sar ecx, 8
    // lea edi, [ecx + esi]
    // sub esi, ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // mov dword ptr [eax + 0x80], esi
    // mov esi, dword ptr [esp + 0x14]
    // mov dword ptr [eax], edi
    // add ecx, esi
    // lea esi, [edx + ebp]
    // mov edi, ecx
    // sub edi, esi
    // lea ebx, [edi + edi*2]
    // shl ebx, 4
    // add ebx, edi
    // lea edi, [ecx + ecx*2]
    // shl edi, 3
    // sub edi, ecx
    // shl ebx, 1
    // lea edi, [edi + edi*2]
    // sar ebx, 8
    // lea ecx, [ecx + edi*2]
    // lea edi, [esi + esi*4]
    // sar ecx, 8
    // lea edi, [esi + edi*4]
    // add ecx, ebx
    // shl edi, 3
    // sub edi, esi
    // shl edi, 1
    // mov esi, edi
    // mov edi, dword ptr [esp + 0x14]
    // sar esi, 8
    // add edi, ebp
    // add esi, ebx
    // lea ebx, [edi + edi*4]
    // lea ebx, [ebx + ebx*8]
    // lea edi, [edi + ebx*4]
    // sar edi, 8
    // lea ebx, [edi + edx]
    // sub edx, edi
    // lea edi, [edx + ecx]
    // sub edx, ecx
    // mov ecx, dword ptr [esp + 0x28]
    // mov dword ptr [eax + 0x20], edx
    // lea edx, [ebx + esi]
    // sub ebx, esi
    // mov dword ptr [eax + 0x60], edi
    // mov dword ptr [eax - 0x20], edx
    // mov dword ptr [eax + 0xa0], ebx
    // add eax, 4
    // dec ecx
    // mov dword ptr [esp + 0x28], ecx
    // if (...) GOTO(0x4b6239)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x14
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov edx, dword ptr [esp + 4]
    // sub esp, 0x18
    // mov ecx, 8
    // lea eax, [edx + 8]
    // fld dword ptr [eax + 0x14]
    // fadd dword ptr [eax - 8]
    // fld dword ptr [eax - 8]
    // fsub dword ptr [eax + 0x14]
    // fstp dword ptr [esp + 0x1c]
    // fld dword ptr [eax + 0x10]
    // fadd dword ptr [eax - 4]
    // fstp dword ptr [esp + 4]
    // fld dword ptr [eax - 4]
    // fsub dword ptr [eax + 0x10]
    // fstp dword ptr [esp + 0x10]
    // fld dword ptr [eax]
    // fadd dword ptr [eax + 0xc]
    // fstp dword ptr [esp + 8]
    // fld dword ptr [eax]
    // fsub dword ptr [eax + 0xc]
    // fstp dword ptr [esp + 0xc]
    // fld dword ptr [eax + 8]
    // fadd dword ptr [eax + 4]
    // fld dword ptr [eax + 4]
    // fsub dword ptr [eax + 8]
    // fstp dword ptr [esp + 0x14]
    // fld st(0)
    // fadd st(2)
    // fstp dword ptr [esp]
    // fxch st(1)
    // fsub st(1)
    // fxch st(1)
    // fstp st(0)
    // fld dword ptr [esp + 8]
    // fadd dword ptr [esp + 4]
    // fld st(0)
    // fadd dword ptr [esp]
    // fstp dword ptr [eax - 8]
    // fld dword ptr [esp]
    // fsub st(1)
    // fstp dword ptr [eax + 8]
    // fstp st(0)
    // fld dword ptr [esp + 4]
    // fsub dword ptr [esp + 8]
    // fadd st(1)
    // fmul dword ptr [0x4bd2c8]
    // fld st(0)
    // fadd st(2)
    // fstp dword ptr [eax]
    // fxch st(1)
    // fsub st(1)
    // fstp dword ptr [eax + 0x10]
    // fstp st(0)
    // fld dword ptr [esp + 0x14]
    // fadd dword ptr [esp + 0xc]
    // fld dword ptr [esp + 0x10]
    // fadd dword ptr [esp + 0x1c]
    // fstp dword ptr [esp + 8]
    // fld st(0)
    // fsub dword ptr [esp + 8]
    // fmul dword ptr [0x4bd2c4]
    // fstp dword ptr [esp + 4]
    // fmul dword ptr [0x4bd2c0]
    // fadd dword ptr [esp + 4]
    // fld dword ptr [esp + 8]
    // fmul dword ptr [0x4bd2bc]
    // fadd dword ptr [esp + 4]
    // fstp dword ptr [esp + 8]
    // fld dword ptr [esp + 0xc]
    // fadd dword ptr [esp + 0x10]
    // fmul dword ptr [0x4bd2c8]
    // fld st(0)
    // fadd dword ptr [esp + 0x1c]
    // fstp dword ptr [esp + 0x10]
    // fsubr dword ptr [esp + 0x1c]
    // fld st(0)
    // fadd st(2)
    // fstp dword ptr [eax + 0xc]
    // fsub st(1)
    // fstp dword ptr [eax + 4]
    // fstp st(0)
    // fld dword ptr [esp + 0x10]
    // fadd dword ptr [esp + 8]
    // add eax, 0x20
    // dec ecx
    // fstp dword ptr [eax - 0x24]
    // fld dword ptr [esp + 0x10]
    // fsub dword ptr [esp + 8]
    // fstp dword ptr [eax - 0xc]
    // if (...) GOTO(0x4b636f)
    // lea eax, [edx + 0x40]
    // mov ecx, 8
    // fld dword ptr [eax - 0x40]
    // fadd dword ptr [eax + 0xa0]
    // fld dword ptr [eax - 0x40]
    // fsub dword ptr [eax + 0xa0]
    // fstp dword ptr [esp + 0x1c]
    // fld dword ptr [eax - 0x20]
    // fadd dword ptr [eax + 0x80]
    // fstp dword ptr [esp + 4]
    // fld dword ptr [eax - 0x20]
    // fsub dword ptr [eax + 0x80]
    // fstp dword ptr [esp + 0x10]
    // fld dword ptr [eax]
    // fadd dword ptr [eax + 0x60]
    // fstp dword ptr [esp + 8]
    // fld dword ptr [eax]
    // fsub dword ptr [eax + 0x60]
    // fstp dword ptr [esp + 0xc]
    // fld dword ptr [eax + 0x40]
    // fadd dword ptr [eax + 0x20]
    // fld dword ptr [eax + 0x20]
    // fsub dword ptr [eax + 0x40]
    // fstp dword ptr [esp + 0x14]
    // fld st(0)
    // fadd st(2)
    // fstp dword ptr [esp]
    // fxch st(1)
    // fsub st(1)
    // fxch st(1)
    // fstp st(0)
    // fld dword ptr [esp + 8]
    // fadd dword ptr [esp + 4]
    // fld st(0)
    // fadd dword ptr [esp]
    // fstp dword ptr [eax - 0x40]
    // fld dword ptr [esp]
    // fsub st(1)
    // fstp dword ptr [eax + 0x40]
    // fstp st(0)
    // fld dword ptr [esp + 4]
    // fsub dword ptr [esp + 8]
    // fadd st(1)
    // fmul dword ptr [0x4bd2c8]
    // fld st(0)
    // fadd st(2)
    // fstp dword ptr [eax]
    // fxch st(1)
    // fsub st(1)
    // fstp dword ptr [eax + 0x80]
    // fstp st(0)
    // fld dword ptr [esp + 0x14]
    // fadd dword ptr [esp + 0xc]
    // fld dword ptr [esp + 0x10]
    // fadd dword ptr [esp + 0x1c]
    // fstp dword ptr [esp + 8]
    // fld st(0)
    // fsub dword ptr [esp + 8]
    // fmul dword ptr [0x4bd2c4]
    // fstp dword ptr [esp + 4]
    // fmul dword ptr [0x4bd2c0]
    // fadd dword ptr [esp + 4]
    // fld dword ptr [esp + 8]
    // fmul dword ptr [0x4bd2bc]
    // fadd dword ptr [esp + 4]
    // fstp dword ptr [esp + 8]
    // fld dword ptr [esp + 0xc]
    // fadd dword ptr [esp + 0x10]
    // fmul dword ptr [0x4bd2c8]
    // fld st(0)
    // fadd dword ptr [esp + 0x1c]
    // fstp dword ptr [esp + 0x10]
    // fsubr dword ptr [esp + 0x1c]
    // fld st(0)
    // fadd st(2)
    // fstp dword ptr [eax + 0x60]
    // fsub st(1)
    // fstp dword ptr [eax + 0x20]
    // fstp st(0)
    // fld dword ptr [esp + 0x10]
    // fadd dword ptr [esp + 8]
    // add eax, 4
    // dec ecx
    // fstp dword ptr [eax - 0x24]
    // fld dword ptr [esp + 0x10]
    // fsub dword ptr [esp + 8]
    // fstp dword ptr [eax + 0x9c]
    // if (...) GOTO(0x4b6492)
    // add esp, 0x18
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // if (...) GOTO(dword)
    // push ebp
    // mov ebp, esp
    // sub esp, 0x20
    // mov eax, dword ptr [ebp + 8]
    // push esi
    // mov dword ptr [ebp - 0x18], eax
    // mov dword ptr [ebp - 0x20], eax
    // lea eax, [ebp + 0x10]
    // mov dword ptr [ebp - 0x14], 0x42
    // push eax
    // lea eax, [ebp - 0x20]
    // push dword ptr [ebp + 0xc]
    // mov dword ptr [ebp - 0x1c], 0x7fffffff
    // push eax
    // CALL(0x4a9d98)
    // add esp, 0xc
    // dec dword ptr [ebp - 0x1c]
    // mov esi, eax
    // js 0x4b6616
    // mov eax, dword ptr [ebp - 0x20]
    // and byte ptr [eax], 0
    // if (...) GOTO(0x4b6623)
    // lea eax, [ebp - 0x20]
    // push eax
    // push 0
    // CALL(0x4aa5a2)
    // pop ecx
    // pop ecx
    // mov eax, esi
    // pop esi
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x20
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [ebp - 0x14], 0x49
    // push eax
    // mov dword ptr [ebp - 0x18], eax
    // mov dword ptr [ebp - 0x20], eax
    // CALL(0x4abdf0)
    // mov dword ptr [ebp - 0x1c], eax
    // lea eax, [ebp + 0x10]
    // push eax
    // lea eax, [ebp - 0x20]
    // push dword ptr [ebp + 0xc]
    // push eax
    // CALL(0x4b665c)
    // add esp, 0x10
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x1c4
    // and byte ptr [ebp - 0x15], 0
    // push ebx
    // push esi
    // mov esi, dword ptr [ebp + 0xc]
    // xor ebx, ebx
    // push edi
    // mov al, byte ptr [esi]
    // mov dword ptr [ebp - 4], ebx
    // test al, al
    // mov dword ptr [ebp - 0x34], ebx
    // if (...) GOTO(0x4b7062)
    // mov edi, dword ptr [ebp + 8]
    // if (...) GOTO(0x4b668b)
    // mov edi, dword ptr [ebp + 8]
    // xor ebx, ebx
    // cmp dword ptr [0x4e521c], 1
    // if (...) GOTO(0x4b66a3)
    // movzx eax, al
    // push 8
    // push eax
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4b66b2)
    // mov ecx, dword ptr [0x4e5010]
    // movzx eax, al
    // mov al, byte ptr [ecx + eax*2]
    // and eax, 8
    // cmp eax, ebx
    // if (...) GOTO(0x4b66ec)
    // dec dword ptr [ebp - 4]
    // push edi
    // lea eax, [ebp - 4]
    // push edi
    // push eax
    // CALL(0x4b70e9)
    // pop ecx
    // pop ecx
    // push eax
    // CALL(0x4b70d2)
    // movzx eax, byte ptr [esi + 1]
    // inc esi
    // push eax
    // CALL(0x4a6598)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4b66ec)
    // movzx eax, byte ptr [esi + 1]
    // inc esi
    // push eax
    // CALL(0x4a6598)
    // pop ecx
    // if (...) GOTO(0x4b66da)
    // cmp byte ptr [esi], 0x25
    // if (...) GOTO(0x4b6fce)
    // and byte ptr [ebp - 0x35], 0
    // and byte ptr [ebp - 0x18], 0
    // and byte ptr [ebp - 0x17], 0
    // and byte ptr [ebp - 0xe], 0
    // and byte ptr [ebp - 0xf], 0
    // and byte ptr [ebp - 0x16], 0
    // xor edi, edi
    // and byte ptr [ebp - 5], 0
    // mov dword ptr [ebp - 0x1c], ebx
    // mov dword ptr [ebp - 0x20], ebx
    // mov dword ptr [ebp - 0xc], ebx
    // mov byte ptr [ebp - 0xd], 1
    // mov dword ptr [ebp - 0x30], ebx
    // movzx ebx, byte ptr [esi + 1]
    // inc esi
    // cmp dword ptr [0x4e521c], 1
    // if (...) GOTO(0x4b6740)
    // movzx eax, bl
    // push 4
    // push eax
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4b674f)
    // mov ecx, dword ptr [0x4e5010]
    // movzx eax, bl
    // mov al, byte ptr [ecx + eax*2]
    // and eax, 4
    // test eax, eax
    // if (...) GOTO(0x4b6765)
    // mov eax, dword ptr [ebp - 0xc]
    // inc dword ptr [ebp - 0x20]
    // lea eax, [eax + eax*4]
    // lea eax, [ebx + eax*2 - 0x30]
    // mov dword ptr [ebp - 0xc], eax
    // if (...) GOTO(0x4b67ca)
    // cmp ebx, 0x4e
    // if (...) GOTO(0x4b67a8)
    // if (...) GOTO(0x4b67ca)
    // cmp ebx, 0x2a
    // if (...) GOTO(0x4b67a3)
    // cmp ebx, 0x46
    // if (...) GOTO(0x4b67ca)
    // cmp ebx, 0x49
    // if (...) GOTO(0x4b6785)
    // cmp ebx, 0x4c
    // if (...) GOTO(0x4b67b7)
    // inc byte ptr [ebp - 0xd]
    // if (...) GOTO(0x4b67ca)
    // cmp byte ptr [esi + 1], 0x36
    // if (...) GOTO(0x4b67b7)
    // cmp byte ptr [esi + 2], 0x34
    // lea eax, [esi + 2]
    // if (...) GOTO(0x4b67b7)
    // inc dword ptr [ebp - 0x30]
    // and dword ptr [ebp - 0x28], 0
    // and dword ptr [ebp - 0x24], 0
    // mov esi, eax
    // if (...) GOTO(0x4b67ca)
    // inc byte ptr [ebp - 0xe]
    // if (...) GOTO(0x4b67ca)
    // cmp ebx, 0x68
    // if (...) GOTO(0x4b67c4)
    // cmp ebx, 0x6c
    // if (...) GOTO(0x4b67bc)
    // cmp ebx, 0x77
    // if (...) GOTO(0x4b67bf)
    // inc byte ptr [ebp - 0xf]
    // if (...) GOTO(0x4b67ca)
    // inc byte ptr [ebp - 0xd]
    // inc byte ptr [ebp - 5]
    // if (...) GOTO(0x4b67ca)
    // dec byte ptr [ebp - 0xd]
    // dec byte ptr [ebp - 5]
    // cmp byte ptr [ebp - 0xf], 0
    // if (...) GOTO(0x4b6723)
    // cmp byte ptr [ebp - 0xe], 0
    // mov dword ptr [ebp + 0xc], esi
    // if (...) GOTO(0x4b67ef)
    // mov eax, dword ptr [ebp + 0x10]
    // mov dword ptr [ebp - 0x44], eax
    // add eax, 4
    // mov dword ptr [ebp + 0x10], eax
    // mov eax, dword ptr [eax - 4]
    // mov dword ptr [ebp - 0x2c], eax
    // and byte ptr [ebp - 0xf], 0
    // cmp byte ptr [ebp - 5], 0
    // if (...) GOTO(0x4b680d)
    // mov al, byte ptr [esi]
    // cmp al, 0x53
    // if (...) GOTO(0x4b6809)
    // cmp al, 0x43
    // if (...) GOTO(0x4b6809)
    // or byte ptr [ebp - 5], 0xff
    // if (...) GOTO(0x4b680d)
    // mov byte ptr [ebp - 5], 1
    // mov ebx, dword ptr [ebp + 0xc]
    // movzx esi, byte ptr [ebx]
    // or esi, 0x20
    // cmp esi, 0x6e
    // mov dword ptr [ebp - 0x3c], esi
    // if (...) GOTO(0x4b6846)
    // cmp esi, 0x63
    // if (...) GOTO(0x4b6837)
    // cmp esi, 0x7b
    // if (...) GOTO(0x4b6837)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 4]
    // push eax
    // CALL(0x4b70e9)
    // pop ecx
    // if (...) GOTO(0x4b6842)
    // push dword ptr [ebp + 8]
    // inc dword ptr [ebp - 4]
    // CALL(0x4b70b8)
    // pop ecx
    // mov dword ptr [ebp - 0x14], eax
    // xor eax, eax
    // cmp dword ptr [ebp - 0x20], eax
    // if (...) GOTO(0x4b6856)
    // cmp dword ptr [ebp - 0xc], eax
    // if (...) GOTO(0x4b7032)
    // cmp esi, 0x6f
    // if (...) GOTO(0x4b6abd)
    // if (...) GOTO(0x4b6d6f)
    // cmp esi, 0x63
    // if (...) GOTO(0x4b6a9a)
    // cmp esi, 0x64
    // if (...) GOTO(0x4b6d6f)
    // if (...) GOTO(0x4b6ae7)
    // cmp esi, 0x67
    // if (...) GOTO(0x4b68ba)
    // cmp esi, 0x69
    // if (...) GOTO(0x4b68a2)
    // cmp esi, 0x6e
    // if (...) GOTO(0x4b6ae7)
    // cmp byte ptr [ebp - 0xe], 0
    // mov edi, dword ptr [ebp - 4]
    // if (...) GOTO(0x4b6f9d)
    // if (...) GOTO(0x4b6fc3)
    // push(0x64)
    // pop esi
    // mov ebx, dword ptr [ebp - 0x14]
    // cmp ebx, 0x2d
    // if (...) GOTO(0x4b6b2f)
    // mov byte ptr [ebp - 0x17], 1
    // if (...) GOTO(0x4b6b34)
    // mov ebx, dword ptr [ebp - 0x14]
    // lea esi, [ebp - 0x1c4]
    // cmp ebx, 0x2d
    // if (...) GOTO(0x4b68d6)
    // mov byte ptr [ebp - 0x1c4], bl
    // lea esi, [ebp - 0x1c3]
    // if (...) GOTO(0x4b68db)
    // cmp ebx, 0x2b
    // if (...) GOTO(0x4b68f2)
    // mov edi, dword ptr [ebp + 8]
    // dec dword ptr [ebp - 0xc]
    // inc dword ptr [ebp - 4]
    // push edi
    // CALL(0x4b70b8)
    // mov ebx, eax
    // pop ecx
    // mov dword ptr [ebp - 0x14], ebx
    // if (...) GOTO(0x4b68f5)
    // mov edi, dword ptr [ebp + 8]
    // cmp dword ptr [ebp - 0x20], 0
    // if (...) GOTO(0x4b6904)
    // cmp dword ptr [ebp - 0xc], 0x15d
    // if (...) GOTO(0x4b690b)
    // mov dword ptr [ebp - 0xc], 0x15d
    // cmp dword ptr [0x4e521c], 1
    // if (...) GOTO(0x4b6920)
    // push 4
    // push ebx
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4b692b)
    // mov eax, dword ptr [0x4e5010]
    // mov al, byte ptr [eax + ebx*2]
    // and eax, 4
    // test eax, eax
    // if (...) GOTO(0x4b6950)
    // mov eax, dword ptr [ebp - 0xc]
    // dec dword ptr [ebp - 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b6950)
    // inc dword ptr [ebp - 0x1c]
    // mov byte ptr [esi], bl
    // inc esi
    // inc dword ptr [ebp - 4]
    // push edi
    // CALL(0x4b70b8)
    // mov ebx, eax
    // pop ecx
    // mov dword ptr [ebp - 0x14], ebx
    // if (...) GOTO(0x4b690b)
    // cmp byte ptr [0x4e5220], bl
    // if (...) GOTO(0x4b69be)
    // mov eax, dword ptr [ebp - 0xc]
    // dec dword ptr [ebp - 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b69be)
    // inc dword ptr [ebp - 4]
    // push edi
    // CALL(0x4b70b8)
    // mov ebx, eax
    // mov al, byte ptr [0x4e5220]
    // mov byte ptr [esi], al
    // pop ecx
    // mov dword ptr [ebp - 0x14], ebx
    // inc esi
    // cmp dword ptr [0x4e521c], 1
    // if (...) GOTO(0x4b698e)
    // push 4
    // push ebx
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4b6999)
    // mov eax, dword ptr [0x4e5010]
    // mov al, byte ptr [eax + ebx*2]
    // and eax, 4
    // test eax, eax
    // if (...) GOTO(0x4b69be)
    // mov eax, dword ptr [ebp - 0xc]
    // dec dword ptr [ebp - 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b69be)
    // inc dword ptr [ebp - 0x1c]
    // mov byte ptr [esi], bl
    // inc esi
    // inc dword ptr [ebp - 4]
    // push edi
    // CALL(0x4b70b8)
    // mov ebx, eax
    // pop ecx
    // mov dword ptr [ebp - 0x14], ebx
    // if (...) GOTO(0x4b6979)
    // cmp dword ptr [ebp - 0x1c], 0
    // if (...) GOTO(0x4b6a56)
    // cmp ebx, 0x65
    // if (...) GOTO(0x4b69d6)
    // cmp ebx, 0x45
    // if (...) GOTO(0x4b6a56)
    // mov eax, dword ptr [ebp - 0xc]
    // dec dword ptr [ebp - 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b6a56)
    // mov byte ptr [esi], 0x65
    // inc esi
    // inc dword ptr [ebp - 4]
    // push edi
    // CALL(0x4b70b8)
    // mov ebx, eax
    // pop ecx
    // cmp ebx, 0x2d
    // mov dword ptr [ebp - 0x14], ebx
    // if (...) GOTO(0x4b69fd)
    // mov byte ptr [esi], al
    // inc esi
    // if (...) GOTO(0x4b6a02)
    // cmp ebx, 0x2b
    // if (...) GOTO(0x4b6a20)
    // mov eax, dword ptr [ebp - 0xc]
    // dec dword ptr [ebp - 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b6a11)
    // and dword ptr [ebp - 0xc], eax
    // if (...) GOTO(0x4b6a20)
    // inc dword ptr [ebp - 4]
    // push edi
    // CALL(0x4b70b8)
    // mov ebx, eax
    // pop ecx
    // mov dword ptr [ebp - 0x14], ebx
    // cmp dword ptr [0x4e521c], 1
    // if (...) GOTO(0x4b6a35)
    // push 4
    // push ebx
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4b6a40)
    // mov eax, dword ptr [0x4e5010]
    // mov al, byte ptr [eax + ebx*2]
    // and eax, 4
    // test eax, eax
    // if (...) GOTO(0x4b6a56)
    // mov eax, dword ptr [ebp - 0xc]
    // dec dword ptr [ebp - 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b6a56)
    // inc dword ptr [ebp - 0x1c]
    // mov byte ptr [esi], bl
    // inc esi
    // if (...) GOTO(0x4b6a11)
    // dec dword ptr [ebp - 4]
    // push edi
    // push ebx
    // CALL(0x4b70d2)
    // cmp dword ptr [ebp - 0x1c], 0
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4b7062)
    // cmp byte ptr [ebp - 0xe], 0
    // if (...) GOTO(0x4b6fc3)
    // inc dword ptr [ebp - 0x34]
    // and byte ptr [esi], 0
    // lea eax, [ebp - 0x1c4]
    // push eax
    // movsx eax, byte ptr [ebp - 0xd]
    // push dword ptr [ebp - 0x2c]
    // dec eax
    // push eax
    // CALL(dword)
    // add esp, 0xc
    // if (...) GOTO(0x4b6fc3)
    // cmp dword ptr [ebp - 0x20], eax
    // if (...) GOTO(0x4b6aa9)
    // inc dword ptr [ebp - 0xc]
    // mov dword ptr [ebp - 0x20], 1
    // cmp byte ptr [ebp - 5], 0
    // if (...) GOTO(0x4b6ab3)
    // mov byte ptr [ebp - 0x16], 1
    // mov edi, 0x4e6d14
    // if (...) GOTO(0x4b6bc8)
    // mov eax, esi
    // sub eax, 0x70
    // if (...) GOTO(0x4b6d6b)
    // sub eax, 3
    // if (...) GOTO(0x4b6bb9)
    // dec eax
    // dec eax
    // if (...) GOTO(0x4b6d6f)
    // sub eax, 3
    // if (...) GOTO(0x4b68a5)
    // sub eax, 3
    // if (...) GOTO(0x4b6b0b)
    // movzx eax, byte ptr [ebx]
    // cmp eax, dword ptr [ebp - 0x14]
    // if (...) GOTO(0x4b7032)
    // dec byte ptr [ebp - 0x15]
    // cmp byte ptr [ebp - 0xe], 0
    // if (...) GOTO(0x4b6fc3)
    // mov eax, dword ptr [ebp - 0x44]
    // mov dword ptr [ebp + 0x10], eax
    // if (...) GOTO(0x4b6fc3)
    // cmp byte ptr [ebp - 5], 0
    // if (...) GOTO(0x4b6b15)
    // mov byte ptr [ebp - 0x16], 1
    // mov edi, dword ptr [ebp + 0xc]
    // inc edi
    // mov dword ptr [ebp + 0xc], edi
    // cmp byte ptr [edi], 0x5e
    // if (...) GOTO(0x4b6bcc)
    // mov eax, edi
    // lea edi, [eax + 1]
    // if (...) GOTO(0x4b6bc8)
    // cmp ebx, 0x2b
    // if (...) GOTO(0x4b6b56)
    // dec dword ptr [ebp - 0xc]
    // if (...) GOTO(0x4b6b45)
    // cmp dword ptr [ebp - 0x20], 0
    // if (...) GOTO(0x4b6b45)
    // mov byte ptr [ebp - 0xf], 1
    // if (...) GOTO(0x4b6b56)
    // push dword ptr [ebp + 8]
    // inc dword ptr [ebp - 4]
    // CALL(0x4b70b8)
    // mov ebx, eax
    // pop ecx
    // mov dword ptr [ebp - 0x14], ebx
    // cmp ebx, 0x30
    // if (...) GOTO(0x4b6da4)
    // push dword ptr [ebp + 8]
    // inc dword ptr [ebp - 4]
    // CALL(0x4b70b8)
    // mov ebx, eax
    // pop ecx
    // cmp bl, 0x78
    // mov dword ptr [ebp - 0x14], ebx
    // if (...) GOTO(0x4b6ba4)
    // cmp bl, 0x58
    // if (...) GOTO(0x4b6ba4)
    // cmp esi, 0x78
    // mov dword ptr [ebp - 0x1c], 1
    // if (...) GOTO(0x4b6b8e)
    // push(0x6f)
    // pop esi
    // if (...) GOTO(0x4b6da4)
    // push dword ptr [ebp + 8]
    // dec dword ptr [ebp - 4]
    // push ebx
    // CALL(0x4b70d2)
    // pop ecx
    // pop ecx
    // push(0x30)
    // pop ebx
    // if (...) GOTO(0x4b6da1)
    // push dword ptr [ebp + 8]
    // inc dword ptr [ebp - 4]
    // CALL(0x4b70b8)
    // pop ecx
    // mov ebx, eax
    // mov dword ptr [ebp - 0x14], ebx
    // push(0x78)
    // if (...) GOTO(0x4b6b88)
    // cmp byte ptr [ebp - 5], 0
    // if (...) GOTO(0x4b6bc3)
    // mov byte ptr [ebp - 0x16], 1
    // mov edi, 0x4e6d0c
    // or byte ptr [ebp - 0x18], 0xff
    // push(0x20)
    // lea eax, [ebp - 0x64]
    // push 0
    // push eax
    // CALL(0x4abd90)
    // add esp, 0xc
    // cmp dword ptr [ebp - 0x3c], 0x7b
    // if (...) GOTO(0x4b6bf0)
    // cmp byte ptr [edi], 0x5d
    // if (...) GOTO(0x4b6bf0)
    // mov dl, 0x5d
    // inc edi
    // mov byte ptr [ebp - 0x59], 0x20
    // if (...) GOTO(0x4b6bf3)
    // mov dl, byte ptr [ebp - 0x35]
    // mov al, byte ptr [edi]
    // cmp al, 0x5d
    // if (...) GOTO(0x4b6c58)
    // inc edi
    // cmp al, 0x2d
    // if (...) GOTO(0x4b6c3f)
    // test dl, dl
    // if (...) GOTO(0x4b6c3f)
    // mov cl, byte ptr [edi]
    // cmp cl, 0x5d
    // if (...) GOTO(0x4b6c3f)
    // inc edi
    // cmp dl, cl
    // jae 0x4b6c12
    // mov al, cl
    // if (...) GOTO(0x4b6c16)
    // mov al, dl
    // mov dl, cl
    // cmp dl, al
    // if (...) GOTO(0x4b6c3b)
    // movzx edx, dl
    // movzx esi, al
    // sub esi, edx
    // inc esi
    // mov ecx, edx
    // mov eax, edx
    // and ecx, 7
    // mov bl, 1
    // shr eax, 3
    // shl bl, cl
    // lea eax, [ebp + eax - 0x64]
    // or byte ptr [eax], bl
    // inc edx
    // dec esi
    // if (...) GOTO(0x4b6c23)
    // xor dl, dl
    // if (...) GOTO(0x4b6bf3)
    // movzx ecx, al
    // mov dl, al
    // mov eax, ecx
    // and ecx, 7
    // mov bl, 1
    // shr eax, 3
    // shl bl, cl
    // lea eax, [ebp + eax - 0x64]
    // or byte ptr [eax], bl
    // if (...) GOTO(0x4b6bf3)
    // cmp byte ptr [edi], 0
    // if (...) GOTO(0x4b7062)
    // cmp dword ptr [ebp - 0x3c], 0x7b
    // if (...) GOTO(0x4b6c6a)
    // mov dword ptr [ebp + 0xc], edi
    // mov edi, dword ptr [ebp + 8]
    // mov esi, dword ptr [ebp - 0x2c]
    // dec dword ptr [ebp - 4]
    // push edi
    // push dword ptr [ebp - 0x14]
    // mov dword ptr [ebp - 0x30], esi
    // CALL(0x4b70d2)
    // pop ecx
    // pop ecx
    // cmp dword ptr [ebp - 0x20], 0
    // if (...) GOTO(0x4b6c95)
    // mov eax, dword ptr [ebp - 0xc]
    // dec dword ptr [ebp - 0xc]
    // test eax, eax
    // if (...) GOTO(0x4b6d31)
    // inc dword ptr [ebp - 4]
    // push edi
    // CALL(0x4b70b8)
    // cmp eax, -1
    // pop ecx
    // mov dword ptr [ebp - 0x14], eax
    // if (...) GOTO(0x4b6d25)
    // mov ecx, eax
    // push 1
    // and ecx, 7
    // pop edx
    // movsx ebx, byte ptr [ebp - 0x18]
    // shl edx, cl
    // mov ecx, eax
    // sar ecx, 3
    // movsx ecx, byte ptr [ebp + ecx - 0x64]
    // xor ecx, ebx
    // test ecx, edx
    // if (...) GOTO(0x4b6d25)
    // cmp byte ptr [ebp - 0xe], 0
    // if (...) GOTO(0x4b6d1d)
    // cmp byte ptr [ebp - 0x16], 0
    // if (...) GOTO(0x4b6d12)
    // mov ecx, dword ptr [0x4e5010]
    // mov byte ptr [ebp - 0x38], al
    // movzx eax, al
    // test byte ptr [ecx + eax*2 + 1], 0x80
    // if (...) GOTO(0x4b6cf1)
    // inc dword ptr [ebp - 4]
    // push edi
    // CALL(0x4b70b8)
    // pop ecx
    // mov byte ptr [ebp - 0x37], al
    // push dword ptr [0x4e521c]
    // lea eax, [ebp - 0x38]
    // push eax
    // lea eax, [ebp - 0x3e]
    // push eax
    // CALL(0x4b710d)
    // mov ax, word ptr [ebp - 0x3e]
    // add esp, 0xc
    // mov word ptr [esi], ax
    // inc esi
    // inc esi
    // if (...) GOTO(0x4b6d15)
    // mov byte ptr [esi], al
    // inc esi
    // mov dword ptr [ebp - 0x2c], esi
    // if (...) GOTO(0x4b6c81)
    // inc dword ptr [ebp - 0x30]
    // if (...) GOTO(0x4b6c81)
    // dec dword ptr [ebp - 4]
    // push edi
    // push eax
    // CALL(0x4b70d2)
    // pop ecx
    // pop ecx
    // cmp dword ptr [ebp - 0x30], esi
    // if (...) GOTO(0x4b7062)
    // cmp byte ptr [ebp - 0xe], 0
    // if (...) GOTO(0x4b6fc3)
    // inc dword ptr [ebp - 0x34]
    // cmp dword ptr [ebp - 0x3c], 0x63
    // if (...) GOTO(0x4b6fc3)
    // cmp byte ptr [ebp - 0x16], 0
    // mov eax, dword ptr [ebp - 0x2c]
    // if (...) GOTO(0x4b6d63)
    // and word ptr [eax], 0
    // if (...) GOTO(0x4b6fc3)
    // and byte ptr [eax], 0
    // if (...) GOTO(0x4b6fc3)
    // mov byte ptr [ebp - 0xd], 1
    // mov ebx, dword ptr [ebp - 0x14]
    // cmp ebx, 0x2d
    // if (...) GOTO(0x4b6d7d)
    // mov byte ptr [ebp - 0x17], 1
    // if (...) GOTO(0x4b6d82)
    // cmp ebx, 0x2b
    // if (...) GOTO(0x4b6da4)
    // dec dword ptr [ebp - 0xc]
    // if (...) GOTO(0x4b6d93)
    // cmp dword ptr [ebp - 0x20], 0
    // if (...) GOTO(0x4b6d93)
    // mov byte ptr [ebp - 0xf], 1
    // if (...) GOTO(0x4b6da4)
    // push dword ptr [ebp + 8]
    // inc dword ptr [ebp - 4]
    // CALL(0x4b70b8)
    // pop ecx
    // mov ebx, eax
    // mov dword ptr [ebp - 0x14], ebx
    // cmp dword ptr [ebp - 0x30], 0
    // if (...) GOTO(0x4b6ebd)
    // cmp byte ptr [ebp - 0xf], 0
    // if (...) GOTO(0x4b6e9b)
    // cmp esi, 0x78
    // if (...) GOTO(0x4b6e0c)
    // cmp dword ptr [0x4e521c], 1
    // if (...) GOTO(0x4b6dd5)
    // push(0x80)
    // push ebx
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4b6de2)
    // mov eax, dword ptr [0x4e5010]
    // mov al, byte ptr [eax + ebx*2]
    // and eax, 0x80
    // test eax, eax
    // if (...) GOTO(0x4b6e8d)
    // mov eax, dword ptr [ebp - 0x28]
    // mov edx, dword ptr [ebp - 0x24]
    // push 4
    // pop ecx
    // CALL(0x4b7240)
    // push ebx
    // mov dword ptr [ebp - 0x28], eax
    // mov dword ptr [ebp - 0x24], edx
    // CALL(0x4b7081)
    // mov ebx, eax
    // pop ecx
    // mov dword ptr [ebp - 0x14], ebx
    // if (...) GOTO(0x4b6e5f)
    // cmp dword ptr [0x4e521c], 1
    // if (...) GOTO(0x4b6e21)
    // push 4
    // push ebx
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4b6e2c)
    // mov eax, dword ptr [0x4e5010]
    // mov al, byte ptr [eax + ebx*2]
    // and eax, 4
    // test eax, eax
    // if (...) GOTO(0x4b6e8d)
    // cmp esi, 0x6f
    // if (...) GOTO(0x4b6e4a)
    // cmp ebx, 0x38
    // if (...) GOTO(0x4b6e8d)
    // mov eax, dword ptr [ebp - 0x28]
    // mov edx, dword ptr [ebp - 0x24]
    // push 3
    // pop ecx
    // CALL(0x4b7240)
    // if (...) GOTO(0x4b6e59)
    // push 0
    // push(0xa)
    // push dword ptr [ebp - 0x24]
    // push dword ptr [ebp - 0x28]
    // CALL(0x4ab500)
    // mov dword ptr [ebp - 0x28], eax
    // mov dword ptr [ebp - 0x24], edx
    // inc dword ptr [ebp - 0x1c]
    // lea eax, [ebx - 0x30]
    // cdq 
    // add dword ptr [ebp - 0x28], eax
    // adc dword ptr [ebp - 0x24], edx
    // cmp dword ptr [ebp - 0x20], 0
    // if (...) GOTO(0x4b6e77)
    // dec dword ptr [ebp - 0xc]
    // if (...) GOTO(0x4b6e9b)
    // push dword ptr [ebp + 8]
    // inc dword ptr [ebp - 4]
    // CALL(0x4b70b8)
    // mov ebx, eax
    // pop ecx
    // mov dword ptr [ebp - 0x14], ebx
    // if (...) GOTO(0x4b6db8)
    // push dword ptr [ebp + 8]
    // dec dword ptr [ebp - 4]
    // push ebx
    // CALL(0x4b70d2)
    // pop ecx
    // pop ecx
    // cmp byte ptr [ebp - 0x17], 0
    // if (...) GOTO(0x4b6f81)
    // mov eax, dword ptr [ebp - 0x28]
    // mov ecx, dword ptr [ebp - 0x24]
    // neg eax
    // adc ecx, 0
    // mov dword ptr [ebp - 0x28], eax
    // neg ecx
    // mov dword ptr [ebp - 0x24], ecx
    // if (...) GOTO(0x4b6f81)
    // cmp byte ptr [ebp - 0xf], 0
    // if (...) GOTO(0x4b6f79)
    // cmp esi, 0x78
    // if (...) GOTO(0x4b6f0b)
    // cmp esi, 0x70
    // if (...) GOTO(0x4b6f0b)
    // cmp dword ptr [0x4e521c], 1
    // if (...) GOTO(0x4b6ee6)
    // push 4
    // push ebx
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4b6ef1)
    // mov eax, dword ptr [0x4e5010]
    // mov al, byte ptr [eax + ebx*2]
    // and eax, 4
    // test eax, eax
    // if (...) GOTO(0x4b6f6b)
    // cmp esi, 0x6f
    // if (...) GOTO(0x4b6f04)
    // cmp ebx, 0x38
    // if (...) GOTO(0x4b6f6b)
    // shl edi, 3
    // if (...) GOTO(0x4b6f43)
    // lea edi, [edi + edi*4]
    // shl edi, 1
    // if (...) GOTO(0x4b6f43)
    // cmp dword ptr [0x4e521c], 1
    // if (...) GOTO(0x4b6f23)
    // push(0x80)
    // push ebx
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4b6f30)
    // mov eax, dword ptr [0x4e5010]
    // mov al, byte ptr [eax + ebx*2]
    // and eax, 0x80
    // test eax, eax
    // if (...) GOTO(0x4b6f6b)
    // push ebx
    // shl edi, 4
    // CALL(0x4b7081)
    // mov ebx, eax
    // pop ecx
    // mov dword ptr [ebp - 0x14], ebx
    // inc dword ptr [ebp - 0x1c]
    // cmp dword ptr [ebp - 0x20], 0
    // lea edi, [edi + ebx - 0x30]
    // if (...) GOTO(0x4b6f55)
    // dec dword ptr [ebp - 0xc]
    // if (...) GOTO(0x4b6f79)
    // push dword ptr [ebp + 8]
    // inc dword ptr [ebp - 4]
    // CALL(0x4b70b8)
    // mov ebx, eax
    // pop ecx
    // mov dword ptr [ebp - 0x14], ebx
    // if (...) GOTO(0x4b6ec7)
    // push dword ptr [ebp + 8]
    // dec dword ptr [ebp - 4]
    // push ebx
    // CALL(0x4b70d2)
    // pop ecx
    // pop ecx
    // cmp byte ptr [ebp - 0x17], 0
    // if (...) GOTO(0x4b6f81)
    // neg edi
    // cmp esi, 0x46
    // if (...) GOTO(0x4b6f8a)
    // and dword ptr [ebp - 0x1c], 0
    // cmp dword ptr [ebp - 0x1c], 0
    // if (...) GOTO(0x4b7062)
    // cmp byte ptr [ebp - 0xe], 0
    // if (...) GOTO(0x4b6fc3)
    // inc dword ptr [ebp - 0x34]
    // cmp dword ptr [ebp - 0x30], 0
    // if (...) GOTO(0x4b6fb3)
    // mov eax, dword ptr [ebp - 0x2c]
    // mov ecx, dword ptr [ebp - 0x28]
    // mov dword ptr [eax], ecx
    // mov ecx, dword ptr [ebp - 0x24]
    // mov dword ptr [eax + 4], ecx
    // if (...) GOTO(0x4b6fc3)
    // cmp byte ptr [ebp - 0xd], 0
    // mov eax, dword ptr [ebp - 0x2c]
    // if (...) GOTO(0x4b6fc0)
    // mov dword ptr [eax], edi
    // if (...) GOTO(0x4b6fc3)
    // mov word ptr [eax], di
    // inc byte ptr [ebp - 0x15]
    // inc dword ptr [ebp + 0xc]
    // mov esi, dword ptr [ebp + 0xc]
    // if (...) GOTO(0x4b7010)
    // inc dword ptr [ebp - 4]
    // push edi
    // CALL(0x4b70b8)
    // mov ebx, eax
    // pop ecx
    // movzx eax, byte ptr [esi]
    // inc esi
    // cmp eax, ebx
    // mov dword ptr [ebp - 0x14], ebx
    // mov dword ptr [ebp + 0xc], esi
    // if (...) GOTO(0x4b703d)
    // mov ecx, dword ptr [0x4e5010]
    // movzx eax, bl
    // test byte ptr [ecx + eax*2 + 1], 0x80
    // if (...) GOTO(0x4b7010)
    // inc dword ptr [ebp - 4]
    // push edi
    // CALL(0x4b70b8)
    // pop ecx
    // movzx ecx, byte ptr [esi]
    // inc esi
    // cmp ecx, eax
    // mov dword ptr [ebp + 0xc], esi
    // if (...) GOTO(0x4b704b)
    // dec dword ptr [ebp - 4]
    // cmp dword ptr [ebp - 0x14], -1
    // if (...) GOTO(0x4b7026)
    // cmp byte ptr [esi], 0x25
    // if (...) GOTO(0x4b7068)
    // mov eax, dword ptr [ebp + 0xc]
    // cmp byte ptr [eax + 1], 0x6e
    // if (...) GOTO(0x4b7068)
    // mov esi, eax
    // mov al, byte ptr [esi]
    // test al, al
    // if (...) GOTO(0x4b6686)
    // if (...) GOTO(0x4b7062)
    // push dword ptr [ebp + 8]
    // dec dword ptr [ebp - 4]
    // push dword ptr [ebp - 0x14]
    // if (...) GOTO(0x4b7042)
    // dec dword ptr [ebp - 4]
    // push edi
    // push ebx
    // CALL(0x4b70d2)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4b7062)
    // dec dword ptr [ebp - 4]
    // push edi
    // push eax
    // CALL(0x4b70d2)
    // dec dword ptr [ebp - 4]
    // push edi
    // push ebx
    // CALL(0x4b70d2)
    // add esp, 0x10
    // cmp dword ptr [ebp - 0x14], -1
    // if (...) GOTO(0x4b7079)
    // mov eax, dword ptr [ebp - 0x34]
    // test eax, eax
    // if (...) GOTO(0x4b707c)
    // cmp byte ptr [ebp - 0x15], al
    // if (...) GOTO(0x4b707c)
    // or eax, 0xffffffff
    // if (...) GOTO(0x4b707c)
    // mov eax, dword ptr [ebp - 0x34]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // cmp dword ptr [0x4e521c], 1
    // push esi
    // if (...) GOTO(0x4b709b)
    // mov esi, dword ptr [esp + 8]
    // push 4
    // push esi
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4b70aa)
    // mov esi, dword ptr [esp + 8]
    // mov eax, dword ptr [0x4e5010]
    // mov al, byte ptr [eax + esi*2]
    // and eax, 4
    // test eax, eax
    // if (...) GOTO(0x4b70b4)
    // and esi, 0xffffffdf
    // sub esi, 7
    // mov eax, esi
    // pop esi
    // return;
    // mov edx, dword ptr [esp + 4]
    // dec dword ptr [edx + 4]
    // js 0x4b70ca
    // mov ecx, dword ptr [edx]
    // movzx eax, byte ptr [ecx]
    // inc ecx
    // mov dword ptr [edx], ecx
    // return;
    // push edx
    // CALL(0x4aa9f5)
    // pop ecx
    // return;
    // cmp dword ptr [esp + 4], -1
    // if (...) GOTO(0x4b70e8)
    // push dword ptr [esp + 8]
    // push dword ptr [esp + 8]
    // CALL(0x4b725f)
    // pop ecx
    // pop ecx
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // push dword ptr [esp + 0x10]
    // inc dword ptr [esi]
    // CALL(0x4b70b8)
    // mov edi, eax
    // push edi
    // CALL(0x4a6598)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4b70ef)
    // mov eax, edi
    // pop edi
    // pop esi
    // return;
    // push ebp
    // mov ebp, esp
    // push ebx
    // push esi
    // mov esi, 0x84100c
    // push edi
    // push esi
    // CALL(dword)
    // mov edi, dword ptr [0x4ba080]
    // xor ebx, ebx
    // cmp dword ptr [0x841008], ebx
    // if (...) GOTO(0x4b713d)
    // push esi
    // CALL(edi)
    // push(0x13)
    // CALL(0x4a79b2)
    // pop ecx
    // push 1
    // pop ebx
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4b716a)
    // add esp, 0xc
    // mov dword ptr [ebp + 0x10], eax
    // test ebx, ebx
    // if (...) GOTO(0x4b715f)
    // push(0x13)
    // CALL(0x4a7a13)
    // pop ecx
    // if (...) GOTO(0x4b7162)
    // push esi
    // CALL(edi)
    // mov eax, dword ptr [ebp + 0x10]
    // pop edi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // push ebp
    // mov ebp, esp
    // push ebx
    // push esi
    // mov esi, dword ptr [ebp + 0xc]
    // xor ebx, ebx
    // cmp esi, ebx
    // if (...) GOTO(0x4b718d)
    // cmp dword ptr [ebp + 0x10], ebx
    // if (...) GOTO(0x4b718d)
    // mov al, byte ptr [esi]
    // cmp al, bl
    // if (...) GOTO(0x4b7193)
    // mov eax, dword ptr [ebp + 8]
    // cmp eax, ebx
    // if (...) GOTO(0x4b718d)
    // mov word ptr [eax], bx
    // xor eax, eax
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // cmp dword ptr [0x840b44], ebx
    // if (...) GOTO(0x4b71ae)
    // mov ecx, dword ptr [ebp + 8]
    // cmp ecx, ebx
    // if (...) GOTO(0x4b71a9)
    // movzx ax, al
    // mov word ptr [ecx], ax
    // push 1
    // pop eax
    // if (...) GOTO(0x4b718f)
    // mov ecx, dword ptr [0x4e5010]
    // movzx eax, al
    // test byte ptr [ecx + eax*2 + 1], 0x80
    // if (...) GOTO(0x4b720c)
    // mov eax, dword ptr [0x4e521c]
    // cmp eax, 1
    // if (...) GOTO(0x4b71f2)
    // cmp dword ptr [ebp + 0x10], eax
    // if (...) GOTO(0x4b71fc)
    // xor ecx, ecx
    // cmp dword ptr [ebp + 8], ebx
    // setne cl
    // push ecx
    // push dword ptr [ebp + 8]
    // push eax
    // push esi
    // push 9
    // push dword ptr [0x840b54]
    // CALL(dword)
    // test eax, eax
    // mov eax, dword ptr [0x4e521c]
    // if (...) GOTO(0x4b718f)
    // cmp dword ptr [ebp + 0x10], eax
    // if (...) GOTO(0x4b71fc)
    // cmp byte ptr [esi + 1], bl
    // if (...) GOTO(0x4b718f)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 0x2a
    // or eax, 0xffffffff
    // if (...) GOTO(0x4b718f)
    // xor eax, eax
    // cmp dword ptr [ebp + 8], ebx
    // setne al
    // push eax
    // push dword ptr [ebp + 8]
    // push 1
    // push esi
    // push 9
    // push dword ptr [0x840b54]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4b71a9)
    // if (...) GOTO(0x4b71fc)
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
    // cmp cl, 0x40
    // jae 0x4b725a
    // cmp cl, 0x20
    // jae 0x4b7250
    // shld edx, eax, cl
    // shl eax, cl
    // return;
    // mov edx, eax
    // xor eax, eax
    // and cl, 0x1f
    // shl edx, cl
    // return;
    // xor eax, eax
    // xor edx, edx
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // cmp ebx, -1
    // push esi
    // if (...) GOTO(0x4b72ab)
    // mov esi, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esi + 0xc]
    // test al, 1
    // if (...) GOTO(0x4b727d)
    // test al, 0x80
    // if (...) GOTO(0x4b72ab)
    // test al, 2
    // if (...) GOTO(0x4b72ab)
    // cmp dword ptr [esi + 8], 0
    // if (...) GOTO(0x4b728a)
    // push esi
    // CALL(0x4ac315)
    // pop ecx
    // mov eax, dword ptr [esi]
    // cmp eax, dword ptr [esi + 8]
    // if (...) GOTO(0x4b729a)
    // cmp dword ptr [esi + 4], 0
    // if (...) GOTO(0x4b72ab)
    // inc eax
    // mov dword ptr [esi], eax
    // test byte ptr [esi + 0xc], 0x40
    // if (...) GOTO(0x4b72b1)
    // dec dword ptr [esi]
    // mov eax, dword ptr [esi]
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4b72b7)
    // inc eax
    // mov dword ptr [esi], eax
    // or eax, 0xffffffff
    // pop esi
    // pop ebx
    // return;
    // dec dword ptr [esi]
    // mov eax, dword ptr [esi]
    // mov byte ptr [eax], bl
    // mov eax, dword ptr [esi + 0xc]
    // inc dword ptr [esi + 4]
    // and al, 0xef
    // or al, 1
    // mov dword ptr [esi + 0xc], eax
    // mov eax, ebx
    // and eax, 0xff
    // if (...) GOTO(0x4b72ae)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 8
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd2d0
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x404200)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 8
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd2f8
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // lea ecx, [ebp - 0x2f0]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd328
    // if (...) GOTO(0x4a528c)
    // lea ecx, [ebp - 0xfa0]
    // if (...) GOTO(0x483010)
    // lea ecx, [ebp - 0xee4]
    // if (...) GOTO(0x474c40)
    // lea ecx, [ebp - 0x974]
    // if (...) GOTO(0x474c40)
    // lea ecx, [ebp - 0xc2c]
    // if (...) GOTO(0x474c40)
    // lea ecx, [ebp - 0x404]
    // if (...) GOTO(0x474c40)
    // lea ecx, [ebp - 0x6bc]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd358
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd3a8
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd3d0
    // if (...) GOTO(0x4a528c)
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
    // push(0x4041f0)  // ptr?
    // push 5
    // push(0x2c)
    // lea eax, [ebp - 0x3a0]
    // push eax
    // CALL(0x4a5713)
    // return;
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd3f8
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // push(0x4041f0)  // ptr?
    // push(0xf)
    // push(0x2c)
    // lea eax, [ebp - 0x5d8]
    // push eax
    // CALL(0x4a5713)
    // return;
    // lea ecx, [ebp - 0x344]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd428
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // push(0x4041f0)  // ptr?
    // push(0xf)
    // push(0x2c)
    // lea eax, [ebp - 0x9c0]
    // push eax
    // CALL(0x4a5713)
    // return;
    // lea ecx, [ebp - 0x72c]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd458
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4805a0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x5ac
    // if (...) GOTO(0x486ce0)
    // mov eax, 0x4bd488
    // if (...) GOTO(0x4a528c)
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd4b8
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd4e0
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x2d8]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd508
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd530
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd558
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x2c
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x58
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x84
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xb0
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd580
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x2c
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x58
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x84
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xb0
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd5c8
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x2c
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x58
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x84
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xb0
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xdc
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x108
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x134
    // if (...) GOTO(0x4041f0)
    // push(0x4041f0)  // ptr?
    // push 8
    // push(0x2c)
    // mov eax, dword ptr [ebp - 0x10]
    // add eax, 0x160
    // push eax
    // CALL(0x4a5713)
    // return;
    // mov eax, 0x4bd610
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x2c
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x58
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x84
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xb0
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xdc
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x108
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x134
    // if (...) GOTO(0x4041f0)
    // push(0x4041f0)  // ptr?
    // push 8
    // push(0x2c)
    // mov eax, dword ptr [ebp - 0x10]
    // add eax, 0x160
    // push eax
    // CALL(0x4a5713)
    // return;
    // mov eax, 0x4bd678
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x2c
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd6e0
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x2c
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd710
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // push(0x4041f0)  // ptr?
    // push 4
    // push(0x2c)
    // mov eax, dword ptr [ebp - 0x10]
    // add eax, 0x2c
    // push eax
    // CALL(0x4a5713)
    // return;
    // push(0x4041f0)  // ptr?
    // push(0xc)
    // push(0x2c)
    // mov eax, dword ptr [ebp - 0x10]
    // add eax, 0xdc
    // push eax
    // CALL(0x4a5713)
    // return;
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x2ec
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd740
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // push(0x4041f0)  // ptr?
    // push 4
    // push(0x2c)
    // mov eax, dword ptr [ebp - 0x10]
    // add eax, 0x2c
    // push eax
    // CALL(0x4a5713)
    // return;
    // push(0x4041f0)  // ptr?
    // push(0xc)
    // push(0x2c)
    // mov eax, dword ptr [ebp - 0x10]
    // add eax, 0xdc
    // push eax
    // CALL(0x4a5713)
    // return;
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x2ec
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd780
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd7c0
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd7e8
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x2c
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x58
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x84
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xb0
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xdc
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x108
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x134
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x160
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x18c
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x1b8
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd810
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x2c
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x58
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x84
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xb0
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xdc
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x108
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x134
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x160
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x18c
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x1b8
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd888
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // lea ecx, [ebp - 0xaf0]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xb1c]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xac4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd900
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd938
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // lea ecx, [ebp - 0x374]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0x31c]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0x348]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0x2f0]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0x3cc]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0x3a0]
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd960
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // lea ecx, [ebp - 0x2f0]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0x31c]
    // if (...) GOTO(0x4041f0)
    // mov eax, 0x4bd9b8
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bd9f0
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x64]
    // if (...) GOTO(0x483010)
    // mov eax, 0x4bda18
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x64]
    // if (...) GOTO(0x483010)
    // mov eax, 0x4bda40
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // lea ecx, [ebp - 0x57c]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bda68
    // if (...) GOTO(0x4a528c)
    // push(0x4041f0)  // ptr?
    // push 8
    // push(0x2c)
    // lea eax, [ebp - 0x47c]
    // push eax
    // CALL(0x4a5713)
    // return;
    // lea ecx, [ebp - 0x31c]
    // if (...) GOTO(0x483010)
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bda98
    // if (...) GOTO(0x4a528c)
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
    // push(0x4041f0)  // ptr?
    // push 8
    // push(0x2c)
    // lea eax, [ebp - 0x564]
    // push eax
    // CALL(0x4a5713)
    // return;
    // push(0x4041f0)  // ptr?
    // push 4
    // push(0x2c)
    // lea eax, [ebp - 0x614]
    // push eax
    // CALL(0x4a5713)
    // return;
    // lea ecx, [ebp - 0x404]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bdad0
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bdb08
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xb4
    // if (...) GOTO(0x4928d0)
    // mov eax, 0x4bdb30
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xb4
    // if (...) GOTO(0x4928d0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x254
    // if (...) GOTO(0x4928d0)
    // mov eax, 0x4bdb58
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x128]
    // if (...) GOTO(0x492dc0)
    // mov eax, dword ptr [ebp - 0x114]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, 0x4bdb88
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x1a4]
    // if (...) GOTO(0x492dc0)
    // mov eax, 0x4bdbb8
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x47d7c0)
    // mov eax, 0x4bdbe0
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x47d7c0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xbc
    // if (...) GOTO(0x4928d0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x134
    // if (...) GOTO(0x480390)
    // mov eax, 0x4bdc08
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // mov eax, dword ptr [ebp + 0x24]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, dword ptr [ebp + 0x24]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, dword ptr [ebp + 0x24]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, dword ptr [ebp + 0x24]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, dword ptr [ebp + 4]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, dword ptr [ebp + 4]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, 0x4bdc40
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x47a3c0)
    // mov eax, 0x4bdc90
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x47a3c0)
    // mov eax, 0x4bdcb8
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp + 0x18]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, 0x4bdce0
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp + 4]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, dword ptr [ebp + 0xc]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, dword ptr [ebp + 0xc]
    // push eax
    // mov ecx, dword ptr [ebp + 4]
    // push ecx
    // CALL(0x4021b0)
    // add esp, 8
    // return;
    // mov eax, dword ptr [0x83aca0]
    // push eax
    // mov ecx, dword ptr [ebp + 0xc]
    // push ecx
    // CALL(0x4021b0)
    // add esp, 8
    // return;
    // mov eax, dword ptr [ebp + 0xc]
    // push eax
    // mov ecx, dword ptr [ebp + 4]
    // push ecx
    // CALL(0x4021b0)
    // add esp, 8
    // return;
    // mov eax, dword ptr [0x83aca0]
    // push eax
    // mov ecx, dword ptr [ebp + 0xc]
    // push ecx
    // CALL(0x4021b0)
    // add esp, 8
    // return;
    // mov eax, dword ptr [ebp + 0xc]
    // push eax
    // mov ecx, dword ptr [ebp + 4]
    // push ecx
    // CALL(0x4021b0)
    // add esp, 8
    // return;
    // mov eax, dword ptr [0x83aca0]
    // push eax
    // mov ecx, dword ptr [ebp + 0xc]
    // push ecx
    // CALL(0x4021b0)
    // add esp, 8
    // return;
    // mov eax, dword ptr [ebp + 0xc]
    // push eax
    // mov ecx, dword ptr [ebp + 4]
    // push ecx
    // CALL(0x4021b0)
    // add esp, 8
    // return;
    // mov eax, 0x4bdd08
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov eax, dword ptr [ebp + 4]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, 0x4bdd70
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp + 8]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, 0x4bdd98
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // sub ecx, 4
    // if (...) GOTO(0x4021e0)
    // mov eax, 0x4bddc0
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4852d0)
    // mov eax, 0x4bdde8
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4852d0)
    // mov eax, 0x4bde10
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4841e0)
    // mov eax, 0x4bde38
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x1c]
    // if (...) GOTO(0x4841e0)
    // mov eax, 0x4bde60
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4841e0)
    // mov eax, 0x4bde88
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp - 0x394]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, 0x4bdeb0
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4805a0)
    // mov eax, 0x4bded8
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x487260)
    // mov eax, 0x4bdf00
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x487260)
    // mov eax, 0x4bdf28
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4805a0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x57c
    // if (...) GOTO(0x486ce0)
    // mov eax, 0x4bdf50
    // if (...) GOTO(0x4a528c)
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4805a0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x57c
    // if (...) GOTO(0x486ce0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x5b4
    // if (...) GOTO(0x486ce0)
    // mov eax, 0x4bdf80
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 4
    // if (...) GOTO(0x474810)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xc0
    // if (...) GOTO(0x489c90)
    // mov ecx, dword ptr [ebp - 0x14]
    // sub ecx, 0xc
    // if (...) GOTO(0x401c70)
    // mov eax, 0x4bdfb8
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // sub ecx, 0xc
    // if (...) GOTO(0x401c70)
    // mov eax, 0x4bdff0
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp - 0x14]
    // and eax, 1
    // test eax, eax
    // if (...) GOTO(0x4b7fb9)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x5c
    // if (...) GOTO(0x4805a0)
    // return;
    // mov eax, 0x4be018
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x14]
    // if (...) GOTO(0x4805a0)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x5a4
    // if (...) GOTO(0x474810)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x5dc
    // if (...) GOTO(0x491410)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0xcac
    // if (...) GOTO(0x491410)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x13a0
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x13e0
    // if (...) GOTO(0x489c90)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x1410
    // if (...) GOTO(0x489c90)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x1460
    // if (...) GOTO(0x4914d0)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x1f04
    // if (...) GOTO(0x4928d0)
    // mov eax, 0x4be040
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp + 4]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, 0x4be0a8
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp - 0x10]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, 0x4be0d0
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x488650)
    // mov eax, 0x4be0f8
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // sub ecx, 0x1a0
    // if (...) GOTO(0x489de0)
    // mov eax, dword ptr [ebp - 0x10]
    // sub eax, 0x1fc
    // test eax, eax
    // if (...) GOTO(0x4b80ef)
    // mov ecx, dword ptr [ebp - 0x10]
    // sub ecx, 0x1a4
    // mov dword ptr [ebp - 0x14], ecx
    // if (...) GOTO(0x4b80f6)
    // mov dword ptr [ebp - 0x14], 0
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x24
    // if (...) GOTO(0x491680)
    // mov eax, dword ptr [ebp - 0x10]
    // sub eax, 0x1fc
    // test eax, eax
    // if (...) GOTO(0x4b8122)
    // mov ecx, dword ptr [ebp - 0x10]
    // sub ecx, 0x184
    // mov dword ptr [ebp - 0x18], ecx
    // if (...) GOTO(0x4b8129)
    // mov dword ptr [ebp - 0x18], 0
    // mov ecx, dword ptr [ebp - 0x18]
    // add ecx, 0x1c
    // if (...) GOTO(0x49ec80)
    // mov eax, dword ptr [ebp - 0x10]
    // sub eax, 0x1fc
    // test eax, eax
    // if (...) GOTO(0x4b8155)
    // mov ecx, dword ptr [ebp - 0x10]
    // sub ecx, 0x16c
    // mov dword ptr [ebp - 0x1c], ecx
    // if (...) GOTO(0x4b815c)
    // mov dword ptr [ebp - 0x1c], 0
    // mov ecx, dword ptr [ebp - 0x1c]
    // add ecx, 0xe0
    // if (...) GOTO(0x4a3480)
    // mov eax, dword ptr [ebp - 0x10]
    // sub eax, 0x1fc
    // test eax, eax
    // if (...) GOTO(0x4b818b)
    // mov ecx, dword ptr [ebp - 0x10]
    // sub ecx, 0x90
    // mov dword ptr [ebp - 0x20], ecx
    // if (...) GOTO(0x4b8192)
    // mov dword ptr [ebp - 0x20], 0
    // mov ecx, dword ptr [ebp - 0x20]
    // add ecx, 0x8c
    // if (...) GOTO(0x4a2330)
    // mov eax, 0x4be120
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x14]
    // if (...) GOTO(0x4805a0)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x5a4
    // if (...) GOTO(0x474810)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x5dc
    // if (...) GOTO(0x491410)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0xcac
    // if (...) GOTO(0x491410)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x13a0
    // if (...) GOTO(0x4041f0)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x13e0
    // if (...) GOTO(0x489c90)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x1410
    // if (...) GOTO(0x489c90)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x1460
    // if (...) GOTO(0x4914d0)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x1f04
    // if (...) GOTO(0x4928d0)
    // mov ecx, dword ptr [ebp - 0x10]
    // sub ecx, 0xc
    // if (...) GOTO(0x401c70)
    // mov ecx, dword ptr [ebp - 0x10]
    // sub ecx, 0xc
    // if (...) GOTO(0x401c70)
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x488650)
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x488650)
    // mov eax, 0x4be168
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov eax, dword ptr [ebp - 0x10]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, 0x4be1f0
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x20
    // if (...) GOTO(0x486ce0)
    // mov eax, 0x4be218
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x20
    // if (...) GOTO(0x486ce0)
    // mov eax, 0x4be240
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp + 4]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, 0x4be268
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0xe4]
    // if (...) GOTO(0x483010)
    // mov eax, 0x4be290
    // if (...) GOTO(0x4a528c)
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
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4805a0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x60c
    // if (...) GOTO(0x491410)
    // mov eax, 0x4be2b8
    // if (...) GOTO(0x4a528c)
    // mov ecx, dword ptr [ebp - 0x14]
    // if (...) GOTO(0x4805a0)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0x60c
    // if (...) GOTO(0x491410)
    // mov ecx, dword ptr [ebp - 0x14]
    // add ecx, 0xcdc
    // if (...) GOTO(0x491410)
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x488650)
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x488650)
    // mov eax, 0x4be2e8
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x491710)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // mov eax, 0x4be330
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x491710)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // mov ecx, dword ptr [ebp - 0x2204]
    // sub ecx, 0xc
    // if (...) GOTO(0x401c70)
    // mov ecx, dword ptr [ebp - 0x2204]
    // sub ecx, 0xc
    // if (...) GOTO(0x401c70)
    // mov ecx, dword ptr [ebp - 0x2204]
    // if (...) GOTO(0x488650)
    // mov ecx, dword ptr [ebp - 0x2204]
    // if (...) GOTO(0x488650)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // mov ecx, dword ptr [ebp - 0x2204]
    // if (...) GOTO(0x488650)
    // mov ecx, dword ptr [ebp - 0x2204]
    // if (...) GOTO(0x488650)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // mov eax, 0x4be6b8
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x491710)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // lea ecx, [ebp - 0x2120]
    // if (...) GOTO(0x4805a0)
    // lea ecx, [ebp - 0x1b7c]
    // if (...) GOTO(0x474810)
    // lea ecx, [ebp - 0x1b44]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0x1474]
    // if (...) GOTO(0x491410)
    // lea ecx, [ebp - 0xd80]
    // if (...) GOTO(0x4041f0)
    // lea ecx, [ebp - 0xd40]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xd10]
    // if (...) GOTO(0x489c90)
    // lea ecx, [ebp - 0xcc0]
    // if (...) GOTO(0x4914d0)
    // lea ecx, [ebp - 0x21c]
    // if (...) GOTO(0x4928d0)
    // mov eax, 0x4beb48
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov eax, dword ptr [ebp - 0x10]
    // mov ecx, dword ptr [eax + 0x18]
    // push ecx
    // mov edx, dword ptr [ebp + 4]
    // push edx
    // CALL(0x4021b0)
    // add esp, 8
    // return;
    // mov eax, dword ptr [ebp - 0x14]
    // and eax, 4
    // test eax, eax
    // if (...) GOTO(0x4b90ed)
    // mov ecx, dword ptr [ebp + 4]
    // add ecx, 0x5c
    // if (...) GOTO(0x4021a0)
    // return;
    // mov eax, dword ptr [ebp - 0x10]
    // push eax
    // mov ecx, dword ptr [ebp + 4]
    // push ecx
    // CALL(0x4021b0)
    // add esp, 8
    // return;
    // mov eax, dword ptr [ebp - 0x14]
    // and eax, 8
    // test eax, eax
    // if (...) GOTO(0x4b9118)
    // mov ecx, dword ptr [ebp + 4]
    // add ecx, 0x5c
    // if (...) GOTO(0x4021a0)
    // return;
    // mov eax, dword ptr [ebp - 0x10]
    // mov ecx, dword ptr [eax + 0x18]
    // push ecx
    // mov edx, dword ptr [ebp + 4]
    // push edx
    // CALL(0x4021b0)
    // add esp, 8
    // return;
    // mov eax, dword ptr [ebp - 0x14]
    // and eax, 0x40
    // test eax, eax
    // if (...) GOTO(0x4b9146)
    // mov ecx, dword ptr [ebp + 4]
    // add ecx, 0x5c
    // if (...) GOTO(0x4021a0)
    // return;
    // mov eax, dword ptr [ebp - 0x10]
    // push eax
    // mov ecx, dword ptr [ebp + 4]
    // push ecx
    // CALL(0x4021b0)
    // add esp, 8
    // return;
    // mov eax, dword ptr [ebp - 0x14]
    // and eax, 0x80
    // test eax, eax
    // if (...) GOTO(0x4b9173)
    // mov ecx, dword ptr [ebp + 4]
    // add ecx, 0x5c
    // if (...) GOTO(0x4021a0)
    // return;
    // mov eax, 0x4bed20
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4805a0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x574
    // if (...) GOTO(0x483b90)
    // mov eax, 0x4bed80
    // if (...) GOTO(0x4a528c)
    // mov ecx, dword ptr [ebp - 0x10]
    // if (...) GOTO(0x4805a0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x574
    // if (...) GOTO(0x483b90)
    // mov eax, 0x4bedb0
    // if (...) GOTO(0x4a528c)
    // mov eax, dword ptr [ebp - 0x10]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, 0x4bede0
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bee08
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp - 0x14]
    // and eax, 1
    // test eax, eax
    // if (...) GOTO(0x4b9219)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x24
    // if (...) GOTO(0x4805a0)
    // return;
    // mov eax, 0x4bee30
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bee58
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp - 0x14]
    // and eax, 1
    // test eax, eax
    // if (...) GOTO(0x4b9269)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x1c
    // if (...) GOTO(0x4805a0)
    // return;
    // mov eax, 0x4bee80
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4beea8
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp - 0x14]
    // and eax, 1
    // test eax, eax
    // if (...) GOTO(0x4b92bc)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x1fc
    // if (...) GOTO(0x4805a0)
    // return;
    // mov eax, dword ptr [ebp - 0x14]
    // and eax, 2
    // test eax, eax
    // if (...) GOTO(0x4b92d9)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x774
    // if (...) GOTO(0x489370)
    // return;
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x5c
    // if (...) GOTO(0x489de0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x7c
    // if (...) GOTO(0x491680)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x94
    // if (...) GOTO(0x49ec80)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x170
    // if (...) GOTO(0x4a3480)
    // mov eax, 0x4beed0
    // if (...) GOTO(0x4a528c)
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
    // lea ecx, [ebp - 0x2c4]
    // if (...) GOTO(0x474c40)
    // mov eax, 0x4bef20
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp - 0x14]
    // and eax, 1
    // test eax, eax
    // if (...) GOTO(0x4b935c)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x8c
    // if (...) GOTO(0x4805a0)
    // return;
    // mov eax, 0x4bef48
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov eax, dword ptr [ebp - 0x30]
    // push eax
    // CALL(0x4a4ffc)
    // pop ecx
    // return;
    // mov eax, 0x4bef70
    // if (...) GOTO(0x4a528c)
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
    // mov eax, dword ptr [ebp - 0x14]
    // and eax, 1
    // test eax, eax
    // if (...) GOTO(0x4b93ac)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0xe0
    // if (...) GOTO(0x4805a0)
    // return;
    // mov eax, dword ptr [ebp - 0x14]
    // and eax, 2
    // test eax, eax
    // if (...) GOTO(0x4b93c9)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x658
    // if (...) GOTO(0x489370)
    // return;
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x10
    // if (...) GOTO(0x4928d0)
    // mov ecx, dword ptr [ebp - 0x10]
    // add ecx, 0x78
    // if (...) GOTO(0x4a3370)
    // mov eax, 0x4bef98
    // if (...) GOTO(0x4a528c)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [ebp - 0x10]
    // sub ecx, 0xd0
    // if (...) GOTO(0x4928d0)
    // mov ecx, dword ptr [ebp - 0x10]
    // sub ecx, 0x68
    // if (...) GOTO(0x4a3370)
    // mov eax, 0x4befd8
    // if (...) GOTO(0x4a528c)
    // mov ecx, dword ptr [esp + 4]
    // mov dl, byte ptr [ecx]
    // lea eax, [ecx + 1]
    // test dl, dl
    // if (...) GOTO(0x4b9427)
    // mov dl, byte ptr [eax]
    // inc eax
    // test dl, dl
    // if (...) GOTO(0x4b9420)
    // sub eax, ecx
    // dec eax
    // return;
}