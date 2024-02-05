void Metropolis(char input[]){
    int input_1, input_3;
    char input_2, chr;
    
    int scan = sscanf(input, "%d %c %d", &input_1, &input_2, &input_3);
    
    if (scan <= 2){
        illegal_move();
    }

    switch (input_1){
        case 0:
            chr = 'z';
            if (input_3 != 0x123){
                illegal_move();
            }
            break;
        case 1:
            chr = 'n';
            if (input_3 != 0x298){
                illegal_move();
            }
            break;
        case 2:
            chr = 'w';
            if (input_3 != 0x88){
                illegal_move();
            }
            break;
        case 3:
            chr = 'z';
            if (input_3 != 0xffffffb4){
                illegal_move();
            }
            break;
        case 4:
            chr = 'z';
            if (input_3 != 0x34b){
                illegal_move();
            }
            break;
        case 5:
            chr = 'y';
            if (input_3 != 0x18f){
                illegal_move();
            }
            illegal_move();
        case 6:
            if (input_3 != 0x12f){
                illegal_move();
            }
            illegal_move();
        case 7:
            if (input_3 != 0x12f){
                illegal_move();
            }
            illegal_move();
        default:
            illegal_move();
    }

    if (input_2 != chr){
        illegal_move();
    }
}