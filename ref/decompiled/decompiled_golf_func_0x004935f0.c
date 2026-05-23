/**
 * func_004935f0 — Auto-décompilé
 * Adresse: 0x004935f0 [golf.exe]
 * Taille: 74595 bytes, Type: std_prologue
 * Appel: __thiscall, Locals: 0B, SEH: True
 * Appelle: 0x405097, 0x48e1c0, dword, 0x480870, 0x476310, 0x4762d0, 0x493ef0, 0x4887c0
 * Constantes: 0x493fca, 0x47d130, 0x49b930, 0x497746, 0x494dd6, 0x496930, 0x49e78e, 0x493eab
 */
void func_004935f0(void) {
    /* 14919 instructions */

    // push ebp
    // mov ebp, esp
    // push ecx
    // push ebx
    // mov eax, dword ptr [ebp + 8]
    // and eax, eax
    // if (...) GOTO(0x49361c)
    // mov dl, byte ptr [0x4bba88]
    // mov dh, byte ptr [0x4bba89]
    // xor ebx, ebx
    // dec eax
    // inc eax
    // mov bl, byte ptr [eax]
    // and bl, bl
    // if (...) GOTO(0x49361c)
    // cmp bl, dl
    // if (...) GOTO(0x49360b)
    // cmp bl, dh
    // if (...) GOTO(0x49360b)
    // if (...) GOTO(0x49361e)
    // xor eax, eax
    // mov dword ptr [ebp - 4], eax
    // mov eax, dword ptr [ebp - 4]
    // pop ebx
    // mov esp, ebp
    // pop ebp
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // mov ecx, dword ptr [esp + 8]
    // push esi
    // mov eax, ecx
    // push edi
    // and eax, 0xffff
    // mov esi, eax
    // shl esi, 0x10
    // or esi, eax
    // mov eax, dword ptr [esp + 0x14]
    // test al, 1
    // if (...) GOTO(0x493658)
    // mov edx, dword ptr [esp + 0xc]
    // mov word ptr [edx], cx
    // lea edi, [edx + 2]
    // if (...) GOTO(0x49365c)
    // mov edi, dword ptr [esp + 0xc]
    // cdq 
    // sub eax, edx
    // sar eax, 1
    // test eax, eax
    // if (...) GOTO(0x49366b)
    // mov ecx, eax
    // mov eax, esi
    // rep stosd dword ptr es:[edi], eax
    // pop edi
    // pop esi
    // return;
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x10]
    // push 0
    // push eax
    // mov eax, dword ptr [esp + 0x14]
    // push edx
    // mov edx, dword ptr [esp + 0x14]
    // push eax
    // mov eax, dword ptr [esp + 0x14]
    // push edx
    // push eax
    // CALL(0x48e1c0)
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov al, byte ptr [esp + 0x18]
    // sub esp, 0x10
    // test al, 1
    // push esi
    // mov esi, ecx
    // push edi
    // mov cl, byte ptr [esi + 4]
    // if (...) GOTO(0x4936b7)
    // or cl, 1
    // if (...) GOTO(0x4936ba)
    // and cl, 0xfe
    // test al, 2
    // mov byte ptr [esi + 4], cl
    // if (...) GOTO(0x4936c6)
    // or cl, 4
    // if (...) GOTO(0x4936c9)
    // and cl, 0xfb
    // test al, 4
    // mov byte ptr [esi + 4], cl
    // if (...) GOTO(0x4936d7)
    // mov al, cl
    // or al, 8
    // mov byte ptr [esi + 4], al
    // mov eax, dword ptr [0x83d3ac]
    // test eax, eax
    // if (...) GOTO(0x4936ee)
    // mov eax, dword ptr [esi + 0x3468]
    // test eax, eax
    // if (...) GOTO(0x493a14)
    // mov edx, dword ptr [eax + 0x1c]
    // mov eax, dword ptr [esp + 0x1c]
    // mov edi, dword ptr [esp + 0x24]
    // mov ecx, dword ptr [esp + 0x20]
    // mov dword ptr [esp + 8], eax
    // add eax, edi
    // mov dword ptr [esp + 0x10], eax
    // mov eax, dword ptr [esp + 0x2c]
    // add edx, ecx
    // push 0
    // push 0
    // mov dword ptr [esp + 0x1c], edx
    // push eax
    // push(0xa0)
    // lea edx, [esp + 0x18]
    // mov dword ptr [esp + 0x1c], ecx
    // push 0
    // lea ecx, [esi + 0x213c]
    // push edx
    // CALL(0x480870)
    // test eax, eax
    // if (...) GOTO(0x493a19)
    // test byte ptr [esi + 4], 1
    // if (...) GOTO(0x493779)
    // mov ecx, dword ptr [0x83ad50]
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // push 2
    // lea edi, [esi + 0x23b0]
    // push 2
    // push -1
    // push(0x8000001f)  // flag
    // mov ecx, edi
    // CALL(0x476310)
    // mov ecx, dword ptr [0x83b9c0]
    // push 0
    // push 0
    // push 0
    // push ecx
    // mov ecx, edi
    // CALL(0x4762d0)
    // mov eax, dword ptr [0x83d3ac]
    // test eax, eax
    // if (...) GOTO(0x49378e)
    // push(0x83d3ac)  // ptr?
    // mov ecx, esi
    // CALL(0x493ef0)
    // mov eax, dword ptr [esi + 0x3474]
    // push ebx
    // test eax, eax
    // push ebp
    // if (...) GOTO(0x4937c4)
    // mov ebx, dword ptr [eax + 0x1c]
    // mov edi, dword ptr [eax + 0x10]
    // mov ecx, dword ptr [esi + 0x347c]
    // mov edx, dword ptr [esi + 0x3478]
    // mov dword ptr [esp + 0x38], ebx
    // mov dword ptr [esi + 0x2d14], eax
    // mov dword ptr [esi + 0x2d18], edx
    // mov dword ptr [esi + 0x2d1c], ecx
    // if (...) GOTO(0x4937f0)
    // mov eax, dword ptr [0x83d3a0]
    // test eax, eax
    // if (...) GOTO(0x4937e5)
    // mov ebx, dword ptr [eax + 0x1c]
    // mov edi, dword ptr [eax + 0x10]
    // mov ecx, dword ptr [0x83d3a8]
    // mov edx, dword ptr [0x83d3a4]
    // mov dword ptr [esp + 0x38], ebx
    // if (...) GOTO(0x4937b0)
    // mov ebx, 0x19
    // mov dword ptr [esp + 0x38], ebx
    // mov edi, ebx
    // test byte ptr [esi + 4], 1
    // if (...) GOTO(0x49384f)
    // mov ebp, dword ptr [esp + 0x10]
    // mov edx, dword ptr [esp + 0x18]
    // mov eax, dword ptr [esp + 0x14]
    // mov ecx, ebp
    // sub edx, edi
    // neg ecx
    // add ebp, ecx
    // add edx, ecx
    // mov ecx, dword ptr [esp + 0x14]
    // mov dword ptr [esp + 0x10], ebp
    // neg eax
    // add ecx, eax
    // mov dword ptr [esp + 0x18], edx
    // mov dword ptr [esp + 0x14], ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // add ecx, eax
    // lea eax, [esp + 0x10]
    // test eax, eax
    // mov dword ptr [esp + 0x1c], ecx
    // if (...) GOTO(0x49384f)
    // mov eax, dword ptr [esp + 0x14]
    // lea ecx, [esi + 0x26b4]
    // mov dword ptr [esi + 0x26b4], ebp
    // mov dword ptr [ecx + 4], eax
    // mov dword ptr [ecx + 8], edx
    // mov edx, dword ptr [esp + 0x1c]
    // mov dword ptr [ecx + 0xc], edx
    // mov ecx, dword ptr [esi + 0x23b4]
    // test ecx, ecx
    // if (...) GOTO(0x493863)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x493865)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x23b4]
    // sub eax, edi
    // add eax, 5
    // test ecx, ecx
    // mov ebp, eax
    // if (...) GOTO(0x493880)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x493882)
    // xor eax, eax
    // sub eax, ebx
    // push 0
    // cdq 
    // sub eax, edx
    // lea edx, [edi + ebp + 5]
    // sar eax, 1
    // sub edx, ebp
    // lea ecx, [eax + ebx]
    // lea ebx, [esi + 0x213c]
    // sub ecx, eax
    // push ebx
    // push ecx
    // push edx
    // push eax
    // push ebp
    // mov ebx, 1
    // lea ebp, [esi + 0x26c4]
    // push ebx
    // push 0
    // mov ecx, ebp
    // CALL(0x4887c0)
    // mov ecx, dword ptr [esi + 0x3474]
    // lea eax, [esi + 0x3474]
    // test ecx, ecx
    // if (...) GOTO(0x4938c9)
    // push eax
    // if (...) GOTO(0x4938f5)
    // mov edx, dword ptr [0x83d3a0]
    // test edx, edx
    // if (...) GOTO(0x4938fc)
    // mov eax, dword ptr [0x83d3a8]
    // mov ecx, dword ptr [0x83d3a4]
    // mov dword ptr [ebp + 0x650], edx
    // mov dword ptr [ebp + 0x654], ecx
    // mov dword ptr [ebp + 0x658], eax
    // push(0x83d3a0)  // ptr?
    // mov ecx, esi
    // CALL(0x494020)
    // mov eax, dword ptr [esp + 0x24]
    // mov ecx, dword ptr [esp + 0x28]
    // mov edx, dword ptr [esp + 0x34]
    // mov dword ptr [esi + 8], eax
    // mov eax, dword ptr [esp + 0x30]
    // mov dword ptr [esi + 0xc], ecx
    // mov ecx, dword ptr [esp + 0x38]
    // push eax
    // mov dword ptr [esi + 0x18], ecx
    // push edi
    // mov ecx, esi
    // mov dword ptr [esi + 0x10], edi
    // mov dword ptr [esi + 0x14], eax
    // mov dword ptr [esi + 0x3480], edx
    // CALL(0x493b90)
    // mov ebp, eax
    // mov al, byte ptr [esi + 4]
    // test al, 4
    // if (...) GOTO(0x49393d)
    // or byte ptr [esi + 0x148c], bl
    // mov dword ptr [esi + 0x2dd0], ebx
    // mov ecx, dword ptr [0x83ad50]
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [0x83ad50]
    // mov edi, eax
    // dec edi
    // mov eax, dword ptr [ecx]
    // neg edi
    // sbb edi, edi
    // and edi, 0xffffa940
    // add edi, 0x8000ad72
    // CALL(dword)
    // dec eax
    // mov dword ptr [esi + 0x2dcc], edi
    // neg eax
    // sbb eax, eax
    // and eax, 0xffffa940
    // add eax, 0x8000ad72
    // mov dword ptr [esi + 0x2dc8], eax
    // mov ecx, dword ptr [0x83ad50]
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // dec eax
    // push ebx
    // neg eax
    // sbb eax, eax
    // and al, 0x40
    // add eax, 0x80000185
    // mov dword ptr [esi + 0x2dac], eax
    // mov eax, dword ptr [esi + 0x2d98]
    // mov ecx, dword ptr [eax + 4]
    // lea ecx, [ecx + esi + 0x2d98]
    // CALL(0x47d020)
    // mov edx, dword ptr [esi + 0x2d98]
    // mov eax, dword ptr [edx + 4]
    // mov dword ptr [eax + esi + 0x2f00], 0
    // mov ecx, dword ptr [0x83ad50]
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // dec eax
    // neg eax
    // sbb eax, eax
    // and eax, 0xffff8100
    // add eax, 0x8000fded
    // mov dword ptr [esi + 0x2db0], eax
    // mov al, byte ptr [esi + 0x2d9c]
    // or al, bl
    // mov byte ptr [esi + 0x2d9c], al
    // mov eax, ebp
    // pop ebp
    // pop ebx
    // pop edi
    // pop esi
    // add esp, 0x10
    // return;
    // mov eax, 7
    // pop edi
    // pop esi
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
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // CALL(0x493a60)
    // mov eax, dword ptr [esi + 0x213c]
    // lea ecx, [esi + 0x213c]
    // push 0
    // CALL(dword)
    // mov edx, dword ptr [esi + 0x26c4]
    // lea ecx, [esi + 0x26c4]
    // push 0
    // CALL(dword)
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x14
    // push ebx
    // push ebp
    // push esi
    // push edi
    // mov esi, ecx
    // CALL(0x4941e0)
    // mov edi, eax
    // mov ecx, esi
    // mov dword ptr [esp + 0x10], edi
    // CALL(0x4942a0)
    // mov ecx, esi
    // mov dword ptr [esi + 0x1c], eax
    // CALL(0x493f50)
    // test byte ptr [esi + 4], 1
    // if (...) GOTO(0x493ac5)
    // mov ecx, dword ptr [0x83ad50]
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // push 2
    // lea ebx, [esi + 0x23b0]
    // push 2
    // push -1
    // push(0x8000001f)  // flag
    // mov ecx, ebx
    // CALL(0x476310)
    // mov ecx, dword ptr [0x83b9c0]
    // push 0
    // push 0
    // push 0
    // push ecx
    // mov ecx, ebx
    // CALL(0x4762d0)
    // lea edx, [esi + 0x22e8]
    // mov eax, dword ptr [esi + 0x22e8]
    // mov dword ptr [esp + 0x14], eax
    // mov ecx, dword ptr [edx + 4]
    // mov dword ptr [esp + 0x18], ecx
    // mov ecx, dword ptr [esi + 0x293c]
    // mov ebx, dword ptr [edx + 8]
    // test ecx, ecx
    // mov ebp, dword ptr [edx + 0xc]
    // if (...) GOTO(0x493af6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x493af8)
    // xor eax, eax
    // mov ecx, dword ptr [eax]
    // mov edx, dword ptr [eax + 8]
    // mov al, byte ptr [esi + 4]
    // sub ecx, edx
    // add ebx, ecx
    // test al, 8
    // if (...) GOTO(0x493b3e)
    // test edi, edi
    // if (...) GOTO(0x493b6f)
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // mov edx, dword ptr [esp + 0x10]
    // not ecx
    // dec ecx
    // push ecx
    // push 4
    // push 4
    // push edx
    // lea ecx, [esi + 0x23b0]
    // CALL(0x477c30)
    // lea ecx, [esi + 0x213c]
    // CALL(0x480ce0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x14
    // return;
    // test edi, edi
    // if (...) GOTO(0x493b6f)
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // mov edx, dword ptr [esp + 0x18]
    // mov eax, dword ptr [esp + 0x14]
    // not ecx
    // dec ecx
    // sub ebp, edx
    // push ecx
    // sub ebx, eax
    // mov eax, dword ptr [esp + 0x14]
    // push ebp
    // push ebx
    // push 0
    // push 0
    // push eax
    // lea ecx, [esi + 0x23b0]
    // CALL(0x477e60)
    // lea ecx, [esi + 0x213c]
    // CALL(0x480ce0)
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
    // sub esp, 8
    // push ebx
    // push esi
    // mov esi, ecx
    // mov bl, 4
    // mov eax, dword ptr [esi + 0x22e8]
    // mov ecx, dword ptr [esi + 0x22f4]
    // mov dword ptr [esp + 0xc], eax
    // mov al, byte ptr [esi + 4]
    // test bl, al
    // mov dword ptr [esp + 8], ecx
    // if (...) GOTO(0x493c2d)
    // mov ecx, dword ptr [esi + 0x3480]
    // lea edx, [esp + 8]
    // lea eax, [esp + 0xc]
    // push edx
    // push eax
    // CALL(0x47b170)
    // test byte ptr [esi + 4], bl
    // if (...) GOTO(0x493c2d)
    // mov ecx, dword ptr [esi + 0x23b4]
    // test ecx, ecx
    // if (...) GOTO(0x493be2)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x493be4)
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0xc]
    // mov edx, dword ptr [esi + 0x1488]
    // add eax, ecx
    // mov ecx, dword ptr [edx + 8]
    // mov edx, dword ptr [ecx + esi + 0x14e8]
    // test edx, edx
    // lea ecx, [ecx + esi + 0x1488]
    // if (...) GOTO(0x493c09)
    // mov ecx, edx
    // if (...) GOTO(0x493c0c)
    // mov ecx, dword ptr [ecx + 0x30]
    // mov edx, dword ptr [esp + 8]
    // sub eax, ecx
    // push edx
    // push eax
    // lea ecx, [esi + 0x24]
    // CALL(0x48e190)
    // mov ecx, esi
    // CALL(0x493a60)
    // pop esi
    // xor eax, eax
    // pop ebx
    // add esp, 8
    // return;
    // mov eax, dword ptr [esi + 0x18]
    // mov edx, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 0xc]
    // add eax, edx
    // mov edx, dword ptr [esi + 0x2d98]
    // push edi
    // push eax
    // push ecx
    // mov eax, dword ptr [edx + 4]
    // lea ecx, [eax + esi + 0x2d98]
    // CALL(0x47b420)
    // mov ecx, dword ptr [esi + 0x2d98]
    // mov ebx, dword ptr [esi + 0x18]
    // push 0
    // push 0
    // mov edx, dword ptr [ecx + 4]
    // mov eax, dword ptr [edx + esi + 0x2d98]
    // lea ecx, [edx + esi + 0x2d98]
    // mov edx, dword ptr [esp + 0x24]
    // sub edx, ebx
    // push edx
    // mov edx, dword ptr [esp + 0x24]
    // push edx
    // CALL(dword)
    // mov ecx, esi
    // CALL(0x493ed0)
    // mov ecx, dword ptr [esi + 0x2d98]
    // mov edx, dword ptr [ecx + 8]
    // mov dword ptr [edx + esi + 0x2dc8], eax
    // mov eax, dword ptr [esi + 0x2d98]
    // mov ecx, dword ptr [eax + 4]
    // mov eax, dword ptr [eax + 8]
    // mov edx, dword ptr [ecx + esi + 0x2f50]
    // mov edi, dword ptr [ecx + esi + 0x2f48]
    // lea ecx, [ecx + esi + 0x2f44]
    // sub edx, edi
    // mov dword ptr [eax + esi + 0x2dcc], edx
    // mov ecx, dword ptr [esi + 0x2d98]
    // mov edx, dword ptr [ecx + 8]
    // mov ebx, dword ptr [edx + esi + 0x2dbc]
    // lea eax, [edx + esi + 0x2d98]
    // or ebx, 2
    // mov dword ptr [eax + 0x24], ebx
    // mov eax, dword ptr [esi + 0x2d98]
    // mov ecx, dword ptr [eax + 8]
    // mov edi, dword ptr [ecx + esi + 0x2dbc]
    // lea eax, [ecx + esi + 0x2d98]
    // or edi, 1
    // mov dword ptr [eax + 0x24], edi
    // mov edx, dword ptr [esi + 0x2d98]
    // mov eax, dword ptr [edx + 8]
    // mov dword ptr [eax + esi + 0x2de0], 0
    // mov dword ptr [esi + 0x2dd0], 0
    // mov ecx, dword ptr [0x83ad50]
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [0x83ad50]
    // mov edi, eax
    // dec edi
    // mov eax, dword ptr [ecx]
    // neg edi
    // sbb edi, edi
    // and edi, 0xffff91c0
    // add edi, 0x8000dc71
    // CALL(dword)
    // dec eax
    // lea ebx, [esi + 0x2d94]
    // neg eax
    // sbb eax, eax
    // mov dword ptr [ebx + 0x38], edi
    // and eax, 0xffff91c0
    // add eax, 0x8000dc71
    // mov dword ptr [ebx + 0x34], eax
    // mov ecx, dword ptr [0x83ad50]
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // dec eax
    // neg eax
    // sbb eax, eax
    // and al, 0
    // add eax, 0x8000021f
    // mov dword ptr [esi + 0x2dac], eax
    // mov eax, dword ptr [esi + 0x2d98]
    // push 0
    // mov ecx, dword ptr [eax + 4]
    // lea ecx, [ecx + esi + 0x2d98]
    // CALL(0x47d020)
    // mov edx, dword ptr [esi + 0x2d98]
    // mov eax, dword ptr [edx + 4]
    // mov dword ptr [eax + esi + 0x2f00], 0
    // mov ecx, dword ptr [0x83ad50]
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x2d98]
    // dec eax
    // neg eax
    // mov edx, dword ptr [ecx + 4]
    // sbb eax, eax
    // and eax, 0xfffffe00
    // add eax, 0x80000400
    // mov dword ptr [edx + esi + 0x2f04], eax
    // mov ecx, dword ptr [0x83ad50]
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // dec eax
    // neg eax
    // sbb eax, eax
    // and eax, 0xffff8040
    // add eax, 0x8000ff91
    // mov dword ptr [esi + 0x2db0], eax
    // mov ecx, dword ptr [0x83ad50]
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [0x83ad50]
    // mov edi, eax
    // dec edi
    // mov eax, dword ptr [ecx]
    // neg edi
    // sbb edi, edi
    // and edi, 0xfffffe00
    // add edi, 0x80000400
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x2d98]
    // dec eax
    // neg eax
    // mov edx, dword ptr [ecx + 4]
    // mov dword ptr [edx + esi + 0x2f28], edi
    // sbb eax, eax
    // push 0
    // and eax, 0xfffffe00
    // lea ecx, [edx + esi + 0x2d98]
    // add eax, 0x80000400
    // mov dword ptr [ecx + 0x18c], eax
    // mov eax, dword ptr [esi + 0x2d98]
    // mov ecx, dword ptr [eax + 8]
    // mov eax, dword ptr [esi + 0x22f4]
    // push eax
    // mov eax, dword ptr [esi + 8]
    // mov edx, dword ptr [ecx + esi + 0x2d98]
    // lea ecx, [ecx + esi + 0x2d98]
    // push eax
    // mov eax, dword ptr [esi + 0x3480]
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x3488]
    // pop edi
    // test eax, eax
    // if (...) GOTO(0x493eab)
    // mov ecx, dword ptr [esi + 0x2d98]
    // push 0
    // push 0
    // push eax
    // mov edx, dword ptr [ecx + 8]
    // lea ecx, [edx + esi + 0x2d98]
    // CALL(0x489ab0)
    // mov ecx, ebx
    // CALL(0x48c6e0)
    // mov ecx, esi
    // CALL(0x493a60)
    // pop esi
    // xor eax, eax
    // pop ebx
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
    // mov ecx, dword ptr [ecx + 0x23b4]
    // test ecx, ecx
    // if (...) GOTO(0x493ee2)
    // mov eax, dword ptr [ecx]
    // if (...) GOTO(dword)
    // xor eax, eax
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push ebx
    // push esi
    // mov esi, ecx
    // push edi
    // mov edx, 3
    // lea edi, [esi + 0x3468]
    // mov ecx, edi
    // mov ebx, dword ptr [eax]
    // add eax, 4
    // mov dword ptr [ecx], ebx
    // add ecx, 4
    // dec edx
    // if (...) GOTO(0x493f06)
    // mov eax, dword ptr [edi]
    // mov ecx, dword ptr [esi + 0x23b4]
    // test ecx, ecx
    // mov edi, dword ptr [eax + 0x1c]
    // if (...) GOTO(0x493f2c)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x493f2e)
    // xor eax, eax
    // mov edx, dword ptr [esi + 0x213c]
    // lea ecx, [esi + 0x213c]
    // push 0
    // push 0
    // push edi
    // push eax
    // CALL(dword)
    // mov ecx, esi
    // CALL(0x493f50)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebx
    // push esi
    // mov esi, ecx
    // lea ebx, [esi + 0x213c]
    // test ebx, ebx
    // if (...) GOTO(0x493f66)
    // lea eax, [esi + 0x23b0]
    // if (...) GOTO(0x493f68)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x3468]
    // push ebp
    // push edi
    // push 0
    // push 0
    // push 0
    // push eax
    // CALL(0x473e60)
    // mov ecx, dword ptr [esi + 0x23b4]
    // lea edi, [esi + 0x23b0]
    // test ecx, ecx
    // if (...) GOTO(0x493f96)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x493f98)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x3468]
    // mov edx, dword ptr [esi + 0x3470]
    // mov ecx, dword ptr [ecx + 0x18]
    // mov ebp, dword ptr [edx + 0x18]
    // add ecx, ebp
    // cmp eax, ecx
    // if (...) GOTO(0x493fe7)
    // mov edx, dword ptr [esi + 0x346c]
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // mov ebp, dword ptr [edx + 0x1c]
    // if (...) GOTO(0x493fca)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x493fcc)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x346c]
    // add eax, -4
    // push ebp
    // push eax
    // push 0
    // push 2
    // push 0
    // push 0
    // push ecx
    // mov ecx, edi
    // CALL(0x476140)
    // mov ecx, dword ptr [edi + 4]
    // neg ebx
    // sbb ebx, ebx
    // and ebx, edi
    // pop edi
    // test ecx, ecx
    // pop ebp
    // if (...) GOTO(0x494000)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494002)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x3470]
    // push 0
    // push 0
    // sub eax, dword ptr [ecx + 0x18]
    // push eax
    // push ebx
    // CALL(0x473e60)
    // pop esi
    // pop ebx
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push ebx
    // push ebp
    // mov eax, dword ptr [esp + 0xc]
    // push esi
    // push edi
    // mov edi, ecx
    // mov edx, 3
    // lea ebx, [edi + 0x3474]
    // mov ecx, ebx
    // mov esi, dword ptr [eax]
    // add eax, 4
    // mov dword ptr [ecx], esi
    // add ecx, 4
    // dec edx
    // if (...) GOTO(0x494037)
    // mov eax, dword ptr [edi + 0x347c]
    // mov ecx, dword ptr [edi + 0x3478]
    // mov edx, dword ptr [ebx]
    // lea esi, [edi + 0x26c4]
    // mov dword ptr [esi + 0x650], edx
    // mov dword ptr [esi + 0x654], ecx
    // mov dword ptr [esi + 0x658], eax
    // mov ecx, dword ptr [edi + 0x23b4]
    // test ecx, ecx
    // if (...) GOTO(0x494082)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x49408a)
    // mov dword ptr [esp + 0x14], 0
    // mov ecx, dword ptr [ebx]
    // mov ebp, dword ptr [ecx + 0x1c]
    // mov ecx, dword ptr [edi + 0x23b4]
    // test ecx, ecx
    // if (...) GOTO(0x4940a5)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, eax
    // if (...) GOTO(0x4940a7)
    // xor ecx, ecx
    // mov eax, dword ptr [esp + 0x14]
    // sub eax, ebp
    // cdq 
    // sub eax, edx
    // sar eax, 1
    // push eax
    // mov eax, dword ptr [ebx]
    // sub ecx, dword ptr [eax + 0x18]
    // sub ecx, 4
    // push ecx
    // mov ecx, esi
    // CALL(0x47b420)
    // mov edx, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
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
    // // nop
    // // nop
    // mov al, byte ptr [ecx + 4]
    // push ebx
    // push ebp
    // push esi
    // test al, 4
    // push edi
    // if (...) GOTO(0x494152)
    // mov eax, dword ptr [ecx + 0x1488]
    // mov edx, dword ptr [eax + 8]
    // lea eax, [edx + ecx + 0x1548]
    // mov edx, dword ptr [edx + ecx + 0x1550]
    // test edx, edx
    // if (...) GOTO(0x494137)
    // mov edi, dword ptr [eax + 0x10]
    // xor esi, esi
    // test edi, edi
    // mov dword ptr [eax + 0x14], 0
    // mov dword ptr [eax + 0xc], edx
    // if (...) GOTO(0x494137)
    // mov ebx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [eax + 0xc]
    // cmp dword ptr [edx + 4], ebx
    // if (...) GOTO(0x494140)
    // mov ebp, dword ptr [eax + 0x14]
    // inc ebp
    // inc esi
    // mov dword ptr [eax + 0x14], ebp
    // mov edx, dword ptr [edx + 0xc]
    // cmp esi, edi
    // mov dword ptr [eax + 0xc], edx
    // if (...) GOTO(0x49411d)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // mov eax, dword ptr [ecx + 0x1488]
    // mov edx, dword ptr [eax + 8]
    // lea eax, [edx + ecx + 0x1548]
    // if (...) GOTO(0x4941b7)
    // mov edx, dword ptr [ecx + 0x2d98]
    // mov eax, dword ptr [edx + 8]
    // mov edx, dword ptr [eax + ecx + 0x2e60]
    // test edx, edx
    // lea eax, [eax + ecx + 0x2e58]
    // if (...) GOTO(0x49419e)
    // mov edi, dword ptr [eax + 0x10]
    // xor esi, esi
    // test edi, edi
    // mov dword ptr [eax + 0x14], 0
    // mov dword ptr [eax + 0xc], edx
    // if (...) GOTO(0x49419e)
    // mov ebx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [eax + 0xc]
    // cmp dword ptr [edx + 4], ebx
    // if (...) GOTO(0x4941a7)
    // mov ebp, dword ptr [eax + 0x14]
    // inc ebp
    // inc esi
    // mov dword ptr [eax + 0x14], ebp
    // mov edx, dword ptr [edx + 0xc]
    // cmp esi, edi
    // mov dword ptr [eax + 0xc], edx
    // if (...) GOTO(0x494184)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // mov eax, dword ptr [ecx + 0x2d98]
    // mov edx, dword ptr [eax + 8]
    // lea eax, [edx + ecx + 0x2e58]
    // mov ecx, dword ptr [eax + 8]
    // test ecx, ecx
    // if (...) GOTO(0x4941ce)
    // mov eax, dword ptr [eax + 0xc]
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, dword ptr [eax + 8]
    // pop ebx
    // mov eax, dword ptr [eax + 4]
    // return;
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, dword ptr [eax + 4]
    // pop ebx
    // return;
    // CALL(0x405098)
    // // nop
    // test byte ptr [ecx + 4], 4
    // if (...) GOTO(0x494270)
    // mov eax, dword ptr [ecx + 0x1488]
    // push ebx
    // push ebp
    // push esi
    // mov edx, dword ptr [eax + 8]
    // push edi
    // lea eax, [edx + ecx + 0x1548]
    // mov edx, dword ptr [edx + ecx + 0x1550]
    // test edx, edx
    // if (...) GOTO(0x494211)
    // mov edx, dword ptr [eax + 0xc]
    // mov ebx, dword ptr [edx + 4]
    // if (...) GOTO(0x494213)
    // xor ebx, ebx
    // mov edx, dword ptr [eax + 8]
    // test edx, edx
    // if (...) GOTO(0x494247)
    // mov edi, dword ptr [eax + 0x10]
    // xor esi, esi
    // test edi, edi
    // mov dword ptr [eax + 0x14], 0
    // mov dword ptr [eax + 0xc], edx
    // if (...) GOTO(0x494247)
    // mov edx, dword ptr [eax + 0xc]
    // cmp dword ptr [edx + 4], ebx
    // if (...) GOTO(0x494247)
    // mov ebp, dword ptr [eax + 0x14]
    // inc ebp
    // inc esi
    // mov dword ptr [eax + 0x14], ebp
    // mov edx, dword ptr [edx + 0xc]
    // cmp esi, edi
    // mov dword ptr [eax + 0xc], edx
    // if (...) GOTO(0x49422d)
    // mov eax, dword ptr [ecx + 0x1488]
    // pop edi
    // pop esi
    // pop ebp
    // mov edx, dword ptr [eax + 8]
    // pop ebx
    // lea eax, [edx + ecx + 0x1548]
    // mov ecx, dword ptr [edx + ecx + 0x1550]
    // test ecx, ecx
    // if (...) GOTO(0x494291)
    // mov eax, dword ptr [eax + 0xc]
    // mov eax, dword ptr [eax + 8]
    // mov eax, dword ptr [eax + 4]
    // return;
    // mov edx, dword ptr [ecx + 0x2d98]
    // mov eax, dword ptr [edx + 8]
    // lea eax, [eax + ecx + 0x2e58]
    // mov ecx, dword ptr [eax + 8]
    // test ecx, ecx
    // if (...) GOTO(0x494291)
    // mov ecx, dword ptr [eax + 0xc]
    // mov eax, dword ptr [ecx + 8]
    // mov eax, dword ptr [eax + 4]
    // return;
    // xor eax, eax
    // mov eax, dword ptr [eax + 4]
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // test byte ptr [ecx + 4], 4
    // if (...) GOTO(0x4942c8)
    // mov eax, dword ptr [ecx + 0x1488]
    // mov edx, dword ptr [eax + 8]
    // lea eax, [edx + ecx + 0x1548]
    // mov ecx, dword ptr [edx + ecx + 0x1550]
    // test ecx, ecx
    // if (...) GOTO(0x4942e6)
    // mov eax, dword ptr [eax + 0xc]
    // mov eax, dword ptr [eax + 4]
    // return;
    // mov edx, dword ptr [ecx + 0x2d98]
    // mov eax, dword ptr [edx + 8]
    // lea eax, [eax + ecx + 0x2e58]
    // mov ecx, dword ptr [eax + 8]
    // test ecx, ecx
    // if (...) GOTO(0x4942e6)
    // mov ecx, dword ptr [eax + 0xc]
    // mov eax, dword ptr [ecx + 4]
    // return;
    // xor eax, eax
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // sub esp, 0x150
    // mov eax, dword ptr [esp + 0x154]
    // push ebx
    // push ebp
    // push esi
    // test eax, eax
    // push edi
    // mov byte ptr [esp + 0x12], 0
    // mov byte ptr [esp + 0x13], 0
    // if (...) GOTO(0x494c52)
    // mov ebp, dword ptr [esp + 0x168]
    // test ebp, ebp
    // if (...) GOTO(0x494c52)
    // mov dword ptr [esp + 0x1c], ebp
    // mov eax, dword ptr [esp + 0x164]
    // push(0x4c6158)  // ptr?
    // push eax
    // CALL(0x4a64f0)
    // mov ebx, eax
    // add esp, 8
    // test ebx, ebx
    // if (...) GOTO(0x494b71)
    // lea eax, [ebx + 1]
    // mov dword ptr [esp + 0x14], eax
    // movsx eax, byte ptr [eax]
    // add eax, -0x24
    // cmp eax, 0x2a
    // if (...) GOTO(0x494ad7)
    // xor ecx, ecx
    // mov cl, byte ptr [eax + 0x494c80]
    // if (...) GOTO(dword)
    // push 7
    // push(0x4e4724)  // ptr?
    // push ebx
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x49441e)
    // movsx eax, byte ptr [ebx + 7]
    // sub eax, 0x30
    // cmp eax, 9
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x494b61)
    // mov esi, dword ptr [esp + 0x164]
    // mov eax, ebx
    // sub eax, esi
    // mov edi, ebp
    // mov ecx, eax
    // add ebp, eax
    // mov edx, ecx
    // lea eax, [esp + 0xc0]
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // push(0xa)
    // and ecx, 3
    // add ebx, 8
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [esp + 0x18]
    // mov byte ptr [ebp], 0
    // push eax
    // mov dword ptr [esp + 0x16c], ebx
    // mov edx, dword ptr [ecx*4 + 0x83de68]
    // push edx
    // CALL(0x4ad425)
    // lea edi, [esp + 0xcc]
    // or ecx, 0xffffffff
    // xor eax, eax
    // add esp, 0xc
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // add ebp, ecx
    // if (...) GOTO(0x494326)
    // push 4
    // push(0x4e471c)  // ptr?
    // push ebx
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x494ad7)
    // movsx eax, byte ptr [ebx + 4]
    // sub eax, 0x30
    // cmp eax, 9
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x494b61)
    // mov esi, dword ptr [esp + 0x164]
    // mov eax, ebx
    // sub eax, esi
    // mov edi, ebp
    // mov ecx, eax
    // add ebp, eax
    // mov edx, ecx
    // lea eax, [esp + 0x20]
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // push(0xa)
    // and ecx, 3
    // add ebx, 5
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [esp + 0x18]
    // mov byte ptr [ebp], 0
    // push eax
    // mov dword ptr [esp + 0x16c], ebx
    // mov edx, dword ptr [ecx*4 + 0x83de68]
    // push edx
    // CALL(0x4ad425)
    // lea edi, [esp + 0x2c]
    // or ecx, 0xffffffff
    // xor eax, eax
    // add esp, 0xc
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // add ebp, ecx
    // if (...) GOTO(0x494326)
    // push 4
    // push(0x4e4714)  // ptr?
    // push ebx
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x494ad7)
    // movsx eax, byte ptr [ebx + 4]
    // sub eax, 0x30
    // cmp eax, 9
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x494b61)
    // mov esi, dword ptr [esp + 0x164]
    // mov eax, ebx
    // sub eax, esi
    // mov edi, ebp
    // mov ecx, eax
    // add ebp, eax
    // mov edx, ecx
    // lea eax, [esp + 0x70]
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // push(0xa)
    // and ecx, 3
    // add ebx, 5
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [esp + 0x18]
    // mov byte ptr [ebp], 0
    // push eax
    // mov dword ptr [esp + 0x16c], ebx
    // mov edx, dword ptr [ecx*4 + 0x83de68]
    // push edx
    // CALL(0x4ad425)
    // lea edi, [esp + 0x7c]
    // or ecx, 0xffffffff
    // xor eax, eax
    // add esp, 0xc
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // add ebp, ecx
    // if (...) GOTO(0x494326)
    // mov esi, dword ptr [esp + 0x164]
    // mov eax, ebx
    // sub eax, esi
    // mov edi, ebp
    // lea ecx, [eax + 1]
    // lea ebp, [eax + ebp + 1]
    // mov edx, ecx
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // add ebx, 2
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov byte ptr [ebp], 0
    // mov dword ptr [esp + 0x164], ebx
    // if (...) GOTO(0x494326)
    // mov esi, dword ptr [esp + 0x164]
    // mov eax, ebx
    // sub eax, esi
    // mov edi, ebp
    // mov ecx, eax
    // add ebp, eax
    // mov edx, ecx
    // push(0x4e4710)  // ptr?
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // push ebx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov byte ptr [ebp], 0
    // CALL(0x4a64f0)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x4945f4)
    // mov eax, dword ptr [esp + 0x14]
    // mov dword ptr [esp + 0x164], eax
    // if (...) GOTO(0x494326)
    // add ebx, 2
    // lea edx, [eax + 1]
    // mov dword ptr [esp + 0x164], edx
    // cmp byte ptr [ebx], 0x20
    // if (...) GOTO(0x49460e)
    // mov al, byte ptr [ebx + 1]
    // inc ebx
    // cmp al, 0x20
    // if (...) GOTO(0x494606)
    // mov cl, byte ptr [ebx]
    // or eax, 0xffffffff
    // xor esi, esi
    // cmp cl, 0x4d
    // if (...) GOTO(0x49468f)
    // cmp cl, 0x6d
    // if (...) GOTO(0x49468f)
    // cmp cl, 0x46
    // if (...) GOTO(0x494688)
    // cmp cl, 0x66
    // if (...) GOTO(0x494688)
    // cmp cl, 0x4e
    // if (...) GOTO(0x494681)
    // cmp cl, 0x6e
    // if (...) GOTO(0x494681)
    // cmp cl, 0x23
    // if (...) GOTO(0x494657)
    // movsx eax, byte ptr [ebx + 1]
    // inc ebx
    // mov esi, dword ptr [eax*4 + 0x83dda8]
    // sub eax, 0x30
    // xor ecx, ecx
    // cmp esi, 1
    // setne cl
    // mov esi, ecx
    // mov ecx, dword ptr [esp + 0x18]
    // if (...) GOTO(0x494695)
    // movsx eax, cl
    // sub eax, 0x30
    // cmp eax, 0xa
    // if (...) GOTO(0x494326)
    // mov ecx, dword ptr [eax*4 + 0x83e8b8]
    // mov esi, dword ptr [eax*4 + 0x83d3c8]
    // mov edx, dword ptr [esp + 0x164]
    // mov dword ptr [esp + 0x18], ecx
    // if (...) GOTO(0x494695)
    // mov ecx, 2
    // if (...) GOTO(0x494691)
    // mov ecx, 1
    // if (...) GOTO(0x494691)
    // xor ecx, ecx
    // mov dword ptr [esp + 0x18], ecx
    // inc ebx
    // test eax, eax
    // if (...) GOTO(0x4946ab)
    // mov al, byte ptr [ebx]
    // cmp al, 0x30
    // if (...) GOTO(0x4946ab)
    // cmp al, 0x39
    // if (...) GOTO(0x4946ab)
    // movsx esi, al
    // sub esi, 0x31
    // inc ebx
    // cmp byte ptr [ebx], 0x20
    // if (...) GOTO(0x4946b8)
    // mov al, byte ptr [ebx + 1]
    // inc ebx
    // cmp al, 0x20
    // if (...) GOTO(0x4946b0)
    // cmp byte ptr [ebx], 0x3a
    // if (...) GOTO(0x4946be)
    // inc ebx
    // xor edi, edi
    // cmp ebx, edx
    // mov eax, ebx
    // jae 0x4946d5
    // cmp byte ptr [eax], 0x3a
    // if (...) GOTO(0x4946cc)
    // inc edi
    // inc eax
    // cmp eax, edx
    // if (...) GOTO(0x4946c6)
    // test edi, edi
    // if (...) GOTO(0x494720)
    // push ebx
    // CALL(0x4935f0)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x494773)
    // push ebx
    // CALL(0x4935f0)
    // movsx ebx, byte ptr [eax]
    // sub ebx, 0x30
    // add esp, 4
    // cmp ebx, 0xa
    // if (...) GOTO(0x494326)
    // shl ebx, 8
    // add ebx, 0x83e8e0
    // mov ecx, ebx
    // mov al, byte ptr [ebx]
    // test al, al
    // if (...) GOTO(0x494773)
    // cmp al, 0x3a
    // if (...) GOTO(0x494714)
    // inc edi
    // mov al, byte ptr [ecx + 1]
    // inc ecx
    // test al, al
    // if (...) GOTO(0x49470f)
    // mov ecx, dword ptr [esp + 0x18]
    // cmp edi, 1
    // if (...) GOTO(0x494730)
    // xor edx, edx
    // test esi, esi
    // setne dl
    // mov edi, edx
    // if (...) GOTO(0x494762)
    // cmp edi, 2
    // if (...) GOTO(0x494739)
    // mov edi, ecx
    // if (...) GOTO(0x494762)
    // cmp edi, 3
    // if (...) GOTO(0x494752)
    // xor eax, eax
    // test ecx, ecx
    // setne al
    // neg esi
    // sbb esi, esi
    // and esi, 2
    // add eax, esi
    // mov edi, eax
    // if (...) GOTO(0x494762)
    // cmp edi, 5
    // if (...) GOTO(0x494762)
    // neg esi
    // sbb esi, esi
    // and esi, 3
    // add esi, ecx
    // mov edi, esi
    // test edi, edi
    // if (...) GOTO(0x494773)
    // mov cl, byte ptr [ebx]
    // inc ebx
    // cmp cl, 0x3a
    // if (...) GOTO(0x49476f)
    // dec edi
    // test edi, edi
    // if (...) GOTO(0x494766)
    // mov al, byte ptr [ebx]
    // test al, al
    // if (...) GOTO(0x49478d)
    // cmp al, 0x3a
    // if (...) GOTO(0x49478d)
    // cmp al, 0x3e
    // if (...) GOTO(0x49478d)
    // mov byte ptr [ebp], al
    // mov al, byte ptr [ebx + 1]
    // inc ebp
    // inc ebx
    // test al, al
    // if (...) GOTO(0x494779)
    // mov byte ptr [ebp], 0
    // if (...) GOTO(0x494326)
    // push 6
    // push(0x4e4254)  // ptr?
    // push ebx
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4947dd)
    // mov esi, dword ptr [esp + 0x164]
    // mov edi, ebp
    // sub ebx, esi
    // lea ecx, [ebx + 1]
    // lea ebp, [ebx + ebp + 1]
    // mov edx, ecx
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov byte ptr [ebp], al
    // mov eax, dword ptr [esp + 0x14]
    // mov dword ptr [esp + 0x164], eax
    // if (...) GOTO(0x494326)
    // push 5
    // push(0x4e4708)  // ptr?
    // push ebx
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x494ad7)
    // movsx eax, byte ptr [ebx + 5]
    // sub eax, 0x30
    // cmp eax, 0xa
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x494b61)
    // mov esi, dword ptr [esp + 0x164]
    // mov eax, ebx
    // sub eax, esi
    // mov edi, ebp
    // add ebx, 6
    // push(0xa)
    // lea ecx, [eax + 5]
    // lea ebp, [eax + ebp + 5]
    // mov edx, ecx
    // xor eax, eax
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // mov dword ptr [esp + 0x168], ebx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // or ecx, 0xffffffff
    // mov edi, 0x4e4704
    // mov byte ptr [ebp], 0
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov edx, ecx
    // mov esi, edi
    // or ecx, 0xffffffff
    // mov edi, ebp
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, edx
    // and ecx, 3
    // mov ebx, eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // shl ebx, 5
    // add ebx, eax
    // or ecx, 0xffffffff
    // shl ebx, 3
    // xor eax, eax
    // lea edi, [ebx + 0x83f368]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, 0x4e4700
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x114]
    // and ecx, 3
    // push eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [ebx + 0x83f46c]
    // push ecx
    // CALL(0x4ad425)
    // add esp, 0xc
    // lea edi, [esp + 0x110]
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, 0x4e4710
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // add ebp, ecx
    // if (...) GOTO(0x494326)
    // push 9
    // push(0x4e4248)  // ptr?
    // push ebx
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x49496e)
    // push 9
    // push(0x4e423c)  // ptr?
    // push ebx
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x494ad7)
    // movsx eax, byte ptr [ebx + 9]
    // sub eax, 0x30
    // cmp eax, 0xa
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x494b61)
    // mov esi, dword ptr [esp + 0x164]
    // mov eax, ebx
    // sub eax, esi
    // mov edi, ebp
    // mov ecx, eax
    // add ebp, eax
    // mov edx, ecx
    // xor eax, eax
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // mov byte ptr [esp + 0x12], 0x5b
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // lea edi, [esp + 0x12]
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov byte ptr [ebp], 0
    // mov esi, edi
    // mov edx, ecx
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // mov eax, ebx
    // and ecx, 3
    // inc ebp
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edx, dword ptr [eax]
    // mov ecx, ebp
    // add ebp, 0xa
    // add ebx, 0xa
    // mov dword ptr [ecx], edx
    // mov edx, dword ptr [eax + 4]
    // mov dword ptr [esp + 0x164], ebx
    // mov dword ptr [ecx + 4], edx
    // mov ax, word ptr [eax + 8]
    // mov word ptr [ecx + 8], ax
    // mov eax, dword ptr [esp + 0x14]
    // mov byte ptr [ebp], 0
    // mov ecx, dword ptr [eax*8 + 0x83fe08]
    // test ecx, ecx
    // if (...) GOTO(0x494a17)
    // mov eax, dword ptr [ecx + 0x1c]
    // push eax
    // CALL(0x4940e0)
    // mov edi, eax
    // if (...) GOTO(0x494a49)
    // mov edx, dword ptr [eax*8 + 0x83fdbc]
    // mov ecx, dword ptr [eax*8 + 0x83fdb8]
    // lea esi, [eax*8 + 0x83fdb8]
    // push edx
    // CALL(0x4a4ad0)
    // cmp eax, 0x100
    // if (...) GOTO(0x494a47)
    // mov ecx, dword ptr [esi]
    // lea eax, [eax + eax*2]
    // mov edi, dword ptr [ecx + eax*8 + 0x578]
    // if (...) GOTO(0x494a49)
    // xor edi, edi
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov byte ptr [esp + 0x12], 0x5e
    // mov edx, ecx
    // mov esi, edi
    // or ecx, 0xffffffff
    // mov edi, ebp
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // lea edi, [esp + 0x12]
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // lea edi, [esp + 0x12]
    // or ecx, 0xffffffff
    // mov byte ptr [esp + 0x12], 0x5d
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // add ebp, ecx
    // if (...) GOTO(0x494326)
    // push ebx
    // CALL(0x4935f0)
    // add esp, 4
    // mov dword ptr [esp + 0x14], eax
    // test eax, eax
    // if (...) GOTO(0x494b61)
    // movsx edx, byte ptr [eax]
    // sub edx, 0x30
    // cmp edx, 9
    // if (...) GOTO(0x494b61)
    // mov esi, dword ptr [esp + 0x164]
    // mov edi, ebp
    // sub ebx, esi
    // mov ecx, ebx
    // add ebp, ebx
    // mov eax, ecx
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, eax
    // xor eax, eax
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [esp + 0x14]
    // mov edi, edx
    // inc ecx
    // mov byte ptr [ebp], 0
    // shl edi, 8
    // mov dword ptr [esp + 0x164], ecx
    // add edi, 0x83e8e0
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // add ebp, ecx
    // if (...) GOTO(0x494326)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 0xe
    // pop ebx
    // add esp, 0x150
    // return;
    // mov edi, dword ptr [esp + 0x164]
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // cmp dword ptr [0x83fe5c], 1
    // if (...) GOTO(0x494c45)
    // mov ebx, dword ptr [esp + 0x1c]
    // mov ebp, ebx
    // xor ebx, ebx
    // xor edi, edi
    // mov esi, 0x4e4688
    // push esi
    // push ebp
    // CALL(0x4a64f0)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x494bde)
    // test ebx, ebx
    // if (...) GOTO(0x494bcf)
    // cmp eax, ebx
    // jae 0x494bde
    // mov ebx, eax
    // xor eax, eax
    // cmp edi, 3
    // setl al
    // inc eax
    // mov dword ptr [esp + 0x1c], eax
    // add esi, 0x14
    // inc edi
    // cmp esi, 0x4e4700
    // if (...) GOTO(0x494bb9)
    // test ebx, ebx
    // if (...) GOTO(0x494c45)
    // mov ecx, dword ptr [esp + 0x1c]
    // add ecx, ebx
    // mov al, byte ptr [ecx + 2]
    // cmp al, 0x61
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x65
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x69
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x6f
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x75
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x79
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x68
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x48
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x41
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x45
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x49
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x4f
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x55
    // if (...) GOTO(0x494c2f)
    // cmp al, 0x59
    // if (...) GOTO(0x494c3e)
    // mov eax, ecx
    // mov byte ptr [eax], 0x27
    // mov cl, byte ptr [eax + 2]
    // inc eax
    // test cl, cl
    // mov byte ptr [eax], cl
    // if (...) GOTO(0x494c34)
    // inc ebx
    // if (...) GOTO(0x494bae)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // add esp, 0x150
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 3
    // pop ebx
    // add esp, 0x150
    // return;
    // mov edi, edi
    // jp 0x494cab
    // dec ecx
    // add byte ptr [edi + 0x42004945], ch
    // dec ecx
    // dec ecx
    // add ah, cl
    // inc esp
    // dec ecx
    // add byte ptr [esi + 0x6a004947], dl
    // inc ebx
    // dec ecx
    // add bh, dl
    // dec edx
    // dec ecx
    // add byte ptr [eax], al
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // add dword ptr [esi], eax
    // push es
    // push es
    // push es
    // push es
    // push es
    // push es
    // add al, byte ptr [esi]
    // push es
    // push es
    // add eax, dword ptr [esi]
    // push es
    // push es
    // add al, 6
    // add eax, 0x90909090
    // // nop
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // test edi, edi
    // if (...) GOTO(0x494d23)
    // mov eax, dword ptr [esp + 8]
    // cmp eax, 9
    // if (...) GOTO(0x494d23)
    // mov ecx, dword ptr [esp + 0x10]
    // test ecx, ecx
    // if (...) GOTO(0x494cd0)
    // mov ecx, dword ptr [0x83f35c]
    // mov dword ptr [eax*4 + 0x83e8b8], ecx
    // mov ecx, dword ptr [esp + 0x14]
    // test ecx, ecx
    // if (...) GOTO(0x494ce5)
    // mov ecx, dword ptr [0x83f360]
    // mov dword ptr [eax*4 + 0x83d3c8], ecx
    // or ecx, 0xffffffff
    // shl eax, 8
    // push ebx
    // push esi
    // lea edx, [eax + 0x83e8e0]
    // xor eax, eax
    // mov byte ptr [edx], 0
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov ebx, ecx
    // mov edi, edx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, ebx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, ebx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // pop esi
    // pop ebx
    // pop edi
    // return;
    // mov eax, 3
    // pop edi
    // return;
    // CALL(0x405098)
    // // nop
    // push ebp
    // mov ebp, esp
    // push ebx
    // mov ebx, ecx
    // push esi
    // push edi
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494ef5)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov esi, dword ptr [ebp + 0x10]
    // mov ecx, dword ptr [eax + 4]
    // cmp esi, ecx
    // if (...) GOTO(0x494ef5)
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494d6a)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494d6c)
    // xor eax, eax
    // cmp esi, dword ptr [eax + 0xc]
    // if (...) GOTO(0x494ef5)
    // mov eax, dword ptr [ebp + 8]
    // mov ecx, dword ptr [ebp + 0xc]
    // cmp eax, ecx
    // if (...) GOTO(0x494ef5)
    // mov esi, dword ptr [ebp + 0x14]
    // test esi, 0x80000000
    // if (...) GOTO(0x494dec)
    // mov edi, dword ptr [0x83ad0c]
    // test edi, edi
    // if (...) GOTO(0x494dec)
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494da9)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494dab)
    // xor eax, eax
    // mov eax, dword ptr [eax + 4]
    // sub eax, 0
    // if (...) GOTO(0x494dc8)
    // dec eax
    // if (...) GOTO(0x494ef5)
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494dd6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494dd8)
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494dd6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494dd8)
    // xor eax, eax
    // and esi, 0xff
    // xor ecx, ecx
    // mov cx, word ptr [eax + esi*2]
    // mov eax, dword ptr [ebp + 8]
    // mov esi, ecx
    // mov ecx, dword ptr [ebp + 0xc]
    // and esi, 0xffff
    // cmp eax, ecx
    // mov dword ptr [ebp + 0x14], esi
    // if (...) GOTO(0x494e05)
    // xor eax, ecx
    // xor ecx, eax
    // xor eax, ecx
    // mov dword ptr [ebp + 0xc], ecx
    // mov dword ptr [ebp + 8], eax
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494e16)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494e18)
    // xor eax, eax
    // mov ecx, dword ptr [ebp + 8]
    // mov edx, dword ptr [eax + 8]
    // cmp ecx, edx
    // if (...) GOTO(0x494ef5)
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494e37)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494e39)
    // xor eax, eax
    // mov ecx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [eax]
    // cmp ecx, edx
    // if (...) GOTO(0x494ef5)
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494e57)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494e59)
    // xor eax, eax
    // mov ecx, dword ptr [ebp + 8]
    // mov edx, dword ptr [eax]
    // cmp ecx, edx
    // if (...) GOTO(0x494e7a)
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494e73)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494e75)
    // xor eax, eax
    // mov eax, dword ptr [eax]
    // mov dword ptr [ebp + 8], eax
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494e8b)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494e8d)
    // xor eax, eax
    // mov ecx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [eax + 8]
    // cmp ecx, edx
    // if (...) GOTO(0x494eb1)
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494ea8)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494eaa)
    // xor eax, eax
    // mov eax, dword ptr [eax + 8]
    // dec eax
    // mov dword ptr [ebp + 0xc], eax
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494ef5)
    // mov eax, dword ptr [ebp + 0x10]
    // mov edx, dword ptr [ecx]
    // push eax
    // mov eax, dword ptr [ebp + 8]
    // push eax
    // CALL(dword)
    // test eax, eax
    // mov dword ptr [ebp + 0x10], eax
    // if (...) GOTO(0x494ef5)
    // push edi
    // mov ecx, dword ptr [ebp + 0xc]
    // sub ecx, dword ptr [ebp + 8]
    // inc ecx
    // mov ax, word ptr [ebp + 0x14]
    // mov edi, dword ptr [ebp + 0x10]
    // shr ecx, 1
    // mov word ptr [edi], ax
    // add edi, 4
    // dec ecx
    // if (...) GOTO(0x494edd)
    // pop edi
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494ef5)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ebx
    // push esi
    // mov esi, ecx
    // push edi
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4950e8)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov edi, dword ptr [ebp + 8]
    // mov ecx, dword ptr [eax]
    // cmp edi, ecx
    // if (...) GOTO(0x4950e8)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494f3a)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494f3c)
    // xor eax, eax
    // cmp edi, dword ptr [eax + 8]
    // if (...) GOTO(0x4950e8)
    // mov eax, dword ptr [ebp + 0xc]
    // mov ecx, dword ptr [ebp + 0x10]
    // cmp eax, ecx
    // if (...) GOTO(0x4950e8)
    // mov edi, dword ptr [ebp + 0x14]
    // test edi, 0x80000000
    // if (...) GOTO(0x494fbc)
    // mov ebx, dword ptr [0x83ad0c]
    // test ebx, ebx
    // if (...) GOTO(0x494fbc)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494f79)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494f7b)
    // xor eax, eax
    // mov eax, dword ptr [eax + 4]
    // sub eax, 0
    // if (...) GOTO(0x494f98)
    // dec eax
    // if (...) GOTO(0x4950e8)
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494fa6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494fa8)
    // mov ecx, dword ptr [ebx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494fa6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494fa8)
    // xor eax, eax
    // and edi, 0xff
    // xor ecx, ecx
    // mov cx, word ptr [eax + edi*2]
    // mov eax, dword ptr [ebp + 0xc]
    // mov edi, ecx
    // mov ecx, dword ptr [ebp + 0x10]
    // and edi, 0xffff
    // cmp eax, ecx
    // mov dword ptr [ebp + 0x14], edi
    // if (...) GOTO(0x494fd5)
    // xor eax, ecx
    // xor ecx, eax
    // xor eax, ecx
    // mov dword ptr [ebp + 0x10], ecx
    // mov dword ptr [ebp + 0xc], eax
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x494fe6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x494fe8)
    // xor eax, eax
    // mov ecx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [eax + 0xc]
    // cmp ecx, edx
    // if (...) GOTO(0x4950e8)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x495007)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x495009)
    // xor eax, eax
    // mov ecx, dword ptr [ebp + 0x10]
    // mov edx, dword ptr [eax + 4]
    // cmp ecx, edx
    // if (...) GOTO(0x4950e8)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x495028)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x49502a)
    // xor eax, eax
    // mov ecx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [eax + 4]
    // cmp ecx, edx
    // if (...) GOTO(0x49504d)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x495045)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x495047)
    // xor eax, eax
    // mov eax, dword ptr [eax + 4]
    // mov dword ptr [ebp + 0xc], eax
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x49505e)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x495060)
    // xor eax, eax
    // mov ecx, dword ptr [ebp + 0x10]
    // mov edx, dword ptr [eax + 0xc]
    // cmp ecx, edx
    // if (...) GOTO(0x495084)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x49507b)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x49507d)
    // xor eax, eax
    // mov eax, dword ptr [eax + 0xc]
    // dec eax
    // mov dword ptr [ebp + 0x10], eax
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4950e8)
    // mov eax, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [ecx]
    // push eax
    // mov eax, dword ptr [ebp + 8]
    // push eax
    // CALL(dword)
    // test eax, eax
    // mov dword ptr [ebp - 4], eax
    // if (...) GOTO(0x4950e8)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4950b3)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov dword ptr [ebp + 8], eax
    // if (...) GOTO(0x4950ba)
    // mov dword ptr [ebp + 8], 0
    // push edi
    // mov ecx, dword ptr [ebp + 0x10]
    // sub ecx, dword ptr [ebp + 0xc]
    // inc ecx
    // mov ax, word ptr [ebp + 0x14]
    // mov ebx, dword ptr [ebp + 8]
    // mov edi, dword ptr [ebp - 4]
    // shr ecx, 1
    // shl ebx, 2
    // mov word ptr [edi], ax
    // add edi, ebx
    // dec ecx
    // if (...) GOTO(0x4950d1)
    // pop edi
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4950e8)
    // mov eax, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebx
    // mov esp, ebp
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
    // // nop
    // // nop
    // sub esp, 0x4c0
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0x4cc]
    // mov ebx, ecx
    // push esi
    // push edi
    // test ebp, ebp
    // mov dword ptr [esp + 0x18], ebx
    // if (...) GOTO(0x495409)
    // mov edi, 0x4e472c
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // push(0x4e472c)  // ptr?
    // push ebp
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x495184)
    // mov edi, 0x4e472c
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // mov edi, 0x4e472c
    // or edx, 0xffffffff
    // lea eax, [ecx + ebp + 1]
    // or ecx, 0xffffffff
    // mov dword ptr [esp + 0x4d4], eax
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // mov eax, dword ptr [esp + 0x4d8]
    // mov ebp, dword ptr [esp + 0x4d4]
    // not ecx
    // dec ecx
    // sub edx, ecx
    // add eax, edx
    // mov dword ptr [esp + 0x4d8], eax
    // mov ecx, 0x20
    // mov esi, ebp
    // lea edi, [esp + 0x28]
    // add ebp, 0x80
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov al, byte ptr [esp + 0x28]
    // mov dword ptr [esp + 0x1c], ebp
    // cmp al, 0xa
    // if (...) GOTO(0x495409)
    // cmp byte ptr [esp + 0x2a], 1
    // if (...) GOTO(0x495409)
    // cmp byte ptr [esp + 0x29], 4
    // jae 0x4951c8
    // mov eax, dword ptr [esp + 0x4dc]
    // test eax, eax
    // if (...) GOTO(0x495409)
    // mov eax, dword ptr [esp + 0x2e]
    // mov esi, dword ptr [esp + 0x32]
    // mov ecx, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [esp + 0x30]
    // and eax, 0xffff
    // and esi, 0xffff
    // and ecx, 0xffff
    // and edx, 0xffff
    // sub esi, eax
    // sub edx, ecx
    // inc esi
    // push 8
    // inc edx
    // push esi
    // push edx
    // mov ecx, ebx
    // CALL(0x474e70)
    // test eax, eax
    // if (...) GOTO(0x49540e)
    // mov ecx, dword ptr [esp + 0x2b]
    // mov edi, dword ptr [esp + 0x69]
    // and ecx, 0xff
    // mov eax, 1
    // shl eax, cl
    // and edi, 0xff
    // imul eax, edi
    // cmp eax, 0x100
    // if (...) GOTO(0x495409)
    // mov eax, 8
    // mov dword ptr [esp + 0x14], 0
    // cdq 
    // idiv ecx
    // mov ecx, dword ptr [esp + 0x6a]
    // and ecx, 0xffff
    // mov ebp, eax
    // imul ebp, ecx
    // imul ebp, edi
    // mov edi, ebp
    // mov ecx, dword ptr [ebx + 4]
    // imul edi, esi
    // test ecx, ecx
    // mov dword ptr [esp + 0x10], edi
    // if (...) GOTO(0x495272)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ebx, eax
    // test ebx, ebx
    // mov dword ptr [esp + 0x20], ebx
    // if (...) GOTO(0x495284)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 7
    // pop ebx
    // add esp, 0x4c0
    // return;
    // test edi, edi
    // if (...) GOTO(0x49534c)
    // mov esi, dword ptr [esp + 0x1c]
    // mov dl, byte ptr [esi]
    // inc esi
    // mov al, dl
    // mov dword ptr [esp + 0x1c], esi
    // and al, 0xc0
    // cmp al, 0xc0
    // if (...) GOTO(0x4952b0)
    // and dl, 0x3f
    // inc esi
    // mov byte ptr [esp + 0x24], dl
    // mov dl, byte ptr [esi - 1]
    // mov dword ptr [esp + 0x1c], esi
    // if (...) GOTO(0x4952b5)
    // mov byte ptr [esp + 0x24], 1
    // mov al, byte ptr [esp + 0x4e0]
    // mov esi, dword ptr [esp + 0x24]
    // add al, dl
    // mov edi, ebx
    // and eax, 0xff
    // and esi, 0xff
    // mov bl, al
    // mov ecx, esi
    // mov bh, bl
    // mov edx, ecx
    // mov eax, ebx
    // shl eax, 0x10
    // mov ax, bx
    // mov ebx, dword ptr [esp + 0x20]
    // shr ecx, 2
    // rep stosd dword ptr es:[edi], eax
    // mov ecx, edx
    // add ebx, esi
    // and ecx, 3
    // mov dword ptr [esp + 0x20], ebx
    // rep stosb byte ptr es:[edi], al
    // mov edi, dword ptr [esp + 0x14]
    // mov ecx, dword ptr [esp + 0x10]
    // add edi, esi
    // sub ecx, esi
    // cmp edi, ebp
    // mov dword ptr [esp + 0x14], edi
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x495340)
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x495322)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x495324)
    // xor eax, eax
    // sub eax, edi
    // sub edi, ebp
    // add ebx, eax
    // mov eax, dword ptr [esp + 0x10]
    // add eax, edi
    // mov dword ptr [esp + 0x20], ebx
    // mov dword ptr [esp + 0x10], eax
    // mov dword ptr [esp + 0x14], 0
    // mov eax, dword ptr [esp + 0x10]
    // test eax, eax
    // if (...) GOTO(0x49528c)
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x49535e)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov ebp, dword ptr [esp + 0x4e0]
    // mov edx, dword ptr [esp + 0x4e4]
    // mov eax, dword ptr [esp + 0x4d4]
    // mov ecx, dword ptr [esp + 0x4d8]
    // lea edi, [edx + ebp]
    // mov esi, ebp
    // cmp ebp, edi
    // lea ecx, [eax + ecx - 0x300]
    // if (...) GOTO(0x4953c5)
    // mov eax, esi
    // and eax, 0x800000ff
    // jns 0x49539a
    // dec eax
    // or eax, 0xffffff00
    // inc eax
    // mov bl, byte ptr [ecx]
    // inc ecx
    // mov byte ptr [esp + eax*4 + 0xd2], bl
    // mov bl, byte ptr [ecx]
    // inc ecx
    // mov byte ptr [esp + eax*4 + 0xd1], bl
    // mov bl, byte ptr [ecx]
    // inc ecx
    // inc esi
    // mov byte ptr [esp + eax*4 + 0xd0], bl
    // cmp esi, edi
    // mov byte ptr [esp + eax*4 + 0xd3], 0
    // if (...) GOTO(0x49538a)
    // mov esi, dword ptr [esp + 0x4dc]
    // test esi, esi
    // if (...) GOTO(0x4953df)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // add esp, 0x4c0
    // return;
    // push edx
    // lea edx, [esp + 0xac]
    // push ebp
    // push edx
    // mov ecx, esi
    // CALL(0x4830e0)
    // mov ecx, dword ptr [esp + 0x18]
    // push esi
    // CALL(0x4789f0)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // add esp, 0x4c0
    // return;
    // mov eax, 3
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x4c0
    // return;
    // CALL(0x405099)
    // push -1
    // push(0x4b82eb)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 0xf0
    // push ebx
    // push ebp
    // mov ebp, ecx
    // push esi
    // push edi
    // lea ecx, [esp + 0x28]
    // mov dword ptr [esp + 0x20], ebp
    // CALL(0x482fd0)
    // mov ebx, dword ptr [esp + 0x110]
    // xor esi, esi
    // cmp ebx, esi
    // mov dword ptr [esp + 0x108], esi
    // if (...) GOTO(0x49571c)
    // mov ecx, dword ptr [ebp + 4]
    // cmp ecx, esi
    // if (...) GOTO(0x495477)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x495479)
    // xor eax, eax
    // mov ecx, dword ptr [eax + 4]
    // cmp ecx, esi
    // mov ecx, dword ptr [esp + 0x2c]
    // if (...) GOTO(0x495493)
    // cmp ecx, esi
    // if (...) GOTO(0x4954a2)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4954a6)
    // cmp ecx, esi
    // if (...) GOTO(0x4954a2)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4954a6)
    // mov dword ptr [esp + 0x14], esi
    // mov edi, 0x4e4748
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // push(0x4e4748)  // ptr?
    // push ebx
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4954d9)
    // mov edi, 0x4e4748
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea ebx, [ebx + ecx + 1]
    // mov ecx, 0x20
    // mov esi, ebx
    // lea edi, [esp + 0x80]
    // add ebx, 0x80
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov al, byte ptr [esp + 0x80]
    // mov dword ptr [esp + 0x18], ebx
    // cmp al, 0xa
    // if (...) GOTO(0x49571c)
    // cmp byte ptr [esp + 0x82], 1
    // if (...) GOTO(0x49571c)
    // cmp byte ptr [esp + 0x81], 4
    // jae 0x495529
    // mov eax, dword ptr [esp + 0x118]
    // test eax, eax
    // if (...) GOTO(0x49571c)
    // mov ecx, dword ptr [esp + 0x84]
    // mov eax, dword ptr [esp + 0x88]
    // mov edx, dword ptr [esp + 0x86]
    // mov ebx, dword ptr [esp + 0x8a]
    // and ecx, 0xffff
    // and eax, 0xffff
    // and edx, 0xffff
    // and ebx, 0xffff
    // sub eax, ecx
    // sub ebx, edx
    // inc eax
    // inc ebx
    // push(0x10)
    // push ebx
    // push eax
    // mov ecx, ebp
    // CALL(0x474e70)
    // mov esi, eax
    // test esi, esi
    // if (...) GOTO(0x49558e)
    // lea ecx, [esp + 0x28]
    // mov dword ptr [esp + 0x108], 0xffffffff
    // CALL(0x483010)
    // mov eax, esi
    // if (...) GOTO(0x495735)
    // mov ecx, dword ptr [esp + 0x83]
    // mov esi, dword ptr [esp + 0xc1]
    // and ecx, 0xff
    // mov eax, 1
    // shl eax, cl
    // and esi, 0xff
    // imul eax, esi
    // cmp eax, 0x100
    // if (...) GOTO(0x49571c)
    // mov eax, 8
    // cdq 
    // idiv ecx
    // mov ecx, dword ptr [ebp + 4]
    // mov edi, eax
    // mov eax, dword ptr [esp + 0xc2]
    // and eax, 0xffff
    // imul edi, eax
    // imul edi, esi
    // mov esi, edi
    // imul esi, ebx
    // xor ebx, ebx
    // mov dword ptr [esp + 0x10], esi
    // test ecx, ecx
    // if (...) GOTO(0x4955f6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ebp, eax
    // test ebp, ebp
    // if (...) GOTO(0x495614)
    // lea ecx, [esp + 0x28]
    // mov dword ptr [esp + 0x108], 0xffffffff
    // CALL(0x483010)
    // mov eax, 7
    // if (...) GOTO(0x495735)
    // test esi, esi
    // if (...) GOTO(0x4956c5)
    // mov esi, dword ptr [esp + 0x18]
    // mov al, byte ptr [esi]
    // inc esi
    // mov cl, al
    // mov dword ptr [esp + 0x18], esi
    // and cl, 0xc0
    // cmp cl, 0xc0
    // if (...) GOTO(0x495641)
    // and al, 0x3f
    // inc esi
    // mov byte ptr [esp + 0x1c], al
    // mov al, byte ptr [esi - 1]
    // mov dword ptr [esp + 0x18], esi
    // if (...) GOTO(0x495646)
    // mov byte ptr [esp + 0x1c], 1
    // mov cl, byte ptr [esp + 0x11c]
    // mov esi, dword ptr [esp + 0x1c]
    // add al, cl
    // and esi, 0xff
    // mov byte ptr [esp + 0x24], al
    // mov eax, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x24]
    // push esi
    // and edx, 0xff
    // mov ax, word ptr [eax + edx*2]
    // push eax
    // push ebp
    // CALL(0x493630)
    // mov ecx, dword ptr [esp + 0x1c]
    // add ebx, esi
    // add esp, 0xc
    // sub ecx, esi
    // cmp ebx, edi
    // lea ebp, [ebp + esi*2]
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x4956b9)
    // mov ecx, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [ecx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4956a3)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4956a5)
    // xor eax, eax
    // sub eax, ebx
    // sub ebx, edi
    // lea ebp, [ebp + eax*2]
    // mov eax, dword ptr [esp + 0x10]
    // add eax, ebx
    // xor ebx, ebx
    // mov dword ptr [esp + 0x10], eax
    // mov eax, dword ptr [esp + 0x10]
    // test eax, eax
    // if (...) GOTO(0x49561c)
    // mov eax, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4956d7)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov ecx, dword ptr [esp + 0x118]
    // test ecx, ecx
    // if (...) GOTO(0x4956fa)
    // lea ecx, [esp + 0x28]
    // mov dword ptr [esp + 0x108], 0xffffffff
    // CALL(0x483010)
    // xor eax, eax
    // if (...) GOTO(0x495735)
    // lea eax, [esp + 0x28]
    // push eax
    // CALL(0x483020)
    // lea ecx, [esp + 0x28]
    // mov dword ptr [esp + 0x108], 0xffffffff
    // CALL(0x483010)
    // xor eax, eax
    // if (...) GOTO(0x495735)
    // lea ecx, [esp + 0x28]
    // mov dword ptr [esp + 0x108], 0xffffffff
    // CALL(0x483010)
    // mov eax, 3
    // mov ecx, dword ptr [esp + 0x100]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // mov dword ptr fs:[0], ecx
    // add esp, 0xfc
    // return;
    // mov ecx, dword ptr [0x83aa9c]
    // test ecx, ecx
    // if (...) GOTO(0x49576d)
    // mov edx, dword ptr [esp + 8]
    // mov eax, dword ptr [ecx]
    // push 0
    // push 0
    // push edx
    // mov edx, dword ptr [esp + 0x10]
    // push edx
    // CALL(dword)
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push 0
    // push esi
    // CALL(0x47f8e0)
    // push esi
    // CALL(0x47cdb0)
    // add esp, 0xc
    // pop esi
    // return;
    // CALL(0x405098)
    // // nop
    // mov eax, dword ptr [0x83aa9c]
    // sub esp, 0x10
    // test eax, eax
    // push ebx
    // push ebp
    // push esi
    // push edi
    // if (...) GOTO(0x4958fb)
    // mov ecx, dword ptr [0x83ab20]
    // test ecx, ecx
    // if (...) GOTO(0x4958fb)
    // test byte ptr [eax + 0xa0], 2
    // if (...) GOTO(0x4958fb)
    // mov ecx, dword ptr [0x83ad50]
    // lea edx, [esp + 0x10]
    // push edx
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov esi, dword ptr [esp + 0x28]
    // mov ebp, dword ptr [esp + 0x14]
    // mov ecx, dword ptr [0x83aa9c]
    // mov edi, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esp + 0x10]
    // sub esi, ebp
    // mov ebp, dword ptr [ecx + 0x184]
    // sub edi, eax
    // mov eax, ebp
    // cdq 
    // sub eax, edx
    // mov edx, dword ptr [ecx + 0x9c]
    // sar eax, 1
    // test dl, 0x10
    // if (...) GOTO(0x495807)
    // mov ebp, dword ptr [ecx + 0x180]
    // test dh, 4
    // if (...) GOTO(0x49581e)
    // xor eax, eax
    // cmp esi, ebp
    // pop edi
    // pop esi
    // setl al
    // pop ebp
    // inc eax
    // pop ebx
    // add esp, 0x10
    // return;
    // cmp edi, eax
    // if (...) GOTO(0x49585e)
    // cmp esi, eax
    // if (...) GOTO(0x495835)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 0xd
    // pop ebx
    // add esp, 0x10
    // return;
    // mov edx, dword ptr [ecx + 0x1c8]
    // mov edi, dword ptr [ecx + 0x1c0]
    // sub edx, edi
    // pop edi
    // sub edx, eax
    // xor eax, eax
    // dec edx
    // cmp esi, edx
    // pop esi
    // setle al
    // dec eax
    // pop ebp
    // and eax, 6
    // pop ebx
    // add eax, 0xa
    // add esp, 0x10
    // return;
    // mov edx, dword ptr [ecx + 0x1c4]
    // mov ebx, dword ptr [ecx + 0x1bc]
    // sub edx, ebx
    // sub edx, eax
    // dec edx
    // cmp edi, edx
    // if (...) GOTO(0x4958af)
    // cmp esi, eax
    // if (...) GOTO(0x495886)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 0xe
    // pop ebx
    // add esp, 0x10
    // return;
    // mov edx, dword ptr [ecx + 0x1c8]
    // mov edi, dword ptr [ecx + 0x1c0]
    // sub edx, edi
    // pop edi
    // sub edx, eax
    // xor eax, eax
    // dec edx
    // cmp esi, edx
    // pop esi
    // setle al
    // dec eax
    // pop ebp
    // and eax, 6
    // pop ebx
    // add eax, 0xb
    // add esp, 0x10
    // return;
    // cmp esi, eax
    // if (...) GOTO(0x4958c2)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 0xc
    // pop ebx
    // add esp, 0x10
    // return;
    // mov edx, dword ptr [ecx + 0x1c8]
    // mov ebx, dword ptr [ecx + 0x1c0]
    // sub edx, ebx
    // sub edx, eax
    // dec edx
    // cmp esi, edx
    // if (...) GOTO(0x4958e6)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 0xf
    // pop ebx
    // add esp, 0x10
    // return;
    // xor eax, eax
    // cmp esi, ebp
    // setge al
    // pop edi
    // dec eax
    // pop esi
    // pop ebp
    // and eax, 2
    // pop ebx
    // add esp, 0x10
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // add esp, 0x10
    // return;
    // CALL(0x405098)
    // // nop
    // push esi
    // mov esi, dword ptr [0x4ba1a8]
    // push edi
    // push(0x10)
    // CALL(esi)
    // mov edi, dword ptr [esp + 0xc]
    // test ah, 0x80
    // if (...) GOTO(0x49592b)
    // or edi, 0x10000
    // push(0x11)
    // CALL(esi)
    // test ah, 0x80
    // if (...) GOTO(0x49593a)
    // or edi, 0x20000
    // push(0x12)
    // CALL(esi)
    // test ah, 0x80
    // if (...) GOTO(0x495949)
    // or edi, 0x40000
    // CALL(0x47f2f0)
    // mov esi, dword ptr [esp + 0x10]
    // test eax, eax
    // if (...) GOTO(0x495962)
    // mov edx, dword ptr [eax]
    // push esi
    // push edi
    // mov ecx, eax
    // CALL(dword)
    // mov eax, dword ptr [0x83ab00]
    // test eax, eax
    // if (...) GOTO(0x495975)
    // test esi, esi
    // if (...) GOTO(0x495975)
    // push edi
    // CALL(eax)
    // add esp, 4
    // mov eax, dword ptr [0x83aafc]
    // pop edi
    // test eax, eax
    // pop esi
    // if (...) GOTO(0x495982)
    // CALL(eax)
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // CALL(0x47f2f0)
    // test eax, eax
    // if (...) GOTO(0x4959a8)
    // mov ecx, dword ptr [esp + 4]
    // mov edx, dword ptr [eax]
    // push ecx
    // mov ecx, eax
    // CALL(dword)
    // return;
    // CALL(0x405099)
    // mov ecx, dword ptr [0x83ab20]
    // push esi
    // test ecx, ecx
    // if (...) GOTO(0x4959ce)
    // mov eax, dword ptr [esp + 0xc]
    // mov edx, dword ptr [esp + 8]
    // push eax
    // push edx
    // CALL(0x47fab0)
    // pop esi
    // return;
    // lea eax, [esp + 0xc]
    // lea ecx, [esp + 8]
    // push eax
    // push ecx
    // CALL(0x47f700)
    // push -1
    // mov esi, eax
    // push -1
    // push 1
    // push esi
    // CALL(0x47d130)
    // add esp, 0x18
    // test esi, esi
    // if (...) GOTO(0x495a4a)
    // mov ecx, dword ptr [0x83aaf0]
    // test ecx, ecx
    // if (...) GOTO(0x495a2d)
    // cmp esi, ecx
    // if (...) GOTO(0x495a2d)
    // mov eax, dword ptr [0x83ab30]
    // test eax, eax
    // if (...) GOTO(0x495a0d)
    // cmp eax, ecx
    // if (...) GOTO(0x495a2d)
    // mov eax, dword ptr [esp + 0xc]
    // mov edx, dword ptr [ecx]
    // push eax
    // mov eax, dword ptr [esp + 0xc]
    // push eax
    // CALL(dword)
    // mov ecx, dword ptr [0x83aaf0]
    // add ecx, 0xbc
    // CALL(0x492d40)
    // mov eax, dword ptr [0x83ab18]
    // mov ecx, dword ptr [esp + 0xc]
    // push eax
    // mov eax, dword ptr [esp + 0xc]
    // mov dword ptr [0x83aaf0], esi
    // mov edx, dword ptr [esi]
    // push ecx
    // push eax
    // mov ecx, esi
    // CALL(dword)
    // pop esi
    // return;
    // // nop
    // // nop
    // lea eax, [esp + 0xc]
    // push esi
    // lea ecx, [esp + 0xc]
    // push eax
    // push ecx
    // CALL(0x47f700)
    // push -1
    // mov esi, eax
    // push -1
    // push 1
    // push esi
    // CALL(0x47d130)
    // add esp, 0x18
    // test esi, esi
    // if (...) GOTO(0x495a94)
    // mov eax, dword ptr [0x83ab18]
    // test eax, eax
    // if (...) GOTO(0x495a94)
    // mov eax, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esp + 0xc]
    // mov edx, dword ptr [esi]
    // push eax
    // mov eax, dword ptr [esp + 0xc]
    // push ecx
    // push eax
    // mov ecx, esi
    // CALL(dword)
    // pop esi
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push esi
    // lea eax, [esp + 0x10]
    // push edi
    // lea ecx, [esp + 0x10]
    // push eax
    // push ecx
    // CALL(0x47f700)
    // mov esi, eax
    // add esp, 8
    // test esi, esi
    // if (...) GOTO(0x495b61)
    // mov eax, dword ptr [0x83aa9c]
    // cmp esi, eax
    // mov eax, dword ptr [0x83ab18]
    // if (...) GOTO(0x495ad6)
    // test eax, eax
    // if (...) GOTO(0x495b61)
    // if (...) GOTO(0x495ada)
    // test eax, eax
    // if (...) GOTO(0x495ae6)
    // test dword ptr [esi + 0x9c], 0x4000000
    // if (...) GOTO(0x495b42)
    // mov ecx, dword ptr [esp + 0x10]
    // test ecx, ecx
    // if (...) GOTO(0x495b42)
    // mov eax, dword ptr [esp + 0x14]
    // test eax, eax
    // if (...) GOTO(0x495b42)
    // mov edx, dword ptr [esi]
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x495b42)
    // mov ecx, esi
    // CALL(0x47e120)
    // cmp edi, 2
    // if (...) GOTO(0x495b1e)
    // cmp edi, 9
    // if (...) GOTO(0x495b42)
    // cmp edi, 0x11
    // if (...) GOTO(0x495b42)
    // mov eax, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esp + 0x14]
    // mov dword ptr [0x83ab1c], edi
    // mov dword ptr [0x83ab20], esi
    // pop edi
    // mov dword ptr [0x83ab24], eax
    // mov dword ptr [0x83ab28], ecx
    // pop esi
    // return;
    // mov eax, dword ptr [0x83ab18]
    // mov ecx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esi]
    // push eax
    // mov eax, dword ptr [esp + 0x14]
    // push ecx
    // mov ecx, dword ptr [esp + 0x14]
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov eax, dword ptr [0x83ab04]
    // test eax, eax
    // if (...) GOTO(0x495b79)
    // mov edx, dword ptr [esp + 0x14]
    // mov ecx, dword ptr [esp + 0x10]
    // push edx
    // push ecx
    // CALL(eax)
    // add esp, 8
    // mov eax, dword ptr [0x83aafc]
    // test eax, eax
    // if (...) GOTO(0x495b84)
    // CALL(eax)
    // pop edi
    // pop esi
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // lea eax, [esp + 8]
    // lea ecx, [esp + 4]
    // push eax
    // push ecx
    // mov dword ptr [0x83ab20], 0
    // CALL(0x47f700)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x495bcb)
    // mov ecx, dword ptr [0x83ab18]
    // mov edx, dword ptr [eax]
    // push ecx
    // mov ecx, dword ptr [esp + 0xc]
    // push ecx
    // mov ecx, dword ptr [esp + 0xc]
    // push ecx
    // mov ecx, eax
    // CALL(dword)
    // return;
    // // nop
    // // nop
    // lea eax, [esp + 0xc]
    // lea ecx, [esp + 8]
    // push eax
    // push ecx
    // CALL(0x47f700)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x495c06)
    // mov ecx, dword ptr [0x83ab18]
    // mov edx, dword ptr [eax]
    // push ecx
    // mov ecx, dword ptr [esp + 0x10]
    // push ecx
    // mov ecx, dword ptr [esp + 0x10]
    // push ecx
    // mov ecx, dword ptr [esp + 0x10]
    // push ecx
    // mov ecx, eax
    // CALL(dword)
    // mov eax, dword ptr [0x83ab08]
    // test eax, eax
    // if (...) GOTO(0x495c1e)
    // mov edx, dword ptr [esp + 0xc]
    // mov ecx, dword ptr [esp + 8]
    // push edx
    // push ecx
    // CALL(eax)
    // add esp, 8
    // mov eax, dword ptr [0x83aafc]
    // test eax, eax
    // if (...) GOTO(0x495c29)
    // CALL(eax)
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // lea eax, [esp + 8]
    // lea ecx, [esp + 4]
    // push eax
    // push ecx
    // mov dword ptr [0x83ab20], 0
    // CALL(0x47f700)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x495c6b)
    // mov ecx, dword ptr [0x83ab18]
    // mov edx, dword ptr [eax]
    // push ecx
    // mov ecx, dword ptr [esp + 0xc]
    // push ecx
    // mov ecx, dword ptr [esp + 0xc]
    // push ecx
    // mov ecx, eax
    // CALL(dword)
    // return;
    // // nop
    // // nop
    // mov ecx, dword ptr [esp + 4]
    // xor eax, eax
    // cmp ecx, eax
    // if (...) GOTO(0x495c98)
    // mov ecx, dword ptr [0x83aa98]
    // mov dword ptr [0x83ab40], eax
    // cmp ecx, eax
    // mov dword ptr [0x83ab44], eax
    // if (...) GOTO(0x495cac)
    // push eax
    // CALL(dword)
    // return;
    // mov ecx, dword ptr [0x83aa98]
    // cmp ecx, eax
    // if (...) GOTO(0x495cac)
    // push(0x83aa78)  // ptr?
    // CALL(0x479a80)
    // return;
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // mov dword ptr [esi + 0x24], 0
    // mov eax, dword ptr [0x83ad4c]
    // test eax, eax
    // if (...) GOTO(0x495d11)
    // mov eax, dword ptr [esi + 8]
    // test al, 1
    // if (...) GOTO(0x495ce0)
    // test al, 2
    // if (...) GOTO(0x495cdb)
    // mov ecx, esi
    // CALL(0x486ec0)
    // pop esi
    // return;
    // or al, 2
    // mov dword ptr [esi + 8], eax
    // mov eax, dword ptr [0x83aff0]
    // test eax, eax
    // if (...) GOTO(0x495ced)
    // cmp esi, eax
    // if (...) GOTO(0x495d11)
    // mov eax, dword ptr [esi + 0x10]
    // test eax, eax
    // if (...) GOTO(0x495cfd)
    // mov ecx, dword ptr [esi + 0x1c]
    // push ecx
    // CALL(eax)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x14]
    // test eax, eax
    // if (...) GOTO(0x495d11)
    // mov edx, dword ptr [esi + 0x18]
    // mov ecx, dword ptr [esi + 0x1c]
    // push edx
    // push ecx
    // CALL(eax)
    // add esp, 8
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [0x8400b8]
    // test ecx, ecx
    // if (...) GOTO(0x495d2f)
    // if (...) GOTO(0x49b7b0)
    // return;
    // mov eax, ecx
    // mov dword ptr [eax], 0x4baa14
    // mov ecx, dword ptr [0x83fe78]
    // mov dword ptr [eax + 4], ecx
    // mov edx, dword ptr [0x83fe7c]
    // mov dword ptr [eax + 0xc], edx
    // mov ecx, dword ptr [0x83fe80]
    // mov dword ptr [eax + 0x10], ecx
    // mov edx, dword ptr [0x83fe84]
    // mov dword ptr [eax + 8], edx
    // mov ecx, dword ptr [0x83fe88]
    // mov dword ptr [eax + 0x14], ecx
    // mov edx, dword ptr [0x83fe8c]
    // mov dword ptr [eax + 0x18], edx
    // mov ecx, dword ptr [0x83fe90]
    // mov dword ptr [eax + 0x1c], ecx
    // mov edx, dword ptr [0x83fe94]
    // mov dword ptr [eax + 0x20], edx
    // mov ecx, dword ptr [0x83fe98]
    // mov dword ptr [eax + 0x24], ecx
    // mov edx, dword ptr [0x83fe9c]
    // mov dword ptr [eax + 0x28], edx
    // mov ecx, dword ptr [0x83fea0]
    // mov dword ptr [eax + 0x2c], ecx
    // mov edx, dword ptr [0x83fea4]
    // mov dword ptr [eax + 0x30], edx
    // mov ecx, dword ptr [0x83fea8]
    // mov dword ptr [eax + 0x34], ecx
    // mov edx, dword ptr [0x83feac]
    // mov dword ptr [eax + 0x38], edx
    // mov ecx, dword ptr [0x83feb0]
    // mov dword ptr [eax + 0x3c], ecx
    // mov edx, dword ptr [0x83feb4]
    // mov dword ptr [eax + 0x40], edx
    // mov ecx, dword ptr [0x83feb8]
    // mov dword ptr [eax + 0x44], ecx
    // mov edx, dword ptr [0x83febc]
    // mov dword ptr [eax + 0x48], edx
    // mov ecx, dword ptr [0x83fec0]
    // mov dword ptr [eax + 0x4c], ecx
    // mov edx, dword ptr [0x83fec4]
    // mov dword ptr [eax + 0x50], edx
    // mov ecx, dword ptr [0x83fec8]
    // mov dword ptr [eax + 0x54], ecx
    // mov edx, dword ptr [0x83fecc]
    // mov dword ptr [eax + 0x58], edx
    // mov ecx, dword ptr [0x83fed0]
    // mov dword ptr [eax + 0x5c], ecx
    // mov edx, dword ptr [0x83fed4]
    // mov dword ptr [eax + 0x60], edx
    // mov ecx, dword ptr [0x83fed8]
    // mov dword ptr [eax + 0x64], ecx
    // mov edx, dword ptr [0x83fedc]
    // mov dword ptr [eax + 0x68], edx
    // mov ecx, dword ptr [0x83fee0]
    // mov dword ptr [eax + 0x6c], ecx
    // mov edx, dword ptr [0x83fee4]
    // mov dword ptr [eax + 0x70], edx
    // mov ecx, dword ptr [0x83fee8]
    // mov dword ptr [eax + 0x74], ecx
    // mov edx, dword ptr [0x83feec]
    // mov dword ptr [eax + 0x78], edx
    // mov ecx, dword ptr [0x83fef0]
    // mov dword ptr [eax + 0x7c], ecx
    // mov edx, dword ptr [0x83fef4]
    // mov dword ptr [eax + 0x80], edx
    // mov ecx, dword ptr [0x83fef8]
    // mov dword ptr [eax + 0x84], ecx
    // mov edx, dword ptr [0x83fefc]
    // mov dword ptr [eax + 0x88], edx
    // mov ecx, dword ptr [0x83ff00]
    // mov dword ptr [eax + 0x8c], ecx
    // mov edx, dword ptr [0x83ff04]
    // mov dword ptr [eax + 0x90], edx
    // mov ecx, dword ptr [0x83ff08]
    // mov dword ptr [eax + 0x94], ecx
    // mov edx, dword ptr [0x83ff0c]
    // mov dword ptr [eax + 0x98], edx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [0x83fe78]
    // mov dword ptr [ecx + 4], eax
    // mov edx, dword ptr [0x83fe7c]
    // mov dword ptr [ecx + 0xc], edx
    // mov eax, dword ptr [0x83fe80]
    // mov dword ptr [ecx + 0x10], eax
    // mov edx, dword ptr [0x83fe84]
    // mov dword ptr [ecx + 8], edx
    // mov eax, dword ptr [0x83fe88]
    // mov dword ptr [ecx + 0x14], eax
    // mov edx, dword ptr [0x83fe8c]
    // mov dword ptr [ecx + 0x18], edx
    // mov eax, dword ptr [0x83fe90]
    // mov dword ptr [ecx + 0x1c], eax
    // mov edx, dword ptr [0x83fe94]
    // mov dword ptr [ecx + 0x20], edx
    // mov eax, dword ptr [0x83fe98]
    // mov dword ptr [ecx + 0x24], eax
    // mov edx, dword ptr [0x83fe9c]
    // mov dword ptr [ecx + 0x28], edx
    // mov eax, dword ptr [0x83fea0]
    // mov dword ptr [ecx + 0x2c], eax
    // mov edx, dword ptr [0x83fea4]
    // mov dword ptr [ecx + 0x30], edx
    // mov eax, dword ptr [0x83fea8]
    // mov dword ptr [ecx + 0x34], eax
    // mov edx, dword ptr [0x83feac]
    // mov dword ptr [ecx + 0x38], edx
    // mov eax, dword ptr [0x83feb0]
    // mov dword ptr [ecx + 0x3c], eax
    // mov edx, dword ptr [0x83feb4]
    // mov dword ptr [ecx + 0x40], edx
    // mov eax, dword ptr [0x83feb8]
    // mov dword ptr [ecx + 0x44], eax
    // mov edx, dword ptr [0x83febc]
    // mov dword ptr [ecx + 0x48], edx
    // mov eax, dword ptr [0x83fec0]
    // mov dword ptr [ecx + 0x4c], eax
    // mov edx, dword ptr [0x83fec4]
    // mov dword ptr [ecx + 0x50], edx
    // mov eax, dword ptr [0x83fec8]
    // mov dword ptr [ecx + 0x54], eax
    // mov edx, dword ptr [0x83fecc]
    // mov dword ptr [ecx + 0x58], edx
    // mov eax, dword ptr [0x83fed0]
    // mov dword ptr [ecx + 0x5c], eax
    // mov edx, dword ptr [0x83fed4]
    // mov dword ptr [ecx + 0x60], edx
    // mov eax, dword ptr [0x83fed8]
    // mov dword ptr [ecx + 0x64], eax
    // mov edx, dword ptr [0x83fedc]
    // mov dword ptr [ecx + 0x68], edx
    // mov eax, dword ptr [0x83fee0]
    // mov dword ptr [ecx + 0x6c], eax
    // mov edx, dword ptr [0x83fee4]
    // mov dword ptr [ecx + 0x70], edx
    // mov eax, dword ptr [0x83fee8]
    // mov dword ptr [ecx + 0x74], eax
    // mov edx, dword ptr [0x83feec]
    // mov dword ptr [ecx + 0x78], edx
    // mov eax, dword ptr [0x83fef0]
    // mov dword ptr [ecx + 0x7c], eax
    // mov edx, dword ptr [0x83fef4]
    // mov dword ptr [ecx + 0x80], edx
    // mov eax, dword ptr [0x83fef8]
    // mov dword ptr [ecx + 0x84], eax
    // mov edx, dword ptr [0x83fefc]
    // mov dword ptr [ecx + 0x88], edx
    // mov eax, dword ptr [0x83ff00]
    // mov dword ptr [ecx + 0x8c], eax
    // mov edx, dword ptr [0x83ff04]
    // mov dword ptr [ecx + 0x90], edx
    // mov eax, dword ptr [0x83ff08]
    // mov dword ptr [ecx + 0x94], eax
    // mov edx, dword ptr [0x83ff0c]
    // mov dword ptr [ecx + 0x98], edx
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // if (...) GOTO(0x496020)
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
    // push 3
    // CALL(dword)
    // mov dword ptr [0x83ff10], eax
    // return;
    // // nop
    // // nop
    // push -1
    // push(0x4b8316)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // push ecx
    // push esi
    // mov esi, ecx
    // push edi
    // mov dword ptr [esp + 8], esi
    // CALL(0x4804a0)
    // xor edi, edi
    // lea ecx, [esi + 0x60c]
    // mov dword ptr [esp + 0x14], edi
    // CALL(0x4a13f0)
    // lea ecx, [esi + 0xcdc]
    // mov byte ptr [esp + 0x14], 1
    // CALL(0x4a13f0)
    // mov dword ptr [esi], 0x4bbac8
    // mov dword ptr [esi + 0x274], 0x4bbab4
    // mov eax, dword ptr [0x83ff1c]
    // mov dword ptr [esi + 0x574], eax
    // mov ecx, dword ptr [0x4e4770]
    // mov dword ptr [esi + 0x57c], ecx
    // mov dword ptr [esi + 0x588], edi
    // mov edx, dword ptr [0x83ff20]
    // mov dword ptr [esi + 0x580], edx
    // mov eax, dword ptr [0x4e4774]
    // mov dword ptr [esi + 0x584], eax
    // mov ecx, dword ptr [0x83ff20]
    // mov dword ptr [esi + 0x58c], ecx
    // mov edx, dword ptr [0x4e476c]
    // mov dword ptr [esi + 0x590], edx
    // mov dword ptr [esi + 0x59c], 0xffffffff
    // mov dword ptr [esi + 0x598], edi
    // mov eax, dword ptr [0x4e4768]
    // mov dword ptr [esi + 0x594], eax
    // mov ecx, dword ptr [0x4e4764]
    // mov dword ptr [esi + 0x5a0], ecx
    // mov dword ptr [esi + 0x5a4], edi
    // mov dword ptr [esi + 0x5ac], edi
    // mov dword ptr [esi + 0x5b0], edi
    // mov dword ptr [esi + 0x5b4], edi
    // mov dword ptr [esi + 0x5b8], edi
    // mov edx, dword ptr [0x4e4778]
    // mov dword ptr [esi + 0x5a8], edx
    // mov eax, dword ptr [0x4e477c]
    // mov dword ptr [esi + 0x5bc], eax
    // mov ecx, dword ptr [0x4e4780]
    // mov dword ptr [esi + 0x5c4], ecx
    // mov edx, dword ptr [0x4e4784]
    // mov dword ptr [esi + 0x5c8], edx
    // mov eax, dword ptr [0x4e4788]
    // mov dword ptr [esi + 0x5cc], eax
    // mov ecx, dword ptr [0x4e478c]
    // mov dword ptr [esi + 0x5d0], ecx
    // lea ecx, [esi + 0x5e8]
    // xor eax, eax
    // mov edx, dword ptr [eax + 0x83ff24]
    // add eax, 4
    // mov dword ptr [ecx - 0xc], edx
    // mov edx, dword ptr [eax + 0x83ff2c]
    // mov dword ptr [ecx], edx
    // mov edx, dword ptr [eax + 0x83ff38]
    // mov dword ptr [ecx + 0xc], edx
    // mov edx, dword ptr [eax + 0x83ff44]
    // mov dword ptr [ecx + 0x18], edx
    // add ecx, 4
    // cmp eax, 0xc
    // if (...) GOTO(0x496163)
    // mov eax, dword ptr [0x83ff58]
    // mov dword ptr [esi + 0x5d4], eax
    // mov ecx, dword ptr [0x83ff5c]
    // mov dword ptr [esi + 0x5d8], ecx
    // mov ecx, dword ptr [esp + 0xc]
    // mov dword ptr [esi + 0x13ac], edi
    // mov dword ptr [esi + 0x13b0], edi
    // mov eax, esi
    // pop edi
    // pop esi
    // mov dword ptr fs:[0], ecx
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [0x83ff1c]
    // push esi
    // mov esi, ecx
    // xor edx, edx
    // push edi
    // mov dword ptr [esi + 0x574], eax
    // mov ecx, dword ptr [0x4e4770]
    // mov dword ptr [esi + 0x57c], ecx
    // mov dword ptr [esi + 0x588], edx
    // mov eax, dword ptr [0x83ff20]
    // mov dword ptr [esi + 0x580], eax
    // mov ecx, dword ptr [0x4e4774]
    // mov dword ptr [esi + 0x584], ecx
    // mov eax, dword ptr [0x83ff20]
    // mov dword ptr [esi + 0x58c], eax
    // mov dword ptr [esi + 0x59c], 0xffffffff
    // mov dword ptr [esi + 0x598], edx
    // mov ecx, dword ptr [0x4e476c]
    // mov dword ptr [esi + 0x590], ecx
    // mov eax, dword ptr [0x4e4768]
    // mov dword ptr [esi + 0x594], eax
    // mov ecx, dword ptr [0x4e4764]
    // mov dword ptr [esi + 0x5a0], ecx
    // mov dword ptr [esi + 0x5a4], edx
    // mov dword ptr [esi + 0x5ac], edx
    // mov dword ptr [esi + 0x5b0], edx
    // mov dword ptr [esi + 0x5b4], edx
    // mov dword ptr [esi + 0x5b8], edx
    // mov eax, dword ptr [0x4e4778]
    // mov dword ptr [esi + 0x5a8], eax
    // mov ecx, dword ptr [0x4e477c]
    // mov dword ptr [esi + 0x5bc], ecx
    // mov eax, dword ptr [0x4e4780]
    // mov dword ptr [esi + 0x5c4], eax
    // mov ecx, dword ptr [0x4e4784]
    // mov dword ptr [esi + 0x5c8], ecx
    // mov eax, dword ptr [0x4e4788]
    // mov dword ptr [esi + 0x5cc], eax
    // mov ecx, dword ptr [0x4e478c]
    // mov dword ptr [esi + 0x5d0], ecx
    // lea ecx, [esi + 0x5e8]
    // xor eax, eax
    // mov edi, dword ptr [eax + 0x83ff24]
    // add eax, 4
    // mov dword ptr [ecx - 0xc], edi
    // mov edi, dword ptr [eax + 0x83ff2c]
    // mov dword ptr [ecx], edi
    // mov edi, dword ptr [eax + 0x83ff38]
    // mov dword ptr [ecx + 0xc], edi
    // mov edi, dword ptr [eax + 0x83ff44]
    // mov dword ptr [ecx + 0x18], edi
    // add ecx, 4
    // cmp eax, 0xc
    // if (...) GOTO(0x4962b3)
    // mov eax, dword ptr [0x83ff58]
    // mov dword ptr [esi + 0x5d4], eax
    // mov ecx, dword ptr [0x83ff5c]
    // mov dword ptr [esi + 0x5d8], ecx
    // lea ecx, [esi + 0x60c]
    // mov dword ptr [esi + 0x13ac], edx
    // mov dword ptr [esi + 0x13b0], edx
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov eax, dword ptr [esi + 0xcdc]
    // lea ecx, [esi + 0xcdc]
    // CALL(dword)
    // mov ecx, esi
    // CALL(0x480610)
    // pop edi
    // pop esi
    // return;
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 0x14]
    // push ebx
    // push ebp
    // push esi
    // test eax, eax
    // push edi
    // mov esi, ecx
    // if (...) GOTO(0x49667f)
    // mov edi, dword ptr [esp + 0x1c]
    // test edi, edi
    // if (...) GOTO(0x49667f)
    // mov ebp, dword ptr [esp + 0x20]
    // test ebp, ebp
    // if (...) GOTO(0x49667f)
    // CALL(0x4961d0)
    // mov eax, dword ptr [esp + 0x2c]
    // mov ecx, dword ptr [esi + 0x574]
    // or ecx, eax
    // cmp edi, ebp
    // mov dword ptr [esi + 0x574], ecx
    // mov ecx, dword ptr [esp + 0x28]
    // mov dword ptr [esi + 0x578], ecx
    // mov dword ptr [esi + 0x580], 0
    // if (...) GOTO(0x4963ad)
    // push ebp
    // mov ecx, esi
    // CALL(0x4967d0)
    // lea edx, [ebp + ebp]
    // mov eax, edi
    // sub eax, edx
    // lea ebx, [esi + 0x5dc]
    // mov dword ptr [esi + 0x584], eax
    // lea ecx, [esi + 0x5f4]
    // if (...) GOTO(0x4963ce)
    // push edi
    // mov ecx, esi
    // CALL(0x4967d0)
    // lea edx, [edi + edi]
    // mov eax, ebp
    // sub eax, edx
    // lea ebx, [esi + 0x5e8]
    // mov dword ptr [esi + 0x584], eax
    // lea ecx, [esi + 0x600]
    // mov dword ptr [esp + 0x20], ecx
    // mov cl, byte ptr [esi + 0x574]
    // xor eax, eax
    // test cl, 1
    // if (...) GOTO(0x4963e4)
    // mov eax, 0x80000
    // mov ecx, dword ptr [0x83ff60]
    // mov edx, dword ptr [esp + 0x24]
    // push 0
    // push 0
    // test ecx, ecx
    // push edx
    // if (...) GOTO(0x4963fe)
    // or eax, 0x9020
    // if (...) GOTO(0x496403)
    // or eax, 0x1020
    // mov ecx, dword ptr [esp + 0x20]
    // push eax
    // mov eax, dword ptr [esp + 0x28]
    // push 0
    // push ebp
    // push edi
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(0x4806c0)
    // test eax, eax
    // if (...) GOTO(0x496684)
    // test byte ptr [esi + 0x574], 2
    // if (...) GOTO(0x49664d)
    // mov eax, dword ptr [esi + 0x57c]
    // cmp eax, -1
    // mov eax, dword ptr [esi + 0x5c0]
    // if (...) GOTO(0x496453)
    // add eax, -2
    // push 0
    // push esi
    // push eax
    // push eax
    // push 1
    // lea edi, [esi + 0x60c]
    // push 1
    // if (...) GOTO(0x496462)
    // push 0
    // push esi
    // push eax
    // push eax
    // push 0
    // lea edi, [esi + 0x60c]
    // push 0
    // push 1
    // push 0
    // mov ecx, edi
    // CALL(0x4887c0)
    // test eax, eax
    // if (...) GOTO(0x496684)
    // mov eax, dword ptr [ebx + 8]
    // mov ecx, dword ptr [ebx + 4]
    // mov edx, dword ptr [ebx]
    // mov dword ptr [edi + 0x654], ecx
    // mov dword ptr [edi + 0x650], edx
    // mov dword ptr [edi + 0x658], eax
    // mov eax, dword ptr [esi + 0x5bc]
    // mov dword ptr [esi + 0xc08], eax
    // mov ecx, dword ptr [esi + 0x5c8]
    // mov dword ptr [esi + 0xc14], ecx
    // mov edx, dword ptr [esi + 0x5cc]
    // mov dword ptr [esi + 0xc0c], edx
    // mov eax, dword ptr [esi + 0x5d0]
    // mov dword ptr [esi + 0xc10], eax
    // mov dword ptr [esi + 0xc24], 0
    // mov edx, dword ptr [edi]
    // mov ecx, edi
    // mov dword ptr [esi + 0xbb8], 0x32
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x57c]
    // mov edi, dword ptr [esp + 0x1c]
    // cmp eax, -1
    // if (...) GOTO(0x496559)
    // cmp edi, ebp
    // if (...) GOTO(0x4964f4)
    // xor ebx, ebx
    // if (...) GOTO(0x496512)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x496508)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x49650a)
    // xor eax, eax
    // sub eax, dword ptr [esi + 0x5c0]
    // mov ebx, eax
    // cmp edi, ebp
    // if (...) GOTO(0x49654f)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x49653b)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // sub eax, dword ptr [esi + 0x5c0]
    // mov ecx, eax
    // mov eax, dword ptr [esi + 0x5c0]
    // if (...) GOTO(0x4965c1)
    // mov ecx, dword ptr [esi + 0x5c0]
    // xor eax, eax
    // sub eax, ecx
    // mov ecx, eax
    // mov eax, dword ptr [esi + 0x5c0]
    // if (...) GOTO(0x4965c1)
    // mov eax, dword ptr [esi + 0x5c0]
    // xor ecx, ecx
    // if (...) GOTO(0x4965c1)
    // cmp edi, ebp
    // if (...) GOTO(0x496564)
    // mov ebx, 1
    // if (...) GOTO(0x496583)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x496578)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x49657a)
    // xor eax, eax
    // sub eax, dword ptr [esi + 0x5c0]
    // inc eax
    // mov ebx, eax
    // cmp edi, ebp
    // if (...) GOTO(0x4965b3)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x4965a4)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // sub eax, dword ptr [esi + 0x5c0]
    // inc eax
    // mov ecx, eax
    // if (...) GOTO(0x4965b8)
    // mov edx, dword ptr [esi + 0x5c0]
    // xor eax, eax
    // sub eax, edx
    // inc eax
    // mov ecx, eax
    // if (...) GOTO(0x4965b8)
    // mov ecx, 1
    // mov eax, dword ptr [esi + 0x5c0]
    // add eax, -2
    // push 0
    // push esi
    // push eax
    // push eax
    // push ebx
    // lea edi, [esi + 0xcdc]
    // push ecx
    // push 2
    // push 0
    // mov ecx, edi
    // CALL(0x4887c0)
    // test eax, eax
    // if (...) GOTO(0x496684)
    // mov edx, dword ptr [esp + 0x20]
    // mov eax, dword ptr [edx + 8]
    // mov ecx, dword ptr [edx + 4]
    // mov edx, dword ptr [edx]
    // mov dword ptr [edi + 0x654], ecx
    // mov dword ptr [edi + 0x650], edx
    // mov dword ptr [edi + 0x658], eax
    // mov eax, dword ptr [esi + 0x5bc]
    // mov dword ptr [esi + 0x12d8], eax
    // mov ecx, dword ptr [esi + 0x5c8]
    // mov dword ptr [esi + 0x12e4], ecx
    // mov edx, dword ptr [esi + 0x5cc]
    // mov dword ptr [esi + 0x12dc], edx
    // mov eax, dword ptr [esi + 0x5d0]
    // mov dword ptr [esi + 0x12e0], eax
    // mov dword ptr [esi + 0x12f4], 0
    // mov edx, dword ptr [edi]
    // mov ecx, edi
    // mov dword ptr [esi + 0x1288], 0x32
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x580]
    // mov edx, dword ptr [esi]
    // push 0
    // mov ecx, esi
    // mov dword ptr [esi + 0x59c], 0xffffffff
    // mov dword ptr [esi + 0x58c], eax
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // mov dword ptr [0x83ff60], 0
    // xor eax, eax
    // pop ebx
    // return;
    // mov eax, 3
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(0x405099)
    // mov edx, dword ptr [esp + 0x10]
    // test edx, edx
    // if (...) GOTO(0x4966c3)
    // mov eax, dword ptr [esp + 0xc]
    // test eax, eax
    // if (...) GOTO(0x4966c3)
    // push esi
    // mov esi, dword ptr [esp + 0x18]
    // push 0
    // push esi
    // push edx
    // mov edx, dword ptr [esp + 0x18]
    // push eax
    // mov eax, dword ptr [0x83ff10]
    // push eax
    // mov eax, dword ptr [esp + 0x1c]
    // push edx
    // push eax
    // CALL(0x496330)
    // pop esi
    // return;
    // mov eax, 3
    // return;
    // CALL(0x405099)
    // mov edx, dword ptr [esp + 0x10]
    // test edx, edx
    // if (...) GOTO(0x496704)
    // mov eax, dword ptr [esp + 0xc]
    // test eax, eax
    // if (...) GOTO(0x496704)
    // push esi
    // mov esi, dword ptr [esp + 0x18]
    // push 0
    // push esi
    // push edx
    // mov edx, dword ptr [0x83ff10]
    // push edx
    // mov edx, dword ptr [esp + 0x18]
    // push eax
    // mov eax, dword ptr [esp + 0x20]
    // push eax
    // push edx
    // CALL(0x496330)
    // pop esi
    // return;
    // mov eax, 3
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x10]
    // push eax
    // mov eax, dword ptr [esp + 0x10]
    // push edx
    // mov edx, dword ptr [esp + 0x10]
    // push eax
    // mov eax, dword ptr [esp + 0x10]
    // push edx
    // push eax
    // mov dword ptr [0x83ff60], 1
    // CALL(0x496690)
    // return;
    // CALL(0x405099)
    // mov eax, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x10]
    // push eax
    // mov eax, dword ptr [esp + 0x10]
    // push edx
    // mov edx, dword ptr [esp + 0x10]
    // push eax
    // mov eax, dword ptr [esp + 0x10]
    // push edx
    // push eax
    // mov dword ptr [0x83ff60], 1
    // CALL(0x4966d0)
    // return;
    // CALL(0x405099)
    // mov eax, dword ptr [esp + 4]
    // push esi
    // mov esi, ecx
    // cmp eax, dword ptr [esp + 0xc]
    // if (...) GOTO(0x496789)
    // mov dword ptr [esi + 0x588], 0
    // if (...) GOTO(0x4967a9)
    // lea eax, [esp + 0xc]
    // lea ecx, [esp + 8]
    // push eax
    // push ecx
    // mov dword ptr [esi + 0x588], 1
    // CALL(0x493580)
    // mov eax, dword ptr [esp + 0x10]
    // add esp, 8
    // mov edx, dword ptr [esp + 0xc]
    // mov dword ptr [esi + 0x580], eax
    // mov dword ptr [esi + 0x58c], eax
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // mov dword ptr [esi + 0x584], edx
    // CALL(dword)
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // mov dword ptr [ecx + 0x5c0], eax
    // CALL(0x4979a0)
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
    // mov eax, dword ptr [ecx + 0x130]
    // mov edx, dword ptr [esp + 4]
    // push esi
    // mov dword ptr [0x83ab2c], eax
    // mov esi, dword ptr [ecx + 0x580]
    // cmp edx, esi
    // if (...) GOTO(0x496812)
    // mov dword ptr [ecx + 0x58c], esi
    // if (...) GOTO(0x49682a)
    // mov eax, dword ptr [ecx + 0x584]
    // cmp edx, eax
    // if (...) GOTO(0x496824)
    // mov dword ptr [ecx + 0x58c], eax
    // if (...) GOTO(0x49682a)
    // mov dword ptr [ecx + 0x58c], edx
    // mov eax, dword ptr [ecx + 0x588]
    // test eax, eax
    // if (...) GOTO(0x49684a)
    // mov edx, dword ptr [ecx + 0x584]
    // mov eax, dword ptr [ecx + 0x58c]
    // sub edx, eax
    // add edx, esi
    // mov dword ptr [ecx + 0x58c], edx
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // push ecx
    // mov eax, dword ptr [0x83ab40]
    // push ebx
    // xor ebx, ebx
    // push ebp
    // push esi
    // cmp eax, ebx
    // push edi
    // mov esi, ecx
    // if (...) GOTO(0x496877)
    // mov eax, dword ptr [0x83ab44]
    // cmp eax, esi
    // if (...) GOTO(0x496c25)
    // cmp dword ptr [0x83ab48], ebx
    // if (...) GOTO(0x496c25)
    // mov dword ptr [0x83ff18], ebx
    // mov eax, dword ptr [esi + 0x58c]
    // mov dword ptr [esp + 0x10], eax
    // mov eax, dword ptr [esi + 0x5a4]
    // cmp eax, ebx
    // if (...) GOTO(0x4969e0)
    // mov edi, dword ptr [esi + 0x5b4]
    // mov ebp, dword ptr [esi + 0x5ac]
    // mov eax, dword ptr [esi + 0x57c]
    // sub edi, ebp
    // lea ebp, [edi*4]
    // sub ebp, edi
    // neg ebp
    // cmp eax, -1
    // if (...) GOTO(0x4968d0)
    // sub ebp, 2
    // mov ecx, dword ptr [esi + 0x278]
    // cmp ecx, ebx
    // if (...) GOTO(0x4968e4)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ebx, eax
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x4968f8)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4968fa)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x278]
    // cmp ebx, eax
    // if (...) GOTO(0x496958)
    // test ecx, ecx
    // if (...) GOTO(0x496912)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x496914)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x57c]
    // add ebp, eax
    // mov eax, dword ptr [esp + 0x18]
    // sub eax, edi
    // cmp ecx, -1
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x496930)
    // dec eax
    // mov dword ptr [esp + 0x18], eax
    // mov ebx, dword ptr [esi + 0x584]
    // mov ecx, dword ptr [esi + 0x580]
    // sar edi, 1
    // mov edx, ebx
    // sub eax, edi
    // sub edx, ecx
    // imul eax, edx
    // cdq 
    // idiv ebp
    // add eax, ecx
    // mov dword ptr [esi + 0x58c], eax
    // mov eax, dword ptr [esp + 0x18]
    // if (...) GOTO(0x4969aa)
    // test ecx, ecx
    // if (...) GOTO(0x496966)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x496968)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x57c]
    // add ebp, eax
    // mov eax, dword ptr [esp + 0x1c]
    // sub eax, edi
    // cmp ecx, -1
    // mov dword ptr [esp + 0x1c], eax
    // if (...) GOTO(0x496984)
    // dec eax
    // mov dword ptr [esp + 0x1c], eax
    // mov ebx, dword ptr [esi + 0x584]
    // mov ecx, dword ptr [esi + 0x580]
    // sar edi, 1
    // mov edx, ebx
    // sub eax, edi
    // sub edx, ecx
    // imul eax, edx
    // cdq 
    // idiv ebp
    // add eax, ecx
    // mov dword ptr [esi + 0x58c], eax
    // mov eax, dword ptr [esp + 0x1c]
    // mov dword ptr [esi + 0x59c], eax
    // mov eax, dword ptr [esi + 0x58c]
    // cmp ebx, eax
    // mov edx, ebx
    // if (...) GOTO(0x4969be)
    // mov edx, eax
    // cmp ecx, edx
    // if (...) GOTO(0x4969cf)
    // mov eax, ecx
    // mov dword ptr [esi + 0x58c], eax
    // if (...) GOTO(0x496b6d)
    // cmp ebx, eax
    // if (...) GOTO(0x4969d5)
    // mov eax, ebx
    // mov dword ptr [esi + 0x58c], eax
    // if (...) GOTO(0x496b6d)
    // mov ebx, dword ptr [0x4ba21c]
    // mov edi, dword ptr [esi + 0x598]
    // CALL(ebx)
    // sub eax, edi
    // test edi, edi
    // if (...) GOTO(0x496a2c)
    // mov ecx, dword ptr [esi + 0x590]
    // shl ecx, 1
    // cmp eax, ecx
    // if (...) GOTO(0x496a28)
    // mov ecx, esi
    // CALL(0x47abc0)
    // test eax, eax
    // if (...) GOTO(0x496c25)
    // lea edx, [esp + 0x1c]
    // lea eax, [esp + 0x18]
    // push edx
    // push eax
    // mov ecx, esi
    // CALL(0x47ab50)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // test edi, edi
    // if (...) GOTO(0x496a34)
    // CALL(ebx)
    // mov dword ptr [esi + 0x598], eax
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x496a4a)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov edi, eax
    // if (...) GOTO(0x496a4c)
    // xor edi, edi
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x496a60)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x496a62)
    // xor eax, eax
    // cmp edi, eax
    // if (...) GOTO(0x496ae3)
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esi + 0x5b4]
    // cmp eax, ecx
    // if (...) GOTO(0x496aa7)
    // mov ecx, dword ptr [esi + 0x5a4]
    // test ecx, ecx
    // if (...) GOTO(0x496aa7)
    // mov ecx, dword ptr [esi + 0x5a0]
    // mov edi, dword ptr [esi + 0x58c]
    // mov eax, dword ptr [esi + 0x584]
    // add edi, ecx
    // mov ecx, edi
    // mov dword ptr [esi + 0x58c], edi
    // cmp ecx, eax
    // if (...) GOTO(0x496b55)
    // if (...) GOTO(0x496b4f)
    // cmp eax, dword ptr [esi + 0x5ac]
    // if (...) GOTO(0x496b55)
    // mov eax, dword ptr [esi + 0x5a4]
    // test eax, eax
    // if (...) GOTO(0x496b55)
    // mov edx, dword ptr [esi + 0x5a0]
    // mov edi, dword ptr [esi + 0x58c]
    // mov eax, dword ptr [esi + 0x580]
    // sub edi, edx
    // mov ecx, edi
    // mov dword ptr [esi + 0x58c], edi
    // cmp ecx, eax
    // if (...) GOTO(0x496b55)
    // if (...) GOTO(0x496b4f)
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esi + 0x5b8]
    // cmp eax, ecx
    // if (...) GOTO(0x496b1d)
    // mov ecx, dword ptr [esi + 0x5a4]
    // test ecx, ecx
    // if (...) GOTO(0x496b1d)
    // mov eax, dword ptr [esi + 0x5a0]
    // mov edi, dword ptr [esi + 0x58c]
    // add edi, eax
    // mov eax, dword ptr [esi + 0x584]
    // mov ecx, edi
    // mov dword ptr [esi + 0x58c], edi
    // cmp ecx, eax
    // if (...) GOTO(0x496b55)
    // if (...) GOTO(0x496b4f)
    // cmp eax, dword ptr [esi + 0x5b0]
    // if (...) GOTO(0x496b55)
    // mov eax, dword ptr [esi + 0x5a4]
    // test eax, eax
    // if (...) GOTO(0x496b55)
    // mov ecx, dword ptr [esi + 0x5a0]
    // mov edi, dword ptr [esi + 0x58c]
    // mov eax, dword ptr [esi + 0x580]
    // sub edi, ecx
    // mov ecx, edi
    // mov dword ptr [esi + 0x58c], edi
    // cmp ecx, eax
    // if (...) GOTO(0x496b55)
    // mov dword ptr [esi + 0x58c], eax
    // lea edx, [esp + 0x1c]
    // lea eax, [esp + 0x18]
    // push edx
    // push eax
    // mov ecx, esi
    // CALL(0x47ab50)
    // mov ecx, esi
    // CALL(0x47abc0)
    // mov ecx, dword ptr [esi + 0x130]
    // mov dword ptr [0x83ab2c], ecx
    // mov eax, dword ptr [esi + 0x58c]
    // cmp dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x496c1b)
    // mov ecx, dword ptr [esi + 0x588]
    // test ecx, ecx
    // mov ecx, dword ptr [esi + 0x130]
    // mov edx, dword ptr [ecx]
    // if (...) GOTO(0x496bbb)
    // push eax
    // mov eax, dword ptr [esi + 0x578]
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x13b0]
    // test eax, eax
    // if (...) GOTO(0x496c06)
    // mov ecx, dword ptr [esi + 0x58c]
    // if (...) GOTO(0x496bf9)
    // mov edi, dword ptr [esi + 0x580]
    // mov ebp, dword ptr [esi + 0x584]
    // sub edi, eax
    // mov eax, dword ptr [esi + 0x578]
    // add edi, ebp
    // push edi
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x13b0]
    // test eax, eax
    // if (...) GOTO(0x496c06)
    // mov ecx, dword ptr [esi + 0x580]
    // mov ebx, dword ptr [esi + 0x58c]
    // mov edi, dword ptr [esi + 0x584]
    // sub ecx, ebx
    // add ecx, edi
    // mov edx, dword ptr [esi + 0x578]
    // push ecx
    // push edx
    // CALL(eax)
    // add esp, 8
    // mov eax, dword ptr [esi + 0x130]
    // mov ecx, dword ptr [eax + 0x88]
    // test ecx, ecx
    // if (...) GOTO(0x496c1b)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // push ebx
    // push esi
    // mov esi, ecx
    // xor ebx, ebx
    // push edi
    // mov ecx, dword ptr [esi + 0x278]
    // cmp ecx, ebx
    // if (...) GOTO(0x496c4d)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov edi, eax
    // if (...) GOTO(0x496c4f)
    // xor edi, edi
    // mov ecx, dword ptr [esi + 0x278]
    // cmp ecx, ebx
    // if (...) GOTO(0x496c63)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x496c65)
    // xor eax, eax
    // cmp edi, eax
    // if (...) GOTO(0x496cbd)
    // mov eax, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esi + 0x5ac]
    // cmp eax, ecx
    // if (...) GOTO(0x496c96)
    // mov ecx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esi]
    // push ecx
    // push eax
    // mov ecx, esi
    // mov dword ptr [esi + 0x5a4], 0xffffffff
    // mov dword ptr [esi + 0x598], ebx
    // CALL(dword)
    // if (...) GOTO(0x496d04)
    // cmp eax, dword ptr [esi + 0x5b4]
    // if (...) GOTO(0x496cfe)
    // mov ecx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esi]
    // push ecx
    // push eax
    // mov ecx, esi
    // mov dword ptr [esi + 0x5a4], 1
    // mov dword ptr [esi + 0x598], ebx
    // CALL(dword)
    // if (...) GOTO(0x496d04)
    // mov eax, dword ptr [esp + 0x14]
    // mov ecx, dword ptr [esi + 0x5b0]
    // cmp eax, ecx
    // if (...) GOTO(0x496cea)
    // mov dword ptr [esi + 0x5a4], 0xffffffff
    // mov edx, dword ptr [esi]
    // push eax
    // mov eax, dword ptr [esp + 0x14]
    // mov ecx, esi
    // push eax
    // mov dword ptr [esi + 0x598], ebx
    // CALL(dword)
    // if (...) GOTO(0x496d04)
    // cmp eax, dword ptr [esi + 0x5b8]
    // if (...) GOTO(0x496cfe)
    // mov dword ptr [esi + 0x5a4], 1
    // if (...) GOTO(0x496cd5)
    // mov dword ptr [esi + 0x5a4], ebx
    // cmp dword ptr [0x83ab30], ebx
    // if (...) GOTO(0x496d18)
    // mov dword ptr [0x83ab30], esi
    // mov dword ptr [0x83ab34], ebx
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // cmp dword ptr [0x83ab30], esi
    // if (...) GOTO(0x496d44)
    // mov dword ptr [0x83ab30], 0
    // mov edx, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // mov eax, dword ptr [0x83ab34]
    // cmp eax, esi
    // pop esi
    // if (...) GOTO(0x496d58)
    // mov dword ptr [0x83ab34], 0
    // return;
    // CALL(0x405099)
    // push esi
    // mov esi, ecx
    // push edi
    // mov eax, dword ptr [esi + 0x130]
    // mov dword ptr [0x83ff18], 0
    // mov dword ptr [0x83ab2c], eax
    // mov eax, dword ptr [esi + 0x588]
    // mov ecx, dword ptr [esi + 0x130]
    // test eax, eax
    // if (...) GOTO(0x496db1)
    // mov eax, dword ptr [esi + 0x58c]
    // mov edx, dword ptr [ecx]
    // push eax
    // mov eax, dword ptr [esi + 0x578]
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x13ac]
    // test eax, eax
    // if (...) GOTO(0x496e02)
    // mov ecx, dword ptr [esi + 0x58c]
    // if (...) GOTO(0x496df5)
    // mov edx, dword ptr [esi + 0x584]
    // mov edi, dword ptr [esi + 0x58c]
    // mov eax, dword ptr [ecx]
    // sub edx, edi
    // add edx, dword ptr [esi + 0x580]
    // push edx
    // mov edx, dword ptr [esi + 0x578]
    // push edx
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x13ac]
    // test eax, eax
    // if (...) GOTO(0x496e02)
    // mov ecx, dword ptr [esi + 0x584]
    // mov edx, dword ptr [esi + 0x58c]
    // mov edi, dword ptr [esi + 0x580]
    // sub ecx, edx
    // add ecx, edi
    // mov edx, dword ptr [esi + 0x578]
    // push ecx
    // push edx
    // CALL(eax)
    // add esp, 8
    // mov eax, dword ptr [esi + 0x130]
    // mov ecx, dword ptr [eax + 0x84]
    // test ecx, ecx
    // if (...) GOTO(0x496e17)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // mov dword ptr [esi + 0x59c], 0xffffffff
    // CALL(dword)
    // pop edi
    // pop esi
    // return;
    // push ebx
    // push esi
    // mov esi, ecx
    // mov dword ptr [0x83ff18], 1
    // xor ebx, ebx
    // push edi
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x496e57)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov edi, eax
    // if (...) GOTO(0x496e59)
    // xor edi, edi
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x496e6d)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x496e6f)
    // xor eax, eax
    // cmp edi, eax
    // mov eax, dword ptr [esp + 0x14]
    // if (...) GOTO(0x496e99)
    // sub eax, 0x23
    // if (...) GOTO(0x496e8b)
    // dec eax
    // if (...) GOTO(0x496fb8)
    // mov eax, dword ptr [esi + 0x580]
    // if (...) GOTO(0x496ee7)
    // mov ecx, dword ptr [esi + 0x584]
    // mov dword ptr [esi + 0x58c], ecx
    // if (...) GOTO(0x496eed)
    // sub eax, 0x21
    // if (...) GOTO(0x496ec7)
    // dec eax
    // if (...) GOTO(0x496fb8)
    // mov edx, dword ptr [esi + 0x5a0]
    // mov edi, dword ptr [esi + 0x58c]
    // mov eax, dword ptr [esi + 0x584]
    // add edi, edx
    // mov ecx, edi
    // mov dword ptr [esi + 0x58c], edi
    // cmp ecx, eax
    // if (...) GOTO(0x496eed)
    // if (...) GOTO(0x496ee7)
    // mov eax, dword ptr [esi + 0x5a0]
    // mov edi, dword ptr [esi + 0x58c]
    // sub edi, eax
    // mov eax, dword ptr [esi + 0x580]
    // mov ecx, edi
    // mov dword ptr [esi + 0x58c], edi
    // cmp ecx, eax
    // if (...) GOTO(0x496eed)
    // mov dword ptr [esi + 0x58c], eax
    // mov ecx, dword ptr [esi + 0x130]
    // mov edi, 1
    // mov dword ptr [0x83ab2c], ecx
    // mov eax, dword ptr [esi + 0x588]
    // mov ecx, dword ptr [esi + 0x130]
    // test eax, eax
    // if (...) GOTO(0x496f36)
    // mov eax, dword ptr [esi + 0x58c]
    // mov edx, dword ptr [ecx]
    // push eax
    // mov eax, dword ptr [esi + 0x578]
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x13ac]
    // test eax, eax
    // if (...) GOTO(0x496f87)
    // mov ecx, dword ptr [esi + 0x58c]
    // if (...) GOTO(0x496f7a)
    // mov edx, dword ptr [esi + 0x584]
    // mov ebx, dword ptr [esi + 0x58c]
    // mov eax, dword ptr [ecx]
    // sub edx, ebx
    // add edx, dword ptr [esi + 0x580]
    // push edx
    // mov edx, dword ptr [esi + 0x578]
    // push edx
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x13ac]
    // test eax, eax
    // if (...) GOTO(0x496f87)
    // mov ecx, dword ptr [esi + 0x584]
    // mov edx, dword ptr [esi + 0x58c]
    // mov ebx, dword ptr [esi + 0x580]
    // sub ecx, edx
    // add ecx, ebx
    // mov edx, dword ptr [esi + 0x578]
    // push ecx
    // push edx
    // CALL(eax)
    // add esp, 8
    // mov eax, dword ptr [esi + 0x130]
    // mov ecx, dword ptr [eax + 0x84]
    // test ecx, ecx
    // if (...) GOTO(0x496f9c)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // mov dword ptr [esi + 0x59c], 0xffffffff
    // CALL(dword)
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // pop edi
    // mov eax, ebx
    // pop esi
    // pop ebx
    // return;
    // sub esp, 0x10
    // push ebx
    // push esi
    // mov esi, ecx
    // push edi
    // mov ecx, dword ptr [0x83ad50]
    // test ecx, ecx
    // if (...) GOTO(0x496fe0)
    // mov eax, dword ptr [ecx]
    // push 1
    // push 1
    // push 1
    // CALL(dword)
    // mov edx, dword ptr [esi + 0x60c]
    // lea ecx, [esi + 0x60c]
    // CALL(dword)
    // mov eax, dword ptr [esi + 0xcdc]
    // lea ecx, [esi + 0xcdc]
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x5c4]
    // push ecx
    // mov ecx, esi
    // CALL(0x4808c0)
    // cmp dword ptr [esi + 0x57c], -1
    // if (...) GOTO(0x497049)
    // mov ecx, dword ptr [esi + 0x278]
    // lea edi, [esi + 0x274]
    // test ecx, ecx
    // if (...) GOTO(0x497035)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x497037)
    // xor eax, eax
    // xor ecx, ecx
    // mov cl, byte ptr [esi + 0x57c]
    // push ecx
    // push ecx
    // push eax
    // mov ecx, edi
    // CALL(0x4795d0)
    // lea eax, [esp + 0xc]
    // mov ecx, esi
    // push eax
    // CALL(0x4974d0)
    // mov ecx, dword ptr [esi + 0x5c4]
    // lea edx, [esp + 0xc]
    // push ecx
    // push edx
    // mov ecx, esi
    // CALL(0x480a10)
    // mov eax, dword ptr [esi + 0x5d8]
    // test eax, eax
    // if (...) GOTO(0x4970bb)
    // mov ecx, dword ptr [esi + 0x278]
    // lea edi, [esi + 0x274]
    // test ecx, ecx
    // if (...) GOTO(0x49708e)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov ebx, eax
    // if (...) GOTO(0x497090)
    // xor ebx, ebx
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4970a1)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4970a3)
    // xor eax, eax
    // push ebx
    // push eax
    // mov eax, dword ptr [esi + 0x5d8]
    // push 0
    // push 0
    // push 0
    // push 0
    // push eax
    // mov ecx, edi
    // CALL(0x476140)
    // mov ecx, dword ptr [esi + 0x5d4]
    // test ecx, ecx
    // if (...) GOTO(0x497109)
    // test esi, esi
    // if (...) GOTO(0x4970d1)
    // lea ebx, [esi + 0x274]
    // if (...) GOTO(0x4970d3)
    // xor ebx, ebx
    // mov eax, dword ptr [esp + 0x18]
    // mov edi, dword ptr [ecx + 0x1c]
    // sub eax, edi
    // mov edi, dword ptr [esp + 0x10]
    // sub eax, edi
    // push 0
    // cdq 
    // sub eax, edx
    // sar eax, 1
    // add eax, edi
    // mov edi, dword ptr [ecx + 0x18]
    // push eax
    // mov eax, dword ptr [esp + 0x1c]
    // sub eax, edi
    // mov edi, dword ptr [esp + 0x14]
    // sub eax, edi
    // cdq 
    // sub eax, edx
    // sar eax, 1
    // add eax, edi
    // push eax
    // push ebx
    // CALL(0x473e60)
    // mov eax, dword ptr [esi + 0x5c8]
    // xor edi, edi
    // test eax, eax
    // if (...) GOTO(0x497164)
    // lea ebx, [esi + 0x274]
    // mov ecx, dword ptr [esi + 0x5d0]
    // mov edx, dword ptr [esi + 0x5cc]
    // push ecx
    // lea eax, [esp + 0x10]
    // push edx
    // push eax
    // mov ecx, ebx
    // CALL(0x4795d0)
    // mov edx, dword ptr [esp + 0xc]
    // mov ecx, dword ptr [esp + 0x14]
    // mov eax, dword ptr [esp + 0x10]
    // inc edx
    // mov dword ptr [esp + 0xc], edx
    // mov edx, dword ptr [esp + 0x18]
    // dec ecx
    // inc eax
    // mov dword ptr [esp + 0x10], eax
    // mov eax, dword ptr [esi + 0x5c8]
    // dec edx
    // inc edi
    // cmp edi, eax
    // mov dword ptr [esp + 0x14], ecx
    // mov dword ptr [esp + 0x18], edx
    // if (...) GOTO(0x49711b)
    // pop edi
    // pop esi
    // pop ebx
    // add esp, 0x10
    // return;
    // CALL(0x405099)
    // push ebx
    // mov ebx, dword ptr [esp + 0xc]
    // push ebp
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x14]
    // cmp edi, ebx
    // mov esi, ecx
    // mov eax, ebx
    // if (...) GOTO(0x497186)
    // mov eax, edi
    // mov ecx, esi
    // mov dword ptr [esi + 0x5c0], eax
    // CALL(0x4979a0)
    // mov eax, dword ptr [esi + 0x57c]
    // lea ebp, [esi + 0xcdc]
    // cmp eax, -1
    // mov eax, dword ptr [esi + 0x5c0]
    // if (...) GOTO(0x4971f8)
    // mov edx, dword ptr [ebp]
    // push 0
    // push 0
    // push eax
    // push eax
    // mov ecx, ebp
    // CALL(dword)
    // cmp edi, ebx
    // if (...) GOTO(0x4971c0)
    // xor eax, eax
    // if (...) GOTO(0x4971ca)
    // mov ecx, dword ptr [esi + 0x5c0]
    // mov eax, ebx
    // sub eax, ecx
    // cmp edi, ebx
    // if (...) GOTO(0x4971e6)
    // mov ecx, dword ptr [esi + 0x5c0]
    // push eax
    // sub edi, ecx
    // mov ecx, ebp
    // push edi
    // CALL(0x47b420)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // xor edi, edi
    // push eax
    // push edi
    // mov ecx, ebp
    // CALL(0x47b420)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov edx, dword ptr [ebp]
    // add eax, -2
    // push 0
    // push 0
    // push eax
    // push eax
    // mov ecx, ebp
    // CALL(dword)
    // cmp edi, ebx
    // if (...) GOTO(0x497214)
    // mov eax, 1
    // if (...) GOTO(0x49721f)
    // mov edx, dword ptr [esi + 0x5c0]
    // mov eax, ebx
    // sub eax, edx
    // inc eax
    // cmp edi, ebx
    // if (...) GOTO(0x49723c)
    // mov edx, dword ptr [esi + 0x5c0]
    // push eax
    // sub edi, edx
    // mov ecx, ebp
    // inc edi
    // push edi
    // CALL(0x47b420)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov edi, 1
    // push eax
    // push edi
    // mov ecx, ebp
    // CALL(0x47b420)
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
    // mov ebx, dword ptr [0x4ba21c]
    // push ebp
    // push esi
    // push edi
    // mov esi, ecx
    // CALL(ebx)
    // mov edi, dword ptr [esi + 0x598]
    // mov ebp, eax
    // test edi, edi
    // if (...) GOTO(0x497290)
    // CALL(ebx)
    // mov ecx, dword ptr [esi + 0x590]
    // sub eax, edi
    // cmp eax, ecx
    // if (...) GOTO(0x4973ad)
    // test edi, edi
    // if (...) GOTO(0x497298)
    // CALL(ebx)
    // mov dword ptr [esi + 0x598], eax
    // mov ecx, dword ptr [esp + 0x14]
    // mov dword ptr [0x83ff18], 0
    // mov eax, dword ptr [esi + 0x58c]
    // dec ecx
    // mov edx, eax
    // if (...) GOTO(0x4972bf)
    // dec ecx
    // if (...) GOTO(0x4972ce)
    // cmp eax, dword ptr [esi + 0x584]
    // if (...) GOTO(0x4972ce)
    // inc eax
    // if (...) GOTO(0x4972c8)
    // cmp eax, dword ptr [esi + 0x580]
    // if (...) GOTO(0x4972ce)
    // dec eax
    // mov dword ptr [esi + 0x58c], eax
    // mov eax, dword ptr [esi + 0x130]
    // mov dword ptr [0x83ab2c], eax
    // mov eax, dword ptr [esi + 0x58c]
    // cmp edx, eax
    // if (...) GOTO(0x497379)
    // mov ecx, dword ptr [esi + 0x588]
    // test ecx, ecx
    // mov ecx, dword ptr [esi + 0x130]
    // mov edx, dword ptr [ecx]
    // if (...) GOTO(0x497319)
    // push eax
    // mov eax, dword ptr [esi + 0x578]
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x13b0]
    // test eax, eax
    // if (...) GOTO(0x497364)
    // mov ecx, dword ptr [esi + 0x58c]
    // if (...) GOTO(0x497357)
    // mov edi, dword ptr [esi + 0x580]
    // sub edi, eax
    // mov eax, dword ptr [esi + 0x584]
    // add edi, eax
    // mov eax, dword ptr [esi + 0x578]
    // push edi
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x13b0]
    // test eax, eax
    // if (...) GOTO(0x497364)
    // mov ecx, dword ptr [esi + 0x580]
    // mov edx, dword ptr [esi + 0x58c]
    // mov edi, dword ptr [esi + 0x584]
    // sub ecx, edx
    // add ecx, edi
    // mov edx, dword ptr [esi + 0x578]
    // push ecx
    // push edx
    // CALL(eax)
    // add esp, 8
    // mov eax, dword ptr [esi + 0x130]
    // mov ecx, dword ptr [eax + 0x88]
    // test ecx, ecx
    // if (...) GOTO(0x497379)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // mov dword ptr [esi + 0x59c], 0xffffffff
    // CALL(dword)
    // CALL(ebx)
    // mov ecx, eax
    // mov eax, 0x3e8
    // xor edx, edx
    // sub ecx, ebp
    // div dword ptr [esi + 0x594]
    // cmp ecx, eax
    // jae 0x4973ad
    // sub eax, ecx
    // push eax
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // mov eax, dword ptr [esi + 0x130]
    // mov dword ptr [esi + 0x598], 0
    // mov dword ptr [0x83ab2c], eax
    // mov eax, dword ptr [esp + 8]
    // dec eax
    // mov dword ptr [0x83ff18], 0
    // if (...) GOTO(0x4973ff)
    // dec eax
    // if (...) GOTO(0x497416)
    // mov eax, dword ptr [esi + 0x58c]
    // mov ecx, dword ptr [esi + 0x584]
    // cmp eax, ecx
    // if (...) GOTO(0x497416)
    // inc eax
    // if (...) GOTO(0x497410)
    // mov eax, dword ptr [esi + 0x58c]
    // mov ecx, dword ptr [esi + 0x580]
    // cmp eax, ecx
    // if (...) GOTO(0x497416)
    // dec eax
    // mov dword ptr [esi + 0x58c], eax
    // mov eax, dword ptr [esi + 0x588]
    // mov ecx, dword ptr [esi + 0x130]
    // test eax, eax
    // push ebx
    // if (...) GOTO(0x49744f)
    // mov eax, dword ptr [esi + 0x58c]
    // mov edx, dword ptr [ecx]
    // push eax
    // mov eax, dword ptr [esi + 0x578]
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x13ac]
    // test eax, eax
    // if (...) GOTO(0x4974a0)
    // mov ecx, dword ptr [esi + 0x58c]
    // if (...) GOTO(0x497493)
    // mov edx, dword ptr [esi + 0x584]
    // mov ebx, dword ptr [esi + 0x58c]
    // mov eax, dword ptr [ecx]
    // sub edx, ebx
    // add edx, dword ptr [esi + 0x580]
    // push edx
    // mov edx, dword ptr [esi + 0x578]
    // push edx
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x13ac]
    // test eax, eax
    // if (...) GOTO(0x4974a0)
    // mov ecx, dword ptr [esi + 0x584]
    // mov edx, dword ptr [esi + 0x58c]
    // mov ebx, dword ptr [esi + 0x580]
    // sub ecx, edx
    // add ecx, ebx
    // mov edx, dword ptr [esi + 0x578]
    // push ecx
    // push edx
    // CALL(eax)
    // add esp, 8
    // mov eax, dword ptr [esi + 0x130]
    // pop ebx
    // mov ecx, dword ptr [eax + 0x84]
    // test ecx, ecx
    // if (...) GOTO(0x4974b6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // mov dword ptr [esi + 0x59c], 0xffffffff
    // CALL(dword)
    // pop esi
    // return;
    // // nop
    // // nop
    // push ecx
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // mov edi, dword ptr [esp + 0x18]
    // lea eax, [esi + 0x5ac]
    // mov ecx, edi
    // mov dword ptr [esp + 0x10], eax
    // mov edx, dword ptr [eax]
    // mov dword ptr [ecx], edx
    // mov edx, dword ptr [eax + 4]
    // mov dword ptr [ecx + 4], edx
    // mov edx, dword ptr [eax + 8]
    // mov dword ptr [ecx + 8], edx
    // mov eax, dword ptr [eax + 0xc]
    // mov dword ptr [ecx + 0xc], eax
    // mov ecx, dword ptr [edi]
    // mov ebp, dword ptr [edi + 8]
    // mov edx, dword ptr [edi]
    // mov eax, dword ptr [edi + 4]
    // mov ebx, dword ptr [edi + 4]
    // neg ecx
    // add ebp, ecx
    // add edx, ecx
    // mov dword ptr [edi + 8], ebp
    // mov ecx, ebp
    // mov ebp, dword ptr [edi + 0xc]
    // mov dword ptr [edi], edx
    // neg eax
    // add ebx, eax
    // add ebp, eax
    // mov dword ptr [edi + 4], ebx
    // mov dword ptr [edi + 0xc], ebp
    // mov eax, ebp
    // mov ebp, dword ptr [esi + 0x57c]
    // cmp ebp, -1
    // if (...) GOTO(0x497542)
    // inc edx
    // inc ecx
    // inc ebx
    // inc eax
    // mov dword ptr [edi], edx
    // mov dword ptr [edi + 8], ecx
    // mov dword ptr [edi + 4], ebx
    // mov dword ptr [edi + 0xc], eax
    // mov ecx, dword ptr [edi]
    // mov eax, dword ptr [edi + 8]
    // mov edx, dword ptr [esi + 0x59c]
    // sub eax, ecx
    // cmp edx, -1
    // if (...) GOTO(0x497670)
    // test byte ptr [esi + 0x574], 2
    // if (...) GOTO(0x497569)
    // or ebx, edx
    // xor ebp, ebp
    // sub ebx, eax
    // if (...) GOTO(0x497574)
    // lea ecx, [eax + eax*2]
    // or ebx, 0xffffffff
    // lea ebp, [eax + 1]
    // sub ebx, ecx
    // cmp dword ptr [esi + 0x57c], -1
    // if (...) GOTO(0x497580)
    // sub ebx, 2
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x497598)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x4975a0)
    // mov dword ptr [esp + 0x18], 0
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x4975b4)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4975b6)
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0x18]
    // cmp ecx, eax
    // mov ecx, dword ptr [esi + 0x278]
    // if (...) GOTO(0x497619)
    // test ecx, ecx
    // if (...) GOTO(0x4975d6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x4975de)
    // mov dword ptr [esp + 0x18], 0
    // mov ecx, dword ptr [esi + 0x584]
    // mov edx, dword ptr [esi + 0x580]
    // cmp ecx, edx
    // if (...) GOTO(0x497606)
    // mov eax, dword ptr [esi + 0x58c]
    // mov esi, dword ptr [esp + 0x18]
    // sub eax, edx
    // add esi, ebx
    // imul eax, esi
    // sub ecx, edx
    // cdq 
    // idiv ecx
    // add ebp, eax
    // mov ecx, dword ptr [edi]
    // mov eax, dword ptr [edi + 8]
    // add ecx, ebp
    // add eax, ebp
    // mov dword ptr [edi], ecx
    // mov dword ptr [edi + 8], eax
    // if (...) GOTO(0x497970)
    // test ecx, ecx
    // if (...) GOTO(0x49762b)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x497633)
    // mov dword ptr [esp + 0x18], 0
    // mov ecx, dword ptr [esi + 0x584]
    // mov edx, dword ptr [esi + 0x580]
    // cmp ecx, edx
    // if (...) GOTO(0x49765b)
    // mov eax, dword ptr [esi + 0x58c]
    // mov esi, dword ptr [esp + 0x18]
    // sub eax, edx
    // add esi, ebx
    // imul eax, esi
    // sub ecx, edx
    // cdq 
    // idiv ecx
    // add ebp, eax
    // mov ecx, dword ptr [edi + 4]
    // mov eax, dword ptr [edi + 0xc]
    // add ecx, ebp
    // add eax, ebp
    // mov dword ptr [edi + 4], ecx
    // mov dword ptr [edi + 0xc], eax
    // if (...) GOTO(0x497970)
    // mov bl, byte ptr [esi + 0x574]
    // lea ebp, [ecx + eax]
    // test bl, 2
    // if (...) GOTO(0x4977ed)
    // sar eax, 1
    // add eax, edx
    // mov dword ptr [esi + 0x59c], eax
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x4976a2)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ebx, eax
    // if (...) GOTO(0x4976a4)
    // xor ebx, ebx
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x4976b8)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4976ba)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x278]
    // cmp ebx, eax
    // if (...) GOTO(0x49775f)
    // test ecx, ecx
    // if (...) GOTO(0x4976d6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4976d8)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x59c]
    // sub eax, ebp
    // cmp ecx, eax
    // if (...) GOTO(0x4976e8)
    // mov eax, ecx
    // if (...) GOTO(0x497700)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x4976fc)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4976fe)
    // xor eax, eax
    // sub eax, ebp
    // test eax, eax
    // if (...) GOTO(0x497708)
    // xor eax, eax
    // if (...) GOTO(0x497746)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x49771c)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x49771e)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x59c]
    // sub eax, ebp
    // cmp ecx, eax
    // if (...) GOTO(0x49772e)
    // mov eax, ecx
    // if (...) GOTO(0x497746)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x497742)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x497744)
    // xor eax, eax
    // sub eax, ebp
    // mov dword ptr [esi + 0x59c], eax
    // mov edx, dword ptr [edi]
    // mov ecx, dword ptr [edi + 8]
    // add edx, eax
    // add ecx, eax
    // mov dword ptr [edi], edx
    // mov dword ptr [edi + 8], ecx
    // if (...) GOTO(0x497966)
    // test ecx, ecx
    // if (...) GOTO(0x49776d)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x49776f)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x59c]
    // sub eax, ebp
    // cmp ecx, eax
    // if (...) GOTO(0x49777f)
    // mov eax, ecx
    // if (...) GOTO(0x497797)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x497793)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x497795)
    // xor eax, eax
    // sub eax, ebp
    // test eax, eax
    // if (...) GOTO(0x4977a2)
    // xor eax, eax
    // if (...) GOTO(0x497950)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x4977b6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4977b8)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x59c]
    // sub eax, ebp
    // cmp ecx, eax
    // if (...) GOTO(0x4977cb)
    // mov eax, ecx
    // if (...) GOTO(0x497950)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x4977e4)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // sub eax, ebp
    // if (...) GOTO(0x497950)
    // xor eax, eax
    // sub eax, ebp
    // if (...) GOTO(0x497950)
    // sar eax, 1
    // add eax, edx
    // mov dword ptr [esi + 0x59c], eax
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x49780d)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ebx, eax
    // if (...) GOTO(0x49780f)
    // xor ebx, ebx
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x497823)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x497825)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x278]
    // cmp ebx, eax
    // if (...) GOTO(0x4978ce)
    // test ecx, ecx
    // if (...) GOTO(0x497841)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x497843)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x59c]
    // lea ebx, [ebp + ebp]
    // sub eax, ebx
    // cmp ecx, eax
    // if (...) GOTO(0x497857)
    // mov eax, ecx
    // if (...) GOTO(0x49786f)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x49786b)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x49786d)
    // xor eax, eax
    // sub eax, ebx
    // cmp ebp, eax
    // if (...) GOTO(0x497877)
    // mov eax, ebp
    // if (...) GOTO(0x4978b5)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x49788b)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x49788d)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x59c]
    // sub eax, ebx
    // cmp ecx, eax
    // if (...) GOTO(0x49789d)
    // mov eax, ecx
    // if (...) GOTO(0x4978b5)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x4978b1)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4978b3)
    // xor eax, eax
    // sub eax, ebx
    // mov dword ptr [esi + 0x59c], eax
    // mov edx, dword ptr [edi]
    // mov ecx, dword ptr [edi + 8]
    // add edx, eax
    // add ecx, eax
    // mov dword ptr [edi], edx
    // mov dword ptr [edi + 8], ecx
    // if (...) GOTO(0x497966)
    // test ecx, ecx
    // if (...) GOTO(0x4978dc)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4978de)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x59c]
    // lea ebx, [ebp + ebp]
    // sub eax, ebx
    // cmp ecx, eax
    // if (...) GOTO(0x4978f2)
    // mov eax, ecx
    // if (...) GOTO(0x49790a)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x497906)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x497908)
    // xor eax, eax
    // sub eax, ebx
    // cmp ebp, eax
    // if (...) GOTO(0x497912)
    // mov eax, ebp
    // if (...) GOTO(0x497950)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x497926)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x497928)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x59c]
    // sub eax, ebx
    // cmp ecx, eax
    // if (...) GOTO(0x497938)
    // mov eax, ecx
    // if (...) GOTO(0x497950)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x49794c)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x49794e)
    // xor eax, eax
    // sub eax, ebx
    // mov dword ptr [esi + 0x59c], eax
    // mov edx, dword ptr [edi + 4]
    // mov ecx, dword ptr [edi + 0xc]
    // add edx, eax
    // add ecx, eax
    // mov dword ptr [edi + 4], edx
    // mov dword ptr [edi + 0xc], ecx
    // mov dword ptr [esi + 0x59c], 0xffffffff
    // mov eax, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [edi]
    // mov dword ptr [eax], ecx
    // mov edx, dword ptr [edi + 4]
    // mov dword ptr [eax + 4], edx
    // mov ecx, dword ptr [edi + 8]
    // mov dword ptr [eax + 8], ecx
    // mov edx, dword ptr [edi + 0xc]
    // pop edi
    // pop esi
    // pop ebp
    // mov dword ptr [eax + 0xc], edx
    // pop ebx
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
    // mov eax, dword ptr [ecx + 0x5c0]
    // xor edx, edx
    // mov dword ptr [ecx + 0x5ac], edx
    // mov dword ptr [ecx + 0x5b0], edx
    // mov dword ptr [ecx + 0x5b4], eax
    // mov dword ptr [ecx + 0x5b8], eax
    // cmp dword ptr [ecx + 0x57c], -1
    // if (...) GOTO(0x4979f7)
    // mov eax, dword ptr [ecx + 0x5b4]
    // inc edx
    // dec eax
    // mov dword ptr [ecx + 0x5ac], edx
    // mov edx, dword ptr [ecx + 0x5b0]
    // mov dword ptr [ecx + 0x5b4], eax
    // mov eax, dword ptr [ecx + 0x5b8]
    // inc edx
    // dec eax
    // mov dword ptr [ecx + 0x5b0], edx
    // mov dword ptr [ecx + 0x5b8], eax
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // CALL(0x497a20)
    // test byte ptr [esp + 8], 1
    // if (...) GOTO(0x497a18)
    // push esi
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov eax, esi
    // pop esi
    // return;
    // // nop
    // // nop
    // push -1
    // push(0x4b8354)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 8
    // push esi
    // mov esi, ecx
    // push edi
    // mov dword ptr [esp + 8], esi
    // mov dword ptr [esi], 0x4bbac8
    // mov dword ptr [esi + 0x274], 0x4bbab4
    // mov dword ptr [esp + 0x18], 2
    // CALL(0x4961d0)
    // lea edi, [esi + 0xcdc]
    // mov dword ptr [esp + 0xc], edi
    // mov dword ptr [edi], 0x4bb5b4
    // mov dword ptr [edi + 0x274], 0x4bb5a0
    // mov ecx, edi
    // mov byte ptr [esp + 0x18], 3
    // CALL(0x4a14c0)
    // mov ecx, edi
    // mov byte ptr [esp + 0x18], 1
    // CALL(0x488650)
    // lea edi, [esi + 0x60c]
    // mov dword ptr [esp + 0xc], edi
    // mov dword ptr [edi], 0x4bb5b4
    // mov dword ptr [edi + 0x274], 0x4bb5a0
    // mov ecx, edi
    // mov byte ptr [esp + 0x18], 4
    // CALL(0x4a14c0)
    // mov ecx, edi
    // mov byte ptr [esp + 0x18], 0
    // CALL(0x488650)
    // mov ecx, esi
    // mov dword ptr [esp + 0x18], 0xffffffff
    // CALL(0x4805a0)
    // mov ecx, dword ptr [esp + 0x10]
    // pop edi
    // pop esi
    // mov dword ptr fs:[0], ecx
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
    // sub ecx, 0x274
    // if (...) GOTO(0x497a00)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [0x8400b8]
    // test ecx, ecx
    // if (...) GOTO(0x497b18)
    // mov eax, dword ptr [0x8400b0]
    // test eax, eax
    // if (...) GOTO(0x497b18)
    // if (...) GOTO(0x49aa70)
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // mov ecx, dword ptr [0x8400b8]
    // test ecx, ecx
    // if (...) GOTO(0x497b38)
    // mov eax, dword ptr [0x8400b0]
    // test eax, eax
    // if (...) GOTO(0x497b38)
    // if (...) GOTO(0x49ab40)
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // sub esp, 0x10
    // push ebx
    // push ebp
    // mov ebp, ecx
    // push esi
    // mov dword ptr [esp + 0x10], ebp
    // mov eax, dword ptr [ebp + 0x77c]
    // mov ecx, dword ptr [ebp + 0x780]
    // cmp eax, ecx
    // if (...) GOTO(0x497c19)
    // mov ebx, dword ptr [ebp + 0x6f8]
    // test ebx, ebx
    // if (...) GOTO(0x497c19)
    // lea ecx, [ebx + ebx*4]
    // push edi
    // lea edx, [ebx + ecx*2]
    // lea edi, [edx*4 + 4]
    // push edi
    // mov dword ptr [esp + 0x1c], edi
    // CALL(0x4a504f)
    // mov esi, eax
    // add esp, 4
    // test ebx, ebx
    // mov dword ptr [esp + 0x1c], esi
    // mov byte ptr [esi], bl
    // if (...) GOTO(0x497bfc)
    // lea edx, [esi + 8]
    // add ebp, 0x1a4
    // mov dword ptr [esp + 0x10], ebx
    // mov eax, dword ptr [ebp - 0x34]
    // lea edi, [ebp - 0x1f]
    // mov dword ptr [edx - 4], eax
    // mov byte ptr [edx], 0
    // or ecx, 0xffffffff
    // xor eax, eax
    // mov byte ptr [ebp], 0
    // add ebp, 0x58
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov ebx, ecx
    // mov edi, edx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, ebx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, ebx
    // mov eax, dword ptr [esp + 0x10]
    // and ecx, 3
    // add edx, 0x28
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // xor ecx, ecx
    // dec eax
    // mov cl, byte ptr [ebp - 0x78]
    // mov dword ptr [esp + 0x10], eax
    // mov dword ptr [edx - 8], ecx
    // if (...) GOTO(0x497ba2)
    // mov ebp, dword ptr [esp + 0x14]
    // mov edi, dword ptr [esp + 0x18]
    // mov esi, dword ptr [esp + 0x1c]
    // push 1
    // push(0x10)
    // push 0
    // push edi
    // push esi
    // mov ecx, ebp
    // CALL(0x499140)
    // test esi, esi
    // pop edi
    // if (...) GOTO(0x497c19)
    // push esi
    // CALL(0x4a5007)
    // add esp, 4
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x10
    // return;
    // mov eax, dword ptr [0x8400b0]
    // push esi
    // test eax, eax
    // mov esi, ecx
    // if (...) GOTO(0x497c35)
    // mov eax, 7
    // pop esi
    // return;
    // test dword ptr [esi + 0xe8], 0x60000000
    // if (...) GOTO(0x497c68)
    // mov eax, dword ptr [esp + 8]
    // mov edx, dword ptr [esi + 0x64]
    // lea ecx, [esi + 0x64]
    // mov dword ptr [esi + 0x60], 0
    // mov dword ptr [esi + 0xe4], eax
    // CALL(dword)
    // or dword ptr [esi + 0xe8], 0x20000000
    // xor eax, eax
    // pop esi
    // return;
    // // nop
    // // nop
    // mov eax, dword ptr [0x8400b0]
    // push esi
    // test eax, eax
    // mov esi, ecx
    // if (...) GOTO(0x497c85)
    // mov eax, 7
    // pop esi
    // return;
    // test dword ptr [esi + 0xe8], 0x60000000
    // if (...) GOTO(0x497cb8)
    // mov eax, dword ptr [esp + 8]
    // mov edx, dword ptr [esi + 0x64]
    // lea ecx, [esi + 0x64]
    // mov dword ptr [esi + 0x60], 1
    // mov dword ptr [esi + 0xe4], eax
    // CALL(dword)
    // or dword ptr [esi + 0xe8], 0x20000000
    // xor eax, eax
    // pop esi
    // return;
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // test dword ptr [esi + 0xe8], 0x20000000
    // if (...) GOTO(0x497d03)
    // mov eax, dword ptr [esi + 0x64]
    // lea ecx, [esi + 0x64]
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0xe4]
    // mov edx, dword ptr [esi + 0xe8]
    // push 0
    // push(0x200)
    // push ecx
    // and edx, 0xdfffffff
    // push 0
    // push 0
    // mov ecx, esi
    // mov dword ptr [esi + 0xe8], edx
    // CALL(0x499140)
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ecx
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // mov eax, dword ptr [esi + 0x64]
    // lea ecx, [esi + 0x64]
    // CALL(dword)
    // xor ebx, ebx
    // mov dword ptr [esi + 0xf0], 0x4e20
    // mov dword ptr [esi + 0x77c], ebx
    // mov dword ptr [esi + 0x780], ebx
    // mov dword ptr [esi + 0xec], ebx
    // mov dword ptr [esi + 0x6f8], ebx
    // cmp dword ptr [0x8400b0], ebx
    // if (...) GOTO(0x497da2)
    // mov ebp, dword ptr [0x4ba0e8]
    // lea edi, [esi + 0x38]
    // push edi
    // CALL(ebp)
    // mov ecx, dword ptr [esi + 0x20]
    // push ecx
    // CALL(dword)
    // mov eax, dword ptr [0x8400b0]
    // push eax
    // mov edx, dword ptr [eax]
    // CALL(dword)
    // mov eax, dword ptr [0x8400b0]
    // push eax
    // mov ecx, dword ptr [eax]
    // CALL(dword)
    // mov dword ptr [0x8400b0], ebx
    // push edi
    // mov dword ptr [esi + 0x28], ebx
    // CALL(dword)
    // push ebx
    // CALL(dword)
    // push edi
    // CALL(ebp)
    // push edi
    // CALL(dword)
    // mov dword ptr [esi + 0x2c], ebx
    // mov dword ptr [esi + 0x30], ebx
    // mov dword ptr [esi + 0xc], ebx
    // cmp dword ptr [esi + 0x34], ebx
    // if (...) GOTO(0x497db4)
    // lea edx, [esi + 0x38]
    // mov dword ptr [esi + 0x34], ebx
    // push edx
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x14]
    // mov edi, dword ptr [0x4ba0cc]
    // cmp eax, ebx
    // if (...) GOTO(0x497dc7)
    // push eax
    // CALL(edi)
    // mov dword ptr [esi + 0x14], ebx
    // mov eax, dword ptr [esi + 0x18]
    // cmp eax, ebx
    // if (...) GOTO(0x497dd4)
    // push eax
    // CALL(edi)
    // mov dword ptr [esi + 0x18], ebx
    // mov eax, dword ptr [esi + 0x1c]
    // cmp eax, ebx
    // if (...) GOTO(0x497de1)
    // push eax
    // CALL(edi)
    // mov dword ptr [esi + 0x1c], ebx
    // mov eax, dword ptr [esi + 0x20]
    // cmp eax, ebx
    // if (...) GOTO(0x497dee)
    // push eax
    // CALL(edi)
    // mov dword ptr [esi + 0x20], ebx
    // mov eax, dword ptr [esi + 0x24]
    // cmp eax, ebx
    // if (...) GOTO(0x497dfb)
    // push eax
    // CALL(edi)
    // mov dword ptr [esi + 0x24], ebx
    // mov eax, dword ptr [esi + 0x720]
    // cmp eax, ebx
    // if (...) GOTO(0x497e14)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esi + 0x720], ebx
    // mov eax, dword ptr [esi + 0x724]
    // cmp eax, ebx
    // if (...) GOTO(0x497e2d)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esi + 0x724], ebx
    // mov eax, dword ptr [esi + 0x6fc]
    // cmp eax, ebx
    // if (...) GOTO(0x497e46)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esi + 0x6fc], ebx
    // mov eax, dword ptr [esi + 4]
    // cmp eax, ebx
    // if (...) GOTO(0x497e59)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esi + 4], ebx
    // mov dword ptr [esi + 8], ebx
    // mov dword ptr [esi + 0x718], 0xc8
    // mov dword ptr [esi + 0xe8], ebx
    // lea eax, [esi + 0x174]
    // mov ecx, 0x10
    // mov dword ptr [eax - 4], ebx
    // mov dword ptr [eax], ebx
    // mov dword ptr [eax + 4], ebx
    // mov byte ptr [eax + 0x10], bl
    // add eax, 0x58
    // dec ecx
    // if (...) GOTO(0x497e77)
    // mov eax, dword ptr [esi + 0xc8]
    // lea edi, [esi + 0xc0]
    // cmp eax, ebx
    // if (...) GOTO(0x497efe)
    // mov eax, dword ptr [edi + 0x10]
    // mov dword ptr [esp + 0x10], ebx
    // cmp eax, ebx
    // if (...) GOTO(0x497ef5)
    // mov eax, dword ptr [edi + 8]
    // mov edx, dword ptr [edi]
    // mov ecx, dword ptr [eax + 0xc]
    // mov dword ptr [edi + 0xc], ecx
    // mov ebp, dword ptr [eax + 8]
    // push ebp
    // mov ecx, edi
    // CALL(dword)
    // cmp ebp, ebx
    // if (...) GOTO(0x497ec4)
    // mov eax, dword ptr [ebp]
    // push 1
    // mov ecx, ebp
    // CALL(dword)
    // mov ecx, dword ptr [edi + 8]
    // mov dword ptr [ecx + 8], ebx
    // mov eax, dword ptr [edi + 8]
    // cmp eax, ebx
    // if (...) GOTO(0x497edf)
    // mov edx, dword ptr [eax]
    // push 1
    // mov ecx, dword ptr [edx + 4]
    // mov edx, dword ptr [ecx + eax]
    // add ecx, eax
    // CALL(dword)
    // mov eax, dword ptr [edi + 0xc]
    // mov ecx, dword ptr [edi + 0x10]
    // mov dword ptr [edi + 8], eax
    // mov eax, dword ptr [esp + 0x10]
    // inc eax
    // cmp eax, ecx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x497ea3)
    // mov dword ptr [edi + 8], ebx
    // mov dword ptr [edi + 0x14], ebx
    // mov dword ptr [edi + 0x10], ebx
    // lea ecx, [esi + 0xf8]
    // mov dword ptr [esi + 0xe4], ebx
    // mov dword ptr [esi + 0xe8], ebx
    // CALL(0x4a4b00)
    // lea ecx, [esi + 0x120]
    // CALL(0x4a4b00)
    // lea ecx, [esi + 0x148]
    // CALL(0x4a4b00)
    // lea edx, [esi + 0x708]
    // xor ecx, ecx
    // pop edi
    // mov dword ptr [edx], ecx
    // mov dword ptr [edx + 4], ecx
    // mov dword ptr [edx + 8], ecx
    // mov dword ptr [edx + 0xc], ecx
    // mov dword ptr [esi + 0xf4], 1
    // mov dword ptr [esi + 0x54], ebx
    // mov dword ptr [esi + 0x58], ebx
    // mov dword ptr [esi + 0x5c], ebx
    // mov dword ptr [esi + 0x60], ebx
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // CALL(0x405098)
    // // nop
    // push esi
    // mov esi, dword ptr [0x83ff6c]
    // test esi, esi
    // if (...) GOTO(0x497f71)
    // xor eax, eax
    // pop esi
    // return;
    // mov edx, dword ptr [esp + 8]
    // xor eax, eax
    // mov ecx, esi
    // cmp dword ptr [ecx], edx
    // if (...) GOTO(0x497f8f)
    // inc eax
    // add ecx, 0x58
    // cmp eax, 0x10
    // if (...) GOTO(0x497f79)
    // mov eax, 1
    // pop esi
    // return;
    // lea ecx, [eax + eax*4]
    // lea edx, [eax + ecx*2]
    // mov cl, byte ptr [esi + edx*8 + 0x14]
    // test cl, 2
    // lea eax, [esi + edx*8]
    // if (...) GOTO(0x497fa8)
    // mov dword ptr [eax + 8], 1
    // mov eax, 1
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
    // push -1
    // mov eax, dword ptr fs:[0]
    // push(0x4b880f)  // ptr?
    // push eax
    // mov eax, 0x21f4
    // mov dword ptr fs:[0], esp
    // CALL(0x4a6070)
    // push ebx
    // push ebp
    // mov ebp, ecx
    // push esi
    // push edi
    // lea ecx, [esp + 0xf0]
    // CALL(0x48ce00)
    // mov eax, dword ptr [ebp + 0x14]
    // mov ecx, dword ptr [ebp + 0x18]
    // mov dword ptr [esp + 0x28], eax
    // mov eax, dword ptr [0x8400b0]
    // test eax, eax
    // mov dword ptr [esp + 0x220c], 0
    // mov dword ptr [esp + 0x2c], ecx
    // if (...) GOTO(0x498100)
    // mov dword ptr [esp + 0xf0], 0x4bb3f8
    // mov dword ptr [esp + 0x364], 0x4bb3e4
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 9
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff4]
    // mov byte ptr [esp + 0x220c], 8
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x174c]
    // mov byte ptr [esp + 0x220c], 7
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc4]
    // CALL(0x489370)
    // lea ecx, [esp + 0x174c]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1500]
    // mov byte ptr [esp + 0x220c], 6
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d0]
    // mov byte ptr [esp + 0x220c], 5
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1490]
    // mov byte ptr [esp + 0x220c], 4
    // mov dword ptr [esp + 0x1490], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xd9c]
    // mov byte ptr [esp + 0x220c], 3
    // CALL(0x491410)
    // lea ecx, [esp + 0x6cc]
    // mov byte ptr [esp + 0x220c], 2
    // CALL(0x491410)
    // mov byte ptr [esp + 0x220c], 1
    // if (...) GOTO(0x4990ff)
    // mov esi, dword ptr [esp + 0x2218]
    // test esi, esi
    // if (...) GOTO(0x49901b)
    // cmp esi, dword ptr [ebp + 0x700]
    // if (...) GOTO(0x49901b)
    // mov ecx, ebp
    // CALL(0x49ab40)
    // mov ebx, dword ptr [esp + 0x2220]
    // test ebx, 0xfff0
    // if (...) GOTO(0x49819c)
    // test byte ptr [ebp + 0xe8], 1
    // if (...) GOTO(0x498144)
    // test byte ptr [esp + 0x2224], 4
    // if (...) GOTO(0x49819c)
    // mov eax, dword ptr [ebp + 0x77c]
    // mov ecx, dword ptr [esp + 0x221c]
    // cmp ecx, eax
    // if (...) GOTO(0x498173)
    // mov edx, dword ptr [esp + 0x2214]
    // push -1
    // push 0
    // push eax
    // push esi
    // push edx
    // lea ecx, [ebp + 0x120]
    // CALL(0x4a4b60)
    // if (...) GOTO(0x498479)
    // test ecx, ecx
    // if (...) GOTO(0x49819c)
    // push -1
    // push ecx
    // push eax
    // mov eax, dword ptr [esp + 0x2220]
    // push esi
    // push eax
    // lea ecx, [ebp + 0x120]
    // CALL(0x4a4b60)
    // cmp dword ptr [ebp + 0x6f8], 2
    // if (...) GOTO(0x498479)
    // lea edi, [esi + 0xc]
    // push edi
    // mov dword ptr [esp + 0x20], edi
    // CALL(0x4a504f)
    // mov edx, eax
    // add esp, 4
    // test edx, edx
    // mov dword ptr [esp + 0x10], edx
    // if (...) GOTO(0x4982a3)
    // mov dword ptr [esp + 0xf0], 0x4bb3f8
    // mov dword ptr [esp + 0x364], 0x4bb3e4
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0x1b
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff4]
    // mov byte ptr [esp + 0x220c], 0x1a
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x174c]
    // mov byte ptr [esp + 0x220c], 0x19
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc4]
    // CALL(0x489370)
    // lea ecx, [esp + 0x174c]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1500]
    // mov byte ptr [esp + 0x220c], 0x18
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d0]
    // mov byte ptr [esp + 0x220c], 0x17
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1490]
    // mov byte ptr [esp + 0x220c], 0x16
    // mov dword ptr [esp + 0x1490], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xd9c]
    // mov byte ptr [esp + 0x220c], 0x15
    // CALL(0x491410)
    // lea ecx, [esp + 0x6cc]
    // mov byte ptr [esp + 0x220c], 0x14
    // CALL(0x491410)
    // mov byte ptr [esp + 0x220c], 0x13
    // if (...) GOTO(0x4990ff)
    // mov ecx, dword ptr [esp + 0x2224]
    // and ecx, 1
    // mov dword ptr [esp + 0x14], ecx
    // if (...) GOTO(0x4982c5)
    // mov eax, dword ptr [ebp + 0xf4]
    // inc eax
    // mov dword ptr [ebp + 0xf4], eax
    // mov dword ptr [edx + 4], eax
    // if (...) GOTO(0x4982cc)
    // mov dword ptr [edx + 4], 0
    // mov eax, dword ptr [esp + 0x2214]
    // test eax, eax
    // if (...) GOTO(0x4982f4)
    // mov ecx, esi
    // mov esi, eax
    // mov eax, ecx
    // lea edi, [edx + 8]
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, eax
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [esp + 0x14]
    // mov edi, dword ptr [esp + 0x1c]
    // test ecx, ecx
    // if (...) GOTO(0x498dfa)
    // test dword ptr [ebp + 0xe8], 0x10000000
    // if (...) GOTO(0x498dfa)
    // or ebx, 4
    // lea esi, [ebp + 0x178]
    // mov word ptr [edx], bx
    // mov eax, esi
    // mov ecx, 0x10
    // mov dword ptr [eax], 0
    // add eax, 0x58
    // dec ecx
    // if (...) GOTO(0x49831f)
    // lea eax, [ebp + 0x170]
    // mov dword ptr [0x83ff6c], eax
    // mov eax, dword ptr [0x8400b0]
    // test eax, eax
    // if (...) GOTO(0x498435)
    // push edx
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf0], 0x4bb3f8
    // mov dword ptr [esp + 0x364], 0x4bb3e4
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0x36
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff4]
    // mov byte ptr [esp + 0x220c], 0x35
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x174c]
    // mov byte ptr [esp + 0x220c], 0x34
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc4]
    // CALL(0x489370)
    // lea ecx, [esp + 0x174c]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1500]
    // mov byte ptr [esp + 0x220c], 0x33
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d0]
    // mov byte ptr [esp + 0x220c], 0x32
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1490]
    // mov byte ptr [esp + 0x220c], 0x31
    // mov dword ptr [esp + 0x1490], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xd9c]
    // mov byte ptr [esp + 0x220c], 0x30
    // CALL(0x491410)
    // lea ecx, [esp + 0x6cc]
    // mov byte ptr [esp + 0x220c], 0x2f
    // CALL(0x491410)
    // mov byte ptr [esp + 0x220c], 0x2e
    // if (...) GOTO(0x4990ff)
    // mov edx, dword ptr [esp + 0x221c]
    // mov ecx, dword ptr [eax]
    // push 0
    // push 0
    // push(0x497f60)  // ptr?
    // push 0
    // push edx
    // push eax
    // CALL(dword)
    // mov dword ptr [esp + 0x20], 0xffffffff
    // xor eax, eax
    // mov ecx, esi
    // cmp dword ptr [ecx], 0
    // if (...) GOTO(0x4985b9)
    // inc eax
    // add ecx, 0x58
    // cmp eax, 0x10
    // if (...) GOTO(0x49845a)
    // mov ecx, dword ptr [esp + 0x10]
    // push ecx
    // CALL(0x4a5007)
    // add esp, 4
    // mov ebp, dword ptr [ebp + 0xf4]
    // mov dword ptr [esp + 0xf0], 0x4bb3f8
    // mov dword ptr [esp + 0x364], 0x4bb3e4
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0x6c
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff4]
    // mov byte ptr [esp + 0x220c], 0x6b
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x174c]
    // mov byte ptr [esp + 0x220c], 0x6a
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc4]
    // CALL(0x489370)
    // lea ecx, [esp + 0x174c]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1528]
    // mov byte ptr [esp + 0x220c], 0x69
    // CALL(0x489b30)
    // mov edx, dword ptr [esp + 0x152c]
    // mov esi, 0x4ba278
    // lea ecx, [esp + 0x14f8]
    // mov dword ptr [esp + 0x1528], esi
    // mov dword ptr [0x839650], edx
    // mov byte ptr [esp + 0x220c], 0x68
    // CALL(0x489b30)
    // mov eax, dword ptr [esp + 0x14fc]
    // lea ecx, [esp + 0x1490]
    // mov dword ptr [esp + 0x14f8], esi
    // mov dword ptr [0x839650], eax
    // mov byte ptr [esp + 0x220c], 0x67
    // mov dword ptr [esp + 0x1490], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xd9c]
    // mov byte ptr [esp + 0x220c], 0x66
    // CALL(0x491410)
    // lea ecx, [esp + 0x6cc]
    // mov byte ptr [esp + 0x220c], 0x65
    // CALL(0x491410)
    // lea ecx, [esp + 0x694]
    // mov byte ptr [esp + 0x220c], 0x64
    // CALL(0x474810)
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0xffffffff
    // CALL(0x4805a0)
    // mov eax, ebp
    // if (...) GOTO(0x499124)
    // lea ecx, [eax + eax*4]
    // mov dword ptr [esp + eax*4 + 0x70], 1
    // lea edx, [eax + ecx*2]
    // mov ecx, dword ptr [ebp + edx*8 + 0x17c]
    // cmp ecx, -1
    // mov dword ptr [esp + eax*4 + 0xb0], ecx
    // jae 0x4985de
    // mov dword ptr [esp + 0x20], ecx
    // mov eax, dword ptr [0x8400b0]
    // test eax, eax
    // if (...) GOTO(0x4988de)
    // mov edi, dword ptr [0x4ba21c]
    // CALL(edi)
    // mov dword ptr [esp + 0x30], eax
    // lea eax, [esp + 0x34]
    // mov ecx, 0xf
    // mov edx, dword ptr [esp + 0x30]
    // mov dword ptr [eax], edx
    // add eax, 4
    // dec ecx
    // if (...) GOTO(0x498600)
    // mov edx, dword ptr [esp + 0x1c]
    // mov esi, dword ptr [esp + 0x10]
    // mov eax, dword ptr [0x8400b0]
    // push edx
    // mov edx, dword ptr [esp + 0x2220]
    // push esi
    // mov ecx, dword ptr [eax]
    // push 0
    // push edx
    // mov edx, dword ptr [ebp + 0x77c]
    // push edx
    // push eax
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4989d4)
    // CALL(edi)
    // mov esi, eax
    // mov dword ptr [esp + 0x24], esi
    // CALL(edi)
    // sub eax, esi
    // cmp eax, 0x4e20
    // jae 0x498775
    // if (...) GOTO(0x498659)
    // mov edi, dword ptr [0x4ba21c]
    // mov eax, dword ptr [ebp + 0x18]
    // mov esi, dword ptr [0x4ba028]
    // push eax
    // CALL(esi)
    // mov ecx, dword ptr [ebp + 0x14]
    // push ecx
    // CALL(esi)
    // mov edx, dword ptr [esp + 0x20]
    // lea eax, [esp + 0x28]
    // push edx
    // push 0
    // push eax
    // push 2
    // CALL(dword)
    // cmp eax, 1
    // if (...) GOTO(0x49868b)
    // mov ecx, ebp
    // CALL(0x49b7b0)
    // CALL(edi)
    // mov dword ptr [esp + 0x14], eax
    // mov dword ptr [esp + 0x18], 0
    // lea esi, [ebp + 0x17c]
    // xor edi, edi
    // mov eax, dword ptr [esp + edi + 0x70]
    // xor ebx, ebx
    // cmp eax, ebx
    // if (...) GOTO(0x498747)
    // cmp dword ptr [esi - 0xc], ebx
    // if (...) GOTO(0x4986bd)
    // mov dword ptr [esp + edi + 0x70], ebx
    // if (...) GOTO(0x498747)
    // cmp dword ptr [esi - 4], ebx
    // if (...) GOTO(0x4986de)
    // CALL(dword)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [esp + edi + 0x30]
    // sub ecx, edx
    // mov dword ptr [esp + edi + 0x70], ebx
    // lea edx, [eax + ecx + 0x14]
    // shr edx, 1
    // mov dword ptr [esi], edx
    // if (...) GOTO(0x498747)
    // mov ecx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + edi + 0x30]
    // mov eax, dword ptr [esp + edi + 0xb0]
    // sub ecx, edx
    // cmp ecx, eax
    // jbe 0x49873f
    // lea edx, [eax + eax*2]
    // mov eax, dword ptr [0x8400b0]
    // shr edx, 1
    // cmp eax, ebx
    // mov dword ptr [esp + edi + 0xb0], edx
    // if (...) GOTO(0x498ac6)
    // CALL(dword)
    // mov edx, dword ptr [esp + 0x1c]
    // mov dword ptr [esp + edi + 0x30], eax
    // mov eax, dword ptr [0x8400b0]
    // push edx
    // mov edx, dword ptr [esp + 0x14]
    // mov ecx, dword ptr [eax]
    // push edx
    // mov edx, dword ptr [esi - 0xc]
    // push ebx
    // push edx
    // mov edx, dword ptr [ebp + 0x77c]
    // push edx
    // push eax
    // CALL(dword)
    // cmp eax, ebx
    // if (...) GOTO(0x498bbc)
    // mov dword ptr [esp + 0x18], 1
    // add edi, 4
    // add esi, 0x58
    // cmp edi, 0x40
    // if (...) GOTO(0x4986a1)
    // cmp dword ptr [esp + 0x18], ebx
    // if (...) GOTO(0x49846c)
    // CALL(dword)
    // sub eax, dword ptr [esp + 0x24]
    // cmp eax, 0x4e20
    // if (...) GOTO(0x498653)
    // mov byte ptr [0x83c340], 0
    // mov dword ptr [esp + 0x18], 1
    // lea ebx, [ebp + 0x170]
    // mov dword ptr [esp + 0x14], 0x10
    // mov eax, dword ptr [ebx + 8]
    // test eax, eax
    // if (...) GOTO(0x498839)
    // mov eax, dword ptr [ebx]
    // mov ecx, ebp
    // push eax
    // CALL(0x49aa30)
    // mov edi, eax
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, 0x83c340
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, edx
    // and ecx, 3
    // test eax, eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x498831)
    // mov edi, 0x4c52b8
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, 0x83c340
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, 0x4c3f70
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, 0x83c340
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov dword ptr [esp + 0x18], 0
    // mov eax, dword ptr [esp + 0x14]
    // add ebx, 0x58
    // dec eax
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x498792)
    // mov edi, 0x4c4944
    // or ecx, 0xffffffff
    // xor eax, eax
    // push -1
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // push -1
    // mov esi, edi
    // mov edx, ecx
    // mov edi, 0x83c340
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // push(0x83c340)  // ptr?
    // and ecx, 3
    // push eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // CALL(0x494cb0)
    // add esp, 0x10
    // lea ecx, [esp + 0xf0]
    // push 0
    // push 0
    // push 0
    // push -1
    // push(0x4e47e8)  // ptr?
    // push(0x4e4680)  // ptr?
    // CALL(0x48e1c0)
    // push 0
    // push 0
    // lea ecx, [esp + 0xf8]
    // CALL(0x48e900)
    // sub eax, 0
    // if (...) GOTO(0x4988cb)
    // mov eax, dword ptr [0x8400b0]
    // test eax, eax
    // if (...) GOTO(0x4988de)
    // if (...) GOTO(0x4985eb)
    // dec eax
    // if (...) GOTO(0x498cd0)
    // dec eax
    // if (...) GOTO(0x498cc4)
    // if (...) GOTO(0x498cd7)
    // mov eax, dword ptr [esp + 0x10]
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf0], 0x4bb3f8
    // mov dword ptr [esp + 0x364], 0x4bb3e4
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0x3f
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff4]
    // mov byte ptr [esp + 0x220c], 0x3e
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x174c]
    // mov byte ptr [esp + 0x220c], 0x3d
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc4]
    // CALL(0x489370)
    // lea ecx, [esp + 0x174c]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1500]
    // mov byte ptr [esp + 0x220c], 0x3c
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d0]
    // mov byte ptr [esp + 0x220c], 0x3b
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1490]
    // mov byte ptr [esp + 0x220c], 0x3a
    // mov dword ptr [esp + 0x1490], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xd9c]
    // mov byte ptr [esp + 0x220c], 0x39
    // CALL(0x491410)
    // lea ecx, [esp + 0x6cc]
    // mov byte ptr [esp + 0x220c], 0x38
    // CALL(0x491410)
    // mov byte ptr [esp + 0x220c], 0x37
    // if (...) GOTO(0x4990ff)
    // push esi
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf0], 0x4bb3f8
    // mov dword ptr [esp + 0x364], 0x4bb3e4
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0x48
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff4]
    // mov byte ptr [esp + 0x220c], 0x47
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x174c]
    // mov byte ptr [esp + 0x220c], 0x46
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc4]
    // CALL(0x489370)
    // lea ecx, [esp + 0x174c]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1500]
    // mov byte ptr [esp + 0x220c], 0x45
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d0]
    // mov byte ptr [esp + 0x220c], 0x44
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1490]
    // mov byte ptr [esp + 0x220c], 0x43
    // mov dword ptr [esp + 0x1490], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xd9c]
    // mov byte ptr [esp + 0x220c], 0x42
    // CALL(0x491410)
    // lea ecx, [esp + 0x6cc]
    // mov byte ptr [esp + 0x220c], 0x41
    // CALL(0x491410)
    // mov byte ptr [esp + 0x220c], 0x40
    // if (...) GOTO(0x4990ff)
    // mov ecx, dword ptr [esp + 0x10]
    // push ecx
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf0], 0x4bb3f8
    // mov dword ptr [esp + 0x364], 0x4bb3e4
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0x51
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff4]
    // mov byte ptr [esp + 0x220c], 0x50
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x174c]
    // mov byte ptr [esp + 0x220c], 0x4f
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc4]
    // CALL(0x489370)
    // lea ecx, [esp + 0x174c]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1500]
    // mov byte ptr [esp + 0x220c], 0x4e
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d0]
    // mov byte ptr [esp + 0x220c], 0x4d
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1490]
    // mov byte ptr [esp + 0x220c], 0x4c
    // mov dword ptr [esp + 0x1490], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xd9c]
    // mov byte ptr [esp + 0x220c], 0x4b
    // CALL(0x491410)
    // lea ecx, [esp + 0x6cc]
    // mov byte ptr [esp + 0x220c], 0x4a
    // CALL(0x491410)
    // mov byte ptr [esp + 0x220c], 0x49
    // if (...) GOTO(0x4990ff)
    // push ebx
    // push(0x4e47c8)  // ptr?
    // push(0x4e47b0)  // ptr?
    // push ebx
    // CALL(dword)
    // mov edx, dword ptr [esp + 0x10]
    // push edx
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf0], 0x4bb3f8
    // mov dword ptr [esp + 0x364], 0x4bb3e4
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0x5a
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff4]
    // mov byte ptr [esp + 0x220c], 0x59
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x174c]
    // mov byte ptr [esp + 0x220c], 0x58
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc4]
    // CALL(0x489370)
    // lea ecx, [esp + 0x174c]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1500]
    // mov byte ptr [esp + 0x220c], 0x57
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d0]
    // mov byte ptr [esp + 0x220c], 0x56
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1490]
    // mov byte ptr [esp + 0x220c], 0x55
    // mov dword ptr [esp + 0x1490], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xd9c]
    // mov byte ptr [esp + 0x220c], 0x54
    // CALL(0x491410)
    // lea ecx, [esp + 0x6cc]
    // mov byte ptr [esp + 0x220c], 0x53
    // CALL(0x491410)
    // mov byte ptr [esp + 0x220c], 0x52
    // if (...) GOTO(0x4990ff)
    // mov dword ptr [0x83afcc], 1
    // if (...) GOTO(0x498cd7)
    // mov ecx, ebp
    // CALL(0x497d10)
    // mov eax, dword ptr [esp + 0x10]
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf0], 0x4bb3f8
    // mov dword ptr [esp + 0x364], 0x4bb3e4
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0x63
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff4]
    // mov byte ptr [esp + 0x220c], 0x62
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x174c]
    // mov byte ptr [esp + 0x220c], 0x61
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc4]
    // CALL(0x489370)
    // lea ecx, [esp + 0x174c]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1528]
    // mov byte ptr [esp + 0x220c], 0x60
    // CALL(0x489b30)
    // mov ecx, dword ptr [esp + 0x152c]
    // mov esi, 0x4ba278
    // mov dword ptr [0x839650], ecx
    // lea ecx, [esp + 0x14f8]
    // mov dword ptr [esp + 0x1528], esi
    // mov byte ptr [esp + 0x220c], 0x5f
    // CALL(0x489b30)
    // mov edx, dword ptr [esp + 0x14fc]
    // lea ecx, [esp + 0x1490]
    // mov dword ptr [esp + 0x14f8], esi
    // mov dword ptr [0x839650], edx
    // mov byte ptr [esp + 0x220c], 0x5e
    // mov dword ptr [esp + 0x1490], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xd9c]
    // mov byte ptr [esp + 0x220c], 0x5d
    // CALL(0x491410)
    // lea ecx, [esp + 0x6cc]
    // mov byte ptr [esp + 0x220c], 0x5c
    // CALL(0x491410)
    // mov byte ptr [esp + 0x220c], 0x5b
    // if (...) GOTO(0x4990ff)
    // xor eax, eax
    // mov word ptr [edx], bx
    // test ecx, ecx
    // setne al
    // mov ecx, eax
    // mov eax, dword ptr [0x8400b0]
    // test eax, eax
    // if (...) GOTO(0x498f05)
    // push edx
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf0], 0x4bb3f8
    // mov dword ptr [esp + 0x364], 0x4bb3e4
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0x24
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff4]
    // mov byte ptr [esp + 0x220c], 0x23
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x174c]
    // mov byte ptr [esp + 0x220c], 0x22
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc4]
    // CALL(0x489370)
    // lea ecx, [esp + 0x174c]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1500]
    // mov byte ptr [esp + 0x220c], 0x21
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d0]
    // mov byte ptr [esp + 0x220c], 0x20
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1490]
    // mov byte ptr [esp + 0x220c], 0x1f
    // mov dword ptr [esp + 0x1490], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xd9c]
    // mov byte ptr [esp + 0x220c], 0x1e
    // CALL(0x491410)
    // lea ecx, [esp + 0x6cc]
    // mov byte ptr [esp + 0x220c], 0x1d
    // CALL(0x491410)
    // mov byte ptr [esp + 0x220c], 0x1c
    // if (...) GOTO(0x4990ff)
    // mov esi, dword ptr [eax]
    // push edi
    // push edx
    // mov edx, dword ptr [ebp + 0x77c]
    // push ecx
    // mov ecx, dword ptr [esp + 0x2228]
    // push ecx
    // push edx
    // push eax
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x49846c)
    // mov eax, dword ptr [esp + 0x10]
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf0], 0x4bb3f8
    // mov dword ptr [esp + 0x364], 0x4bb3e4
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0x2d
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff4]
    // mov byte ptr [esp + 0x220c], 0x2c
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x174c]
    // mov byte ptr [esp + 0x220c], 0x2b
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc4]
    // CALL(0x489370)
    // lea ecx, [esp + 0x174c]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1500]
    // mov byte ptr [esp + 0x220c], 0x2a
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d0]
    // mov byte ptr [esp + 0x220c], 0x29
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1490]
    // mov byte ptr [esp + 0x220c], 0x28
    // mov dword ptr [esp + 0x1490], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xd9c]
    // mov byte ptr [esp + 0x220c], 0x27
    // CALL(0x491410)
    // lea ecx, [esp + 0x6cc]
    // mov byte ptr [esp + 0x220c], 0x26
    // CALL(0x491410)
    // mov byte ptr [esp + 0x220c], 0x25
    // if (...) GOTO(0x4990ff)
    // mov dword ptr [esp + 0xf0], 0x4bb3f8
    // mov dword ptr [esp + 0x364], 0x4bb3e4
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0x12
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff4]
    // mov byte ptr [esp + 0x220c], 0x11
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x174c]
    // mov byte ptr [esp + 0x220c], 0x10
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc4]
    // CALL(0x489370)
    // lea ecx, [esp + 0x174c]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1500]
    // mov byte ptr [esp + 0x220c], 0xf
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d0]
    // mov byte ptr [esp + 0x220c], 0xe
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1490]
    // mov byte ptr [esp + 0x220c], 0xd
    // mov dword ptr [esp + 0x1490], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xd9c]
    // mov byte ptr [esp + 0x220c], 0xc
    // CALL(0x491410)
    // lea ecx, [esp + 0x6cc]
    // mov byte ptr [esp + 0x220c], 0xb
    // CALL(0x491410)
    // mov byte ptr [esp + 0x220c], 0xa
    // lea ecx, [esp + 0x694]
    // CALL(0x474810)
    // lea ecx, [esp + 0xf0]
    // mov dword ptr [esp + 0x220c], 0xffffffff
    // CALL(0x4805a0)
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0x2204]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // mov dword ptr fs:[0], ecx
    // add esp, 0x2200
    // return;
    // // nop
    // push -1
    // mov eax, dword ptr fs:[0]
    // push(0x4b8e40)  // ptr?
    // push eax
    // mov eax, 0x21f8
    // mov dword ptr fs:[0], esp
    // CALL(0x4a6070)
    // push ebx
    // push ebp
    // mov ebp, ecx
    // push esi
    // push edi
    // lea ecx, [esp + 0xf4]
    // CALL(0x48ce00)
    // mov eax, dword ptr [ebp + 0x14]
    // mov ecx, dword ptr [ebp + 0x18]
    // mov dword ptr [esp + 0x2c], eax
    // mov eax, dword ptr [0x8400b0]
    // test eax, eax
    // mov dword ptr [esp + 0x2210], 0
    // mov dword ptr [esp + 0x30], ecx
    // if (...) GOTO(0x499280)
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 9
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 8
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 7
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1504]
    // mov byte ptr [esp + 0x2210], 6
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 5
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 4
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 3
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 2
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 1
    // if (...) GOTO(0x49a9ee)
    // mov edi, dword ptr [esp + 0x221c]
    // test edi, edi
    // if (...) GOTO(0x49a90a)
    // cmp edi, dword ptr [ebp + 8]
    // if (...) GOTO(0x49a90a)
    // mov ecx, ebp
    // CALL(0x49ab40)
    // mov eax, dword ptr [esp + 0x2224]
    // mov ebx, dword ptr [esp + 0x2218]
    // mov ecx, dword ptr [esp + 0x2220]
    // test eax, 0xfff0
    // if (...) GOTO(0x49930a)
    // test byte ptr [esp + 0x2228], 4
    // if (...) GOTO(0x49930a)
    // mov eax, dword ptr [ebp + 0x77c]
    // cmp ecx, eax
    // if (...) GOTO(0x4992e8)
    // push -1
    // push 0
    // push eax
    // mov edx, ebx
    // push edi
    // push edx
    // lea ecx, [ebp + 0x120]
    // CALL(0x4a4b60)
    // if (...) GOTO(0x499a62)
    // test ecx, ecx
    // if (...) GOTO(0x49930a)
    // push -1
    // push ecx
    // push eax
    // push edi
    // push ebx
    // lea ecx, [ebp + 0x120]
    // CALL(0x4a4b60)
    // cmp dword ptr [ebp + 0x6f8], 2
    // if (...) GOTO(0x499a62)
    // lea esi, [edi + 0xc]
    // push esi
    // mov dword ptr [esp + 0x24], esi
    // CALL(0x4a504f)
    // add esp, 4
    // mov dword ptr [esp + 0x14], eax
    // test eax, eax
    // if (...) GOTO(0x49940f)
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x1b
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x1a
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x19
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1504]
    // mov byte ptr [esp + 0x2210], 0x18
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 0x17
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x16
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x15
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x14
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 0x13
    // if (...) GOTO(0x49a9ee)
    // mov edx, dword ptr [esp + 0x2228]
    // and edx, 1
    // if (...) GOTO(0x49942d)
    // mov ecx, dword ptr [ebp + 0xf4]
    // inc ecx
    // mov dword ptr [ebp + 0xf4], ecx
    // mov dword ptr [eax + 4], ecx
    // if (...) GOTO(0x499434)
    // mov dword ptr [eax + 4], 0
    // test ebx, ebx
    // if (...) GOTO(0x499451)
    // mov ecx, edi
    // mov esi, ebx
    // mov ebx, ecx
    // lea edi, [eax + 8]
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, ebx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov esi, dword ptr [esp + 0x20]
    // test edx, edx
    // if (...) GOTO(0x49a6e0)
    // test dword ptr [ebp + 0xe8], 0x10000000
    // if (...) GOTO(0x49a6e0)
    // mov ecx, dword ptr [esp + 0x2224]
    // or ecx, 4
    // mov word ptr [eax], cx
    // mov eax, dword ptr [esp + 0x2220]
    // test eax, eax
    // if (...) GOTO(0x499d9d)
    // or edi, 0xffffffff
    // xor ebx, ebx
    // mov dword ptr [esp + 0x24], edi
    // xor ecx, ecx
    // lea esi, [esp + 0x74]
    // lea eax, [ebp + 0x17c]
    // mov edx, dword ptr [eax - 0xc]
    // cmp edx, dword ptr [esp + 0x2220]
    // if (...) GOTO(0x4994d0)
    // test byte ptr [eax + 8], 2
    // if (...) GOTO(0x4994b6)
    // test byte ptr [esp + 0x2224], 0x10
    // if (...) GOTO(0x4994d0)
    // mov edx, dword ptr [eax]
    // mov ebx, 1
    // mov dword ptr [esi], edx
    // mov dword ptr [eax - 4], ebx
    // mov edx, dword ptr [eax]
    // mov dword ptr [esp + 0x1c], ecx
    // cmp edx, edi
    // jae 0x4994d7
    // mov edi, edx
    // if (...) GOTO(0x4994d7)
    // mov dword ptr [eax - 4], 0
    // inc ecx
    // add esi, 4
    // add eax, 0x58
    // cmp ecx, 0x10
    // if (...) GOTO(0x49949a)
    // test ebx, ebx
    // mov dword ptr [esp + 0x24], edi
    // if (...) GOTO(0x499a55)
    // mov eax, dword ptr [esp + 0x1c]
    // mov ebx, dword ptr [0x4ba21c]
    // lea esi, [esp + eax*4 + 0x34]
    // mov dword ptr [esp + 0x10], esi
    // CALL(ebx)
    // mov edx, dword ptr [esp + 0x20]
    // mov dword ptr [esi], eax
    // mov eax, dword ptr [0x8400b0]
    // push edx
    // mov edx, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [eax]
    // push edx
    // mov edx, dword ptr [esp + 0x2228]
    // push 0
    // push edx
    // mov edx, dword ptr [ebp + 0x77c]
    // push edx
    // push eax
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x49972e)
    // mov esi, dword ptr [0x4ba028]
    // CALL(ebx)
    // mov edi, eax
    // mov dword ptr [esp + 0x28], edi
    // CALL(ebx)
    // sub eax, edi
    // cmp eax, 0x4e20
    // jae 0x49962a
    // mov eax, dword ptr [esp + 0x1c]
    // mov edi, dword ptr [esp + 0x10]
    // lea ecx, [eax + eax*4]
    // lea edx, [eax + ecx*2]
    // lea eax, [ebp + edx*8]
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x49956e)
    // mov esi, dword ptr [0x4ba028]
    // mov ecx, dword ptr [ebp + 0x18]
    // push ecx
    // CALL(esi)
    // mov edx, dword ptr [ebp + 0x14]
    // push edx
    // CALL(esi)
    // mov eax, dword ptr [esp + 0x24]
    // lea ecx, [esp + 0x2c]
    // push eax
    // push 0
    // push ecx
    // push 2
    // CALL(dword)
    // cmp eax, 1
    // if (...) GOTO(0x49959a)
    // mov ecx, ebp
    // CALL(0x49b7b0)
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [eax + 0x178]
    // test ecx, ecx
    // if (...) GOTO(0x499a34)
    // mov ecx, dword ptr [eax + 0x170]
    // test ecx, ecx
    // if (...) GOTO(0x499a34)
    // mov edx, dword ptr [esp + 0x1c]
    // mov esi, dword ptr [esp + edx*4 + 0x74]
    // CALL(ebx)
    // sub eax, dword ptr [edi]
    // cmp eax, esi
    // jbe 0x499619
    // mov ecx, dword ptr [esp + 0x1c]
    // lea eax, [esi + esi*2]
    // shr eax, 1
    // mov dword ptr [esp + ecx*4 + 0x74], eax
    // mov eax, dword ptr [0x8400b0]
    // test eax, eax
    // if (...) GOTO(0x499838)
    // CALL(ebx)
    // mov ecx, dword ptr [esp + 0x20]
    // mov esi, dword ptr [esp + 0x14]
    // push ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // push esi
    // mov dword ptr [edi], eax
    // mov ecx, dword ptr [ecx + 0x170]
    // mov eax, dword ptr [0x8400b0]
    // push 0
    // push ecx
    // mov ecx, dword ptr [ebp + 0x77c]
    // mov edx, dword ptr [eax]
    // push ecx
    // push eax
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x49992e)
    // CALL(ebx)
    // sub eax, dword ptr [esp + 0x28]
    // cmp eax, 0x4e20
    // if (...) GOTO(0x499568)
    // mov eax, dword ptr [esp + 0x1c]
    // mov byte ptr [0x83c340], 0
    // lea edx, [eax + eax*4]
    // lea eax, [eax + edx*2]
    // mov ecx, dword ptr [ebp + eax*8 + 0x170]
    // push ecx
    // mov ecx, ebp
    // CALL(0x49aa30)
    // mov edi, eax
    // or ecx, 0xffffffff
    // xor eax, eax
    // push -1
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // push -1
    // mov esi, edi
    // mov edx, ecx
    // mov edi, 0x83c340
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // push(0x83c340)  // ptr?
    // and ecx, 3
    // push eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, 0x4c4944
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, 0x83c340
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // CALL(0x494cb0)
    // add esp, 0x10
    // lea ecx, [esp + 0xf4]
    // push 0
    // push 0
    // push 0
    // push -1
    // push(0x4e47e8)  // ptr?
    // push(0x4e4680)  // ptr?
    // CALL(0x48e1c0)
    // push 0
    // push 0
    // lea ecx, [esp + 0xfc]
    // CALL(0x48e900)
    // sub eax, 0
    // if (...) GOTO(0x49971b)
    // CALL(ebx)
    // mov ecx, dword ptr [esp + 0x10]
    // mov dword ptr [ecx], eax
    // mov ecx, dword ptr [esp + 0x20]
    // mov eax, dword ptr [0x8400b0]
    // push ecx
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [eax]
    // push ecx
    // mov ecx, dword ptr [esp + 0x2228]
    // push 0
    // push ecx
    // mov ecx, dword ptr [ebp + 0x77c]
    // push ecx
    // push eax
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x49972e)
    // if (...) GOTO(0x499533)
    // dec eax
    // if (...) GOTO(0x499ca0)
    // dec eax
    // if (...) GOTO(0x499c94)
    // if (...) GOTO(0x499ca7)
    // push 0
    // push(0x4e47c8)  // ptr?
    // push(0x4e47b0)  // ptr?
    // push 0
    // CALL(dword)
    // mov edx, dword ptr [esp + 0x14]
    // push edx
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x36
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x35
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x34
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1504]
    // mov byte ptr [esp + 0x2210], 0x33
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 0x32
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x31
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x30
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x2f
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 0x2e
    // if (...) GOTO(0x49a9ee)
    // mov eax, dword ptr [esp + 0x14]
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x3f
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x3e
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x3d
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1504]
    // mov byte ptr [esp + 0x2210], 0x3c
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 0x3b
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x3a
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x39
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x38
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 0x37
    // if (...) GOTO(0x49a9ee)
    // push 0
    // push(0x4e47c8)  // ptr?
    // push(0x4e47b0)  // ptr?
    // push 0
    // CALL(dword)
    // push esi
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x48
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x47
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x46
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1504]
    // mov byte ptr [esp + 0x2210], 0x45
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 0x44
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x43
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x42
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x41
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 0x40
    // if (...) GOTO(0x49a9ee)
    // mov eax, dword ptr [esp + 0x1c]
    // lea ecx, [eax + eax*4]
    // lea edx, [eax + ecx*2]
    // lea esi, [ebp + edx*8 + 0x17c]
    // CALL(ebx)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [edi]
    // sub ecx, edx
    // lea edx, [eax + ecx + 0x14]
    // shr edx, 1
    // mov dword ptr [esi], edx
    // mov edx, dword ptr [esp + 0x14]
    // push edx
    // CALL(0x4a5007)
    // add esp, 4
    // mov ebp, dword ptr [ebp + 0xf4]
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x89
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x88
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x87
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // mov ecx, dword ptr [esp + 0x1508]
    // mov ebx, 0x4bb22c
    // mov dword ptr [esp + 0x1504], ebx
    // lea eax, [esp + 0x152c]
    // mov edx, dword ptr [ecx + 4]
    // mov edi, 0x4bb228
    // mov dword ptr [esp + 0x10], eax
    // mov dword ptr [esp + edx + 0x1508], edi
    // lea ecx, [esp + 0x1504]
    // mov byte ptr [esp + 0x2210], 0x8a
    // CALL(0x4026a0)
    // lea ecx, [esp + 0x1520]
    // mov dword ptr [esp + 0x1518], 0
    // mov byte ptr [esp + 0x2210], 0x86
    // CALL(0x401c70)
    // mov eax, dword ptr [esp + 0x1530]
    // mov edx, dword ptr [esp + 0x14d8]
    // mov esi, 0x4ba278
    // mov dword ptr [0x839650], eax
    // mov dword ptr [esp + 0x152c], esi
    // mov dword ptr [esp + 0x14d4], ebx
    // mov eax, dword ptr [edx + 4]
    // lea ecx, [esp + 0x14fc]
    // mov dword ptr [esp + 0x10], ecx
    // mov dword ptr [esp + eax + 0x14d8], edi
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 0x8b
    // CALL(0x4026a0)
    // lea ecx, [esp + 0x14f0]
    // mov dword ptr [esp + 0x14e8], 0
    // mov byte ptr [esp + 0x2210], 0x85
    // CALL(0x401c70)
    // mov ecx, dword ptr [esp + 0x1500]
    // mov dword ptr [esp + 0x14fc], esi
    // mov dword ptr [0x839650], ecx
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x84
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea edx, [esp + 0xda0]
    // mov edi, 0x4bb5b4
    // mov esi, 0x4bb5a0
    // mov dword ptr [esp + 0x10], edx
    // mov dword ptr [esp + 0xda0], edi
    // mov dword ptr [esp + 0x1014], esi
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x8c
    // CALL(0x4a14c0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x83
    // CALL(0x488650)
    // lea eax, [esp + 0x6d0]
    // mov dword ptr [esp + 0x10], eax
    // mov dword ptr [esp + 0x6d0], edi
    // mov dword ptr [esp + 0x944], esi
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x8d
    // CALL(0x4a14c0)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x82
    // CALL(0x488650)
    // lea ecx, [esp + 0x698]
    // mov byte ptr [esp + 0x2210], 0x81
    // CALL(0x474810)
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0xffffffff
    // CALL(0x4805a0)
    // mov eax, ebp
    // if (...) GOTO(0x49aa13)
    // mov dword ptr [0x83afcc], 1
    // if (...) GOTO(0x499ca7)
    // mov ecx, ebp
    // CALL(0x497d10)
    // mov eax, dword ptr [esp + 0x14]
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x51
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x50
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x4f
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1504]
    // mov byte ptr [esp + 0x2210], 0x4e
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 0x4d
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x4c
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x4b
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x4a
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 0x49
    // if (...) GOTO(0x49a9ee)
    // or edi, 0xffffffff
    // xor esi, esi
    // mov dword ptr [esp + 0x24], edi
    // lea eax, [ebp + 0x17c]
    // xor ecx, ecx
    // mov ebx, 1
    // mov edx, dword ptr [eax - 0xc]
    // test edx, edx
    // if (...) GOTO(0x499dec)
    // cmp edx, dword ptr [ebp + 0x77c]
    // if (...) GOTO(0x499dec)
    // test byte ptr [eax + 8], 2
    // if (...) GOTO(0x499dd2)
    // test byte ptr [esp + 0x2224], 0x10
    // if (...) GOTO(0x499dec)
    // mov dword ptr [eax - 4], ebx
    // mov edx, dword ptr [eax]
    // cmp edx, edi
    // mov dword ptr [esp + ecx + 0xb4], ebx
    // mov dword ptr [esp + ecx + 0x74], edx
    // mov esi, ebx
    // jae 0x499df8
    // mov edi, edx
    // if (...) GOTO(0x499df8)
    // xor edx, edx
    // mov dword ptr [eax - 4], edx
    // mov dword ptr [esp + ecx + 0xb4], edx
    // add ecx, 4
    // add eax, 0x58
    // cmp ecx, 0x40
    // if (...) GOTO(0x499db3)
    // test esi, esi
    // mov dword ptr [esp + 0x24], edi
    // if (...) GOTO(0x499a55)
    // mov eax, dword ptr [0x8400b0]
    // test eax, eax
    // if (...) GOTO(0x49a107)
    // CALL(dword)
    // mov dword ptr [esp + 0x34], eax
    // lea eax, [esp + 0x38]
    // mov ecx, 0xf
    // mov edx, dword ptr [esp + 0x34]
    // mov dword ptr [eax], edx
    // add eax, 4
    // dec ecx
    // if (...) GOTO(0x499e2f)
    // mov edx, dword ptr [esp + 0x20]
    // mov esi, dword ptr [esp + 0x14]
    // mov eax, dword ptr [0x8400b0]
    // push edx
    // mov edx, dword ptr [ebp + 0x77c]
    // push esi
    // mov ecx, dword ptr [eax]
    // push 0
    // push 0
    // push edx
    // push eax
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x49a1fd)
    // mov edi, dword ptr [0x4ba21c]
    // CALL(edi)
    // mov esi, eax
    // mov dword ptr [esp + 0x28], esi
    // CALL(edi)
    // sub eax, esi
    // cmp eax, 0x4e20
    // jae 0x499f9e
    // mov ebx, edi
    // mov eax, dword ptr [ebp + 0x18]
    // mov esi, dword ptr [0x4ba028]
    // push eax
    // CALL(esi)
    // mov ecx, dword ptr [ebp + 0x14]
    // push ecx
    // CALL(esi)
    // mov edx, dword ptr [esp + 0x24]
    // lea eax, [esp + 0x2c]
    // push edx
    // push 0
    // push eax
    // push 2
    // CALL(dword)
    // cmp eax, 1
    // if (...) GOTO(0x499eb4)
    // mov ecx, ebp
    // CALL(0x49b7b0)
    // CALL(ebx)
    // xor edi, edi
    // mov dword ptr [esp + 0x18], eax
    // mov dword ptr [esp + 0x10], edi
    // lea esi, [ebp + 0x17c]
    // mov eax, dword ptr [esp + edi + 0xb4]
    // test eax, eax
    // if (...) GOTO(0x499f72)
    // mov eax, dword ptr [esi - 0xc]
    // test eax, eax
    // if (...) GOTO(0x499eec)
    // mov dword ptr [esp + edi + 0xb4], 0
    // if (...) GOTO(0x499f72)
    // mov eax, dword ptr [esi - 4]
    // test eax, eax
    // if (...) GOTO(0x499f12)
    // CALL(ebx)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [esp + edi + 0x34]
    // sub ecx, edx
    // mov dword ptr [esp + edi + 0xb4], 0
    // lea edx, [eax + ecx + 0x14]
    // shr edx, 1
    // mov dword ptr [esi], edx
    // if (...) GOTO(0x499f72)
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + edi + 0x34]
    // mov eax, dword ptr [esp + edi + 0x74]
    // sub ecx, edx
    // cmp ecx, eax
    // jbe 0x499f6a
    // lea edx, [eax + eax*2]
    // mov eax, dword ptr [0x8400b0]
    // shr edx, 1
    // test eax, eax
    // mov dword ptr [esp + edi + 0x74], edx
    // if (...) GOTO(0x49a303)
    // CALL(ebx)
    // mov edx, dword ptr [esp + 0x20]
    // mov dword ptr [esp + edi + 0x34], eax
    // mov eax, dword ptr [0x8400b0]
    // push edx
    // mov edx, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [eax]
    // push edx
    // mov edx, dword ptr [esi - 0xc]
    // push 0
    // push edx
    // mov edx, dword ptr [ebp + 0x77c]
    // push edx
    // push eax
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x49a411)
    // mov dword ptr [esp + 0x10], 1
    // add edi, 4
    // add esi, 0x58
    // cmp edi, 0x40
    // if (...) GOTO(0x499ec6)
    // mov eax, dword ptr [esp + 0x10]
    // test eax, eax
    // if (...) GOTO(0x499a55)
    // CALL(ebx)
    // sub eax, dword ptr [esp + 0x28]
    // cmp eax, 0x4e20
    // if (...) GOTO(0x499e82)
    // mov byte ptr [0x83c340], 0
    // mov dword ptr [esp + 0x10], 1
    // lea ebx, [ebp + 0x170]
    // mov dword ptr [esp + 0x18], 0x10
    // mov eax, dword ptr [ebx + 8]
    // test eax, eax
    // if (...) GOTO(0x49a062)
    // mov eax, dword ptr [ebx]
    // mov ecx, ebp
    // push eax
    // CALL(0x49aa30)
    // mov edi, eax
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, 0x83c340
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov eax, dword ptr [esp + 0x10]
    // mov ecx, edx
    // and ecx, 3
    // test eax, eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x49a05a)
    // mov edi, 0x4c52b8
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, 0x83c340
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, 0x4c3f70
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, 0x83c340
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov dword ptr [esp + 0x10], 0
    // mov eax, dword ptr [esp + 0x18]
    // add ebx, 0x58
    // dec eax
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x499fbb)
    // mov edi, 0x4c4944
    // or ecx, 0xffffffff
    // xor eax, eax
    // push -1
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // push -1
    // mov esi, edi
    // mov edx, ecx
    // mov edi, 0x83c340
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // push(0x83c340)  // ptr?
    // and ecx, 3
    // push eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // CALL(0x494cb0)
    // add esp, 0x10
    // lea ecx, [esp + 0xf4]
    // push 0
    // push 0
    // push 0
    // push -1
    // push(0x4e47e8)  // ptr?
    // push(0x4e4680)  // ptr?
    // CALL(0x48e1c0)
    // push 0
    // push 0
    // lea ecx, [esp + 0xfc]
    // CALL(0x48e900)
    // sub eax, 0
    // if (...) GOTO(0x49a0f4)
    // mov eax, dword ptr [0x8400b0]
    // test eax, eax
    // if (...) GOTO(0x49a107)
    // if (...) GOTO(0x499e1c)
    // dec eax
    // if (...) GOTO(0x49a53f)
    // dec eax
    // if (...) GOTO(0x49a533)
    // if (...) GOTO(0x49a546)
    // mov eax, dword ptr [esp + 0x14]
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x5a
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x59
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x58
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1504]
    // mov byte ptr [esp + 0x2210], 0x57
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 0x56
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x55
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x54
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x53
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 0x52
    // if (...) GOTO(0x49a9ee)
    // push 0
    // push(0x4e47c8)  // ptr?
    // push(0x4e47b0)  // ptr?
    // push 0
    // CALL(dword)
    // push esi
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x63
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x62
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x61
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1504]
    // mov byte ptr [esp + 0x2210], 0x60
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 0x5f
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x5e
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x5d
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x5c
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 0x5b
    // if (...) GOTO(0x49a9ee)
    // mov ecx, dword ptr [esp + 0x14]
    // push ecx
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x6c
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x6b
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x6a
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x152c]
    // mov byte ptr [esp + 0x2210], 0x69
    // CALL(0x489b30)
    // mov edx, dword ptr [esp + 0x1530]
    // lea ecx, [esp + 0x14d4]
    // mov dword ptr [esp + 0x152c], 0x4ba278
    // mov dword ptr [0x839650], edx
    // mov byte ptr [esp + 0x2210], 0x68
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x67
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x66
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x65
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 0x64
    // if (...) GOTO(0x49a9ee)
    // push 0
    // push(0x4e47c8)  // ptr?
    // push(0x4e47b0)  // ptr?
    // push 0
    // CALL(dword)
    // mov eax, dword ptr [esp + 0x14]
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x75
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x74
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x73
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x152c]
    // mov byte ptr [esp + 0x2210], 0x72
    // CALL(0x489b30)
    // mov ecx, dword ptr [esp + 0x1530]
    // mov dword ptr [esp + 0x152c], 0x4ba278
    // mov dword ptr [0x839650], ecx
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 0x71
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x70
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x6f
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x6e
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 0x6d
    // if (...) GOTO(0x49a9ee)
    // mov dword ptr [0x83afcc], 1
    // if (...) GOTO(0x49a546)
    // mov ecx, ebp
    // CALL(0x497d10)
    // push 0
    // push(0x4e47c8)  // ptr?
    // push(0x4e47fc)  // ptr?
    // push 0
    // CALL(dword)
    // mov edx, dword ptr [esp + 0x14]
    // push edx
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x7e
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x7d
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x7c
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x152c]
    // mov byte ptr [esp + 0x2210], 0x7b
    // CALL(0x489b30)
    // mov eax, dword ptr [esp + 0x1530]
    // mov esi, 0x4ba278
    // lea ecx, [esp + 0x14fc]
    // mov dword ptr [esp + 0x152c], esi
    // mov dword ptr [0x839650], eax
    // mov byte ptr [esp + 0x2210], 0x7a
    // CALL(0x489b30)
    // mov ecx, dword ptr [esp + 0x1500]
    // mov dword ptr [esp + 0x14fc], esi
    // mov dword ptr [0x839650], ecx
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x79
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea edx, [esp + 0xda0]
    // mov edi, 0x4bb5b4
    // mov esi, 0x4bb5a0
    // mov dword ptr [esp + 0x10], edx
    // mov dword ptr [esp + 0xda0], edi
    // mov dword ptr [esp + 0x1014], esi
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x7f
    // CALL(0x4a14c0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x78
    // CALL(0x488650)
    // lea eax, [esp + 0x6d0]
    // mov dword ptr [esp + 0x6d0], edi
    // mov dword ptr [esp + 0x10], eax
    // mov dword ptr [esp + 0x944], esi
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x80
    // CALL(0x4a14c0)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x77
    // CALL(0x488650)
    // mov byte ptr [esp + 0x2210], 0x76
    // if (...) GOTO(0x49a9ee)
    // mov cx, word ptr [esp + 0x2224]
    // mov word ptr [eax], cx
    // xor ecx, ecx
    // test edx, edx
    // setne cl
    // mov edx, ecx
    // mov ecx, dword ptr [0x8400b0]
    // test ecx, ecx
    // if (...) GOTO(0x49a7f4)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x24
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x23
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x22
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1504]
    // mov byte ptr [esp + 0x2210], 0x21
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 0x20
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x1f
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x1e
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x1d
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 0x1c
    // if (...) GOTO(0x49a9ee)
    // mov edi, dword ptr [ecx]
    // push esi
    // push eax
    // mov eax, dword ptr [ebp + 0x77c]
    // push edx
    // mov edx, dword ptr [esp + 0x222c]
    // push edx
    // push eax
    // push ecx
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x499a55)
    // mov ecx, dword ptr [esp + 0x14]
    // push ecx
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x2d
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x2c
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x2b
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1504]
    // mov byte ptr [esp + 0x2210], 0x2a
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 0x29
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0x28
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0x27
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0x26
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 0x25
    // if (...) GOTO(0x49a9ee)
    // mov dword ptr [esp + 0xf4], 0x4bb3f8
    // mov dword ptr [esp + 0x368], 0x4bb3e4
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0x12
    // CALL(0x48d480)
    // lea ecx, [esp + 0x1ff8]
    // mov byte ptr [esp + 0x2210], 0x11
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1750]
    // mov byte ptr [esp + 0x2210], 0x10
    // CALL(0x491500)
    // lea ecx, [esp + 0x1cc8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1750]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1504]
    // mov byte ptr [esp + 0x2210], 0xf
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14d4]
    // mov byte ptr [esp + 0x2210], 0xe
    // CALL(0x489c90)
    // lea ecx, [esp + 0x1494]
    // mov byte ptr [esp + 0x2210], 0xd
    // mov dword ptr [esp + 0x1494], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xda0]
    // mov byte ptr [esp + 0x2210], 0xc
    // CALL(0x491410)
    // lea ecx, [esp + 0x6d0]
    // mov byte ptr [esp + 0x2210], 0xb
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2210], 0xa
    // lea ecx, [esp + 0x698]
    // CALL(0x474810)
    // lea ecx, [esp + 0xf4]
    // mov dword ptr [esp + 0x2210], 0xffffffff
    // CALL(0x4805a0)
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0x2208]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // mov dword ptr fs:[0], ecx
    // add esp, 0x2204
    // return;
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // xor eax, eax
    // lea edx, [ecx + 0x170]
    // cmp dword ptr [edx], esi
    // if (...) GOTO(0x49aa4a)
    // inc eax
    // add edx, 0x58
    // cmp eax, 0x10
    // if (...) GOTO(0x49aa3d)
    // cmp eax, 0x10
    // pop esi
    // if (...) GOTO(0x49aa55)
    // xor eax, eax
    // return;
    // lea edx, [eax + eax*4]
    // lea eax, [eax + edx*2]
    // lea eax, [ecx + eax*8 + 0x185]
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push esi
    // mov esi, ecx
    // push edi
    // mov edi, 0x40000000
    // test dword ptr [esi + 0xe8], edi
    // if (...) GOTO(0x49aaac)
    // mov eax, dword ptr [esi + 0x64]
    // lea ecx, [esi + 0x64]
    // CALL(dword)
    // cmp eax, 0x32
    // jae 0x49ab33
    // mov eax, dword ptr [esi + 0xe8]
    // pop edi
    // and eax, 0xbfffffff
    // mov dword ptr [esi + 0xe8], eax
    // pop esi
    // pop ebx
    // return;
    // mov edx, dword ptr [esi + 0x64]
    // lea ebx, [esi + 0x64]
    // mov ecx, ebx
    // CALL(dword)
    // cmp eax, 0x64
    // jbe 0x49aad8
    // mov eax, dword ptr [esi + 0xe8]
    // mov ecx, ebx
    // or eax, edi
    // mov dword ptr [esi + 0xe8], eax
    // mov eax, dword ptr [ebx]
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov edx, dword ptr [ebx]
    // mov ecx, ebx
    // CALL(dword)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x49ab33)
    // mov eax, dword ptr [esi + 0x60]
    // mov ecx, dword ptr [esi + 0xe4]
    // mov edx, dword ptr [edi + 0x20]
    // push 0
    // test eax, eax
    // mov eax, dword ptr [edi + 0x18]
    // push(0x100)
    // push ecx
    // if (...) GOTO(0x49ab1d)
    // sub edx, eax
    // mov ecx, esi
    // push edx
    // push eax
    // CALL(0x497fc0)
    // mov eax, dword ptr [ebx]
    // push edi
    // mov ecx, ebx
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // sub edx, eax
    // mov ecx, esi
    // push edx
    // push eax
    // CALL(0x499140)
    // mov eax, dword ptr [ebx]
    // push edi
    // mov ecx, ebx
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push ecx
    // mov eax, dword ptr [0x8400b0]
    // push ebx
    // push ebp
    // push esi
    // test eax, eax
    // push edi
    // mov esi, ecx
    // if (...) GOTO(0x49acea)
    // mov ebp, dword ptr [0x4ba21c]
    // CALL(ebp)
    // mov ecx, dword ptr [esi + 0xec]
    // sub eax, 0x7d0
    // cmp eax, ecx
    // jbe 0x49acea
    // mov eax, dword ptr [0x8400c0]
    // test eax, eax
    // if (...) GOTO(0x49acea)
    // push 0
    // push(0x20)
    // push 0
    // mov edi, 1
    // push 0
    // push 0
    // mov ecx, esi
    // mov dword ptr [0x8400c0], edi
    // CALL(0x499140)
    // CALL(ebp)
    // mov dword ptr [esi + 0xec], eax
    // mov eax, dword ptr [0x8400bc]
    // test eax, eax
    // mov dword ptr [0x8400c0], 0
    // if (...) GOTO(0x49acea)
    // mov dword ptr [0x8400bc], edi
    // mov eax, dword ptr [esi + 0xe8]
    // test eax, 0x40000
    // if (...) GOTO(0x49ace0)
    // mov eax, dword ptr [esi + 0x77c]
    // mov ecx, dword ptr [esi + 0x780]
    // cmp eax, ecx
    // if (...) GOTO(0x49ac42)
    // lea edi, [esi + 0x170]
    // mov dword ptr [esp + 0x10], 0x10
    // mov eax, dword ptr [edi]
    // test eax, eax
    // if (...) GOTO(0x49ac24)
    // cmp eax, dword ptr [esi + 0x77c]
    // if (...) GOTO(0x49ac24)
    // mov ebx, dword ptr [edi + 0x10]
    // test ebx, ebx
    // if (...) GOTO(0x49ac24)
    // CALL(ebp)
    // mov ecx, dword ptr [esi + 0xf0]
    // sub eax, ebx
    // cmp eax, ecx
    // jbe 0x49ac24
    // mov eax, dword ptr [edi]
    // push 0
    // push eax
    // mov ecx, esi
    // CALL(0x49acf0)
    // test eax, eax
    // if (...) GOTO(0x49ac24)
    // CALL(ebp)
    // mov dword ptr [edi + 0x10], eax
    // mov eax, dword ptr [esp + 0x10]
    // add edi, 0x58
    // dec eax
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x49abec)
    // pop edi
    // pop esi
    // pop ebp
    // mov dword ptr [0x8400bc], 0
    // pop ebx
    // pop ecx
    // return;
    // cmp eax, dword ptr [esi + 0x1c8]
    // if (...) GOTO(0x49ac92)
    // mov edi, dword ptr [esi + 0x180]
    // test edi, edi
    // if (...) GOTO(0x49ace0)
    // CALL(ebp)
    // mov ecx, dword ptr [esi + 0xf0]
    // sub eax, edi
    // cmp eax, ecx
    // jbe 0x49ace0
    // mov ecx, dword ptr [esi + 0x170]
    // push 0
    // push ecx
    // mov ecx, esi
    // CALL(0x49acf0)
    // test eax, eax
    // if (...) GOTO(0x49ace0)
    // CALL(ebp)
    // mov dword ptr [esi + 0x180], eax
    // pop edi
    // pop esi
    // pop ebp
    // mov dword ptr [0x8400bc], 0
    // pop ebx
    // pop ecx
    // return;
    // lea ebx, [esi + 0x180]
    // xor ebp, ebp
    // mov dword ptr [esp + 0x10], ebx
    // mov edi, dword ptr [ebx]
    // test edi, edi
    // if (...) GOTO(0x49acea)
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0xf0]
    // sub eax, edi
    // cmp eax, ecx
    // if (...) GOTO(0x49acea)
    // inc ebp
    // add ebx, 0x58
    // cmp ebp, 2
    // if (...) GOTO(0x49ac9e)
    // push 0
    // push -1
    // mov ecx, esi
    // CALL(0x49acf0)
    // test eax, eax
    // if (...) GOTO(0x49ace0)
    // CALL(dword)
    // mov edx, dword ptr [esp + 0x10]
    // mov dword ptr [esi + 0x1d8], eax
    // mov dword ptr [edx], eax
    // mov dword ptr [0x8400bc], 0
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // mov eax, dword ptr fs:[0]
    // push -1
    // push(0x4b90ad)  // ptr?
    // push eax
    // mov eax, 0x221c
    // mov dword ptr fs:[0], esp
    // CALL(0x4a6070)
    // push ebx
    // push ebp
    // mov ebp, ecx
    // push esi
    // lea ecx, [esp + 0x114]
    // CALL(0x48ce00)
    // mov esi, dword ptr [esp + 0x2238]
    // mov dword ptr [esp + 0x2230], 0
    // xor eax, eax
    // lea ecx, [ebp + 0x170]
    // cmp esi, dword ptr [ecx]
    // if (...) GOTO(0x49ad47)
    // inc eax
    // add ecx, 0x58
    // cmp eax, 0x10
    // if (...) GOTO(0x49ad3a)
    // cmp eax, 0x10
    // if (...) GOTO(0x49ae5e)
    // mov dword ptr [esp + 0x114], 0x4bb3f8
    // mov dword ptr [esp + 0x388], 0x4bb3e4
    // lea ecx, [esp + 0x114]
    // mov dword ptr [esp + 0x2230], 9
    // CALL(0x48d480)
    // lea ecx, [esp + 0x2018]
    // mov byte ptr [esp + 0x2230], 8
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1770]
    // mov byte ptr [esp + 0x2230], 7
    // CALL(0x491500)
    // lea ecx, [esp + 0x1ce8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1770]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1524]
    // mov byte ptr [esp + 0x2230], 6
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14f4]
    // mov byte ptr [esp + 0x2230], 5
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14b4]
    // mov byte ptr [esp + 0x2230], 4
    // mov dword ptr [esp + 0x14b4], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xdc0]
    // mov byte ptr [esp + 0x2230], 3
    // CALL(0x491410)
    // lea ecx, [esp + 0x6f0]
    // mov byte ptr [esp + 0x2230], 2
    // CALL(0x491410)
    // lea ecx, [esp + 0x6b8]
    // mov byte ptr [esp + 0x2230], 1
    // CALL(0x474810)
    // lea ecx, [esp + 0x114]
    // mov dword ptr [esp + 0x2230], 0xffffffff
    // CALL(0x4805a0)
    // xor eax, eax
    // if (...) GOTO(0x49b652)
    // mov eax, dword ptr [esp + 0x223c]
    // or ebx, 0xffffffff
    // test eax, eax
    // if (...) GOTO(0x49b527)
    // mov eax, dword ptr [ebp + 0x77c]
    // mov ecx, dword ptr [ebp + 0x780]
    // cmp eax, ecx
    // if (...) GOTO(0x49b34a)
    // cmp eax, dword ptr [ebp + 0x1c8]
    // if (...) GOTO(0x49b34a)
    // mov eax, dword ptr [ebp + 0x170]
    // or esi, 0xffffffff
    // push esi
    // push esi
    // push eax
    // mov ecx, ebp
    // CALL(0x49aa30)
    // push eax
    // push 0
    // CALL(0x494cb0)
    // mov ecx, dword ptr [ebp + 0x1c8]
    // add esp, 0x10
    // push esi
    // push esi
    // push ecx
    // mov ecx, ebp
    // CALL(0x49aa30)
    // push eax
    // push 1
    // CALL(0x494cb0)
    // add esp, 0x10
    // lea ecx, [esp + 0x114]
    // push 0
    // push 0
    // push 0
    // push 1
    // push(0x4e4860)  // ptr?
    // push(0x4e4680)  // ptr?
    // CALL(0x48e1c0)
    // push 0
    // push 0
    // lea ecx, [esp + 0x11c]
    // CALL(0x48e900)
    // sub eax, 0
    // if (...) GOTO(0x49b238)
    // dec eax
    // if (...) GOTO(0x49b150)
    // dec eax
    // if (...) GOTO(0x49b000)
    // mov dword ptr [esp + 0x114], 0x4bb3f8
    // mov dword ptr [esp + 0x388], 0x4bb3e4
    // lea ecx, [esp + 0x114]
    // mov dword ptr [esp + 0x2230], 0x2d
    // CALL(0x48d480)
    // lea ecx, [esp + 0x2018]
    // mov byte ptr [esp + 0x2230], 0x2c
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1574]
    // mov byte ptr [esp + 0x2230], 0x2b
    // CALL(0x4914d0)
    // lea ecx, [esp + 0x1524]
    // mov byte ptr [esp + 0x2230], 0x2a
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14f4]
    // mov byte ptr [esp + 0x2230], 0x29
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14b4]
    // mov byte ptr [esp + 0x2230], 0x28
    // mov dword ptr [esp + 0x14b4], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xdc0]
    // mov byte ptr [esp + 0x2230], 0x27
    // CALL(0x491410)
    // lea ecx, [esp + 0x6f0]
    // mov byte ptr [esp + 0x2230], 0x26
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2230], 0x25
    // lea ecx, [esp + 0x6b8]
    // CALL(0x474810)
    // lea ecx, [esp + 0x114]
    // mov dword ptr [esp + 0x2230], esi
    // CALL(0x4805a0)
    // xor eax, eax
    // if (...) GOTO(0x49b652)
    // push 0
    // push 0
    // push 0
    // push esi
    // push(0x4e484c)  // ptr?
    // push(0x4e4680)  // ptr?
    // lea ecx, [esp + 0x12c]
    // CALL(0x48e1c0)
    // push 0
    // push 0
    // lea ecx, [esp + 0x11c]
    // CALL(0x48e900)
    // cmp eax, 3
    // if (...) GOTO(0x49b067)
    // if (...) GOTO(dword)
    // mov dword ptr [ebp + 0xf0], 0x1388
    // if (...) GOTO(0x49b067)
    // mov dword ptr [ebp + 0xf0], 0x2710
    // if (...) GOTO(0x49b067)
    // mov dword ptr [ebp + 0xf0], 0x4e20
    // if (...) GOTO(0x49b067)
    // mov dword ptr [ebp + 0xf0], 0x7530
    // mov dword ptr [esp + 0x114], 0x4bb3f8
    // mov dword ptr [esp + 0x388], 0x4bb3e4
    // lea ecx, [esp + 0x114]
    // mov dword ptr [esp + 0x2230], 0x24
    // CALL(0x48d480)
    // lea ecx, [esp + 0x2018]
    // mov byte ptr [esp + 0x2230], 0x23
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1574]
    // mov byte ptr [esp + 0x2230], 0x22
    // CALL(0x4914d0)
    // lea ecx, [esp + 0x154c]
    // mov byte ptr [esp + 0x2230], 0x21
    // CALL(0x489b30)
    // mov edx, dword ptr [esp + 0x1550]
    // lea ecx, [esp + 0x14f4]
    // mov dword ptr [esp + 0x154c], 0x4ba278
    // mov dword ptr [0x839650], edx
    // mov byte ptr [esp + 0x2230], 0x20
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14b4]
    // mov byte ptr [esp + 0x2230], 0x1f
    // mov dword ptr [esp + 0x14b4], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xdc0]
    // mov byte ptr [esp + 0x2230], 0x1e
    // CALL(0x491410)
    // lea ecx, [esp + 0x6f0]
    // mov byte ptr [esp + 0x2230], 0x1d
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2230], 0x1c
    // if (...) GOTO(0x49afda)
    // mov dword ptr [esp + 0x114], 0x4bb3f8
    // mov dword ptr [esp + 0x388], 0x4bb3e4
    // lea ecx, [esp + 0x114]
    // mov dword ptr [esp + 0x2230], 0x1b
    // CALL(0x48d480)
    // lea ecx, [esp + 0x2018]
    // mov byte ptr [esp + 0x2230], 0x1a
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1574]
    // mov byte ptr [esp + 0x2230], 0x19
    // CALL(0x4914d0)
    // lea ecx, [esp + 0x154c]
    // mov byte ptr [esp + 0x2230], 0x18
    // CALL(0x489b30)
    // mov eax, dword ptr [esp + 0x1550]
    // lea ecx, [esp + 0x14f4]
    // mov dword ptr [esp + 0x154c], 0x4ba278
    // mov dword ptr [0x839650], eax
    // mov byte ptr [esp + 0x2230], 0x17
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14b4]
    // mov byte ptr [esp + 0x2230], 0x16
    // mov dword ptr [esp + 0x14b4], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xdc0]
    // mov byte ptr [esp + 0x2230], 0x15
    // CALL(0x491410)
    // lea ecx, [esp + 0x6f0]
    // mov byte ptr [esp + 0x2230], 0x14
    // CALL(0x491410)
    // mov byte ptr [esp + 0x2230], 0x13
    // if (...) GOTO(0x49afda)
    // mov dword ptr [0x83afcc], 1
    // mov dword ptr [esp + 0x114], 0x4bb3f8
    // mov dword ptr [esp + 0x388], 0x4bb3e4
    // lea ecx, [esp + 0x114]
    // mov dword ptr [esp + 0x2230], 0x12
    // CALL(0x48d480)
    // lea ecx, [esp + 0x2018]
    // mov byte ptr [esp + 0x2230], 0x11
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1770]
    // mov byte ptr [esp + 0x2230], 0x10
    // CALL(0x491500)
    // lea ecx, [esp + 0x1ce8]
    // CALL(0x489370)
    // lea ecx, [esp + 0x1770]
    // CALL(0x4805a0)
    // lea ecx, [esp + 0x1524]
    // mov byte ptr [esp + 0x2230], 0xf
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14f4]
    // mov byte ptr [esp + 0x2230], 0xe
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14b4]
    // mov byte ptr [esp + 0x2230], 0xd
    // mov dword ptr [esp + 0x14b4], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xdc0]
    // mov byte ptr [esp + 0x2230], 0xc
    // CALL(0x491410)
    // lea ecx, [esp + 0x6f0]
    // mov byte ptr [esp + 0x2230], 0xb
    // CALL(0x491410)
    // lea ecx, [esp + 0x6b8]
    // mov byte ptr [esp + 0x2230], 0xa
    // CALL(0x474810)
    // lea ecx, [esp + 0x114]
    // mov dword ptr [esp + 0x2230], esi
    // CALL(0x4805a0)
    // if (...) GOTO(0x49b64d)
    // push ebx
    // push ebx
    // push esi
    // mov ecx, ebp
    // CALL(0x49aa30)
    // push eax
    // push 0
    // CALL(0x494cb0)
    // mov ecx, dword ptr [ebp + 0x77c]
    // mov eax, dword ptr [ebp + 0x780]
    // add esp, 0x10
    // cmp ecx, eax
    // mov eax, 0x4e4838
    // if (...) GOTO(0x49b379)
    // mov eax, 0x4e4824
    // push 0
    // push 0
    // push 1
    // push eax
    // push(0x4e4680)  // ptr?
    // lea ecx, [esp + 0x128]
    // CALL(0x493670)
    // push 0
    // push 0
    // lea ecx, [esp + 0x11c]
    // CALL(0x48e900)
    // dec eax
    // if (...) GOTO(0x49b42e)
    // dec eax
    // if (...) GOTO(0x49b520)
    // push 0
    // push 0
    // push ebx
    // push(0x4e484c)  // ptr?
    // push(0x4e4680)  // ptr?
    // lea ecx, [esp + 0x128]
    // CALL(0x493670)
    // push 0
    // push 0
    // lea ecx, [esp + 0x11c]
    // CALL(0x48e900)
    // cmp eax, 3
    // if (...) GOTO(0x49b414)
    // if (...) GOTO(dword)
    // mov dword ptr [ebp + 0xf0], 0x1388
    // if (...) GOTO(0x49b414)
    // mov dword ptr [ebp + 0xf0], 0x2710
    // if (...) GOTO(0x49b414)
    // mov dword ptr [ebp + 0xf0], 0x4e20
    // if (...) GOTO(0x49b414)
    // mov dword ptr [ebp + 0xf0], 0x7530
    // lea ecx, [esp + 0x114]
    // mov dword ptr [esp + 0x2230], ebx
    // CALL(0x491710)
    // xor eax, eax
    // if (...) GOTO(0x49b652)
    // mov dword ptr [esp + 0x114], 0x4bb3f8
    // mov dword ptr [esp + 0x388], 0x4bb3e4
    // lea ecx, [esp + 0x114]
    // mov dword ptr [esp + 0x2230], 0x36
    // CALL(0x48d480)
    // lea ecx, [esp + 0x2018]
    // mov byte ptr [esp + 0x2230], 0x35
    // CALL(0x4928d0)
    // lea ecx, [esp + 0x1574]
    // mov byte ptr [esp + 0x2230], 0x34
    // CALL(0x4914d0)
    // lea ecx, [esp + 0x1524]
    // mov byte ptr [esp + 0x2230], 0x33
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14f4]
    // mov byte ptr [esp + 0x2230], 0x32
    // CALL(0x489c90)
    // lea ecx, [esp + 0x14b4]
    // mov byte ptr [esp + 0x2230], 0x31
    // mov dword ptr [esp + 0x14b4], 0x4ba2d8
    // CALL(0x473ae0)
    // lea ecx, [esp + 0xdc0]
    // mov byte ptr [esp + 0x2230], 0x30
    // CALL(0x491410)
    // lea ecx, [esp + 0x6f0]
    // mov byte ptr [esp + 0x2230], 0x2f
    // CALL(0x491410)
    // lea ecx, [esp + 0x6b8]
    // mov byte ptr [esp + 0x2230], 0x2e
    // CALL(0x474810)
    // lea ecx, [esp + 0x114]
    // mov dword ptr [esp + 0x2230], ebx
    // CALL(0x4805a0)
    // xor eax, eax
    // if (...) GOTO(0x49b652)
    // mov esi, dword ptr [esp + 0x2238]
    // mov byte ptr [esp + 0x14], 0
    // xor edx, edx
    // lea eax, [ebp + 0x170]
    // cmp dword ptr [eax], esi
    // if (...) GOTO(0x49b543)
    // inc edx
    // add eax, 0x58
    // cmp edx, 0x10
    // if (...) GOTO(0x49b534)
    // if (...) GOTO(0x49b5bd)
    // lea eax, [edx + edx*4]
    // push edi
    // lea esi, [esp + 0x18]
    // lea ecx, [edx + eax*2]
    // lea eax, [ebp + ecx*8]
    // mov ecx, ebx
    // mov dword ptr [esp + 0x14], eax
    // lea edi, [eax + 0x185]
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov eax, ecx
    // mov ecx, esi
    // mov esi, edi
    // mov edi, ecx
    // mov dword ptr [esp + 0x10], eax
    // mov ecx, ebx
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // mov eax, dword ptr [esp + 0x10]
    // dec edi
    // mov ecx, eax
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, eax
    // and ecx, 3
    // cmp edx, 0xf
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x49b5b2)
    // mov ecx, dword ptr [esp + 0x14]
    // mov ebx, 0xf
    // sub ebx, edx
    // lea edi, [ecx + 0x170]
    // lea eax, [edi + 0x58]
    // mov ecx, 0x16
    // mov esi, eax
    // dec ebx
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov edi, eax
    // if (...) GOTO(0x49b5a1)
    // mov esi, dword ptr [esp + 0x223c]
    // or ebx, 0xffffffff
    // pop edi
    // mov eax, dword ptr [ebp + 0x780]
    // cmp esi, eax
    // if (...) GOTO(0x49b5e7)
    // mov dword ptr [0x8400ac], eax
    // mov edx, dword ptr [ebp + 0x170]
    // mov eax, dword ptr [ebp]
    // mov ecx, ebp
    // mov dword ptr [ebp + 0x780], edx
    // CALL(dword)
    // mov esi, dword ptr [esp + 0x2238]
    // mov eax, dword ptr [ebp + 0x6f8]
    // mov edx, dword ptr [ebp]
    // dec eax
    // push esi
    // mov dword ptr [ebp + 0x6f8], eax
    // lea eax, [esp + 0x18]
    // push eax
    // mov ecx, ebp
    // CALL(dword)
    // mov ecx, dword ptr [esp + 0x2238]
    // push ecx
    // lea ecx, [ebp + 0xc0]
    // CALL(0x49bec0)
    // mov eax, dword ptr [esp + 0x223c]
    // test eax, eax
    // if (...) GOTO(0x49b63a)
    // push 1
    // push(0x80)
    // push 0
    // lea edx, [esp + 0x2244]
    // push 4
    // push edx
    // mov ecx, ebp
    // CALL(0x499140)
    // lea ecx, [esp + 0x114]
    // mov dword ptr [esp + 0x2230], ebx
    // CALL(0x491710)
    // mov eax, 1
    // mov ecx, dword ptr [esp + 0x2228]
    // pop esi
    // pop ebp
    // pop ebx
    // mov dword ptr fs:[0], ecx
    // add esp, 0x2228
    // return;
    // cmp dword ptr [eax - 0x4fbaffb7], esi
    // dec ecx
    // add byte ptr [ecx - 0x50], dl
    // dec ecx
    // add byte ptr [ebp - 0x50], bl
    // dec ecx
    // add dh, ah
    // mov bl, 0x49
    // add dl, dh
    // mov bl, 0x49
    // add dh, bh
    // mov bl, 0x49
    // add byte ptr [edx], cl
    // mov ah, 0x49
    // add byte ptr [eax - 0x746f6f70], dl
    // push esp
    // and al, 8
    // push ebx
    // push ebp
    // mov ebp, ecx
    // push esi
    // xor ebx, ebx
    // lea ecx, [ebp + 0x170]
    // mov eax, dword ptr [ecx]
    // test eax, eax
    // if (...) GOTO(0x49b6ba)
    // cmp eax, edx
    // if (...) GOTO(0x49b7a4)
    // inc ebx
    // add ecx, 0x58
    // cmp ebx, 0x10
    // if (...) GOTO(0x49b6a1)
    // if (...) GOTO(0x49b729)
    // cmp ebx, 0x10
    // if (...) GOTO(0x49b729)
    // lea eax, [ebx + ebx*4]
    // push edi
    // mov edi, dword ptr [esp + 0x14]
    // lea ecx, [ebx + eax*2]
    // lea eax, [ebp + ecx*8]
    // or ecx, 0xffffffff
    // mov dword ptr [eax + 0x170], edx
    // mov dl, byte ptr [esp + 0x1c]
    // mov byte ptr [eax + 0x184], dl
    // lea edx, [eax + 0x185]
    // xor eax, eax
    // mov byte ptr [edx], 0
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov eax, ecx
    // mov esi, edi
    // mov dword ptr [esp + 0x14], eax
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // mov eax, dword ptr [esp + 0x14]
    // dec edi
    // mov ecx, eax
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, eax
    // mov al, byte ptr [esp + 0x1c]
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // test al, 1
    // pop edi
    // if (...) GOTO(0x49b729)
    // mov ecx, dword ptr [esp + 0x14]
    // mov dword ptr [ebp + 0x780], ecx
    // mov ecx, dword ptr [ebp + 0x6f8]
    // mov edx, dword ptr [ebp + 0x77c]
    // mov eax, dword ptr [ebp + 0x780]
    // inc ecx
    // cmp edx, eax
    // mov dword ptr [ebp + 0x6f8], ecx
    // if (...) GOTO(0x49b74d)
    // mov ecx, ebp
    // CALL(0x497b40)
    // lea eax, [ebx + ebx*4]
    // mov edx, dword ptr [ebp]
    // lea ecx, [ebx + eax*2]
    // mov eax, dword ptr [ebp + ecx*8 + 0x170]
    // push eax
    // lea esi, [ebp + ecx*8]
    // lea ecx, [esi + 0x185]
    // push ecx
    // mov ecx, ebp
    // CALL(dword)
    // mov edx, dword ptr [esi + 0x170]
    // add ebp, 0xc0
    // push edx
    // mov ecx, ebp
    // CALL(0x49b970)
    // mov eax, dword ptr [ebp + 8]
    // test eax, eax
    // if (...) GOTO(0x49b791)
    // mov eax, dword ptr [ebp + 0xc]
    // mov ecx, dword ptr [eax + 8]
    // if (...) GOTO(0x49b793)
    // xor ecx, ecx
    // mov edx, dword ptr [ecx]
    // push 0
    // push 0
    // push(0x1000)
    // CALL(dword)
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(0x405098)
    // // nop
    // mov eax, dword ptr [0x8400b0]
    // sub esp, 8
    // test eax, eax
    // push ebp
    // push esi
    // mov ebp, ecx
    // if (...) GOTO(0x49b96a)
    // mov esi, dword ptr [ebp + 4]
    // test esi, esi
    // if (...) GOTO(0x49b96a)
    // push 0
    // lea eax, [esp + 0xc]
    // push 0
    // push eax
    // lea ecx, [ebp + 0x148]
    // push esi
    // CALL(0x4a4c70)
    // test eax, eax
    // if (...) GOTO(0x49b96a)
    // push ebx
    // push edi
    // mov eax, dword ptr [esp + 0x10]
    // test eax, eax
    // if (...) GOTO(0x49b84b)
    // mov ax, word ptr [esi]
    // test al, 0x80
    // if (...) GOTO(0x49b80f)
    // mov ecx, dword ptr [esi + 8]
    // push 1
    // push ecx
    // mov ecx, ebp
    // CALL(0x49acf0)
    // if (...) GOTO(0x49b94b)
    // test al, 0x10
    // if (...) GOTO(0x49b94b)
    // mov al, byte ptr [esi + 8]
    // xor ebx, ebx
    // test al, al
    // jbe 0x49b94b
    // lea edi, [esi + 0xc]
    // mov edx, dword ptr [edi + 0x24]
    // mov eax, dword ptr [edi]
    // push edx
    // lea ecx, [edi + 4]
    // push eax
    // push ecx
    // mov ecx, ebp
    // CALL(0x49b690)
    // xor edx, edx
    // inc ebx
    // mov dl, byte ptr [esi + 8]
    // add edi, 0x28
    // cmp ebx, edx
    // if (...) GOTO(0x49b827)
    // if (...) GOTO(0x49b94b)
    // mov eax, dword ptr [esi]
    // cmp eax, 0x31
    // if (...) GOTO(0x49b8fc)
    // if (...) GOTO(0x49b8eb)
    // sub eax, 3
    // if (...) GOTO(0x49b886)
    // sub eax, 2
    // if (...) GOTO(0x49b94b)
    // cmp dword ptr [esi + 4], 1
    // if (...) GOTO(0x49b94b)
    // mov eax, dword ptr [esi + 8]
    // push 1
    // push eax
    // mov ecx, ebp
    // CALL(0x49acf0)
    // if (...) GOTO(0x49b94b)
    // mov ecx, dword ptr [ebp + 0x77c]
    // mov eax, dword ptr [ebp + 0x780]
    // cmp ecx, eax
    // if (...) GOTO(0x49b94b)
    // cmp dword ptr [esi + 4], 1
    // if (...) GOTO(0x49b94b)
    // mov eax, dword ptr [0x8400b0]
    // lea ecx, [esp + 0x14]
    // mov dword ptr [esp + 0x14], 0x100
    // push ecx
    // mov ecx, dword ptr [esi + 8]
    // mov edx, dword ptr [eax]
    // push(0x83ff9c)  // ptr?
    // push ecx
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x10]
    // test eax, eax
    // if (...) GOTO(0x49b8d4)
    // xor edx, edx
    // mov dl, byte ptr [eax]
    // mov eax, edx
    // if (...) GOTO(0x49b8d6)
    // xor eax, eax
    // mov ecx, dword ptr [0x83ffa8]
    // push eax
    // mov eax, dword ptr [esi + 8]
    // push eax
    // push ecx
    // mov ecx, ebp
    // CALL(0x49b690)
    // if (...) GOTO(0x49b94b)
    // mov edx, dword ptr [ebp]
    // mov ecx, ebp
    // CALL(dword)
    // mov ecx, ebp
    // CALL(0x497d10)
    // if (...) GOTO(0x49b94b)
    // sub eax, 0x102
    // if (...) GOTO(0x49b918)
    // dec eax
    // if (...) GOTO(0x49b94b)
    // mov ecx, dword ptr [esi + 8]
    // mov edx, dword ptr [esi + 0x18]
    // mov eax, dword ptr [ebp]
    // push ecx
    // push edx
    // mov ecx, ebp
    // CALL(dword)
    // if (...) GOTO(0x49b94b)
    // mov edx, dword ptr [esi + 8]
    // xor eax, eax
    // lea ecx, [ebp + 0x170]
    // cmp dword ptr [ecx], edx
    // if (...) GOTO(0x49b930)
    // inc eax
    // add ecx, 0x58
    // cmp eax, 0x10
    // if (...) GOTO(0x49b923)
    // cmp eax, 0x10
    // if (...) GOTO(0x49b94b)
    // mov ecx, dword ptr [esi + 0xc]
    // test ecx, ecx
    // if (...) GOTO(0x49b94b)
    // mov cl, byte ptr [ecx]
    // lea edx, [eax + eax*4]
    // lea eax, [eax + edx*2]
    // mov byte ptr [ebp + eax*8 + 0x184], cl
    // push 0
    // lea edx, [esp + 0x14]
    // push 0
    // push edx
    // push esi
    // lea ecx, [ebp + 0x148]
    // CALL(0x4a4c70)
    // test eax, eax
    // if (...) GOTO(0x49b7ee)
    // pop edi
    // pop ebx
    // pop esi
    // pop ebp
    // add esp, 8
    // return;
    // push -1
    // push(0x4b9174)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 8
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // xor ebp, ebp
    // push edi
    // mov eax, dword ptr [esi + 0x10]
    // mov edi, dword ptr [esi + 0x18]
    // cmp eax, ebp
    // mov dword ptr [esp + 0x14], esi
    // mov dword ptr [esp + 0x10], ebp
    // if (...) GOTO(0x49bc0c)
    // cmp edi, ebp
    // if (...) GOTO(0x49ba0b)
    // push(0x1c)
    // mov ecx, edi
    // CALL(0x474860)
    // cmp eax, ebp
    // if (...) GOTO(0x49b9f2)
    // mov dword ptr [0x839650], edi
    // mov dword ptr [eax], 0x4ba28c
    // mov dword ptr [eax + 0x14], 0x4ba278
    // mov ecx, dword ptr [0x839650]
    // mov dword ptr [eax + 0x18], ecx
    // mov dword ptr [0x839650], ebp
    // mov edx, dword ptr [eax]
    // mov dword ptr [esp + 0x10], 1
    // mov ecx, dword ptr [edx + 4]
    // mov dword ptr [ecx + eax], 0x4ba288
    // if (...) GOTO(0x49ba8d)
    // push ebp
    // push(0x4c1458)  // ptr?
    // push(0x4c1434)  // ptr?
    // push ebp
    // CALL(dword)
    // push 3
    // CALL(0x4a5108)
    // mov edx, dword ptr [esi + 4]
    // push(0x1c)
    // mov eax, dword ptr [edx + 4]
    // mov edi, dword ptr [eax + esi + 8]
    // cmp edi, ebp
    // if (...) GOTO(0x49ba47)
    // mov ecx, edi
    // CALL(0x474860)
    // cmp eax, ebp
    // if (...) GOTO(0x49ba2e)
    // mov dword ptr [0x839650], edi
    // if (...) GOTO(0x49ba59)
    // push ebp
    // push(0x4c1458)  // ptr?
    // push(0x4c1434)  // ptr?
    // push ebp
    // CALL(dword)
    // push 3
    // CALL(0x4a5108)
    // CALL(0x4a504f)
    // add esp, 4
    // cmp eax, ebp
    // if (...) GOTO(0x49ba8b)
    // mov dword ptr [0x839650], ebp
    // mov dword ptr [eax], 0x4ba28c
    // mov dword ptr [eax + 0x14], 0x4ba278
    // mov ecx, dword ptr [0x839650]
    // mov dword ptr [esp + 0x10], 2
    // mov dword ptr [eax + 0x18], ecx
    // mov dword ptr [0x839650], ebp
    // mov edx, dword ptr [eax]
    // mov ecx, dword ptr [edx + 4]
    // mov dword ptr [ecx + eax], 0x4ba288
    // if (...) GOTO(0x49ba8d)
    // xor eax, eax
    // cmp eax, ebp
    // mov dword ptr [esi + 8], eax
    // if (...) GOTO(0x49ba9e)
    // mov eax, 4
    // if (...) GOTO(0x49be9d)
    // mov edx, dword ptr [esp + 0x28]
    // mov dword ptr [eax + 4], edx
    // mov eax, dword ptr [esi + 8]
    // mov dword ptr [eax + 0xc], eax
    // mov eax, dword ptr [esi + 8]
    // mov dword ptr [eax + 0x10], eax
    // mov ebx, dword ptr [esi + 0x18]
    // cmp ebx, ebp
    // if (...) GOTO(0x49bb26)
    // push(0x64)
    // mov ecx, ebx
    // CALL(0x474860)
    // cmp eax, ebp
    // if (...) GOTO(0x49bb0d)
    // mov edi, eax
    // mov dword ptr [0x839650], ebx
    // mov dword ptr [esp + 0x28], edi
    // cmp edi, ebp
    // mov dword ptr [esp + 0x20], ebp
    // if (...) GOTO(0x49bbd6)
    // mov dword ptr [edi + 0x58], 0x4bbcd4
    // mov dword ptr [edi + 0x5c], 0x4ba278
    // mov eax, dword ptr [0x839650]
    // mov dword ptr [edi + 0x60], eax
    // mov eax, dword ptr [esp + 0x10]
    // or al, 4
    // mov dword ptr [0x839650], ebp
    // mov dword ptr [esp + 0x10], eax
    // mov byte ptr [esp + 0x20], 1
    // if (...) GOTO(0x49bbb9)
    // push ebp
    // push(0x4c1458)  // ptr?
    // push(0x4c1434)  // ptr?
    // push ebp
    // CALL(dword)
    // push 3
    // CALL(0x4a5108)
    // mov ecx, dword ptr [esi + 4]
    // push(0x64)
    // mov edx, dword ptr [ecx + 4]
    // mov ebx, dword ptr [edx + esi + 8]
    // cmp ebx, ebp
    // mov dword ptr [esp + 0x18], ebx
    // if (...) GOTO(0x49bb66)
    // mov ecx, ebx
    // CALL(0x474860)
    // cmp eax, ebp
    // if (...) GOTO(0x49bb4d)
    // mov dword ptr [0x839650], ebx
    // if (...) GOTO(0x49bb7c)
    // push ebp
    // push(0x4c1458)  // ptr?
    // push(0x4c1434)  // ptr?
    // push ebp
    // CALL(dword)
    // push 3
    // CALL(0x4a5108)
    // CALL(0x4a504f)
    // add esp, 4
    // cmp eax, ebp
    // if (...) GOTO(0x49bb76)
    // xor edi, edi
    // if (...) GOTO(0x49bb7e)
    // mov dword ptr [0x839650], ebp
    // mov edi, eax
    // mov dword ptr [esp + 0x28], edi
    // cmp edi, ebp
    // mov dword ptr [esp + 0x20], 2
    // if (...) GOTO(0x49bbd6)
    // mov dword ptr [edi + 0x58], 0x4bbcd4
    // mov dword ptr [edi + 0x5c], 0x4ba278
    // mov eax, dword ptr [0x839650]
    // mov dword ptr [edi + 0x60], eax
    // mov eax, dword ptr [esp + 0x10]
    // or al, 8
    // mov dword ptr [0x839650], ebp
    // mov dword ptr [esp + 0x10], eax
    // mov byte ptr [esp + 0x20], 3
    // mov ecx, edi
    // CALL(0x4852e0)
    // mov ecx, dword ptr [edi + 0x58]
    // mov dword ptr [edi], 0x4bbc3c
    // mov edx, dword ptr [ecx + 4]
    // mov dword ptr [edx + edi + 0x58], 0x4bbc38
    // if (...) GOTO(0x49bbd8)
    // xor edi, edi
    // mov eax, dword ptr [esi + 8]
    // mov dword ptr [esp + 0x20], 0xffffffff
    // mov dword ptr [eax + 8], edi
    // mov ecx, dword ptr [esi + 8]
    // mov eax, dword ptr [ecx + 8]
    // cmp eax, ebp
    // if (...) GOTO(0x49bbfa)
    // mov eax, 4
    // if (...) GOTO(0x49be9d)
    // mov edx, dword ptr [esi]
    // push eax
    // mov ecx, esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 8]
    // mov dword ptr [esi + 0xc], eax
    // if (...) GOTO(0x49be91)
    // cmp edi, ebp
    // if (...) GOTO(0x49bc71)
    // push(0x1c)
    // mov ecx, edi
    // CALL(0x474860)
    // cmp eax, ebp
    // if (...) GOTO(0x49bc58)
    // mov dword ptr [0x839650], edi
    // mov dword ptr [eax], 0x4ba28c
    // mov dword ptr [eax + 0x14], 0x4ba278
    // mov ecx, dword ptr [0x839650]
    // mov dword ptr [eax + 0x18], ecx
    // mov dword ptr [0x839650], ebp
    // mov edx, dword ptr [eax]
    // mov dword ptr [esp + 0x10], 0x10
    // mov ecx, dword ptr [edx + 4]
    // mov dword ptr [ecx + eax], 0x4ba288
    // if (...) GOTO(0x49bcf3)
    // push ebp
    // push(0x4c1458)  // ptr?
    // push(0x4c1434)  // ptr?
    // push ebp
    // CALL(dword)
    // push 3
    // CALL(0x4a5108)
    // mov edx, dword ptr [esi + 4]
    // push(0x1c)
    // mov eax, dword ptr [edx + 4]
    // mov edi, dword ptr [eax + esi + 8]
    // cmp edi, ebp
    // if (...) GOTO(0x49bcad)
    // mov ecx, edi
    // CALL(0x474860)
    // cmp eax, ebp
    // if (...) GOTO(0x49bc94)
    // mov dword ptr [0x839650], edi
    // if (...) GOTO(0x49bcbf)
    // push ebp
    // push(0x4c1458)  // ptr?
    // push(0x4c1434)  // ptr?
    // push ebp
    // CALL(dword)
    // push 3
    // CALL(0x4a5108)
    // CALL(0x4a504f)
    // add esp, 4
    // cmp eax, ebp
    // if (...) GOTO(0x49bcf1)
    // mov dword ptr [0x839650], ebp
    // mov dword ptr [eax], 0x4ba28c
    // mov dword ptr [eax + 0x14], 0x4ba278
    // mov ecx, dword ptr [0x839650]
    // mov dword ptr [esp + 0x10], 0x20
    // mov dword ptr [eax + 0x18], ecx
    // mov dword ptr [0x839650], ebp
    // mov edx, dword ptr [eax]
    // mov ecx, dword ptr [edx + 4]
    // mov dword ptr [ecx + eax], 0x4ba288
    // if (...) GOTO(0x49bcf3)
    // xor eax, eax
    // mov edx, dword ptr [esi + 8]
    // mov ecx, dword ptr [edx + 0x10]
    // mov dword ptr [ecx + 0xc], eax
    // mov edx, dword ptr [esi + 8]
    // mov eax, dword ptr [edx + 0x10]
    // mov ecx, dword ptr [eax + 0xc]
    // cmp ecx, ebp
    // if (...) GOTO(0x49bd13)
    // mov eax, 4
    // if (...) GOTO(0x49be9d)
    // mov dword ptr [ecx + 0x10], eax
    // mov eax, dword ptr [esi + 8]
    // mov ecx, dword ptr [eax + 0x10]
    // mov edx, dword ptr [ecx + 0xc]
    // mov dword ptr [edx + 0xc], eax
    // mov eax, dword ptr [esi + 8]
    // mov ecx, dword ptr [eax + 0x10]
    // mov edx, dword ptr [ecx + 0xc]
    // mov ecx, dword ptr [esp + 0x28]
    // mov dword ptr [eax + 0x10], edx
    // mov eax, dword ptr [esi + 8]
    // mov eax, dword ptr [eax + 0x10]
    // mov dword ptr [esi + 0xc], eax
    // mov dword ptr [eax + 4], ecx
    // mov ebx, dword ptr [esi + 0x18]
    // cmp ebx, ebp
    // if (...) GOTO(0x49bdb8)
    // push(0x64)
    // mov ecx, ebx
    // CALL(0x474860)
    // cmp eax, ebp
    // if (...) GOTO(0x49bd9f)
    // mov edi, eax
    // mov dword ptr [0x839650], ebx
    // mov dword ptr [esp + 0x28], edi
    // cmp edi, ebp
    // mov dword ptr [esp + 0x20], 4
    // if (...) GOTO(0x49be69)
    // mov eax, dword ptr [esp + 0x10]
    // mov dword ptr [edi + 0x58], 0x4bbcd4
    // mov dword ptr [edi + 0x5c], 0x4ba278
    // mov edx, dword ptr [0x839650]
    // or al, 0x40
    // mov dword ptr [edi + 0x60], edx
    // mov dword ptr [0x839650], ebp
    // mov dword ptr [esp + 0x10], eax
    // mov byte ptr [esp + 0x20], 5
    // if (...) GOTO(0x49be4c)
    // push ebp
    // push(0x4c1458)  // ptr?
    // push(0x4c1434)  // ptr?
    // push ebp
    // CALL(dword)
    // push 3
    // CALL(0x4a5108)
    // mov eax, dword ptr [esi + 4]
    // push(0x64)
    // mov ecx, dword ptr [eax + 4]
    // mov ebx, dword ptr [ecx + esi + 8]
    // cmp ebx, ebp
    // mov dword ptr [esp + 0x18], ebx
    // if (...) GOTO(0x49bdf8)
    // mov ecx, ebx
    // CALL(0x474860)
    // cmp eax, ebp
    // if (...) GOTO(0x49bddf)
    // mov dword ptr [0x839650], ebx
    // if (...) GOTO(0x49be0e)
    // push ebp
    // push(0x4c1458)  // ptr?
    // push(0x4c1434)  // ptr?
    // push ebp
    // CALL(dword)
    // push 3
    // CALL(0x4a5108)
    // CALL(0x4a504f)
    // add esp, 4
    // cmp eax, ebp
    // if (...) GOTO(0x49be08)
    // xor edi, edi
    // if (...) GOTO(0x49be10)
    // mov dword ptr [0x839650], ebp
    // mov edi, eax
    // mov dword ptr [esp + 0x28], edi
    // cmp edi, ebp
    // mov dword ptr [esp + 0x20], 6
    // if (...) GOTO(0x49be69)
    // mov eax, dword ptr [esp + 0x10]
    // mov dword ptr [edi + 0x58], 0x4bbcd4
    // mov dword ptr [edi + 0x5c], 0x4ba278
    // mov edx, dword ptr [0x839650]
    // or al, 0x80
    // mov dword ptr [edi + 0x60], edx
    // mov dword ptr [0x839650], ebp
    // mov dword ptr [esp + 0x10], eax
    // mov byte ptr [esp + 0x20], 7
    // mov ecx, edi
    // CALL(0x4852e0)
    // mov eax, dword ptr [edi + 0x58]
    // mov dword ptr [edi], 0x4bbc3c
    // mov ecx, dword ptr [eax + 4]
    // mov dword ptr [ecx + edi + 0x58], 0x4bbc38
    // if (...) GOTO(0x49be6b)
    // xor edi, edi
    // mov edx, dword ptr [esi + 0xc]
    // mov dword ptr [esp + 0x20], 0xffffffff
    // mov dword ptr [edx + 8], edi
    // mov eax, dword ptr [esi + 0xc]
    // mov eax, dword ptr [eax + 8]
    // cmp eax, ebp
    // if (...) GOTO(0x49be8a)
    // mov eax, 4
    // if (...) GOTO(0x49be9d)
    // mov edx, dword ptr [esi]
    // push eax
    // mov ecx, esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x10]
    // mov dword ptr [esi + 0x14], eax
    // inc eax
    // mov dword ptr [esi + 0x10], eax
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0x18]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // mov dword ptr fs:[0], ecx
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
    // push esi
    // mov esi, ecx
    // mov eax, dword ptr [esi + 8]
    // test eax, eax
    // if (...) GOTO(0x49bf62)
    // mov edx, dword ptr [esi + 0x10]
    // xor ecx, ecx
    // push ebx
    // push edi
    // test edx, edx
    // if (...) GOTO(0x49bf52)
    // mov edi, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esi + 0xc]
    // cmp dword ptr [eax + 4], edi
    // if (...) GOTO(0x49bef2)
    // mov eax, dword ptr [eax + 0xc]
    // inc ecx
    // cmp ecx, edx
    // mov dword ptr [esi + 0xc], eax
    // if (...) GOTO(0x49bedd)
    // if (...) GOTO(0x49bf52)
    // mov eax, dword ptr [esi + 0xc]
    // mov ecx, dword ptr [eax + 0xc]
    // mov edx, dword ptr [eax + 0x10]
    // mov dword ptr [ecx + 0x10], edx
    // mov eax, dword ptr [esi + 0xc]
    // mov ecx, dword ptr [eax + 0x10]
    // mov edx, dword ptr [eax + 0xc]
    // mov dword ptr [ecx + 0xc], edx
    // mov edi, dword ptr [esi + 0xc]
    // cmp edi, dword ptr [esi + 8]
    // if (...) GOTO(0x49bf18)
    // mov eax, dword ptr [edi + 0xc]
    // mov dword ptr [esi + 8], eax
    // mov ecx, dword ptr [edi + 0xc]
    // mov edx, dword ptr [esi]
    // mov dword ptr [esi + 0xc], ecx
    // mov ebx, dword ptr [edi + 8]
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // test ebx, ebx
    // if (...) GOTO(0x49bf35)
    // mov eax, dword ptr [ebx]
    // push 1
    // mov ecx, ebx
    // CALL(dword)
    // test edi, edi
    // mov dword ptr [edi + 8], 0
    // if (...) GOTO(0x49bf4f)
    // mov ecx, dword ptr [edi]
    // push 1
    // mov edx, dword ptr [ecx + 4]
    // mov eax, dword ptr [edx + edi]
    // lea ecx, [edx + edi]
    // CALL(dword)
    // dec dword ptr [esi + 0x10]
    // mov eax, dword ptr [esi + 0x10]
    // pop edi
    // test eax, eax
    // pop ebx
    // if (...) GOTO(0x49bf5e)
    // mov dword ptr [esi + 8], eax
    // dec eax
    // mov dword ptr [esi + 0x14], eax
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // CALL(0x49bfc0)
    // mov cl, byte ptr [esp + 8]
    // mov eax, dword ptr [esi + 0x60]
    // mov dword ptr [esi + 0x5c], 0x4ba278
    // mov dword ptr [0x839650], eax
    // test cl, 1
    // if (...) GOTO(0x49bfab)
    // test esi, esi
    // if (...) GOTO(0x49bfab)
    // test eax, eax
    // if (...) GOTO(0x49bfa1)
    // push esi
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [0x839650], 0
    // mov eax, esi
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
    // if (...) GOTO(0x4853d0)
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
    // sub ecx, 0x5c
    // if (...) GOTO(0x49bf70)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // CALL(0x49bff0)
    // if (...) GOTO(0x49c000)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x8400c8
    // if (...) GOTO(0x49c020)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x49c010)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x8400c8
    // if (...) GOTO(0x49c780)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push -1
    // push(0x4b9196)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // push ecx
    // push esi
    // mov esi, ecx
    // mov dword ptr [esp + 4], esi
    // CALL(0x4804a0)
    // lea ecx, [esi + 0x574]
    // mov dword ptr [esp + 0x10], 0
    // CALL(0x4837f0)
    // lea ecx, [esi + 0x598]
    // mov byte ptr [esp + 0x10], 1
    // CALL(0x486c90)
    // mov ecx, dword ptr [esp + 8]
    // mov dword ptr [esi], 0x4bbcf4
    // mov dword ptr [esi + 0x274], 0x4bbce0
    // mov dword ptr [esi + 0x594], 0
    // mov eax, esi
    // pop esi
    // mov dword ptr fs:[0], ecx
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
    // // nop
    // // nop
    // mov dword ptr [ecx + 0x594], 0
    // return;
    // CALL(0x405099)
    // sub esp, 0x2f0
    // push ebx
    // push ebp
    // push esi
    // mov ebx, ecx
    // push edi
    // push 0
    // lea ebp, [ebx + 0x274]
    // push 0
    // lea eax, [ebx + 0x574]
    // push 0
    // push eax
    // mov ecx, ebp
    // mov dword ptr [esp + 0x20], ebx
    // CALL(0x4762d0)
    // push 2
    // push 2
    // push -1
    // push(0xff)
    // mov ecx, ebp
    // CALL(0x476310)
    // push 0
    // mov ecx, ebx
    // CALL(0x4808c0)
    // mov edi, 0x4e48cc
    // or ecx, 0xffffffff
    // xor eax, eax
    // lea edx, [esp + 0x20]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov byte ptr [esp + 0x20], 0
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x120]
    // and ecx, 3
    // push(0xa)
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [ebx + 0x594]
    // push eax
    // mov edx, dword ptr [ecx + 0x780]
    // push edx
    // CALL(0x4ad425)
    // lea edi, [esp + 0x12c]
    // or ecx, 0xffffffff
    // xor eax, eax
    // add esp, 0xc
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov ebx, ecx
    // mov edi, edx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, ebx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, ebx
    // lea eax, [esp + 0x20]
    // and ecx, 3
    // test eax, eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x49c19e)
    // lea edi, [esp + 0x20]
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // push 3
    // lea ecx, [esp + 0x28]
    // push 3
    // push ecx
    // mov ecx, ebp
    // CALL(0x477c30)
    // mov ecx, ebp
    // CALL(0x477580)
    // mov ebx, eax
    // mov edi, 0x4e48c0
    // or ecx, 0xffffffff
    // xor eax, eax
    // add ebx, 3
    // lea edx, [esp + 0x20]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov byte ptr [esp + 0x20], 0
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x120]
    // and ecx, 3
    // push(0xa)
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [esp + 0x14]
    // push eax
    // mov edx, dword ptr [ecx + 0x594]
    // mov eax, dword ptr [edx + 0x77c]
    // push eax
    // CALL(0x4ad425)
    // lea edi, [esp + 0x12c]
    // or ecx, 0xffffffff
    // xor eax, eax
    // add esp, 0xc
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x20]
    // and ecx, 3
    // test eax, eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x49c256)
    // lea edi, [esp + 0x20]
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // push ebx
    // lea ecx, [esp + 0x28]
    // push 3
    // push ecx
    // mov ecx, ebp
    // CALL(0x477c30)
    // mov ecx, ebp
    // CALL(0x477580)
    // lea eax, [eax + eax*2]
    // cdq 
    // sub eax, edx
    // sar eax, 1
    // add ebx, eax
    // xor eax, eax
    // mov dword ptr [esp + 0x1c], eax
    // mov dword ptr [esp + 0x14], eax
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [edx + 0x594]
    // mov edx, dword ptr [ecx + eax + 0x170]
    // test edx, edx
    // if (...) GOTO(0x49c754)
    // mov eax, dword ptr [esp + 0x1c]
    // lea edx, [esp + 0x120]
    // push(0xa)
    // push edx
    // push eax
    // mov dword ptr [esp + 0x24], 3
    // mov byte ptr [esp + 0x2c], 0
    // CALL(0x4ad425)
    // or ecx, 0xffffffff
    // lea edi, [esp + 0x12c]
    // xor eax, eax
    // add esp, 0xc
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea edx, [esp + 0x20]
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, 0x4d3304
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea edx, [esp + 0x20]
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, 0x4c3f70
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x20]
    // and ecx, 3
    // test eax, eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x49c360)
    // lea edi, [esp + 0x20]
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // push ebx
    // lea ecx, [esp + 0x28]
    // push 3
    // push ecx
    // mov ecx, ebp
    // CALL(0x477c30)
    // mov dword ptr [esp + 0x18], eax
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esp + 0x14]
    // mov eax, dword ptr [edx + 0x594]
    // lea edx, [eax + ecx + 0x185]
    // test edx, edx
    // if (...) GOTO(0x49c394)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // mov eax, dword ptr [esp + 0x18]
    // not ecx
    // dec ecx
    // push ecx
    // push ebx
    // push eax
    // push edx
    // mov ecx, ebp
    // CALL(0x477c30)
    // mov ecx, ebp
    // CALL(0x477580)
    // add ebx, eax
    // mov edi, 0x4e48ac
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // mov byte ptr [esp + 0x20], 0
    // push(0xa)
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x174]
    // and ecx, 3
    // push eax
    // mov eax, dword ptr [esp + 0x1c]
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [ecx + 0x594]
    // mov ecx, dword ptr [edx + eax + 0x174]
    // push ecx
    // CALL(0x4ad425)
    // lea edi, [esp + 0x17c]
    // or ecx, 0xffffffff
    // xor eax, eax
    // add esp, 0xc
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x20]
    // and ecx, 3
    // test eax, eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x49c451)
    // lea edi, [esp + 0x20]
    // or ecx, 0xffffffff
    // xor eax, eax
    // lea edx, [esp + 0x20]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // push ebx
    // push ecx
    // push edx
    // mov ecx, ebp
    // CALL(0x477c30)
    // mov ecx, ebp
    // CALL(0x477580)
    // add ebx, eax
    // mov edi, 0x4e48a0
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // mov byte ptr [esp + 0x20], 0
    // push(0xa)
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x2b4]
    // and ecx, 3
    // push eax
    // mov eax, dword ptr [esp + 0x1c]
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [ecx + 0x594]
    // mov ecx, dword ptr [edx + eax + 0x178]
    // push ecx
    // CALL(0x4ad425)
    // lea edi, [esp + 0x2bc]
    // or ecx, 0xffffffff
    // xor eax, eax
    // add esp, 0xc
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x20]
    // and ecx, 3
    // test eax, eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x49c50e)
    // lea edi, [esp + 0x20]
    // or ecx, 0xffffffff
    // xor eax, eax
    // lea edx, [esp + 0x20]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // push ebx
    // push ecx
    // push edx
    // mov ecx, ebp
    // CALL(0x477c30)
    // mov ecx, ebp
    // CALL(0x477580)
    // add ebx, eax
    // mov edi, 0x4e4888
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // mov byte ptr [esp + 0x20], 0
    // push(0xa)
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x264]
    // and ecx, 3
    // push eax
    // mov eax, dword ptr [esp + 0x1c]
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [ecx + 0x594]
    // mov ecx, dword ptr [edx + eax + 0x17c]
    // push ecx
    // CALL(0x4ad425)
    // lea edi, [esp + 0x26c]
    // or ecx, 0xffffffff
    // xor eax, eax
    // add esp, 0xc
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x20]
    // and ecx, 3
    // test eax, eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x49c5cb)
    // lea edi, [esp + 0x20]
    // or ecx, 0xffffffff
    // xor eax, eax
    // lea edx, [esp + 0x20]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // push ebx
    // push ecx
    // push edx
    // mov ecx, ebp
    // CALL(0x477c30)
    // mov ecx, ebp
    // CALL(0x477580)
    // add ebx, eax
    // mov edi, 0x4e487c
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // mov byte ptr [esp + 0x20], 0
    // push(0xa)
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x1c4]
    // and ecx, 3
    // push eax
    // mov eax, dword ptr [esp + 0x1c]
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [ecx + 0x594]
    // mov ecx, dword ptr [edx + eax + 0x180]
    // push ecx
    // CALL(0x4ad425)
    // lea edi, [esp + 0x1cc]
    // or ecx, 0xffffffff
    // xor eax, eax
    // add esp, 0xc
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x20]
    // and ecx, 3
    // test eax, eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x49c688)
    // lea edi, [esp + 0x20]
    // or ecx, 0xffffffff
    // xor eax, eax
    // lea edx, [esp + 0x20]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // push ebx
    // push ecx
    // push edx
    // mov ecx, ebp
    // CALL(0x477c30)
    // mov ecx, ebp
    // CALL(0x477580)
    // add ebx, eax
    // mov edi, 0x4e4874
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // mov byte ptr [esp + 0x20], 0
    // push(0xa)
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x214]
    // and ecx, 3
    // push eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [esp + 0x18]
    // xor eax, eax
    // mov edx, dword ptr [ecx + 0x594]
    // mov ecx, dword ptr [esp + 0x1c]
    // mov al, byte ptr [edx + ecx + 0x184]
    // push eax
    // CALL(0x4ad425)
    // lea edi, [esp + 0x21c]
    // or ecx, 0xffffffff
    // xor eax, eax
    // add esp, 0xc
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // lea edx, [esp + 0x20]
    // mov esi, edi
    // mov edi, edx
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // lea eax, [esp + 0x20]
    // and ecx, 3
    // test eax, eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // if (...) GOTO(0x49c747)
    // lea edi, [esp + 0x20]
    // or ecx, 0xffffffff
    // xor eax, eax
    // lea edx, [esp + 0x20]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // push ebx
    // push ecx
    // push edx
    // mov ecx, ebp
    // CALL(0x477c30)
    // mov ecx, ebp
    // CALL(0x477580)
    // add ebx, eax
    // mov eax, dword ptr [esp + 0x14]
    // mov esi, dword ptr [esp + 0x1c]
    // add eax, 0x58
    // inc esi
    // cmp eax, 0x580
    // mov dword ptr [esp + 0x1c], esi
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x49c271)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x2f0
    // return;
    // CALL(0x405098)
    // // nop
    // push -1
    // push(0x4b91b6)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // push ecx
    // push esi
    // mov esi, ecx
    // mov dword ptr [esp + 4], esi
    // mov dword ptr [esi], 0x4bbcf4
    // mov dword ptr [esi + 0x274], 0x4bbce0
    // mov dword ptr [esp + 0x10], 1
    // CALL(0x49c0a0)
    // lea ecx, [esi + 0x598]
    // CALL(0x486ce0)
    // lea ecx, [esi + 0x574]
    // mov byte ptr [esp + 0x10], 0
    // mov dword ptr [ecx], 0x4ba468
    // CALL(0x4838b0)
    // mov ecx, esi
    // mov dword ptr [esp + 0x10], 0xffffffff
    // CALL(0x4805a0)
    // mov ecx, dword ptr [esp + 8]
    // pop esi
    // mov dword ptr fs:[0], ecx
    // add esp, 0x10
    // return;
    // CALL(0x405098)
    // // nop
    // push esi
    // mov esi, ecx
    // CALL(0x49c780)
    // test byte ptr [esp + 8], 1
    // if (...) GOTO(0x49c818)
    // push esi
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov eax, esi
    // pop esi
    // return;
    // // nop
    // // nop
    // sub ecx, 0x274
    // if (...) GOTO(0x49c800)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // push -1
    // push(0x4b91cb)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // push ecx
    // push esi
    // mov esi, ecx
    // push(0x58)
    // CALL(0x4a57f1)
    // add esp, 4
    // mov dword ptr [esp + 4], eax
    // test eax, eax
    // mov dword ptr [esp + 0x10], 0
    // if (...) GOTO(0x49c86c)
    // mov ecx, eax
    // CALL(0x482fd0)
    // if (...) GOTO(0x49c86e)
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0x18]
    // test eax, eax
    // mov dword ptr [ecx + 4], eax
    // if (...) GOTO(0x49c890)
    // mov eax, 4
    // pop esi
    // mov ecx, dword ptr [esp + 4]
    // mov dword ptr fs:[0], ecx
    // add esp, 0x10
    // return;
    // mov ecx, dword ptr [esp + 8]
    // mov dword ptr [esi + 0x1c], eax
    // xor eax, eax
    // pop esi
    // mov dword ptr fs:[0], ecx
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // mov esi, dword ptr [edi + 4]
    // test esi, esi
    // if (...) GOTO(0x49c8d4)
    // mov ecx, esi
    // CALL(0x483010)
    // push esi
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov dword ptr [edi + 4], 0
    // pop edi
    // pop esi
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // mov eax, dword ptr [0x8406e4]
    // push esi
    // xor esi, esi
    // test eax, eax
    // if (...) GOTO(0x49c907)
    // push edi
    // mov edi, 0x840698
    // mov ecx, dword ptr [edi]
    // CALL(0x49c910)
    // mov eax, dword ptr [0x8406e4]
    // inc esi
    // add edi, 4
    // cmp esi, eax
    // if (...) GOTO(0x49c8f2)
    // pop edi
    // pop esi
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // mov eax, dword ptr [esi + 0xb8]
    // test ah, 0x80
    // if (...) GOTO(0x49c93d)
    // test al, 0x10
    // if (...) GOTO(0x49c936)
    // CALL(0x49ccc0)
    // test eax, eax
    // if (...) GOTO(0x49c93d)
    // mov ecx, esi
    // CALL(0x49cae0)
    // test eax, eax
    // if (...) GOTO(0x49c93d)
    // mov ecx, esi
    // CALL(0x49cb20)
    // pop esi
    // return;
    // // nop
    // push ecx
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // mov eax, dword ptr [esi + 0xbc]
    // test eax, eax
    // if (...) GOTO(0x49c95c)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 7
    // pop ebx
    // pop ecx
    // return;
    // mov edi, dword ptr [0x4ba21c]
    // push 0
    // push 0
    // CALL(edi)
    // push eax
    // push(0x4e9a84)  // ptr?
    // push(0x4e4924)  // ptr?
    // CALL(0x4a0320)
    // mov eax, dword ptr [esi + 0xd4]
    // lea ebp, [esi + 0xd4]
    // add esp, 0x14
    // test eax, eax
    // if (...) GOTO(0x49c9a3)
    // mov eax, dword ptr [esi + 0xbc]
    // push 0
    // push ebp
    // push eax
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x49ca9f)
    // mov dword ptr [ebp], 0
    // if (...) GOTO(0x49c9b2)
    // mov edi, dword ptr [0x4ba21c]
    // mov ecx, dword ptr [esi + 0xbc]
    // lea eax, [esi + 0xc0]
    // push 0
    // push eax
    // push ebp
    // push ecx
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x49ca9f)
    // mov eax, dword ptr [ebp]
    // mov ecx, dword ptr [esi + 0x1a4]
    // cmp eax, ecx
    // if (...) GOTO(0x49caaa)
    // cmp eax, dword ptr [esi + 0x1a8]
    // if (...) GOTO(0x49ca7a)
    // CALL(edi)
    // mov edx, dword ptr [esi + 0xd8]
    // push 0
    // push edx
    // push eax
    // push(0x4e4910)  // ptr?
    // push(0x4e4900)  // ptr?
    // CALL(0x4a0320)
    // mov ecx, dword ptr [esi + 0xd8]
    // mov eax, dword ptr [esi + 4]
    // add esp, 0x14
    // lea ebx, [esi + 4]
    // push ecx
    // mov ecx, ebx
    // CALL(dword)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x49ca62)
    // mov edx, dword ptr [esi + 0xd8]
    // mov ecx, dword ptr [edi + 0x18]
    // mov eax, edx
    // mov dword ptr [esp + 0x10], edx
    // mov edx, dword ptr [esi + 0xbc]
    // push eax
    // push ecx
    // push edx
    // CALL(dword)
    // mov ecx, dword ptr [esp + 0x10]
    // cmp ecx, eax
    // if (...) GOTO(0x49ca9f)
    // mov eax, dword ptr [edi + 0x18]
    // push edi
    // add eax, ecx
    // mov ecx, ebx
    // mov dword ptr [edi + 0x20], eax
    // mov edx, dword ptr [ebx]
    // CALL(dword)
    // if (...) GOTO(0x49ca7a)
    // push 0
    // push 0
    // push 0
    // push(0x4e9a84)  // ptr?
    // push(0x4e48f4)  // ptr?
    // CALL(0x4a0320)
    // add esp, 0x14
    // cmp dword ptr [ebp], 0x5453494c
    // if (...) GOTO(0x49c9ac)
    // mov eax, dword ptr [esi + 0xbc]
    // push 0
    // push ebp
    // push eax
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x49c9ac)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // pop ecx
    // return;
    // mov eax, dword ptr [esi + 0x940]
    // push 0
    // inc eax
    // push 0
    // mov dword ptr [esi + 0x940], eax
    // CALL(edi)
    // push eax
    // push(0x4e9a84)  // ptr?
    // push(0x4e48dc)  // ptr?
    // CALL(0x4a0320)
    // add esp, 0x14
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push esi
    // push 0
    // mov esi, ecx
    // push 0
    // CALL(dword)
    // push eax
    // push(0x4e4954)  // ptr?
    // push(0x4e493c)  // ptr?
    // CALL(0x4a0320)
    // mov al, byte ptr [esi + 0xb8]
    // add esp, 0x14
    // test al, 0x10
    // if (...) GOTO(0x49cb0e)
    // xor eax, eax
    // pop esi
    // return;
    // mov ecx, esi
    // CALL(0x49ccc0)
    // push 0
    // mov ecx, esi
    // CALL(0x49cb80)
    // pop esi
    // return;
    // push esi
    // push 0
    // mov esi, ecx
    // push 0
    // CALL(dword)
    // push eax
    // push(0x4e4954)  // ptr?
    // push(0x4e4960)  // ptr?
    // CALL(0x4a0320)
    // mov al, byte ptr [esi + 0xb8]
    // add esp, 0x14
    // test al, 0x10
    // if (...) GOTO(0x49cb6d)
    // mov ecx, esi
    // CALL(0x49ccc0)
    // test eax, eax
    // if (...) GOTO(0x49cb6d)
    // push 0
    // mov ecx, esi
    // CALL(0x49cb80)
    // test eax, eax
    // if (...) GOTO(0x49cb6d)
    // mov ecx, esi
    // CALL(0x49ccc0)
    // test eax, eax
    // if (...) GOTO(0x49cb55)
    // mov ecx, esi
    // CALL(0x49cb90)
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, 1
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push ecx
    // push ebx
    // push esi
    // mov esi, ecx
    // push edi
    // mov eax, dword ptr [esi + 0xd8]
    // test eax, eax
    // if (...) GOTO(0x49cbe0)
    // mov eax, dword ptr [esi + 0x940]
    // push 1
    // push eax
    // lea ecx, [esp + 0x14]
    // push 0
    // push ecx
    // lea ecx, [esi + 0x668]
    // CALL(0x4a4db0)
    // test eax, eax
    // if (...) GOTO(0x49cbc6)
    // pop edi
    // pop esi
    // xor eax, eax
    // pop ebx
    // pop ecx
    // return;
    // mov edx, dword ptr [esi + 0x674]
    // mov eax, dword ptr [esi + 0x940]
    // push 0
    // push edx
    // push eax
    // push(0x4e49b4)  // ptr?
    // if (...) GOTO(0x49cc89)
    // mov ecx, dword ptr [esi + 0x940]
    // push 0
    // push ecx
    // lea edx, [esp + 0x14]
    // push eax
    // push edx
    // lea ecx, [esi + 0x668]
    // CALL(0x4a4db0)
    // cmp eax, 0x12
    // if (...) GOTO(0x49cc06)
    // pop edi
    // pop esi
    // xor eax, eax
    // pop ebx
    // pop ecx
    // return;
    // mov eax, dword ptr [esp + 0xc]
    // test eax, eax
    // if (...) GOTO(0x49cc32)
    // push 0
    // push 0
    // CALL(dword)
    // push eax
    // push(0x4e499c)  // ptr?
    // push(0x4e498c)  // ptr?
    // CALL(0x4a0320)
    // add esp, 0x14
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebx
    // pop ecx
    // return;
    // mov edi, dword ptr [esi + 0xd8]
    // test edi, edi
    // if (...) GOTO(0x49cc74)
    // mov ebx, dword ptr [0x4ba20c]
    // cmp edi, 0x10000
    // mov eax, 0x10000
    // if (...) GOTO(0x49cc51)
    // mov eax, edi
    // mov ecx, dword ptr [esi + 0xbc]
    // push eax
    // mov eax, dword ptr [esp + 0x10]
    // push eax
    // push ecx
    // CALL(ebx)
    // test eax, eax
    // if (...) GOTO(0x49cca7)
    // mov ecx, dword ptr [esp + 0xc]
    // sub edi, eax
    // add ecx, eax
    // test edi, edi
    // mov dword ptr [esp + 0xc], ecx
    // if (...) GOTO(0x49cc42)
    // mov edx, dword ptr [esi + 0x674]
    // mov eax, dword ptr [esi + 0x940]
    // push 0
    // push edx
    // push eax
    // push(0x4e4974)  // ptr?
    // push(0x4e498c)  // ptr?
    // CALL(0x4a0320)
    // add esp, 0x14
    // mov ecx, esi
    // CALL(0x49c940)
    // pop edi
    // pop esi
    // mov eax, 1
    // pop ebx
    // pop ecx
    // return;
    // mov eax, dword ptr [esi + 0xb8]
    // pop edi
    // and ah, 0x7f
    // mov dword ptr [esi + 0xb8], eax
    // pop esi
    // xor eax, eax
    // pop ebx
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // push ecx
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // mov ebp, 0xffffefff
    // mov eax, dword ptr [esi + 0xb8]
    // test al, 0x10
    // if (...) GOTO(0x49ceef)
    // test al, 1
    // if (...) GOTO(0x49ccee)
    // mov eax, dword ptr [esi + 4]
    // lea ecx, [esi + 4]
    // CALL(dword)
    // mov edi, eax
    // if (...) GOTO(0x49cd1d)
    // CALL(dword)
    // mov edx, dword ptr [esi + 0x93c]
    // mov ecx, eax
    // mov eax, dword ptr [esi + 0x13c]
    // sub ecx, edx
    // imul eax, ecx
    // xor edx, edx
    // div dword ptr [esi + 0x138]
    // mov ecx, eax
    // mov eax, 0x10624dd3
    // mul ecx
    // mov edi, edx
    // shr edi, 6
    // mov eax, dword ptr [esi + 0x944]
    // cmp edi, eax
    // if (...) GOTO(0x49cd2f)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // pop ecx
    // return;
    // if (...) GOTO(0x49cd44)
    // mov eax, dword ptr [esi + 0xb8]
    // test ah, 0x10
    // if (...) GOTO(0x49cd44)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // pop ecx
    // return;
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x944]
    // mov edx, edi
    // sub edx, ecx
    // push 0
    // push edx
    // push eax
    // push(0x4e4954)  // ptr?
    // push(0x4e49e4)  // ptr?
    // CALL(0x4a0320)
    // mov eax, dword ptr [esi + 0x944]
    // add esp, 0x14
    // cmp edi, eax
    // if (...) GOTO(0x49ceef)
    // inc eax
    // cmp edi, eax
    // if (...) GOTO(0x49cd9d)
    // mov eax, dword ptr [esi + 0x674]
    // test eax, eax
    // if (...) GOTO(0x49cee0)
    // mov ecx, esi
    // CALL(0x49cb90)
    // and dword ptr [esi + 0xb8], ebp
    // if (...) GOTO(0x49ceef)
    // push edi
    // mov ecx, esi
    // CALL(0x49cf50)
    // mov ebx, eax
    // cmp ebx, -1
    // if (...) GOTO(0x49cde7)
    // cmp dword ptr [esi + 0x944], edi
    // if (...) GOTO(0x49cde7)
    // mov eax, dword ptr [esi + 0xb8]
    // push 0
    // and eax, ebp
    // mov ecx, esi
    // mov dword ptr [esi + 0xb8], eax
    // CALL(0x49cb80)
    // test eax, eax
    // if (...) GOTO(0x49cddf)
    // mov ecx, esi
    // CALL(0x49cb90)
    // push 0
    // mov ecx, esi
    // CALL(0x49cb80)
    // cmp dword ptr [esi + 0x944], edi
    // if (...) GOTO(0x49cdb4)
    // mov eax, dword ptr [esi + 0x944]
    // push ebx
    // push eax
    // push edi
    // push(0x4e49d4)  // ptr?
    // push(0x4e49e4)  // ptr?
    // CALL(0x4a0320)
    // mov eax, dword ptr [esi + 0x944]
    // mov ecx, edi
    // mov edx, ebx
    // sub ecx, eax
    // sub edx, edi
    // add esp, 0x14
    // cmp ecx, edx
    // if (...) GOTO(0x49ce6b)
    // dec edi
    // cmp eax, edi
    // if (...) GOTO(0x49ce43)
    // mov ebx, dword ptr [esi + 0xb8]
    // push 1
    // and ebx, ebp
    // mov ecx, esi
    // mov dword ptr [esi + 0xb8], ebx
    // CALL(0x49cb80)
    // test eax, eax
    // if (...) GOTO(0x49ce3b)
    // mov ecx, esi
    // CALL(0x49cb90)
    // cmp dword ptr [esi + 0x944], edi
    // if (...) GOTO(0x49ce19)
    // mov edi, dword ptr [esi + 0xb8]
    // push 0
    // and edi, ebp
    // mov ecx, esi
    // mov dword ptr [esi + 0xb8], edi
    // CALL(0x49cb80)
    // test eax, eax
    // if (...) GOTO(0x49ceef)
    // mov ecx, esi
    // CALL(0x49cb90)
    // if (...) GOTO(0x49cee6)
    // mov eax, dword ptr [esi + 0x940]
    // dec eax
    // cmp ebx, eax
    // if (...) GOTO(0x49cea3)
    // push(0x28)
    // lea ecx, [esi + 0x668]
    // CALL(0x4a4d30)
    // cmp dword ptr [esi + 0x940], ebx
    // if (...) GOTO(0x49ce9a)
    // mov ecx, esi
    // CALL(0x49c940)
    // cmp dword ptr [esi + 0x940], ebx
    // if (...) GOTO(0x49ce8b)
    // mov ecx, esi
    // CALL(0x49cb90)
    // if (...) GOTO(0x49cee0)
    // lea ecx, [esp + 0x10]
    // lea edi, [esi + 0x668]
    // push 0
    // push ecx
    // mov ecx, edi
    // mov dword ptr [esp + 0x18], 0
    // CALL(0x4a4ea0)
    // cmp dword ptr [esp + 0x10], ebx
    // if (...) GOTO(0x49cee0)
    // mov ecx, edi
    // CALL(0x4a4ed0)
    // lea edx, [esp + 0x10]
    // push 0
    // push edx
    // mov ecx, edi
    // CALL(0x4a4ea0)
    // cmp dword ptr [esp + 0x10], ebx
    // if (...) GOTO(0x49cec5)
    // and dword ptr [esi + 0xb8], ebp
    // push 0
    // mov ecx, esi
    // CALL(0x49cb80)
    // mov eax, dword ptr [esi + 0x938]
    // mov ecx, dword ptr [esi + 0x944]
    // dec eax
    // cmp ecx, eax
    // if (...) GOTO(0x49cf0f)
    // mov eax, dword ptr [esi + 0xb8]
    // and ah, 0x7f
    // mov dword ptr [esi + 0xb8], eax
    // mov eax, dword ptr [esi + 0xb8]
    // push 0
    // and eax, ebp
    // push 0
    // mov dword ptr [esi + 0xb8], eax
    // CALL(dword)
    // push eax
    // push(0x4e49cc)  // ptr?
    // push(0x4e49e4)  // ptr?
    // CALL(0x4a0320)
    // add esp, 0x14
    // mov eax, 1
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [ecx + 0xbc]
    // push ebp
    // test eax, eax
    // if (...) GOTO(0x49cff6)
    // mov edx, dword ptr [ecx + 0x948]
    // test edx, edx
    // if (...) GOTO(0x49cff6)
    // mov ebp, dword ptr [ecx + 0x938]
    // mov eax, dword ptr [esp + 8]
    // cmp eax, ebp
    // if (...) GOTO(0x49cff6)
    // test eax, eax
    // if (...) GOTO(0x49cff6)
    // push esi
    // mov esi, dword ptr [ecx + 0x1a4]
    // push edi
    // mov edi, dword ptr [edx]
    // cmp edi, esi
    // if (...) GOTO(0x49cf97)
    // mov edi, dword ptr [edx + 0x10]
    // add edx, 0x10
    // cmp edi, esi
    // if (...) GOTO(0x49cf8d)
    // test eax, eax
    // if (...) GOTO(0x49cfae)
    // mov edi, eax
    // add edx, 0x10
    // cmp dword ptr [edx], esi
    // if (...) GOTO(0x49cfab)
    // add edx, 0x10
    // cmp dword ptr [edx], esi
    // if (...) GOTO(0x49cfa4)
    // dec edi
    // if (...) GOTO(0x49cf9d)
    // lea edi, [ebp - 1]
    // cmp eax, edi
    // if (...) GOTO(0x49cfd0)
    // test byte ptr [edx + 4], 0x10
    // if (...) GOTO(0x49cfce)
    // add edx, 0x10
    // cmp dword ptr [edx], esi
    // if (...) GOTO(0x49cfc9)
    // add edx, 0x10
    // cmp dword ptr [edx], esi
    // if (...) GOTO(0x49cfc2)
    // inc eax
    // cmp eax, edi
    // if (...) GOTO(0x49cfb5)
    // cmp eax, edi
    // pop edi
    // pop esi
    // if (...) GOTO(0x49cfe8)
    // push ebx
    // mov bl, byte ptr [edx + 4]
    // test bl, 0x10
    // pop ebx
    // if (...) GOTO(0x49cff6)
    // mov dword ptr [ecx + 0x94c], edx
    // pop ebp
    // return;
    // cmp eax, ebp
    // if (...) GOTO(0x49cff6)
    // mov dword ptr [ecx + 0x94c], edx
    // pop ebp
    // return;
    // or eax, 0xffffffff
    // pop ebp
    // return;
    // // nop
    // // nop
    // // nop
    // CALL(0x49d010)
    // if (...) GOTO(0x49d020)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x8406e8
    // if (...) GOTO(0x49d050)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x49d030)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x8406e8
    // if (...) GOTO(0x49d040)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // if (...) GOTO(0x474810)
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
    // mov esi, ecx
    // CALL(0x4747a0)
    // mov dword ptr [esi], 0x4bbe6c
    // mov dword ptr [esi + 0x18], 0
    // mov eax, esi
    // pop esi
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // CALL(0x49d040)
    // test byte ptr [esp + 8], 1
    // if (...) GOTO(0x49d088)
    // push esi
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov eax, esi
    // pop esi
    // return;
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // mov eax, dword ptr [esi + 0x18]
    // test eax, eax
    // if (...) GOTO(0x49d09f)
    // CALL(0x49d0e0)
    // mov eax, dword ptr [esp + 8]
    // mov ecx, esi
    // push eax
    // CALL(0x474820)
    // test eax, eax
    // if (...) GOTO(0x49d0b8)
    // mov eax, 1
    // pop esi
    // return;
    // push(0x4e49f4)  // ptr?
    // mov ecx, esi
    // CALL(0x49d100)
    // mov dword ptr [esi + 0x18], 1
    // xor eax, eax
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
    // push esi
    // mov esi, ecx
    // CALL(0x4747e0)
    // mov dword ptr [esi + 0x18], 0
    // xor eax, eax
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
    // mov edx, ecx
    // push edi
    // mov edi, esi
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // push ecx
    // mov ecx, edx
    // CALL(0x474860)
    // mov edx, eax
    // mov edi, esi
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov eax, ecx
    // mov esi, edi
    // mov edi, edx
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, eax
    // mov eax, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
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
    // CALL(0x49d160)
    // if (...) GOTO(0x49d170)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x840710
    // if (...) GOTO(0x473ab0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x49d180)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov cl, byte ptr [0x840708]
    // mov al, 1
    // test al, cl
    // if (...) GOTO(0x49d1a8)
    // or cl, al
    // mov dword ptr [0x840710], 0x4ba2d8
    // mov byte ptr [0x840708], cl
    // mov ecx, 0x840710
    // if (...) GOTO(0x473ae0)
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push -1
    // push(0x4b91eb)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 0x2b8
    // push esi
    // lea ecx, [esp + 4]
    // CALL(0x474ae0)
    // push 0
    // push(0xec)
    // push(0xa)
    // push 0
    // push(0x4e49fc)  // ptr?
    // lea ecx, [esp + 0x18]
    // mov dword ptr [esp + 0x2d8], 0
    // CALL(0x475840)
    // test eax, eax
    // if (...) GOTO(0x49d20d)
    // push(0x10)
    // push(0x10)
    // mov ecx, 0x840710
    // CALL(0x4745c0)
    // if (...) GOTO(0x49d228)
    // push 1
    // push 1
    // push(0x10)
    // push(0x10)
    // push(0x12)
    // lea eax, [esp + 0x18]
    // push 1
    // push eax
    // mov ecx, 0x840710
    // CALL(0x473bf0)
    // mov esi, eax
    // mov dword ptr [esp + 0x2c4], 0xffffffff
    // test esi, esi
    // lea ecx, [esp + 4]
    // if (...) GOTO(0x49d25a)
    // CALL(0x474c40)
    // mov eax, esi
    // pop esi
    // mov ecx, dword ptr [esp + 0x2b8]
    // mov dword ptr fs:[0], ecx
    // add esp, 0x2c4
    // return;
    // CALL(0x474c40)
    // mov ecx, dword ptr [esp + 0x2bc]
    // xor eax, eax
    // pop esi
    // mov dword ptr fs:[0], ecx
    // add esp, 0x2c4
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x840710
    // if (...) GOTO(0x473ae0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // CALL(0x49d2a0)
    // if (...) GOTO(0x49d2b0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x8407c0
    // if (...) GOTO(0x473ab0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x49d2c0)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov cl, byte ptr [0x840740]
    // mov al, 1
    // test al, cl
    // if (...) GOTO(0x49d2e8)
    // or cl, al
    // mov dword ptr [0x8407c0], 0x4ba2d8
    // mov byte ptr [0x840740], cl
    // mov ecx, 0x8407c0
    // if (...) GOTO(0x473ae0)
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // CALL(0x49d300)
    // if (...) GOTO(0x49d310)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x840790
    // if (...) GOTO(0x473ab0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x49d320)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov cl, byte ptr [0x840740]
    // mov al, 2
    // test al, cl
    // if (...) GOTO(0x49d348)
    // or cl, al
    // mov dword ptr [0x840790], 0x4ba2d8
    // mov byte ptr [0x840740], cl
    // mov ecx, 0x840790
    // if (...) GOTO(0x473ae0)
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // CALL(0x49d360)
    // if (...) GOTO(0x49d370)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x8407f0
    // if (...) GOTO(0x473ab0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x49d380)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov cl, byte ptr [0x840740]
    // mov al, 4
    // test al, cl
    // if (...) GOTO(0x49d3a8)
    // or cl, al
    // mov dword ptr [0x8407f0], 0x4ba2d8
    // mov byte ptr [0x840740], cl
    // mov ecx, 0x8407f0
    // if (...) GOTO(0x473ae0)
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push esi
    // push edi
    // CALL(0x49d460)
    // push(0x4e4a08)  // ptr?
    // push(0x4e4680)  // ptr?
    // CALL(0x487e70)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x49d3d5)
    // pop edi
    // mov eax, 6
    // pop esi
    // return;
    // CALL(0x487e90)
    // mov esi, eax
    // test esi, esi
    // if (...) GOTO(0x49d3e8)
    // pop edi
    // mov eax, 1
    // pop esi
    // return;
    // mov eax, dword ptr [0x840820]
    // test eax, eax
    // if (...) GOTO(0x49d404)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [0x840820], 0
    // mov edi, esi
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // push ecx
    // CALL(0x4a504f)
    // add esp, 4
    // mov dword ptr [0x840820], eax
    // test eax, eax
    // if (...) GOTO(0x49d429)
    // pop edi
    // mov eax, 4
    // pop esi
    // return;
    // mov byte ptr [eax], 0
    // mov edi, esi
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edi, dword ptr [0x840820]
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // pop edi
    // pop esi
    // return;
    // CALL(0x405098)
    // // nop
    // mov eax, dword ptr [0x840820]
    // test eax, eax
    // if (...) GOTO(0x49d47c)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [0x840820], 0
    // return;
    // // nop
    // // nop
    // // nop
    // CALL(0x49d490)
    // if (...) GOTO(0x49d4a0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x840830
    // if (...) GOTO(0x473ab0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x49d4b0)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov cl, byte ptr [0x840828]
    // mov al, 1
    // test al, cl
    // if (...) GOTO(0x49d4d8)
    // or cl, al
    // mov dword ptr [0x840830], 0x4ba2d8
    // mov byte ptr [0x840828], cl
    // mov ecx, 0x840830
    // if (...) GOTO(0x473ae0)
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // CALL(0x49d4f0)
    // if (...) GOTO(0x49d500)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x840890
    // if (...) GOTO(0x473ab0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x49d510)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov cl, byte ptr [0x840828]
    // mov al, 2
    // test al, cl
    // if (...) GOTO(0x49d538)
    // or cl, al
    // mov dword ptr [0x840890], 0x4ba2d8
    // mov byte ptr [0x840828], cl
    // mov ecx, 0x840890
    // if (...) GOTO(0x473ae0)
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // CALL(0x49d550)
    // if (...) GOTO(0x49d560)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x840860
    // if (...) GOTO(0x473ab0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x49d570)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov cl, byte ptr [0x840828]
    // mov al, 4
    // test al, cl
    // if (...) GOTO(0x49d598)
    // or cl, al
    // mov dword ptr [0x840860], 0x4ba2d8
    // mov byte ptr [0x840828], cl
    // mov ecx, 0x840860
    // if (...) GOTO(0x473ae0)
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push -1
    // push(0x4b921a)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 8
    // mov eax, dword ptr [esp + 0x18]
    // push esi
    // push edi
    // xor edi, edi
    // mov esi, ecx
    // cmp eax, edi
    // mov dword ptr [esp + 0xc], esi
    // mov dword ptr [esp + 8], edi
    // if (...) GOTO(0x49d5f3)
    // lea ecx, [esi + 0x24]
    // mov dword ptr [esi], 0x4bbe7c
    // CALL(0x4804a0)
    // mov dword ptr [esp + 8], 1
    // lea ecx, [esi + 0x59c]
    // mov dword ptr [esp + 0x18], edi
    // CALL(0x489150)
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 4]
    // mov dword ptr [ecx + esi], 0x4bb744
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 4]
    // mov dword ptr [eax + esi + 0x274], 0x4bb730
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // mov dword ptr [edx + esi], 0x4bb724
    // mov eax, dword ptr [esi]
    // mov eax, dword ptr [eax + 4]
    // lea ecx, [eax - 0x24]
    // mov dword ptr [eax + esi - 4], ecx
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 8]
    // lea ecx, [eax - 0x59c]
    // mov dword ptr [eax + esi - 4], ecx
    // mov dword ptr [esi + 0x10], edi
    // mov dword ptr [esi + 0x14], edi
    // mov edx, dword ptr [0x4e4a14]
    // mov dword ptr [esi + 8], edx
    // mov eax, dword ptr [0x4e4a18]
    // mov dword ptr [esi + 0xc], eax
    // mov ecx, dword ptr [0x4e4a10]
    // mov eax, dword ptr [esi]
    // mov dword ptr [esi + 4], ecx
    // pop edi
    // mov edx, dword ptr [eax + 8]
    // mov ecx, dword ptr [edx + esi + 0x80]
    // mov dword ptr [esi + 0x18], ecx
    // mov edx, dword ptr [eax + 8]
    // mov ecx, dword ptr [esp + 0xc]
    // mov eax, dword ptr [edx + esi + 0x80]
    // mov dword ptr [esi + 0x1c], eax
    // mov eax, esi
    // pop esi
    // mov dword ptr fs:[0], ecx
    // add esp, 0x14
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // xor eax, eax
    // mov dword ptr [esi + 0x10], eax
    // mov dword ptr [esi + 0x14], eax
    // mov eax, dword ptr [0x4e4a14]
    // mov dword ptr [esi + 8], eax
    // mov ecx, dword ptr [0x4e4a18]
    // mov eax, dword ptr [esi]
    // mov dword ptr [esi + 0xc], ecx
    // mov edx, dword ptr [0x4e4a10]
    // mov dword ptr [esi + 4], edx
    // mov ecx, dword ptr [eax + 8]
    // add ecx, esi
    // CALL(0x4894b0)
    // mov ecx, dword ptr [esi]
    // mov ecx, dword ptr [ecx + 4]
    // add ecx, esi
    // CALL(0x480610)
    // pop esi
    // return;
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push esi
    // push edi
    // test ebx, ebx
    // mov esi, ecx
    // if (...) GOTO(0x49d6e8)
    // pop edi
    // pop esi
    // mov eax, 3
    // pop ebx
    // return;
    // lea edi, [esi - 0x59c]
    // mov ecx, edi
    // CALL(0x49d770)
    // test eax, eax
    // if (...) GOTO(0x49d767)
    // mov eax, dword ptr [edi]
    // push ebp
    // mov ebp, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [eax + 8]
    // mov dword ptr [ecx + esi - 0x574], ebp
    // mov edx, dword ptr [edi]
    // mov ecx, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [edx + 8]
    // mov dword ptr [eax + esi - 0x570], ecx
    // mov eax, dword ptr [ebx + 0x9c]
    // test ah, 0x10
    // if (...) GOTO(0x49d72d)
    // or dword ptr [esp + 0x20], 0x100000
    // mov eax, dword ptr [edi]
    // push 0
    // push 0
    // push ebx
    // mov edx, dword ptr [eax + 8]
    // mov eax, dword ptr [eax + 4]
    // lea ecx, [edx + esi]
    // lea eax, [eax + esi - 0x59c]
    // mov esi, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [ecx - 0x538]
    // mov ecx, dword ptr [ecx - 0x53c]
    // push esi
    // push 0
    // push edx
    // push ecx
    // mov ecx, dword ptr [esp + 0x38]
    // push ecx
    // push ebp
    // mov ecx, eax
    // CALL(0x4806c0)
    // pop ebp
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // xor ebx, ebx
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // mov eax, dword ptr [ecx + esi + 0xd0]
    // cmp eax, ebx
    // lea ebp, [ecx + esi]
    // if (...) GOTO(0x49d793)
    // pop esi
    // pop ebp
    // mov eax, 7
    // pop ebx
    // return;
    // mov eax, dword ptr [ebp + 0x38]
    // push edi
    // cmp eax, ebx
    // if (...) GOTO(0x49d7d0)
    // mov ecx, dword ptr [esi + 4]
    // cmp ecx, ebx
    // if (...) GOTO(0x49d7d0)
    // mov eax, dword ptr [esi + 8]
    // cmp eax, ebx
    // if (...) GOTO(0x49d7d0)
    // mov edx, dword ptr [esi + 0xc]
    // cmp edx, ebx
    // if (...) GOTO(0x49d7d0)
    // mov eax, dword ptr [eax + 0x18]
    // mov ecx, dword ptr [ecx + 0x18]
    // cmp ecx, eax
    // mov edi, ecx
    // if (...) GOTO(0x49d7be)
    // mov edi, eax
    // mov edx, dword ptr [edx + 0x18]
    // cmp edx, edi
    // if (...) GOTO(0x49d7cd)
    // cmp ecx, eax
    // if (...) GOTO(0x49d7cb)
    // mov eax, ecx
    // mov edx, eax
    // mov dword ptr [ebp + 0x38], edx
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 8]
    // lea ebp, [eax + esi]
    // mov eax, dword ptr [eax + esi + 0x4c]
    // cmp eax, -1
    // if (...) GOTO(0x49d81d)
    // mov ecx, dword ptr [esi + 4]
    // cmp ecx, ebx
    // if (...) GOTO(0x49d818)
    // mov eax, dword ptr [esi + 8]
    // cmp eax, ebx
    // if (...) GOTO(0x49d818)
    // mov edx, dword ptr [esi + 0xc]
    // cmp edx, ebx
    // if (...) GOTO(0x49d818)
    // mov eax, dword ptr [eax + 0x1c]
    // mov ecx, dword ptr [ecx + 0x1c]
    // cmp ecx, eax
    // mov edi, ecx
    // if (...) GOTO(0x49d804)
    // mov edi, eax
    // mov edx, dword ptr [edx + 0x1c]
    // cmp edx, edi
    // if (...) GOTO(0x49d813)
    // cmp ecx, eax
    // if (...) GOTO(0x49d811)
    // mov eax, ecx
    // mov edx, eax
    // mov dword ptr [ebp + 0x6c], edx
    // if (...) GOTO(0x49d820)
    // mov dword ptr [ebp + 0x6c], ebx
    // if (...) GOTO(0x49d820)
    // mov dword ptr [ebp + 0x6c], eax
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [edx + esi + 0xd0]
    // lea eax, [edx + esi]
    // mov edx, dword ptr [edx + esi + 0x54]
    // cmp ecx, edx
    // if (...) GOTO(0x49d839)
    // mov ecx, edx
    // mov dword ptr [eax + 0x5c], ecx
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // mov eax, dword ptr [ecx + esi + 0xd0]
    // add ecx, esi
    // mov edi, dword ptr [ecx + 0x5c]
    // cmp edi, eax
    // if (...) GOTO(0x49d88f)
    // cdq 
    // idiv edi
    // inc eax
    // mov dword ptr [ecx + 0x50], eax
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 8]
    // lea ecx, [eax + esi]
    // mov eax, dword ptr [eax + esi + 0xd0]
    // cdq 
    // idiv dword ptr [ecx + 0x50]
    // mov dword ptr [ecx + 0x5c], eax
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [edx + esi + 0x5c]
    // lea eax, [edx + esi]
    // mov edx, dword ptr [edx + esi + 0x50]
    // mov edi, dword ptr [eax + 0xd0]
    // imul edx, ecx
    // cmp edx, edi
    // if (...) GOTO(0x49d88f)
    // inc ecx
    // mov dword ptr [eax + 0x5c], ecx
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // mov al, byte ptr [ecx + esi + 0x24]
    // add ecx, esi
    // test al, 2
    // if (...) GOTO(0x49d8b9)
    // mov eax, dword ptr [ecx + 0x30]
    // cmp eax, ebx
    // if (...) GOTO(0x49d8b9)
    // cdq 
    // idiv dword ptr [ecx + 0x50]
    // mov edx, dword ptr [ecx + 0x44]
    // shl edx, 1
    // mov ebp, eax
    // mov eax, dword ptr [ecx + 0x38]
    // sub ebp, edx
    // sub ebp, eax
    // if (...) GOTO(0x49d8be)
    // mov ebp, 0x186a0
    // mov eax, dword ptr [ecx + 0xd0]
    // xor edi, edi
    // test eax, eax
    // if (...) GOTO(0x49d97c)
    // mov eax, dword ptr [ecx + 0xc8]
    // test eax, eax
    // if (...) GOTO(0x49d906)
    // mov edx, dword ptr [ecx + 0xcc]
    // mov edx, dword ptr [edx + 0xc]
    // mov dword ptr [ecx + 0xcc], edx
    // mov edx, dword ptr [ecx + 0xd4]
    // inc edx
    // cmp edx, dword ptr [ecx + 0xd0]
    // mov dword ptr [ecx + 0xd4], edx
    // if (...) GOTO(0x49d906)
    // mov dword ptr [ecx + 0xd4], 0
    // mov ecx, dword ptr [ecx + 0xcc]
    // test ecx, ecx
    // if (...) GOTO(0x49d923)
    // test eax, eax
    // if (...) GOTO(0x49d91c)
    // mov ecx, dword ptr [ecx + 8]
    // mov eax, dword ptr [ecx + 4]
    // if (...) GOTO(0x49d925)
    // xor ecx, ecx
    // mov eax, dword ptr [ecx + 4]
    // if (...) GOTO(0x49d925)
    // xor eax, eax
    // push eax
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 4]
    // lea ecx, [ecx + esi + 0x274]
    // CALL(0x477250)
    // cmp eax, ebx
    // if (...) GOTO(0x49d93d)
    // mov ebx, eax
    // mov edx, dword ptr [esi]
    // mov ecx, dword ptr [edx + 8]
    // mov edx, dword ptr [ecx + esi + 0xc8]
    // test edx, edx
    // lea ecx, [ecx + esi + 0xc0]
    // if (...) GOTO(0x49d95c)
    // mov edx, dword ptr [ecx + 0xc]
    // mov ecx, dword ptr [edx + 8]
    // if (...) GOTO(0x49d95e)
    // xor ecx, ecx
    // cdq 
    // idiv ebp
    // inc eax
    // inc edi
    // mov dword ptr [ecx + 8], eax
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // mov eax, dword ptr [ecx + esi + 0xd0]
    // add ecx, esi
    // cmp edi, eax
    // if (...) GOTO(0x49d8ce)
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 8]
    // add eax, esi
    // mov ecx, dword ptr [eax + 0x48]
    // mov edi, dword ptr [eax + 0x38]
    // add ecx, edi
    // add ecx, ebx
    // mov dword ptr [eax + 0x68], ecx
    // mov edi, dword ptr [esi]
    // mov eax, edi
    // mov edx, dword ptr [edi + 8]
    // mov ecx, dword ptr [eax + 4]
    // mov ebp, dword ptr [edx + esi + 0x6c]
    // lea ecx, [ecx + esi + 0x274]
    // CALL(0x477560)
    // cmp ebp, eax
    // if (...) GOTO(0x49d9b2)
    // mov eax, ebp
    // if (...) GOTO(0x49d9c1)
    // mov edx, dword ptr [edi + 4]
    // lea ecx, [edx + esi + 0x274]
    // CALL(0x477560)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // mov dword ptr [edx + esi + 0x6c], eax
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + esi]
    // mov cl, byte ptr [ecx + esi + 0x24]
    // test cl, 2
    // if (...) GOTO(0x49da05)
    // mov ecx, dword ptr [eax + 0x30]
    // test ecx, ecx
    // if (...) GOTO(0x49da05)
    // mov dword ptr [eax + 0x60], ecx
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 8]
    // mov edx, dword ptr [eax + esi + 0x44]
    // shl edx, 1
    // lea ecx, [eax + esi]
    // mov eax, dword ptr [eax + esi + 0x30]
    // sub eax, edx
    // cdq 
    // idiv dword ptr [ecx + 0x50]
    // sub eax, dword ptr [ecx + 0x48]
    // mov dword ptr [ecx + 0x68], eax
    // if (...) GOTO(0x49da52)
    // mov edx, dword ptr [eax + 0x68]
    // mov ecx, dword ptr [eax + 0x44]
    // imul edx, dword ptr [eax + 0x50]
    // mov edi, dword ptr [eax + 0x30]
    // shl ecx, 1
    // add edx, ecx
    // add ecx, edi
    // cmp ecx, edx
    // if (...) GOTO(0x49da1e)
    // mov ecx, edx
    // mov dword ptr [eax + 0x60], ecx
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // mov eax, dword ptr [ecx + esi + 0x60]
    // add ecx, esi
    // mov edx, dword ptr [ecx + 0x44]
    // shl edx, 1
    // sub eax, edx
    // cdq 
    // idiv dword ptr [ecx + 0x50]
    // sub eax, dword ptr [ecx + 0x48]
    // mov dword ptr [ecx + 0x68], eax
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [ecx + esi + 0x48]
    // lea eax, [ecx + esi]
    // mov ecx, dword ptr [ecx + esi + 0x60]
    // sub ecx, edx
    // mov dword ptr [eax + 0x60], ecx
    // mov eax, dword ptr [esi]
    // pop edi
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [ecx + esi + 0x50]
    // lea eax, [ecx + esi]
    // mov dword ptr [eax + 0x58], edx
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + esi]
    // mov cl, byte ptr [ecx + esi + 0x24]
    // test cl, 1
    // if (...) GOTO(0x49da95)
    // mov ecx, dword ptr [eax + 0x34]
    // test ecx, ecx
    // if (...) GOTO(0x49da95)
    // mov dword ptr [eax + 0x64], ecx
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 8]
    // lea ecx, [eax + esi]
    // pop esi
    // pop ebp
    // pop ebx
    // mov eax, dword ptr [ecx + 0x34]
    // cdq 
    // idiv dword ptr [ecx + 0x6c]
    // mov dword ptr [ecx + 0x5c], eax
    // xor eax, eax
    // return;
    // mov ecx, dword ptr [eax + 0x6c]
    // mov edx, dword ptr [eax + 0x48]
    // add ecx, edx
    // pop esi
    // imul ecx, dword ptr [eax + 0x5c]
    // mov dword ptr [eax + 0x64], ecx
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // CALL(0x405098)
    // // nop
    // sub esp, 0x20
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // xor ebp, ebp
    // push edi
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 4]
    // mov eax, dword ptr [ecx + esi + 0x130]
    // cmp eax, ebp
    // mov dword ptr [esp + 0x1c], eax
    // if (...) GOTO(0x49e219)
    // mov ecx, dword ptr [0x83ad50]
    // cmp ecx, ebp
    // if (...) GOTO(0x49daeb)
    // mov edx, dword ptr [ecx]
    // push 1
    // push 1
    // push 1
    // CALL(dword)
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [ecx + 8]
    // mov ecx, dword ptr [ecx + 4]
    // add eax, esi
    // lea ecx, [ecx + esi + 0x274]
    // mov edx, dword ptr [eax + 0xa4]
    // push edx
    // mov edx, dword ptr [eax + 0x98]
    // push edx
    // mov edx, dword ptr [eax + 0x8c]
    // mov eax, dword ptr [eax + 0x80]
    // push edx
    // push eax
    // CALL(0x476310)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [ecx + 4]
    // lea eax, [edx + esi]
    // lea ecx, [ecx + esi + 0x274]
    // mov edx, dword ptr [eax + 0xa8]
    // push edx
    // mov edx, dword ptr [eax + 0x9c]
    // push edx
    // mov edx, dword ptr [eax + 0x90]
    // mov eax, dword ptr [eax + 0x84]
    // push edx
    // push eax
    // CALL(0x476340)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [ecx + 4]
    // lea eax, [edx + esi]
    // lea ecx, [ecx + esi + 0x274]
    // mov edx, dword ptr [eax + 0xac]
    // push edx
    // mov edx, dword ptr [eax + 0xa0]
    // push edx
    // mov edx, dword ptr [eax + 0x94]
    // mov eax, dword ptr [eax + 0x88]
    // push edx
    // push eax
    // CALL(0x476370)
    // mov ecx, dword ptr [esi]
    // push ebp
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [ecx + 4]
    // lea eax, [edx + esi]
    // lea ecx, [ecx + esi + 0x274]
    // mov edx, dword ptr [eax + 0x7c]
    // push edx
    // mov edx, dword ptr [eax + 0x78]
    // mov eax, dword ptr [eax + 0x74]
    // push edx
    // push eax
    // CALL(0x4762d0)
    // mov edx, dword ptr [esi]
    // mov dword ptr [esp + 0x10], ebp
    // mov eax, dword ptr [edx + 8]
    // mov edi, dword ptr [eax + esi + 0xd0]
    // lea ecx, [eax + esi + 0xc0]
    // lea ebx, [edi - 1]
    // cmp ebx, -1
    // if (...) GOTO(0x49dbeb)
    // mov edx, dword ptr [ecx + 8]
    // or eax, 0xffffffff
    // mov dword ptr [ecx + 0xc], edx
    // cdq 
    // xor eax, edx
    // sub eax, edx
    // cmp eax, edi
    // if (...) GOTO(0x49dbeb)
    // cmp eax, ebp
    // if (...) GOTO(0x49dbe8)
    // mov edx, dword ptr [ecx + 0xc]
    // dec eax
    // mov edx, dword ptr [edx + 0x10]
    // mov dword ptr [ecx + 0xc], edx
    // if (...) GOTO(0x49dbdc)
    // mov dword ptr [ecx + 0x14], ebx
    // mov eax, dword ptr [esp + 0x34]
    // cmp eax, ebp
    // if (...) GOTO(0x49dcf0)
    // mov dword ptr [esp + 0x18], eax
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + esi + 0xc0]
    // mov ecx, dword ptr [ecx + esi + 0xc8]
    // cmp ecx, ebp
    // if (...) GOTO(0x49dc2e)
    // mov edx, dword ptr [eax + 0xc]
    // mov ebx, dword ptr [eax + 0x14]
    // mov edi, dword ptr [eax + 0x10]
    // inc ebx
    // mov edx, dword ptr [edx + 0xc]
    // mov dword ptr [eax + 0x14], ebx
    // mov dword ptr [eax + 0xc], edx
    // mov edx, ebx
    // cmp edx, edi
    // if (...) GOTO(0x49dc2e)
    // mov dword ptr [eax + 0x14], ebp
    // mov eax, dword ptr [eax + 0xc]
    // cmp eax, ebp
    // if (...) GOTO(0x49dce1)
    // cmp ecx, ebp
    // if (...) GOTO(0x49dc42)
    // mov eax, dword ptr [eax + 8]
    // if (...) GOTO(0x49dc44)
    // xor eax, eax
    // cmp dword ptr [eax + 8], 1
    // if (...) GOTO(0x49dce1)
    // mov eax, dword ptr [esi]
    // mov eax, dword ptr [eax + 8]
    // mov ecx, dword ptr [eax + esi + 0xc8]
    // lea eax, [eax + esi + 0xc0]
    // cmp ecx, ebp
    // if (...) GOTO(0x49dc74)
    // mov ecx, dword ptr [eax + 0xc]
    // mov eax, dword ptr [ecx + 8]
    // mov edx, dword ptr [eax + 8]
    // mov dword ptr [esp + 0x14], edx
    // if (...) GOTO(0x49dc78)
    // mov dword ptr [esp + 0x14], ebp
    // mov edi, dword ptr [esi]
    // mov eax, dword ptr [edi + 8]
    // mov ecx, dword ptr [edi + 4]
    // mov ebp, dword ptr [eax + esi + 0x6c]
    // lea ebx, [eax + esi]
    // lea ecx, [ecx + esi + 0x274]
    // CALL(0x477580)
    // imul eax, dword ptr [esp + 0x14]
    // cmp ebp, eax
    // if (...) GOTO(0x49dca0)
    // mov eax, ebp
    // if (...) GOTO(0x49dccc)
    // mov eax, dword ptr [ebx + 0xc8]
    // test eax, eax
    // if (...) GOTO(0x49dcb8)
    // mov edx, dword ptr [ebx + 0xcc]
    // mov eax, dword ptr [edx + 8]
    // mov ebx, dword ptr [eax + 8]
    // if (...) GOTO(0x49dcba)
    // xor ebx, ebx
    // mov eax, dword ptr [edi + 4]
    // lea ecx, [eax + esi + 0x274]
    // CALL(0x477580)
    // imul eax, ebx
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [esp + 0x10]
    // sub eax, dword ptr [edx + esi + 0x6c]
    // add ecx, eax
    // xor ebp, ebp
    // mov dword ptr [esp + 0x10], ecx
    // mov eax, dword ptr [esp + 0x18]
    // dec eax
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x49dbfb)
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // mov eax, dword ptr [esp + 0x34]
    // add ecx, esi
    // cdq 
    // mov ebx, dword ptr [ecx + 0x5c]
    // mov edi, dword ptr [ecx + 0x48]
    // idiv ebx
    // mov ebp, dword ptr [ecx + 0x68]
    // mov edx, dword ptr [ecx + 0x44]
    // add ebp, edi
    // imul ebp, eax
    // imul eax, ebx
    // add ebp, edx
    // mov edx, dword ptr [esp + 0x34]
    // mov ebx, edx
    // sub ebx, eax
    // mov eax, dword ptr [ecx + 0x6c]
    // add eax, edi
    // imul ebx, eax
    // mov eax, dword ptr [esp + 0x10]
    // add eax, ebx
    // mov ebx, dword ptr [ecx + 0xd0]
    // sar edi, 1
    // add edi, eax
    // lea eax, [ebx - 1]
    // cmp edx, eax
    // mov dword ptr [esp + 0x10], edi
    // if (...) GOTO(0x49e219)
    // mov eax, dword ptr [ecx + 0xc8]
    // mov edi, edx
    // test edi, edi
    // mov dword ptr [ecx + 0xcc], eax
    // if (...) GOTO(0x49dd7f)
    // mov eax, edi
    // cdq 
    // xor eax, edx
    // sub eax, edx
    // cmp eax, ebx
    // if (...) GOTO(0x49e219)
    // test eax, eax
    // if (...) GOTO(0x49dd7a)
    // mov edx, dword ptr [ecx + 0xcc]
    // dec eax
    // mov edx, dword ptr [edx + 0x10]
    // mov dword ptr [ecx + 0xcc], edx
    // if (...) GOTO(0x49dd68)
    // lea edx, [ebx + edi]
    // if (...) GOTO(0x49dd93)
    // if (...) GOTO(0x49dd93)
    // mov eax, dword ptr [ecx + 0xcc]
    // dec edi
    // mov eax, dword ptr [eax + 0xc]
    // mov dword ptr [ecx + 0xcc], eax
    // if (...) GOTO(0x49dd81)
    // mov dword ptr [ecx + 0xd4], edx
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + esi + 0xc0]
    // mov ecx, dword ptr [ecx + esi + 0xc8]
    // test ecx, ecx
    // if (...) GOTO(0x49ddbf)
    // mov edx, dword ptr [eax + 0xc]
    // mov eax, dword ptr [edx + 8]
    // mov eax, dword ptr [eax + 8]
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x49ddc7)
    // mov dword ptr [esp + 0x18], 0
    // mov ebx, dword ptr [esi]
    // mov ecx, dword ptr [ebx + 8]
    // mov eax, dword ptr [ebx + 4]
    // mov edx, dword ptr [ecx + esi + 0x6c]
    // lea edi, [ecx + esi]
    // lea ecx, [eax + esi + 0x274]
    // mov dword ptr [esp + 0x14], edx
    // CALL(0x477580)
    // imul eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esp + 0x14]
    // cmp ecx, eax
    // if (...) GOTO(0x49ddf7)
    // mov ebx, ecx
    // if (...) GOTO(0x49de25)
    // mov eax, dword ptr [edi + 0xc8]
    // test eax, eax
    // if (...) GOTO(0x49de0f)
    // mov ecx, dword ptr [edi + 0xcc]
    // mov eax, dword ptr [ecx + 8]
    // mov edi, dword ptr [eax + 8]
    // if (...) GOTO(0x49de11)
    // xor edi, edi
    // mov edx, dword ptr [ebx + 4]
    // lea ecx, [edx + esi + 0x274]
    // CALL(0x477580)
    // mov ebx, eax
    // imul ebx, edi
    // mov eax, dword ptr [esi]
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [eax + 8]
    // mov ecx, dword ptr [esi + ecx + 0x68]
    // mov dword ptr [esp + 0x24], edx
    // add ecx, ebp
    // add edx, ebx
    // mov dword ptr [esp + 0x28], ecx
    // mov ecx, dword ptr [esp + 0x38]
    // test ecx, ecx
    // mov dword ptr [esp + 0x20], ebp
    // mov dword ptr [esp + 0x2c], edx
    // if (...) GOTO(0x49de55)
    // mov edx, 2
    // if (...) GOTO(0x49de6a)
    // mov ecx, dword ptr [eax + 8]
    // mov edi, dword ptr [esp + 0x34]
    // xor edx, edx
    // mov ecx, dword ptr [esi + ecx + 0xf4]
    // cmp ecx, edi
    // sete dl
    // test esi, esi
    // if (...) GOTO(0x49de74)
    // mov dword ptr [esp + 0x18], esi
    // if (...) GOTO(0x49de7d)
    // mov ecx, dword ptr [eax + 4]
    // add ecx, esi
    // mov dword ptr [esp + 0x18], ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // mov edi, dword ptr [ecx]
    // lea ecx, [esp + 0x20]
    // push ecx
    // push edx
    // mov edx, dword ptr [esp + 0x3c]
    // mov ecx, esi
    // push edx
    // mov edx, dword ptr [eax + 8]
    // add ecx, edx
    // CALL(0x489a30)
    // push eax
    // mov eax, dword ptr [esp + 0x24]
    // mov edx, edi
    // mov edi, dword ptr [esp + 0x28]
    // push eax
    // mov ecx, edi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x49dfde)
    // test esi, esi
    // if (...) GOTO(0x49debb)
    // xor ecx, ecx
    // if (...) GOTO(0x49dec7)
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 4]
    // lea ecx, [ecx + esi + 0x274]
    // mov edx, dword ptr [esi]
    // push ebx
    // mov ebx, dword ptr [esp + 0x14]
    // mov eax, dword ptr [edx + 8]
    // mov edx, dword ptr [eax + esi + 0x68]
    // add eax, esi
    // push edx
    // push ebx
    // push ebp
    // mov edx, dword ptr [eax + 0x2c]
    // mov eax, dword ptr [eax + 0x28]
    // add edx, ebx
    // add eax, ebp
    // push edx
    // push eax
    // push ecx
    // lea ecx, [edi + 0x274]
    // CALL(0x475c60)
    // mov eax, dword ptr [esi + 8]
    // test eax, eax
    // if (...) GOTO(0x49dfde)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x49dfde)
    // mov edx, dword ptr [esp + 0x38]
    // test edx, edx
    // if (...) GOTO(0x49df4e)
    // test esi, esi
    // if (...) GOTO(0x49df18)
    // xor ecx, ecx
    // if (...) GOTO(0x49df24)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 4]
    // lea ecx, [edx + esi + 0x274]
    // mov edx, dword ptr [esp + 0x2c]
    // mov edi, dword ptr [eax + 0x1c]
    // sub edx, edi
    // mov edi, dword ptr [esp + 0x24]
    // sub edx, edi
    // push 0
    // sar edx, 1
    // add edx, ebx
    // push edx
    // push ebp
    // push ecx
    // mov ecx, eax
    // CALL(0x473e60)
    // mov eax, dword ptr [esi + 0x1c]
    // push 2
    // push 2
    // push -1
    // if (...) GOTO(0x49dfcc)
    // mov eax, dword ptr [esi]
    // mov edi, dword ptr [esp + 0x34]
    // mov edx, dword ptr [eax + 8]
    // cmp dword ptr [edx + esi + 0xf4], edi
    // if (...) GOTO(0x49df91)
    // test esi, esi
    // if (...) GOTO(0x49df68)
    // xor eax, eax
    // if (...) GOTO(0x49df72)
    // mov eax, dword ptr [eax + 4]
    // lea eax, [eax + esi + 0x274]
    // mov edx, dword ptr [esp + 0x2c]
    // mov edi, dword ptr [ecx + 0x1c]
    // sub edx, edi
    // mov edi, dword ptr [esp + 0x24]
    // sub edx, edi
    // push 0
    // sar edx, 1
    // add edx, ebx
    // push edx
    // push ebp
    // push eax
    // CALL(0x473e60)
    // if (...) GOTO(0x49dfde)
    // test esi, esi
    // if (...) GOTO(0x49df99)
    // xor eax, eax
    // if (...) GOTO(0x49dfa3)
    // mov eax, dword ptr [eax + 4]
    // lea eax, [eax + esi + 0x274]
    // mov ecx, dword ptr [esi + 0xc]
    // mov edx, dword ptr [esp + 0x2c]
    // push 0
    // mov edi, dword ptr [ecx + 0x1c]
    // sub edx, edi
    // mov edi, dword ptr [esp + 0x28]
    // sub edx, edi
    // sar edx, 1
    // add edx, ebx
    // push edx
    // push ebp
    // push eax
    // CALL(0x473e60)
    // mov eax, dword ptr [esi + 0x18]
    // push 2
    // push 2
    // push -1
    // mov ecx, dword ptr [esi]
    // push eax
    // mov edx, dword ptr [ecx + 4]
    // lea ecx, [edx + esi + 0x274]
    // CALL(0x476310)
    // mov eax, dword ptr [esi]
    // mov edi, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [esi + ecx + 0x38]
    // add edi, edx
    // mov dword ptr [esp + 0x20], edi
    // mov eax, dword ptr [eax + 8]
    // mov ecx, dword ptr [esi + eax + 0xc8]
    // lea eax, [esi + eax + 0xc0]
    // test ecx, ecx
    // if (...) GOTO(0x49e11a)
    // mov ecx, dword ptr [eax + 0xc]
    // mov ecx, dword ptr [ecx + 8]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [eax + 8]
    // cmp edx, 1
    // if (...) GOTO(0x49e10b)
    // test ecx, ecx
    // if (...) GOTO(0x49e02e)
    // mov edx, dword ptr [eax + 0xc]
    // mov eax, dword ptr [edx + 8]
    // mov eax, dword ptr [eax + 4]
    // if (...) GOTO(0x49e030)
    // xor eax, eax
    // push(0x7c)
    // push eax
    // CALL(0x4a6170)
    // mov ebx, eax
    // add esp, 8
    // test ebx, ebx
    // if (...) GOTO(0x49e094)
    // mov ebx, dword ptr [esi]
    // mov eax, dword ptr [ebx + 8]
    // mov ecx, dword ptr [eax + esi + 0xc8]
    // lea eax, [eax + esi + 0xc0]
    // test ecx, ecx
    // if (...) GOTO(0x49e1d8)
    // mov ecx, dword ptr [eax + 0xc]
    // mov eax, dword ptr [ecx + 8]
    // mov edx, dword ptr [eax + 4]
    // test edx, edx
    // if (...) GOTO(0x49e1d8)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea eax, [esp + 0x20]
    // push ecx
    // mov ecx, dword ptr [ebx + 4]
    // push eax
    // push edx
    // lea ecx, [ecx + esi + 0x274]
    // CALL(0x477cd0)
    // if (...) GOTO(0x49e1d8)
    // mov byte ptr [ebx], 0
    // mov ebp, dword ptr [esi]
    // mov edx, dword ptr [ebp + 8]
    // mov ecx, dword ptr [edx + esi + 0xc8]
    // lea eax, [edx + esi + 0xc0]
    // test ecx, ecx
    // if (...) GOTO(0x49e0dd)
    // mov eax, dword ptr [eax + 0xc]
    // mov eax, dword ptr [eax + 8]
    // mov edx, dword ptr [eax + 4]
    // test edx, edx
    // if (...) GOTO(0x49e0dd)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // lea ecx, [esp + 0x24]
    // push ecx
    // push edx
    // mov edx, dword ptr [ebp + 4]
    // lea ecx, [edx + esi + 0x274]
    // CALL(0x477cd0)
    // mov byte ptr [ebx], 0x7c
    // inc ebx
    // if (...) GOTO(0x49e1d8)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea eax, [esp + 0x20]
    // push ecx
    // mov ecx, dword ptr [esi]
    // push eax
    // push ebx
    // mov edx, dword ptr [ecx + 4]
    // lea ecx, [edx + esi + 0x274]
    // if (...) GOTO(0x49e1d3)
    // test ecx, ecx
    // if (...) GOTO(0x49e11a)
    // mov eax, dword ptr [eax + 0xc]
    // mov eax, dword ptr [eax + 8]
    // mov eax, dword ptr [eax + 4]
    // if (...) GOTO(0x49e11c)
    // xor eax, eax
    // push(0x7c)
    // push eax
    // CALL(0x4a6170)
    // mov ebp, eax
    // add esp, 8
    // test ebp, ebp
    // if (...) GOTO(0x49e16c)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // lea eax, [edx + esi + 0xc0]
    // mov edx, dword ptr [edx + esi + 0xc8]
    // test edx, edx
    // if (...) GOTO(0x49e14f)
    // mov eax, dword ptr [eax + 0xc]
    // mov eax, dword ptr [eax + 8]
    // mov eax, dword ptr [eax + 4]
    // if (...) GOTO(0x49e151)
    // xor eax, eax
    // push 0
    // lea edx, [esp + 0x24]
    // push 0
    // push edx
    // push eax
    // mov eax, dword ptr [ecx + 4]
    // lea ecx, [eax + esi + 0x274]
    // CALL(0x4782d0)
    // if (...) GOTO(0x49e1d8)
    // mov byte ptr [ebp], 0
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [ecx + esi + 0xc8]
    // lea ecx, [ecx + esi + 0xc0]
    // test edx, edx
    // if (...) GOTO(0x49e192)
    // mov edx, dword ptr [ecx + 0xc]
    // mov ecx, dword ptr [edx + 8]
    // mov ecx, dword ptr [ecx + 4]
    // if (...) GOTO(0x49e194)
    // xor ecx, ecx
    // mov eax, dword ptr [eax + 4]
    // push 0
    // lea edx, [esp + 0x24]
    // push 0
    // push edx
    // push ecx
    // lea ecx, [eax + esi + 0x274]
    // CALL(0x4782d0)
    // mov byte ptr [ebp], 0x7c
    // inc ebp
    // if (...) GOTO(0x49e1d8)
    // mov edi, ebp
    // or ecx, 0xffffffff
    // xor eax, eax
    // mov edx, dword ptr [esi]
    // repne scasb al, byte ptr es:[edi]
    // mov eax, dword ptr [edx + 4]
    // not ecx
    // dec ecx
    // push ecx
    // lea ecx, [esp + 0x24]
    // push ecx
    // push ebp
    // lea ecx, [eax + esi + 0x274]
    // CALL(0x4781f0)
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // cmp dword ptr [esi + ecx + 0xbc], -1
    // if (...) GOTO(0x49e219)
    // mov ecx, dword ptr [esp + 0x38]
    // test ecx, ecx
    // if (...) GOTO(0x49e219)
    // mov edi, dword ptr [esp + 0x20]
    // sub edi, 2
    // mov dword ptr [esp + 0x20], edi
    // mov edx, dword ptr [eax + 8]
    // mov eax, dword ptr [eax + 4]
    // mov ecx, dword ptr [esi + edx + 0xbc]
    // lea edx, [esp + 0x20]
    // push ecx
    // push edx
    // lea ecx, [eax + esi + 0x274]
    // CALL(0x479670)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x20
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
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // mov dword ptr [esp + 0x10], 1
    // mov eax, dword ptr [esi - 0x24]
    // lea edi, [esi - 0x24]
    // mov ecx, dword ptr [eax + 4]
    // mov edx, dword ptr [ecx + esi + 0x10c]
    // mov dword ptr [0x83ab2c], edx
    // mov eax, dword ptr [edi]
    // mov ecx, dword ptr [eax + 8]
    // mov ebx, dword ptr [ecx + esi + 0xac]
    // lea ecx, [ecx + esi + 0x9c]
    // lea ebp, [ebx - 1]
    // cmp ebp, -1
    // if (...) GOTO(0x49e295)
    // mov edx, dword ptr [ecx + 8]
    // or eax, 0xffffffff
    // mov dword ptr [ecx + 0xc], edx
    // cdq 
    // xor eax, edx
    // sub eax, edx
    // cmp eax, ebx
    // if (...) GOTO(0x49e295)
    // test eax, eax
    // if (...) GOTO(0x49e292)
    // mov edx, dword ptr [ecx + 0xc]
    // dec eax
    // mov edx, dword ptr [edx + 0x10]
    // mov dword ptr [ecx + 0xc], edx
    // if (...) GOTO(0x49e286)
    // mov dword ptr [ecx + 0x14], ebp
    // mov ebp, dword ptr [esp + 0x1c]
    // test ebp, ebp
    // if (...) GOTO(0x49e343)
    // mov eax, dword ptr [esp + 0x10]
    // xor ebx, ebx
    // cmp eax, ebx
    // if (...) GOTO(0x49e2c7)
    // mov eax, dword ptr [edi]
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [ecx + esi + 0xac]
    // lea eax, [ecx + esi]
    // dec edx
    // cmp dword ptr [eax + 0xb0], edx
    // if (...) GOTO(0x49e445)
    // mov eax, dword ptr [edi]
    // mov dword ptr [esp + 0x10], ebx
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + esi + 0x9c]
    // mov ecx, dword ptr [ecx + esi + 0xa4]
    // cmp ecx, ebx
    // if (...) GOTO(0x49e2fa)
    // mov edx, dword ptr [eax + 0xc]
    // mov edx, dword ptr [edx + 0xc]
    // mov dword ptr [eax + 0xc], edx
    // mov edx, dword ptr [eax + 0x14]
    // inc edx
    // cmp edx, dword ptr [eax + 0x10]
    // mov dword ptr [eax + 0x14], edx
    // if (...) GOTO(0x49e2fa)
    // mov dword ptr [eax + 0x14], ebx
    // mov eax, dword ptr [eax + 0xc]
    // cmp eax, ebx
    // if (...) GOTO(0x49e30f)
    // cmp ecx, ebx
    // if (...) GOTO(0x49e30a)
    // mov eax, dword ptr [eax + 8]
    // if (...) GOTO(0x49e30c)
    // xor eax, eax
    // mov ebx, dword ptr [eax + 8]
    // mov eax, dword ptr [edi]
    // mov ecx, dword ptr [eax + 4]
    // lea ecx, [ecx + esi + 0x250]
    // CALL(0x477580)
    // imul eax, ebx
    // mov edx, dword ptr [edi]
    // mov ecx, dword ptr [edx + 8]
    // mov edx, dword ptr [ecx + esi + 0x48]
    // add ecx, esi
    // mov ecx, dword ptr [ecx + 0x24]
    // add ecx, edx
    // cmp ecx, eax
    // if (...) GOTO(0x49e339)
    // mov eax, ecx
    // sub ebp, eax
    // test ebp, ebp
    // if (...) GOTO(0x49e2a1)
    // mov edx, dword ptr [edi]
    // mov eax, dword ptr [edx + 8]
    // mov ebx, dword ptr [eax + esi + 0x44]
    // lea ecx, [eax + esi]
    // mov eax, dword ptr [eax + esi + 0x24]
    // mov ebp, dword ptr [ecx + 0xb0]
    // add ebx, eax
    // mov eax, dword ptr [esp + 0x18]
    // cdq 
    // idiv ebx
    // mov ebx, eax
    // mov eax, dword ptr [ecx + 0xcc]
    // imul ebx, dword ptr [ecx + 0x38]
    // add ebx, ebp
    // cmp eax, ebx
    // if (...) GOTO(0x49e3bf)
    // mov eax, dword ptr [esi - 0x10]
    // test eax, eax
    // if (...) GOTO(0x49e38a)
    // add ecx, -0x24
    // CALL(0x489950)
    // push eax
    // CALL(dword)
    // add esp, 4
    // mov edi, dword ptr [edi]
    // mov ecx, dword ptr [edi + 8]
    // test byte ptr [ecx + esi], 4
    // if (...) GOTO(0x49e445)
    // mov edx, dword ptr [edi + 4]
    // mov esi, dword ptr [edx + esi + 0x10c]
    // test esi, esi
    // if (...) GOTO(0x49e445)
    // mov eax, dword ptr [esi]
    // push -1
    // mov ecx, esi
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // push 0
    // push eax
    // mov ecx, edi
    // CALL(0x49dab0)
    // mov ecx, dword ptr [edi]
    // mov edx, dword ptr [ecx + 8]
    // mov dword ptr [edx + esi + 0xcc], ebx
    // mov eax, dword ptr [esi - 0x14]
    // test eax, eax
    // if (...) GOTO(0x49e3ee)
    // mov ecx, dword ptr [edi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [edx + esi + 0xcc]
    // push ecx
    // CALL(eax)
    // add esp, 4
    // push 1
    // push ebx
    // mov ecx, edi
    // CALL(0x49dab0)
    // mov edx, dword ptr [edi]
    // or ebx, 0xffffffff
    // mov eax, dword ptr [edx + 8]
    // mov dword ptr [eax + esi + 0xd0], ebx
    // mov ecx, dword ptr [edi]
    // mov edx, dword ptr [ecx + 8]
    // mov dword ptr [edx + esi + 0xd4], ebx
    // mov eax, dword ptr [edi]
    // mov ecx, dword ptr [eax + 4]
    // lea ecx, [ecx + esi - 0x24]
    // CALL(0x480ce0)
    // mov edi, dword ptr [edi]
    // mov edx, dword ptr [edi + 8]
    // test byte ptr [edx + esi], 4
    // if (...) GOTO(0x49e445)
    // mov eax, dword ptr [edi + 4]
    // mov esi, dword ptr [eax + esi + 0x10c]
    // test esi, esi
    // if (...) GOTO(0x49e445)
    // mov edx, dword ptr [esi]
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // push ecx
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // mov eax, dword ptr [esi - 0x24]
    // lea edi, [esi - 0x24]
    // mov ecx, dword ptr [eax + 4]
    // mov edx, dword ptr [ecx + esi + 0x10c]
    // mov dword ptr [0x83ab2c], edx
    // mov eax, dword ptr [edi]
    // mov edx, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [eax + 8]
    // lea ebp, [edx - 0x25]
    // mov ebx, dword ptr [ecx + esi + 0xd0]
    // lea eax, [ecx + esi]
    // cmp ebp, 0x43
    // mov ecx, dword ptr [eax + 0xcc]
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x49e5d2)
    // xor edx, edx
    // mov dl, byte ptr [ebp + 0x49e5f0]
    // if (...) GOTO(dword)
    // dec ecx
    // xor edx, edx
    // mov dword ptr [eax + 0xcc], ecx
    // mov eax, dword ptr [edi]
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + esi + 0xcc]
    // mov ecx, dword ptr [ecx + esi + 0xcc]
    // test ecx, ecx
    // setle dl
    // dec edx
    // and ecx, edx
    // mov dword ptr [eax], ecx
    // if (...) GOTO(0x49e551)
    // inc ecx
    // mov dword ptr [eax + 0xcc], ecx
    // mov eax, dword ptr [edi]
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [ecx + esi + 0xcc]
    // lea eax, [ecx + esi]
    // mov ecx, dword ptr [ecx + esi + 0xac]
    // dec ecx
    // cmp edx, ecx
    // if (...) GOTO(0x49e4f4)
    // mov ecx, edx
    // mov dword ptr [eax + 0xcc], ecx
    // if (...) GOTO(0x49e551)
    // mov edx, dword ptr [eax + 0x38]
    // add edx, ecx
    // mov dword ptr [eax + 0xcc], edx
    // mov eax, dword ptr [edi]
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [ecx + esi + 0xac]
    // lea eax, [ecx + esi]
    // mov ecx, dword ptr [ecx + esi + 0xcc]
    // cmp ecx, edx
    // if (...) GOTO(0x49e551)
    // sub ecx, dword ptr [eax + 0x38]
    // mov dword ptr [eax + 0xcc], ecx
    // if (...) GOTO(0x49e551)
    // sub ecx, dword ptr [eax + 0x38]
    // mov dword ptr [eax + 0xcc], ecx
    // mov edx, dword ptr [edi]
    // mov eax, dword ptr [edx + 8]
    // add eax, esi
    // mov ecx, dword ptr [eax + 0xcc]
    // test ecx, ecx
    // if (...) GOTO(0x49e551)
    // mov edx, dword ptr [eax + 0x38]
    // add edx, ecx
    // mov dword ptr [eax + 0xcc], edx
    // mov eax, dword ptr [edi]
    // mov ecx, dword ptr [eax + 8]
    // or eax, 0xffffffff
    // cmp ebx, eax
    // mov dword ptr [ecx + esi + 0xd0], eax
    // mov edx, dword ptr [edi]
    // mov ecx, dword ptr [edx + 8]
    // mov dword ptr [ecx + esi + 0xd4], eax
    // if (...) GOTO(0x49e57a)
    // push 0
    // push ebx
    // mov ecx, edi
    // CALL(0x49dab0)
    // mov edx, dword ptr [esp + 0x10]
    // push 0
    // push edx
    // mov ecx, edi
    // CALL(0x49dab0)
    // mov eax, dword ptr [esi - 0x14]
    // test eax, eax
    // if (...) GOTO(0x49e5a1)
    // mov ecx, dword ptr [edi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [edx + esi + 0xcc]
    // push ecx
    // CALL(eax)
    // add esp, 4
    // mov edx, dword ptr [edi]
    // push 1
    // mov eax, dword ptr [edx + 8]
    // mov ecx, dword ptr [eax + esi + 0xcc]
    // push ecx
    // mov ecx, edi
    // CALL(0x49dab0)
    // mov edx, dword ptr [edi]
    // mov eax, dword ptr [edx + 4]
    // lea ecx, [eax + esi - 0x24]
    // CALL(0x480ce0)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // pop ecx
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // pop ecx
    // return;
    // cld 
    // in al, 0x49
    // add byte ptr [ebp + 0x2c0049e4], ah
    // in eax, 0x49
    // add al, dl
    // in al, 0x49
    // add dl, dl
    // in eax, 0x49
    // add byte ptr [eax], al
    // add dword ptr [edx], eax
    // add eax, dword ptr [esp + eax]
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 3
    // add al, 0
    // add al, 2
    // add al, 1
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
    // mov esi, ecx
    // mov eax, dword ptr [esi - 0x24]
    // mov ecx, dword ptr [eax + 4]
    // mov edx, dword ptr [ecx + esi + 0x10c]
    // mov dword ptr [0x83ab2c], edx
    // mov eax, dword ptr [esi - 0x10]
    // test eax, eax
    // if (...) GOTO(0x49e673)
    // mov eax, dword ptr [esi - 0x24]
    // mov ecx, dword ptr [eax + 8]
    // lea ecx, [ecx + esi - 0x24]
    // CALL(0x489950)
    // push eax
    // CALL(dword)
    // add esp, 4
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push ecx
    // push ebp
    // push esi
    // push edi
    // mov edi, ecx
    // mov eax, dword ptr [edi - 0x24]
    // lea esi, [edi - 0x24]
    // mov ecx, dword ptr [eax + 4]
    // mov ebp, dword ptr [ecx + edi + 0x10c]
    // test ebp, ebp
    // mov dword ptr [0x83ab2c], ebp
    // if (...) GOTO(0x49e79d)
    // push ebx
    // lea ebx, [edi - 0x24]
    // test ebx, ebx
    // if (...) GOTO(0x49e6b0)
    // xor eax, eax
    // if (...) GOTO(0x49e6b9)
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 4]
    // lea eax, [eax + edi - 0x24]
    // mov edx, dword ptr [ebp]
    // push eax
    // mov ecx, ebp
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x49e753)
    // test ebx, ebx
    // if (...) GOTO(0x49e6d4)
    // mov dword ptr [esp + 0x10], ebx
    // if (...) GOTO(0x49e6e4)
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 4]
    // lea edx, [ecx + edi + 0x250]
    // mov dword ptr [esp + 0x10], edx
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 4]
    // lea eax, [ecx + edi + 0x250]
    // mov ecx, dword ptr [ecx + edi + 0x254]
    // test ecx, ecx
    // if (...) GOTO(0x49e707)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ebx, eax
    // if (...) GOTO(0x49e709)
    // xor ebx, ebx
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 4]
    // lea eax, [ecx + edi + 0x250]
    // mov ecx, dword ptr [ecx + edi + 0x254]
    // test ecx, ecx
    // if (...) GOTO(0x49e72a)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x49e72c)
    // xor eax, eax
    // mov ecx, dword ptr [esi]
    // push ebx
    // push eax
    // push 0
    // mov edx, dword ptr [ecx + 8]
    // push 0
    // mov eax, dword ptr [edx + edi + 8]
    // lea ecx, [edx + edi]
    // mov edx, dword ptr [esp + 0x20]
    // push eax
    // mov ecx, dword ptr [ecx + 4]
    // push ecx
    // push edx
    // lea ecx, [ebp + 0x274]
    // CALL(0x475c60)
    // mov eax, dword ptr [esi]
    // xor ebx, ebx
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + edi]
    // mov ecx, dword ptr [ecx + edi + 0xac]
    // test ecx, ecx
    // if (...) GOTO(0x49e78e)
    // cmp dword ptr [eax + 0xcc], ebx
    // if (...) GOTO(0x49e774)
    // push 1
    // if (...) GOTO(0x49e776)
    // push 0
    // push ebx
    // mov ecx, esi
    // CALL(0x49dab0)
    // mov edx, dword ptr [esi]
    // inc ebx
    // mov eax, dword ptr [edx + 8]
    // add eax, edi
    // cmp ebx, dword ptr [eax + 0xac]
    // if (...) GOTO(0x49e768)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 4]
    // lea ecx, [edx + edi - 0x24]
    // CALL(0x480ce0)
    // pop ebx
    // pop edi
    // pop esi
    // pop ebp
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
    // mov eax, dword ptr [ecx - 0x24]
    // mov edx, dword ptr [eax + 4]
    // mov eax, dword ptr [edx + ecx - 0x24]
    // lea ecx, [edx + ecx - 0x24]
    // CALL(dword)
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // mov ebp, 1
    // mov eax, dword ptr [esi - 0x24]
    // mov ecx, dword ptr [eax + 8]
    // mov edi, dword ptr [ecx + esi + 0xac]
    // lea ecx, [ecx + esi + 0x9c]
    // lea ebx, [edi - 1]
    // cmp ebx, -1
    // if (...) GOTO(0x49e81c)
    // mov edx, dword ptr [ecx + 8]
    // or eax, 0xffffffff
    // mov dword ptr [ecx + 0xc], edx
    // cdq 
    // xor eax, edx
    // sub eax, edx
    // cmp eax, edi
    // if (...) GOTO(0x49e81c)
    // test eax, eax
    // if (...) GOTO(0x49e819)
    // mov edx, dword ptr [ecx + 0xc]
    // dec eax
    // mov edx, dword ptr [edx + 0x10]
    // mov dword ptr [ecx + 0xc], edx
    // if (...) GOTO(0x49e80d)
    // mov dword ptr [ecx + 0x14], ebx
    // mov ebx, dword ptr [esp + 0x18]
    // test ebx, ebx
    // if (...) GOTO(0x49e8c8)
    // xor edi, edi
    // cmp ebp, edi
    // if (...) GOTO(0x49e84b)
    // mov eax, dword ptr [esi - 0x24]
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [ecx + esi + 0xac]
    // lea eax, [ecx + esi]
    // dec edx
    // cmp dword ptr [eax + 0xb0], edx
    // if (...) GOTO(0x49e981)
    // mov eax, dword ptr [esi - 0x24]
    // xor ebp, ebp
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + esi + 0x9c]
    // mov ecx, dword ptr [ecx + esi + 0xa4]
    // cmp ecx, edi
    // if (...) GOTO(0x49e87d)
    // mov edx, dword ptr [eax + 0xc]
    // mov edx, dword ptr [edx + 0xc]
    // mov dword ptr [eax + 0xc], edx
    // mov edx, dword ptr [eax + 0x14]
    // inc edx
    // cmp edx, dword ptr [eax + 0x10]
    // mov dword ptr [eax + 0x14], edx
    // if (...) GOTO(0x49e87d)
    // mov dword ptr [eax + 0x14], edi
    // mov eax, dword ptr [eax + 0xc]
    // cmp eax, edi
    // if (...) GOTO(0x49e892)
    // cmp ecx, edi
    // if (...) GOTO(0x49e88d)
    // mov eax, dword ptr [eax + 8]
    // if (...) GOTO(0x49e88f)
    // xor eax, eax
    // mov edi, dword ptr [eax + 8]
    // mov eax, dword ptr [esi - 0x24]
    // mov ecx, dword ptr [eax + 4]
    // lea ecx, [ecx + esi + 0x250]
    // CALL(0x477580)
    // imul eax, edi
    // mov edx, dword ptr [esi - 0x24]
    // mov ecx, dword ptr [edx + 8]
    // mov edx, dword ptr [ecx + esi + 0x48]
    // add ecx, esi
    // mov ecx, dword ptr [ecx + 0x24]
    // add ecx, edx
    // cmp ecx, eax
    // if (...) GOTO(0x49e8be)
    // mov eax, ecx
    // sub ebx, eax
    // test ebx, ebx
    // if (...) GOTO(0x49e828)
    // mov edx, dword ptr [esi - 0x24]
    // mov eax, dword ptr [edx + 8]
    // mov edi, dword ptr [eax + esi + 0x44]
    // mov ebx, dword ptr [eax + esi + 0x24]
    // lea ecx, [eax + esi]
    // mov eax, dword ptr [esp + 0x14]
    // cdq 
    // add edi, ebx
    // idiv edi
    // mov edi, dword ptr [ecx + 0xb0]
    // mov edx, dword ptr [ecx + 0xcc]
    // imul eax, dword ptr [ecx + 0x38]
    // add eax, edi
    // cmp eax, edx
    // if (...) GOTO(0x49e926)
    // mov edx, dword ptr [ecx + 0xd0]
    // or eax, 0xffffffff
    // cmp edx, eax
    // if (...) GOTO(0x49e981)
    // mov dword ptr [ecx + 0xd0], eax
    // mov ecx, dword ptr [esi - 0x24]
    // mov edx, dword ptr [ecx + 4]
    // mov eax, dword ptr [edx + esi - 0x24]
    // lea ecx, [edx + esi - 0x24]
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov dword ptr [ecx + 0xd0], eax
    // mov ecx, dword ptr [esi - 0x24]
    // mov edx, dword ptr [ecx + 8]
    // mov edi, dword ptr [edx + esi + 0xd4]
    // lea eax, [edx + esi]
    // mov edx, dword ptr [edx + esi + 0xd0]
    // cmp edx, edi
    // if (...) GOTO(0x49e96d)
    // mov eax, dword ptr [ecx + 4]
    // mov ecx, dword ptr [eax + esi + 0x28]
    // test ecx, ecx
    // if (...) GOTO(0x49e957)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov eax, dword ptr [esi - 0x24]
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [ecx + esi + 0xd0]
    // lea eax, [ecx + esi]
    // mov dword ptr [eax + 0xd4], edx
    // mov eax, dword ptr [esi - 0x24]
    // mov ecx, dword ptr [eax + 4]
    // mov edx, dword ptr [ecx + esi - 0x24]
    // lea ecx, [ecx + esi - 0x24]
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [ecx - 0x24]
    // mov edx, dword ptr [eax + 8]
    // or eax, 0xffffffff
    // mov dword ptr [edx + ecx + 0xd0], eax
    // mov edx, dword ptr [ecx - 0x24]
    // mov edx, dword ptr [edx + 8]
    // mov dword ptr [edx + ecx + 0xd4], eax
    // mov eax, dword ptr [ecx - 0x24]
    // mov edx, dword ptr [eax + 4]
    // mov eax, dword ptr [edx + ecx - 0x24]
    // lea ecx, [edx + ecx - 0x24]
    // CALL(dword)
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push -1
    // push(0x4b923b)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 0x2b8
    // push esi
    // lea ecx, [esp + 4]
    // CALL(0x474ae0)
    // push 2
    // push(0x100)
    // push 0
    // push 0
    // push(0x4e49fc)  // ptr?
    // lea ecx, [esp + 0x18]
    // mov dword ptr [esp + 0x2d8], 0
    // CALL(0x475840)
    // mov esi, eax
    // test esi, esi
    // if (...) GOTO(0x49ea4b)
    // lea ecx, [esp + 4]
    // mov dword ptr [esp + 0x2c4], 0xffffffff
    // CALL(0x474c40)
    // mov eax, esi
    // pop esi
    // mov ecx, dword ptr [esp + 0x2b8]
    // mov dword ptr fs:[0], ecx
    // add esp, 0x2c4
    // return;
    // push 1
    // push 1
    // push(0x20)
    // push(0x20)
    // push(0x23)
    // lea eax, [esp + 0x18]
    // push 1
    // push eax
    // mov ecx, 0x840830
    // CALL(0x473bf0)
    // push 1
    // push 1
    // push(0x20)
    // push(0x20)
    // push(0x23)
    // lea ecx, [esp + 0x18]
    // push 1
    // push ecx
    // mov ecx, 0x840890
    // CALL(0x473bf0)
    // push 1
    // push 1
    // push(0x20)
    // push(0x20)
    // push(0x23)
    // lea edx, [esp + 0x18]
    // push(0x22)
    // push edx
    // mov ecx, 0x840860
    // CALL(0x473bf0)
    // lea ecx, [esp + 4]
    // mov dword ptr [esp + 0x2c4], 0xffffffff
    // CALL(0x474c40)
    // mov ecx, dword ptr [esp + 0x2bc]
    // xor eax, eax
    // pop esi
    // mov dword ptr fs:[0], ecx
    // add esp, 0x2c4
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x840860
    // CALL(0x473ae0)
    // mov ecx, 0x840890
    // CALL(0x473ae0)
    // mov ecx, 0x840830
    // if (...) GOTO(0x473ae0)
    // // nop
    // // nop
    // CALL(0x49eb00)
    // if (...) GOTO(0x49eb10)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x8408c8
    // if (...) GOTO(0x473ab0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x49eb20)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov cl, byte ptr [0x8408c0]
    // mov al, 1
    // test al, cl
    // if (...) GOTO(0x49eb48)
    // or cl, al
    // mov dword ptr [0x8408c8], 0x4ba2d8
    // mov byte ptr [0x8408c0], cl
    // mov ecx, 0x8408c8
    // if (...) GOTO(0x473ae0)
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // CALL(0x49eb60)
    // if (...) GOTO(0x49eb70)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x8408f8
    // if (...) GOTO(0x473ab0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x49eb80)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov cl, byte ptr [0x8408c0]
    // mov al, 2
    // test al, cl
    // if (...) GOTO(0x49eba8)
    // or cl, al
    // mov dword ptr [0x8408f8], 0x4ba2d8
    // mov byte ptr [0x8408c0], cl
    // mov ecx, 0x8408f8
    // if (...) GOTO(0x473ae0)
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push -1
    // push(0x4b926a)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 8
    // mov eax, dword ptr [esp + 0x18]
    // push esi
    // push edi
    // xor edi, edi
    // mov esi, ecx
    // cmp eax, edi
    // mov dword ptr [esp + 0xc], esi
    // mov dword ptr [esp + 8], edi
    // if (...) GOTO(0x49ec03)
    // lea ecx, [esi + 0x1c]
    // mov dword ptr [esi], 0x4bc01c
    // CALL(0x4804a0)
    // mov dword ptr [esp + 8], 1
    // lea ecx, [esi + 0x594]
    // mov dword ptr [esp + 0x18], edi
    // CALL(0x489150)
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 4]
    // mov dword ptr [ecx + esi], 0x4bbeb0
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 4]
    // mov dword ptr [eax + esi + 0x274], 0x4bbe9c
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // mov dword ptr [edx + esi], 0x4bbe90
    // mov eax, dword ptr [esi]
    // mov eax, dword ptr [eax + 4]
    // lea ecx, [eax - 0x1c]
    // mov dword ptr [eax + esi - 4], ecx
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 8]
    // lea ecx, [eax - 0x594]
    // mov dword ptr [eax + esi - 4], ecx
    // mov ecx, dword ptr [esp + 0x10]
    // mov dword ptr [esi + 4], edi
    // mov dword ptr [esi + 8], edi
    // mov dword ptr [esi + 0xc], edi
    // mov edx, dword ptr [0x4e4a28]
    // mov dword ptr [esi + 0x14], edx
    // mov eax, dword ptr [0x4e4a24]
    // mov dword ptr [esi + 0x10], eax
    // mov eax, esi
    // pop edi
    // pop esi
    // mov dword ptr fs:[0], ecx
    // add esp, 0x14
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, ecx
    // push esi
    // mov edx, dword ptr [eax - 0x1c]
    // lea ecx, [eax - 0x1c]
    // mov edx, dword ptr [edx + 4]
    // mov dword ptr [edx + eax - 0x1c], 0x4bbeb0
    // mov edx, dword ptr [ecx]
    // mov edx, dword ptr [edx + 4]
    // mov dword ptr [edx + eax + 0x258], 0x4bbe9c
    // mov edx, dword ptr [ecx]
    // mov edx, dword ptr [edx + 8]
    // mov dword ptr [edx + eax - 0x1c], 0x4bbe90
    // mov edx, dword ptr [ecx]
    // mov edx, dword ptr [edx + 4]
    // lea esi, [edx - 0x1c]
    // mov dword ptr [edx + eax - 0x20], esi
    // mov edx, dword ptr [ecx]
    // mov edx, dword ptr [edx + 8]
    // lea esi, [edx - 0x594]
    // mov dword ptr [edx + eax - 0x20], esi
    // CALL(0x49ece0)
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
    // mov esi, ecx
    // xor eax, eax
    // mov edx, dword ptr [esi]
    // mov dword ptr [esi + 4], eax
    // mov dword ptr [esi + 8], eax
    // mov dword ptr [esi + 0xc], eax
    // mov eax, dword ptr [0x4e4a28]
    // mov dword ptr [esi + 0x14], eax
    // mov ecx, dword ptr [0x4e4a24]
    // mov dword ptr [esi + 0x10], ecx
    // mov ecx, dword ptr [edx + 8]
    // add ecx, esi
    // CALL(0x4894b0)
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 4]
    // add ecx, esi
    // CALL(0x480610)
    // pop esi
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push esi
    // push edi
    // test ebx, ebx
    // mov esi, ecx
    // if (...) GOTO(0x49ed38)
    // pop edi
    // pop esi
    // mov eax, 3
    // pop ebx
    // return;
    // lea edi, [esi - 0x594]
    // push ebp
    // mov ecx, edi
    // CALL(0x49f050)
    // mov eax, dword ptr [edi]
    // mov ebp, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [eax + 8]
    // mov dword ptr [ecx + esi - 0x56c], ebp
    // mov edx, dword ptr [edi]
    // mov ecx, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [edx + 8]
    // mov dword ptr [eax + esi - 0x568], ecx
    // mov eax, dword ptr [ebx + 0x9c]
    // test ah, 0x10
    // if (...) GOTO(0x49ed79)
    // or dword ptr [esp + 0x20], 0x100000
    // mov eax, dword ptr [edi]
    // push 0
    // push 0
    // push ebx
    // mov edx, dword ptr [eax + 8]
    // mov ebx, dword ptr [esp + 0x2c]
    // mov eax, dword ptr [eax + 4]
    // push ebx
    // lea ecx, [edx + esi]
    // push 0
    // lea eax, [eax + esi - 0x594]
    // mov edx, dword ptr [ecx - 0x530]
    // mov ecx, dword ptr [ecx - 0x534]
    // push edx
    // push ecx
    // mov ecx, dword ptr [esp + 0x38]
    // push ecx
    // push ebp
    // mov ecx, eax
    // CALL(0x4806c0)
    // test eax, eax
    // pop ebp
    // if (...) GOTO(0x49ee85)
    // mov ecx, dword ptr [edi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [ecx + 4]
    // lea eax, [edx + esi]
    // lea ecx, [ecx + esi - 0x320]
    // mov edx, dword ptr [eax - 0x4f0]
    // push edx
    // mov edx, dword ptr [eax - 0x4fc]
    // push edx
    // mov edx, dword ptr [eax - 0x508]
    // mov eax, dword ptr [eax - 0x514]
    // push edx
    // push eax
    // CALL(0x476310)
    // mov ecx, dword ptr [edi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [ecx + 4]
    // lea eax, [edx + esi]
    // lea ecx, [ecx + esi - 0x320]
    // mov edx, dword ptr [eax - 0x4ec]
    // push edx
    // mov edx, dword ptr [eax - 0x4f8]
    // push edx
    // mov edx, dword ptr [eax - 0x504]
    // mov eax, dword ptr [eax - 0x510]
    // push edx
    // push eax
    // CALL(0x476340)
    // mov ecx, dword ptr [edi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [ecx + 4]
    // lea eax, [edx + esi]
    // lea ecx, [ecx + esi - 0x320]
    // mov edx, dword ptr [eax - 0x4e8]
    // push edx
    // mov edx, dword ptr [eax - 0x4f4]
    // push edx
    // mov edx, dword ptr [eax - 0x500]
    // mov eax, dword ptr [eax - 0x50c]
    // push edx
    // push eax
    // CALL(0x476370)
    // mov edi, dword ptr [edi]
    // push 0
    // mov edx, dword ptr [edi + 8]
    // mov ecx, dword ptr [edx + esi - 0x518]
    // lea eax, [edx + esi]
    // push ecx
    // mov ecx, dword ptr [edi + 4]
    // mov edx, dword ptr [eax - 0x51c]
    // mov eax, dword ptr [eax - 0x520]
    // push edx
    // push eax
    // lea ecx, [ecx + esi - 0x320]
    // CALL(0x4762d0)
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // CALL(0x405099)
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // mov esi, ecx
    // push edi
    // CALL(0x49ef80)
    // test eax, eax
    // if (...) GOTO(0x49eeb1)
    // push 0
    // push edi
    // mov ecx, esi
    // CALL(0x49eef0)
    // pop edi
    // pop esi
    // return;
    // push 1
    // push edi
    // mov ecx, esi
    // CALL(0x49eef0)
    // pop edi
    // pop esi
    // return;
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // mov esi, ecx
    // push edi
    // CALL(0x49f030)
    // test eax, eax
    // if (...) GOTO(0x49eee1)
    // push 0
    // push edi
    // mov ecx, esi
    // CALL(0x49eff0)
    // pop edi
    // pop esi
    // return;
    // push 1
    // push edi
    // mov ecx, esi
    // CALL(0x49eff0)
    // pop edi
    // pop esi
    // return;
    // mov eax, dword ptr [ecx]
    // push ebx
    // push ebp
    // push esi
    // mov edx, dword ptr [eax + 8]
    // push edi
    // lea eax, [edx + ecx + 0xc0]
    // mov edx, dword ptr [edx + ecx + 0xc8]
    // test edx, edx
    // if (...) GOTO(0x49ef3c)
    // mov edi, dword ptr [eax + 0x10]
    // xor esi, esi
    // test edi, edi
    // mov dword ptr [eax + 0x14], 0
    // mov dword ptr [eax + 0xc], edx
    // if (...) GOTO(0x49ef3c)
    // mov ebx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [eax + 0xc]
    // cmp dword ptr [edx + 4], ebx
    // if (...) GOTO(0x49ef3c)
    // mov ebp, dword ptr [eax + 0x14]
    // inc ebp
    // inc esi
    // mov dword ptr [eax + 0x14], ebp
    // mov edx, dword ptr [edx + 0xc]
    // cmp esi, edi
    // mov dword ptr [eax + 0xc], edx
    // if (...) GOTO(0x49ef22)
    // mov eax, dword ptr [esp + 0x18]
    // pop edi
    // test eax, eax
    // mov eax, dword ptr [ecx]
    // pop esi
    // pop ebp
    // pop ebx
    // mov edx, dword ptr [eax + 8]
    // lea eax, [edx + ecx]
    // mov edx, 1
    // mov ecx, dword ptr [eax + 0xd4]
    // if (...) GOTO(0x49ef66)
    // shl edx, cl
    // or dword ptr [eax + 0xf0], edx
    // return;
    // shl edx, cl
    // mov ecx, dword ptr [eax + 0xf0]
    // not edx
    // and ecx, edx
    // mov dword ptr [eax + 0xf0], ecx
    // return;
    // CALL(0x405099)
    // mov eax, dword ptr [ecx]
    // push ebx
    // push ebp
    // push esi
    // mov edx, dword ptr [eax + 8]
    // xor esi, esi
    // push edi
    // lea eax, [edx + ecx + 0xc0]
    // mov edx, dword ptr [edx + ecx + 0xc8]
    // cmp edx, esi
    // if (...) GOTO(0x49efc8)
    // mov edi, dword ptr [eax + 0x10]
    // mov dword ptr [eax + 0x14], esi
    // cmp edi, esi
    // mov dword ptr [eax + 0xc], edx
    // if (...) GOTO(0x49efc8)
    // mov ebx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [eax + 0xc]
    // cmp dword ptr [edx + 4], ebx
    // if (...) GOTO(0x49efc8)
    // mov ebp, dword ptr [eax + 0x14]
    // inc ebp
    // inc esi
    // mov dword ptr [eax + 0x14], ebp
    // mov edx, dword ptr [edx + 0xc]
    // cmp esi, edi
    // mov dword ptr [eax + 0xc], edx
    // if (...) GOTO(0x49efae)
    // mov eax, dword ptr [ecx]
    // pop edi
    // pop esi
    // pop ebp
    // mov edx, dword ptr [eax + 8]
    // mov eax, 1
    // add edx, ecx
    // pop ebx
    // mov ecx, dword ptr [edx + 0xd4]
    // shl eax, cl
    // and eax, dword ptr [edx + 0xf0]
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 8]
    // test eax, eax
    // mov eax, dword ptr [ecx]
    // mov edx, dword ptr [eax + 8]
    // lea eax, [edx + ecx + 0xf0]
    // mov ecx, dword ptr [esp + 4]
    // mov edx, 1
    // if (...) GOTO(0x49f014)
    // shl edx, cl
    // or dword ptr [eax], edx
    // return;
    // shl edx, cl
    // mov ecx, dword ptr [eax]
    // not edx
    // and ecx, edx
    // mov dword ptr [eax], ecx
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
    // mov eax, ecx
    // push esi
    // mov esi, 1
    // mov ecx, dword ptr [eax]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [esp + 8]
    // shl esi, cl
    // mov eax, dword ptr [edx + eax + 0xf0]
    // and eax, esi
    // pop esi
    // return;
    // push esi
    // mov esi, ecx
    // mov ecx, dword ptr [esi]
    // mov eax, dword ptr [ecx + 8]
    // add eax, esi
    // mov edx, dword ptr [eax + 0xd0]
    // test edx, edx
    // if (...) GOTO(0x49f06b)
    // mov eax, 7
    // pop esi
    // return;
    // mov edx, dword ptr [eax + 0xa4]
    // mov ecx, dword ptr [ecx + 4]
    // push edx
    // mov edx, dword ptr [eax + 0x98]
    // push edx
    // mov edx, dword ptr [eax + 0x8c]
    // mov eax, dword ptr [eax + 0x80]
    // push edx
    // push eax
    // lea ecx, [ecx + esi + 0x274]
    // CALL(0x476310)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [ecx + 4]
    // lea eax, [edx + esi]
    // lea ecx, [ecx + esi + 0x274]
    // mov edx, dword ptr [eax + 0xa8]
    // push edx
    // mov edx, dword ptr [eax + 0x9c]
    // push edx
    // mov edx, dword ptr [eax + 0x90]
    // mov eax, dword ptr [eax + 0x84]
    // push edx
    // push eax
    // CALL(0x476340)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [ecx + 4]
    // lea eax, [edx + esi]
    // lea ecx, [ecx + esi + 0x274]
    // mov edx, dword ptr [eax + 0xac]
    // push edx
    // mov edx, dword ptr [eax + 0xa0]
    // push edx
    // mov edx, dword ptr [eax + 0x94]
    // mov eax, dword ptr [eax + 0x88]
    // push edx
    // push eax
    // CALL(0x476370)
    // mov ecx, dword ptr [esi]
    // push 0
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [ecx + 4]
    // lea eax, [edx + esi]
    // lea ecx, [ecx + esi + 0x274]
    // mov edx, dword ptr [eax + 0x7c]
    // push edx
    // mov edx, dword ptr [eax + 0x78]
    // mov eax, dword ptr [eax + 0x74]
    // push edx
    // push eax
    // CALL(0x4762d0)
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 8]
    // mov ecx, dword ptr [eax + esi + 0x38]
    // lea eax, [eax + esi + 0x38]
    // test ecx, ecx
    // if (...) GOTO(0x49f14e)
    // mov ecx, dword ptr [esi + 0x14]
    // test ecx, ecx
    // if (...) GOTO(0x49f14e)
    // mov edx, dword ptr [esi + 0x10]
    // test edx, edx
    // if (...) GOTO(0x49f14e)
    // mov ecx, dword ptr [ecx + 0x18]
    // mov edx, dword ptr [edx + 0x18]
    // cmp edx, ecx
    // if (...) GOTO(0x49f14c)
    // mov ecx, edx
    // mov dword ptr [eax], ecx
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // add edx, esi
    // mov eax, dword ptr [edx + 0x4c]
    // cmp eax, -1
    // if (...) GOTO(0x49f17f)
    // mov ecx, dword ptr [esi + 0x10]
    // test ecx, ecx
    // if (...) GOTO(0x49f1ff)
    // mov eax, dword ptr [esi + 0x14]
    // test eax, eax
    // if (...) GOTO(0x49f1ff)
    // mov eax, dword ptr [eax + 0x1c]
    // mov ecx, dword ptr [ecx + 0x1c]
    // cmp ecx, eax
    // if (...) GOTO(0x49f17f)
    // mov eax, ecx
    // mov dword ptr [edx + 0x6c], eax
    // mov eax, dword ptr [esi]
    // push ebx
    // push edi
    // xor edi, edi
    // mov ecx, dword ptr [eax + 8]
    // xor ebx, ebx
    // mov edx, dword ptr [ecx + esi + 0xd0]
    // lea eax, [ecx + esi]
    // mov dword ptr [eax + 0x5c], edx
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + esi]
    // mov ecx, dword ptr [ecx + esi + 0xd0]
    // test ecx, ecx
    // if (...) GOTO(0x49f240)
    // mov ecx, dword ptr [eax + 0xc8]
    // test ecx, ecx
    // if (...) GOTO(0x49f1e9)
    // mov edx, dword ptr [eax + 0xcc]
    // mov edx, dword ptr [edx + 0xc]
    // mov dword ptr [eax + 0xcc], edx
    // mov edx, dword ptr [eax + 0xd4]
    // inc edx
    // cmp edx, dword ptr [eax + 0xd0]
    // mov dword ptr [eax + 0xd4], edx
    // if (...) GOTO(0x49f1e9)
    // mov dword ptr [eax + 0xd4], 0
    // mov eax, dword ptr [eax + 0xcc]
    // test eax, eax
    // if (...) GOTO(0x49f212)
    // test ecx, ecx
    // if (...) GOTO(0x49f20b)
    // mov eax, dword ptr [eax + 8]
    // mov eax, dword ptr [eax + 4]
    // if (...) GOTO(0x49f214)
    // mov dword ptr [edx + 0x6c], 0
    // if (...) GOTO(0x49f182)
    // xor eax, eax
    // mov eax, dword ptr [eax + 4]
    // if (...) GOTO(0x49f214)
    // xor eax, eax
    // push eax
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 4]
    // lea ecx, [ecx + esi + 0x274]
    // CALL(0x477250)
    // cmp eax, edi
    // if (...) GOTO(0x49f22c)
    // mov edi, eax
    // mov edx, dword ptr [esi]
    // inc ebx
    // mov eax, dword ptr [edx + 8]
    // add eax, esi
    // cmp ebx, dword ptr [eax + 0xd0]
    // if (...) GOTO(0x49f1b1)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [edx + esi + 0x48]
    // mov ebx, dword ptr [edx + esi + 0x38]
    // lea eax, [edx + esi]
    // add ecx, ebx
    // add ecx, edi
    // mov dword ptr [eax + 0x68], ecx
    // mov edi, dword ptr [esi]
    // mov eax, edi
    // mov edx, dword ptr [edi + 8]
    // mov ecx, dword ptr [eax + 4]
    // mov ebx, dword ptr [edx + esi + 0x6c]
    // lea ecx, [ecx + esi + 0x274]
    // CALL(0x477560)
    // cmp ebx, eax
    // if (...) GOTO(0x49f279)
    // mov eax, ebx
    // if (...) GOTO(0x49f288)
    // mov edx, dword ptr [edi + 4]
    // lea ecx, [edx + esi + 0x274]
    // CALL(0x477560)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // mov dword ptr [edx + esi + 0x6c], eax
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + esi]
    // mov cl, byte ptr [ecx + esi + 0x24]
    // test cl, 2
    // if (...) GOTO(0x49f2cc)
    // mov ecx, dword ptr [eax + 0x30]
    // test ecx, ecx
    // if (...) GOTO(0x49f2cc)
    // mov dword ptr [eax + 0x60], ecx
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 8]
    // mov edx, dword ptr [eax + esi + 0x44]
    // shl edx, 1
    // lea ecx, [eax + esi]
    // mov eax, dword ptr [eax + esi + 0x30]
    // sub eax, edx
    // cdq 
    // idiv dword ptr [ecx + 0x50]
    // sub eax, dword ptr [ecx + 0x48]
    // mov dword ptr [ecx + 0x68], eax
    // if (...) GOTO(0x49f319)
    // mov edx, dword ptr [eax + 0x68]
    // mov ecx, dword ptr [eax + 0x44]
    // imul edx, dword ptr [eax + 0x50]
    // mov edi, dword ptr [eax + 0x30]
    // shl ecx, 1
    // add edx, ecx
    // add ecx, edi
    // cmp ecx, edx
    // if (...) GOTO(0x49f2e5)
    // mov ecx, edx
    // mov dword ptr [eax + 0x60], ecx
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // mov eax, dword ptr [ecx + esi + 0x60]
    // add ecx, esi
    // mov edx, dword ptr [ecx + 0x44]
    // shl edx, 1
    // sub eax, edx
    // cdq 
    // idiv dword ptr [ecx + 0x50]
    // sub eax, dword ptr [ecx + 0x48]
    // mov dword ptr [ecx + 0x68], eax
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [ecx + esi + 0x48]
    // lea eax, [ecx + esi]
    // mov ecx, dword ptr [ecx + esi + 0x60]
    // sub ecx, edx
    // mov dword ptr [eax + 0x60], ecx
    // mov eax, dword ptr [esi]
    // pop edi
    // pop ebx
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [ecx + esi + 0x50]
    // lea eax, [ecx + esi]
    // mov dword ptr [eax + 0x58], edx
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + esi]
    // mov cl, byte ptr [ecx + esi + 0x24]
    // test cl, 1
    // if (...) GOTO(0x49f35b)
    // mov ecx, dword ptr [eax + 0x34]
    // test ecx, ecx
    // if (...) GOTO(0x49f35b)
    // mov dword ptr [eax + 0x64], ecx
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 8]
    // lea ecx, [eax + esi]
    // pop esi
    // mov eax, dword ptr [ecx + 0x34]
    // cdq 
    // idiv dword ptr [ecx + 0x6c]
    // mov dword ptr [ecx + 0x5c], eax
    // xor eax, eax
    // return;
    // mov ecx, dword ptr [eax + 0x6c]
    // mov edx, dword ptr [eax + 0x48]
    // add ecx, edx
    // pop esi
    // imul ecx, dword ptr [eax + 0x5c]
    // mov dword ptr [eax + 0x64], ecx
    // xor eax, eax
    // return;
    // // nop
    // // nop
    // sub esp, 0x20
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // xor ebp, ebp
    // push edi
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 4]
    // mov eax, dword ptr [ecx + esi + 0x130]
    // cmp eax, ebp
    // mov dword ptr [esp + 0x1c], eax
    // if (...) GOTO(0x49f98f)
    // mov ecx, dword ptr [0x83ad50]
    // cmp ecx, ebp
    // if (...) GOTO(0x49f3ab)
    // mov edx, dword ptr [ecx]
    // push 1
    // push 1
    // push 1
    // CALL(dword)
    // mov eax, dword ptr [esi]
    // mov dword ptr [esp + 0x10], ebp
    // mov ecx, dword ptr [eax + 8]
    // mov edi, dword ptr [ecx + esi + 0xd0]
    // lea ecx, [ecx + esi + 0xc0]
    // lea ebx, [edi - 1]
    // cmp ebx, -1
    // if (...) GOTO(0x49f3ef)
    // mov edx, dword ptr [ecx + 8]
    // or eax, 0xffffffff
    // mov dword ptr [ecx + 0xc], edx
    // cdq 
    // xor eax, edx
    // sub eax, edx
    // cmp eax, edi
    // if (...) GOTO(0x49f3ef)
    // cmp eax, ebp
    // if (...) GOTO(0x49f3ec)
    // mov edx, dword ptr [ecx + 0xc]
    // dec eax
    // mov edx, dword ptr [edx + 0x10]
    // mov dword ptr [ecx + 0xc], edx
    // if (...) GOTO(0x49f3e0)
    // mov dword ptr [ecx + 0x14], ebx
    // mov eax, dword ptr [esp + 0x34]
    // cmp eax, ebp
    // if (...) GOTO(0x49f4ee)
    // mov dword ptr [esp + 0x18], eax
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // mov eax, dword ptr [ecx + esi + 0xc8]
    // cmp eax, ebp
    // lea ecx, [ecx + esi + 0xc0]
    // if (...) GOTO(0x49f432)
    // mov edx, dword ptr [ecx + 0xc]
    // mov edi, dword ptr [ecx + 0x14]
    // inc edi
    // mov eax, dword ptr [edx + 0xc]
    // mov edx, dword ptr [ecx + 0x10]
    // mov dword ptr [ecx + 0xc], eax
    // mov eax, edi
    // cmp eax, edx
    // mov dword ptr [ecx + 0x14], edi
    // if (...) GOTO(0x49f432)
    // mov dword ptr [ecx + 0x14], ebp
    // cmp dword ptr [ecx + 0xc], ebp
    // if (...) GOTO(0x49f4df)
    // CALL(0x402160)
    // cmp dword ptr [eax + 8], 1
    // if (...) GOTO(0x49f4df)
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + esi + 0xc0]
    // mov ecx, dword ptr [ecx + esi + 0xc8]
    // cmp ecx, ebp
    // if (...) GOTO(0x49f470)
    // mov edx, dword ptr [eax + 0xc]
    // mov eax, dword ptr [edx + 8]
    // mov eax, dword ptr [eax + 8]
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x49f474)
    // mov dword ptr [esp + 0x14], ebp
    // mov edi, dword ptr [esi]
    // mov ecx, dword ptr [edi + 8]
    // mov edx, dword ptr [edi + 4]
    // mov ebp, dword ptr [ecx + esi + 0x6c]
    // lea ebx, [ecx + esi]
    // lea ecx, [edx + esi + 0x274]
    // CALL(0x477580)
    // imul eax, dword ptr [esp + 0x14]
    // cmp ebp, eax
    // if (...) GOTO(0x49f49c)
    // mov eax, ebp
    // if (...) GOTO(0x49f4c8)
    // mov eax, dword ptr [ebx + 0xc8]
    // test eax, eax
    // if (...) GOTO(0x49f4b4)
    // mov eax, dword ptr [ebx + 0xcc]
    // mov eax, dword ptr [eax + 8]
    // mov ebx, dword ptr [eax + 8]
    // if (...) GOTO(0x49f4b6)
    // xor ebx, ebx
    // mov ecx, dword ptr [edi + 4]
    // lea ecx, [ecx + esi + 0x274]
    // CALL(0x477580)
    // imul eax, ebx
    // mov edx, dword ptr [esi]
    // mov ecx, dword ptr [edx + 8]
    // mov edx, dword ptr [ecx + esi + 0x6c]
    // mov ecx, dword ptr [esp + 0x10]
    // sub eax, edx
    // add ecx, eax
    // xor ebp, ebp
    // mov dword ptr [esp + 0x10], ecx
    // mov eax, dword ptr [esp + 0x18]
    // dec eax
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x49f3ff)
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edx + 8]
    // mov ebx, dword ptr [eax + esi + 0x5c]
    // lea ecx, [eax + esi]
    // mov eax, dword ptr [esp + 0x34]
    // cdq 
    // idiv ebx
    // mov edi, dword ptr [ecx + 0x48]
    // mov ebp, dword ptr [ecx + 0x68]
    // add ebp, edi
    // mov edx, dword ptr [ecx + 0x44]
    // imul ebp, eax
    // imul eax, ebx
    // add ebp, edx
    // mov edx, dword ptr [esp + 0x34]
    // mov ebx, edx
    // sub ebx, eax
    // mov eax, dword ptr [ecx + 0x6c]
    // add eax, edi
    // imul ebx, eax
    // mov eax, dword ptr [esp + 0x10]
    // add eax, ebx
    // mov ebx, dword ptr [ecx + 0xd0]
    // sar edi, 1
    // add edi, eax
    // lea eax, [ebx - 1]
    // cmp edx, eax
    // mov dword ptr [esp + 0x10], edi
    // if (...) GOTO(0x49f98f)
    // mov eax, dword ptr [ecx + 0xc8]
    // mov edi, edx
    // test edi, edi
    // mov dword ptr [ecx + 0xcc], eax
    // if (...) GOTO(0x49f57f)
    // mov eax, edi
    // cdq 
    // xor eax, edx
    // sub eax, edx
    // cmp eax, ebx
    // if (...) GOTO(0x49f98f)
    // test eax, eax
    // if (...) GOTO(0x49f57a)
    // mov edx, dword ptr [ecx + 0xcc]
    // dec eax
    // mov edx, dword ptr [edx + 0x10]
    // mov dword ptr [ecx + 0xcc], edx
    // if (...) GOTO(0x49f568)
    // lea edx, [ebx + edi]
    // if (...) GOTO(0x49f593)
    // if (...) GOTO(0x49f593)
    // mov eax, dword ptr [ecx + 0xcc]
    // dec edi
    // mov eax, dword ptr [eax + 0xc]
    // mov dword ptr [ecx + 0xcc], eax
    // if (...) GOTO(0x49f581)
    // mov dword ptr [ecx + 0xd4], edx
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // lea eax, [ecx + esi + 0xc0]
    // mov ecx, dword ptr [ecx + esi + 0xc8]
    // test ecx, ecx
    // if (...) GOTO(0x49f5bf)
    // mov edx, dword ptr [eax + 0xc]
    // mov eax, dword ptr [edx + 8]
    // mov eax, dword ptr [eax + 8]
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x49f5c7)
    // mov dword ptr [esp + 0x18], 0
    // mov ebx, dword ptr [esi]
    // mov ecx, dword ptr [ebx + 8]
    // mov eax, dword ptr [ebx + 4]
    // mov edx, dword ptr [ecx + esi + 0x6c]
    // lea edi, [ecx + esi]
    // lea ecx, [eax + esi + 0x274]
    // mov dword ptr [esp + 0x14], edx
    // CALL(0x477580)
    // imul eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esp + 0x14]
    // cmp ecx, eax
    // if (...) GOTO(0x49f5f7)
    // mov ebx, ecx
    // if (...) GOTO(0x49f625)
    // mov eax, dword ptr [edi + 0xc8]
    // test eax, eax
    // if (...) GOTO(0x49f60f)
    // mov ecx, dword ptr [edi + 0xcc]
    // mov eax, dword ptr [ecx + 8]
    // mov edi, dword ptr [eax + 8]
    // if (...) GOTO(0x49f611)
    // xor edi, edi
    // mov edx, dword ptr [ebx + 4]
    // lea ecx, [edx + esi + 0x274]
    // CALL(0x477580)
    // mov ebx, eax
    // imul ebx, edi
    // mov eax, dword ptr [esi]
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [eax + 8]
    // mov ecx, dword ptr [esi + ecx + 0x68]
    // mov dword ptr [esp + 0x24], edx
    // add ecx, ebp
    // add edx, ebx
    // mov dword ptr [esp + 0x28], ecx
    // mov ecx, dword ptr [esp + 0x38]
    // test ecx, ecx
    // mov dword ptr [esp + 0x20], ebp
    // mov dword ptr [esp + 0x2c], edx
    // if (...) GOTO(0x49f655)
    // mov edx, 2
    // if (...) GOTO(0x49f66a)
    // mov ecx, dword ptr [eax + 8]
    // mov edi, dword ptr [esp + 0x34]
    // xor edx, edx
    // mov ecx, dword ptr [esi + ecx + 0xf4]
    // cmp ecx, edi
    // sete dl
    // test esi, esi
    // if (...) GOTO(0x49f674)
    // mov dword ptr [esp + 0x18], esi
    // if (...) GOTO(0x49f67d)
    // mov ecx, dword ptr [eax + 4]
    // add ecx, esi
    // mov dword ptr [esp + 0x18], ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // mov edi, dword ptr [ecx]
    // lea ecx, [esp + 0x20]
    // push ecx
    // push edx
    // mov edx, dword ptr [esp + 0x3c]
    // mov ecx, esi
    // push edx
    // mov edx, dword ptr [eax + 8]
    // add ecx, edx
    // CALL(0x489a30)
    // push eax
    // mov eax, dword ptr [esp + 0x24]
    // mov edx, edi
    // mov edi, dword ptr [esp + 0x28]
    // push eax
    // mov ecx, edi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x49f769)
    // test esi, esi
    // if (...) GOTO(0x49f6bb)
    // xor ecx, ecx
    // if (...) GOTO(0x49f6c7)
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 4]
    // lea ecx, [ecx + esi + 0x274]
    // mov edx, dword ptr [esi]
    // push ebx
    // mov ebx, dword ptr [esp + 0x14]
    // mov eax, dword ptr [edx + 8]
    // mov edx, dword ptr [eax + esi + 0x68]
    // add eax, esi
    // push edx
    // push ebx
    // push ebp
    // mov edx, dword ptr [eax + 0x2c]
    // mov eax, dword ptr [eax + 0x28]
    // add edx, ebx
    // add eax, ebp
    // push edx
    // push eax
    // push ecx
    // lea ecx, [edi + 0x274]
    // CALL(0x475c60)
    // mov eax, dword ptr [esi + 0x14]
    // test eax, eax
    // if (...) GOTO(0x49f769)
    // mov ecx, dword ptr [esi + 0x10]
    // test ecx, ecx
    // if (...) GOTO(0x49f769)
    // mov edx, dword ptr [esp + 0x38]
    // test edx, edx
    // if (...) GOTO(0x49f738)
    // test esi, esi
    // if (...) GOTO(0x49f710)
    // xor ecx, ecx
    // if (...) GOTO(0x49f71c)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 4]
    // lea ecx, [edx + esi + 0x274]
    // mov edx, dword ptr [esp + 0x2c]
    // mov edi, dword ptr [eax + 0x1c]
    // sub edx, edi
    // mov edi, dword ptr [esp + 0x24]
    // sub edx, edi
    // push 0
    // sar edx, 1
    // add edx, ebx
    // push edx
    // push ebp
    // push ecx
    // mov ecx, eax
    // if (...) GOTO(0x49f764)
    // test esi, esi
    // if (...) GOTO(0x49f740)
    // xor eax, eax
    // if (...) GOTO(0x49f74c)
    // mov eax, dword ptr [esi]
    // mov edx, dword ptr [eax + 4]
    // lea eax, [edx + esi + 0x274]
    // mov edx, dword ptr [esp + 0x2c]
    // mov edi, dword ptr [ecx + 0x1c]
    // sub edx, edi
    // mov edi, dword ptr [esp + 0x24]
    // sub edx, edi
    // push 0
    // sar edx, 1
    // add edx, ebx
    // push edx
    // push ebp
    // push eax
    // CALL(0x473e60)
    // mov eax, dword ptr [esi]
    // mov edi, dword ptr [esp + 0x24]
    // mov ecx, dword ptr [eax + 4]
    // mov edx, dword ptr [ecx + esi + 0x2d0]
    // mov ecx, dword ptr [edx + 0x1c]
    // add edi, ecx
    // mov dword ptr [esp + 0x24], edi
    // mov edx, dword ptr [eax + 8]
    // mov ecx, dword ptr [esi + edx + 0x38]
    // mov edx, dword ptr [esp + 0x20]
    // add edx, ecx
    // mov dword ptr [esp + 0x20], edx
    // mov edx, dword ptr [eax + 8]
    // mov ecx, dword ptr [esi + edx + 0xc8]
    // lea eax, [esi + edx + 0xc0]
    // test ecx, ecx
    // if (...) GOTO(0x49f8cb)
    // mov ecx, dword ptr [eax + 0xc]
    // mov ecx, dword ptr [ecx + 8]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [eax + 8]
    // cmp edx, 1
    // if (...) GOTO(0x49f8bc)
    // test ecx, ecx
    // if (...) GOTO(0x49f7d0)
    // mov edx, dword ptr [eax + 0xc]
    // mov eax, dword ptr [edx + 8]
    // mov eax, dword ptr [eax + 4]
    // if (...) GOTO(0x49f7d2)
    // xor eax, eax
    // push(0x7c)
    // push eax
    // CALL(0x4a6170)
    // mov ebx, eax
    // add esp, 8
    // test ebx, ebx
    // if (...) GOTO(0x49f83b)
    // mov ebx, dword ptr [esi]
    // mov eax, dword ptr [ebx + 8]
    // mov ecx, dword ptr [eax + esi + 0xc8]
    // lea eax, [eax + esi + 0xc0]
    // test ecx, ecx
    // if (...) GOTO(0x49f98f)
    // mov ecx, dword ptr [eax + 0xc]
    // mov eax, dword ptr [ecx + 8]
    // mov edx, dword ptr [eax + 4]
    // test edx, edx
    // if (...) GOTO(0x49f98f)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea eax, [esp + 0x20]
    // push ecx
    // mov ecx, dword ptr [ebx + 4]
    // push eax
    // push edx
    // lea ecx, [ecx + esi + 0x274]
    // CALL(0x477cd0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x20
    // return;
    // mov byte ptr [ebx], 0
    // mov ebp, dword ptr [esi]
    // mov edx, dword ptr [ebp + 8]
    // mov ecx, dword ptr [edx + esi + 0xc8]
    // lea eax, [edx + esi + 0xc0]
    // test ecx, ecx
    // if (...) GOTO(0x49f884)
    // mov eax, dword ptr [eax + 0xc]
    // mov eax, dword ptr [eax + 8]
    // mov edx, dword ptr [eax + 4]
    // test edx, edx
    // if (...) GOTO(0x49f884)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // lea ecx, [esp + 0x24]
    // push ecx
    // push edx
    // mov edx, dword ptr [ebp + 4]
    // lea ecx, [edx + esi + 0x274]
    // CALL(0x477cd0)
    // mov byte ptr [ebx], 0x7c
    // inc ebx
    // if (...) GOTO(0x49f98f)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea eax, [esp + 0x20]
    // push ecx
    // mov ecx, dword ptr [esi]
    // push eax
    // push ebx
    // mov edx, dword ptr [ecx + 4]
    // lea ecx, [edx + esi + 0x274]
    // CALL(0x4781f0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x20
    // return;
    // test ecx, ecx
    // if (...) GOTO(0x49f8cb)
    // mov eax, dword ptr [eax + 0xc]
    // mov eax, dword ptr [eax + 8]
    // mov eax, dword ptr [eax + 4]
    // if (...) GOTO(0x49f8cd)
    // xor eax, eax
    // push(0x7c)
    // push eax
    // CALL(0x4a6170)
    // mov ebx, eax
    // add esp, 8
    // test ebx, ebx
    // if (...) GOTO(0x49f925)
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [ecx + 8]
    // lea eax, [edx + esi + 0xc0]
    // mov edx, dword ptr [edx + esi + 0xc8]
    // test edx, edx
    // if (...) GOTO(0x49f900)
    // mov eax, dword ptr [eax + 0xc]
    // mov eax, dword ptr [eax + 8]
    // mov eax, dword ptr [eax + 4]
    // if (...) GOTO(0x49f902)
    // xor eax, eax
    // push 0
    // lea edx, [esp + 0x24]
    // push 0
    // push edx
    // push eax
    // mov eax, dword ptr [ecx + 4]
    // lea ecx, [eax + esi + 0x274]
    // CALL(0x4782d0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x20
    // return;
    // mov byte ptr [ebx], 0
    // mov eax, dword ptr [esi]
    // mov ecx, dword ptr [eax + 8]
    // mov edx, dword ptr [ecx + esi + 0xc8]
    // lea ecx, [ecx + esi + 0xc0]
    // test edx, edx
    // if (...) GOTO(0x49f94a)
}