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
    int i, count, is_valid;
    struct component components[50];
    // To initialize the shell, myshell
    myshell_init();

//    signal(SIGCHLD, handler);
    
    while (1) {
        input = rl_read();
        count = 0;

        //      Exit myshell if either Ctrl +D is pressed or 
        //        `exit` command is entered.
        if (!input) {
            myshell_exit(EXIT_SUCCESS);
        } else if (strcmp(input, "exit") == 0) {
            myshell_exit(EXIT_SUCCESS);
        }


        if (strcmp(input, "") != 0) {
            is_valid = validate_input(input);
            if (is_valid == 0) {
                count = parse_input(input, components);
                int res = myshell_process(components, count);
                if( res == -1 ){
                    printf("error in command\n");
                }
            }
        }

    }

}

