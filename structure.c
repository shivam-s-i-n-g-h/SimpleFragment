/*
 * =====================================================================================
 *
 *       Filename:  structure.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Saturday 28 November 2015 11:38:41  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shivam Singh (), 
 *   Organization:  
 *
 * =====================================================================================
 */

struct sockaddr
{
    unsigned short sa_family;
    char sa_data[14];
};
struct sockaddr_in
{
    short int sin_family;
    unsigned short int sin_port;
    struct in_addr sin_addr;
    unsigned char sin_zero[8];
};
struct in_addr
{
    unsigned long s_addr;
};



