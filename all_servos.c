
int positions[] = {-1,-1,-1,-1};
void all_servos(int a, int b, int c, int d){
    positions[0] = a;
    positions[1] = b;
    positions[2] = c;
    positions[3] = d;
    servos(positions);
}
void servos(int targetpositions[]){
    int not_done = 0;
    while(not_done == 0){
        not_done = 1;
        int i;
        for(i = 0; i < 4; i ++){
            if(targetpositions[i] > -1){    
                int current_pos = get_servo_position(i);
                if(current_pos > targetpositions[i] + 3 || current_pos < targetpositions[i] - 3){
                    printf("hello\n");
                    not_done = 0;
                    if(current_pos > targetpositions[i]){
                        printf("going down: %d\n",i);
                        set_servo_position(i,current_pos - 5);
                        msleep(5);
                    }
                    if(current_pos < targetpositions[i]){
                        printf("going up: %d\n", i);
                        set_servo_position(i,current_pos + 5);
                        msleep(5);
                    }
                }
            }
        }
    }
}
