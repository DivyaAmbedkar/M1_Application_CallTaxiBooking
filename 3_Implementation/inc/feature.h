/**
 * @file feature.h
 * @author Divya
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef FEATURE_H_
#define FEATURE_H_



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
        char pickup_point[3];
        char drop_point[3];
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
        char from[3];
        char to[3];
        int pickuptime;
        int droptime;
        int amount;
    };
#endif

