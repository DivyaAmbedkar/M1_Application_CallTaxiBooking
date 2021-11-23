/**
 * @file test_func.c
 * @author Divya
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"
#include "feature.h"
#include "math.h"

void test_checkbalance(char);
void test_transfermoney(void);
void test_display(char);
void test_person(char);
void test_login(void);
void test_loginsu(void);
void test_account(void);
void test_accountcreated(void);
void test_afterlogin(void);
void test_logout(void);
void test_taxiprint(int);
void test_booking(struct booking *b,struct taxi t,int no);
void test_decrement();
void test_taxiprint(int taxino);
void test_display();
  

void SetUp(){
/**
 * @brief (Required by the unity test framework)
 * 
 */
}
void tearDown(){
/**
 * @brief (Start of the application test)
 * 
 */
}

int main()
{
    UNITY_BEGIN();

/**
 * @brief (Run Test functions)
 * 
 */
    RUN_TEST(test_taxiprint)
    RUN_TEST(test_booking)
    RUN_TEST(test_decrement)
    RUN_TEST(test_taxiprint)
    RUN_TEST(test_display)
   
    return UNITY_END();
}
   

