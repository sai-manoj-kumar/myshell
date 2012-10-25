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

    char *input = (char *) NULL;

    // To initialize the shell, myshell
    myshell_init();

    while (1) {

        input = rl_read();

        //      Exit myshell if either Ctrl +D is pressed or 
        //        `exit` command is entered.
        if (!input) {
            myshell_exit(EXIT_SUCCESS);
        } else if (strcmp(input, "exit") == 0) {
            myshell_exit(EXIT_SUCCESS);
        }

    }

}

