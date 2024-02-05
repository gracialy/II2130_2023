void Black_Rose(char* input){
    int edi, eax, esi, ecx, edx, ebx, ebp, esp, eip;
    int arr[6];
    int scan = sscanf(input, "%d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);
    if (scan <= 5){
        illegal_move();
    }

    if (arr[0] != 240){
        illegal_move();
    }

    for (int i=1; i<=5; i++){
        if ((input[i] & 0xF0 != 0xF0) || (input[i] & 0xF != 0xF)){
            illegal_move();
        }
    }
}