.Black_Rose

call <read_six_numbers>
add $0x10, %esp
cmpl $0xf0, 0x8(%esp) ; 240 pertama
jne <Black_Rose+60> ; call <illegal_move
lea 0x8(%esp), %esi 
lea 0x1c(%esp), %ebp
mov $0x88888889, %edi
jmp <Black_Rose+16> ; mov 0x4(%esi), %ecx
call <illegal_move>
jmp <Black_Rose+45>  ; jne <Black_Rose+60>
call <illegal_move>
add $0x4, %esi
cmp %ebp, %esi
je <Black_Rose+137>
mov 0x4(%esi), %ecx
mov %ecx, %eax 
imul %edi 
add %ecx, %edx 
sar $0x3, %edx
mov %ecx %eax 
sar 0x1f, %eax
sub %eax, %edx
mov %edx, %eax
shl $0x4, %eax
sub %edx, %eax
cmp %eax, %ecx
jne <Black_Rose+67> ; call <illegal_move
mov $0xb60b60b7, %eax
imul %ecx
add %ecx, %edx
sar $0x5, %edx
mov %ecx, %eax
sar $0x1f, %eax
sub %eax, %edx
imul $0x2d, %edx, %edx
cmp %edx, %ecx
jne <Black_Rose+72>
jmp 

.illegal_move
; don't go here

.read_six_numbers
; input for Black_Rose is six intvoid Black_Rose() {

.func4
sub $0xc, %esp
mov 0x10(%ebp), %eax
mov 0x18(%ebp), %edx
test %edx, %edx
jne ; sub 0x4, %esp
add $0xc, %esp
ret
sub $0x4, %esp
sub $0x1, %edx
push %edx
push 0x1c(%esp)
push %eax
call <func4>
add $0x10, %esp
imul 0x14(%esp), %eax
jmp ; add 0xc, %esp

.dread
