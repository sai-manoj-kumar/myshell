/* 
 * File:   main.c
 * Author: saimanoj
 *
 * Created on 17 October, 2012, 2:26 PM
 */

#include"myshell.h"

/*
 * 
 */

int main(int argc, char** argv) {

    // To initialize the shell, myshell
    myshell_init();
    
    while(1){
        
        printf("%s@%s:%s$ ", user_name, host_name, current_path);
        gets(command);



//      Exit myshell if `exit` command is entered.
        if( strcmp(command, "exit") == 0 ){
            myshell_exit(EXIT_SUCCESS);
        }
        
        
    
    }
    
}

