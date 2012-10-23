/* 
 * File:   myshell.h
 * Author: saimanoj
 *
 * Created on 23 October, 2012, 11:18 AM
 */

#ifndef MYSHELL_H
#define	MYSHELL_H

#ifdef	__cplusplus
extern "C" {
#endif

#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<pwd.h>
#include<string.h>

    char host_name[256], current_path[256];
    size_t len;
    __uid_t uid;
    struct passwd *current_user;
    char command[256];
    char *user_name; // Username of the current user
    char *home_dir; // Home directory of the current user.
    char *details; // Details of the current user.
    char *shell; // Details of the current user.
    __gid_t gid; // group id of the current user.



    void myshell_init();

    int myshell_exit(int status);




#ifdef	__cplusplus
}
#endif

#endif	/* MYSHELL_H */

