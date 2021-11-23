/**
 * @file stdio.h
 * @author Divya
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef STDIO_H_
#define STDIO_H_



/**
 * @brief (Declaring all the functions)
 * 
 */
void taxiprint(int);
void booking(struct booking *b,struct taxi t,int no);
void decrement();
void taxiprint(int taxino);
void display();
  
  
  /**
 * @brief (Creating a structure for booking taxi)
 * 
 */
struct taxi
    {
        int customer_id;
        char pickup_point[];
        char drop_point[]
        int pickup_time;
  };


 /**
 * @brief (Structure to get booking details from the user)
 * 
 */
struct booking
    {
    
        int booking_id;
        int customer_id;
        char from[];
        char to[];
        int pickuptime;
        int droptime;
        int amount;
    };
#endif

