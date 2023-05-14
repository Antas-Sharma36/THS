#include <stdio.h>
#include<stdbool.h>
#include <readline/history.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <string.h>
#include "malcmds.h"

int coutner = 0;
bool check_malc(char* cur_cmd){
  coutner++;
  printf("It has begun-\n");
  int out = 0 ;
  for ( int j = 0 ; j < 75 ; j++){
      out = strcmp(cur_cmd, malc_cmds[j]);
      printf("Number = %d and out = %d and counter=%d\n", j,out,coutner);
      if ( out == 1 ){
          printf("It has ended-\n");
          return true;
      } 
  }
  return false;
}

int main() {
  //char* strinj[20];
  char *line; 
  char* strinj;
  char* line1;
  HIST_ENTRY *entry;
       fflush(stdin);


// specify the history file
  char* history_file = "history_file";

// read the history file 
  read_history(history_file);

  register HIST_ENTRY **the_list;
  register int i;
  int out = 0 ;              
  the_list = history_list();
  if (the_list){
    for (i = 0; the_list[i]; i++){
        // char** malc_cmds[2] = {"dmitry", "ike-scan"};// "legion", "netdiscover", "nmap", "recon-ng", "spiderfoot"};
        printf ("%d: %s \n", 0 + history_base, the_list[i]->line);

            for ( int j = 0 ; j < 75 ; j++){

                line1 = the_list[j]->line;
                if (check_malc(line1)){
                  replace_history_entry(j, "new command", NULL);
                }
              }
            }
              

          } 



// print the updated history file 
  printf("the updated history is:\n");
  the_list = history_list();
  if (the_list)
    for (i = 0; the_list[i]; i++)
      printf ("%d: %s and malc cmds = %d\n", i + history_base, the_list[i]->line,out);

// save the history
// write_history(history_file);

  return 0;
}
