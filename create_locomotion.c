void drive(int speed, int dist){
 
    set_create_distance(0);
    while(abs(get_create_distance()) < dist){
        
        create_drive_direct(speed,speed);
        
    }
    create_drive_direct(0,0);
    msleep(100);
}
void create_square_up(){
    
    int squarelspeed;
    int squarerspeed;
    //1600
    while(get_create_lcliff_amt() > 2000 || get_create_rcliff_amt() > 2000){
     
        if(get_create_lcliff_amt() > 2000){
            
            squarelspeed = 100;
            
        }else{
         
            squarelspeed = 0;
            
        }
        if(get_create_rcliff_amt() > 2000){
         
            squarerspeed = 100;
            
        }else{
            
            squarerspeed = 0;
            
        }
        create_drive_direct(squarelspeed,squarerspeed);
        
        msleep(15);
       printf("the cliff value for the left wheel is: %d \n",(get_create_rcliff_amt() - get_create_lcliff_amt()));
    }
    create_drive_direct(0,0);
    msleep(10);
}


void create_square_up_back(){
    
    int squarelspeed;
    int squarerspeed;
    
    while(get_create_lcliff_amt() > 1600 || get_create_rcliff_amt() > 1600){
     
        if(get_create_lcliff_amt() > 1600){
            
            squarelspeed = -100;
            
        }else{
         
            squarelspeed = 0;
            
        }
        if(get_create_rcliff_amt() > 1600){
         
            squarerspeed = -100;
            
        }else{
            
            squarerspeed = 0;
            
        }
        create_drive_direct(squarelspeed,squarerspeed);
        
        msleep(15);
       printf("the cliff value for the left wheel is: %d \n",(get_create_rcliff_amt() - get_create_lcliff_amt()));
    }
    create_drive_direct(0,0);
    msleep(10);
}
