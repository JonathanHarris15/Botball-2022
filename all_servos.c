void all_servos(int targetpositions[]){
    bool not_done = true;
    while(not_done){
        not_done = false;
        for(int i = 0; i < 4; i ++){
            int current_pos = get_servo_position(i);
            int change = (targetpositions[i] - get_servo_position(i)) * 0.4;
            set_servo_position(i, current_pos + change);
            msleep(5)
            if(get_servo_position(i) != targetpositions[i]){
                not_done = true;
            }
        }
    }
}
