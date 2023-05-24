#include <stdio.h>
#include <stdbool.h>
#include <readline/history.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "malcmds.h"

int main()
{

// random element generation
  srand(time(NULL));
  int randomIndex;
  char* randomElement;

// variable declaration 
  char *line;
  char *strinj;
  char *line1;
  HIST_ENTRY *entry;
  fflush(stdin);

  // specify the history file
  char *history_file = "history_file";

  // read the history file
  read_history(history_file);

  register HIST_ENTRY **the_list;
  register int i;
  int out = 0;
  the_list = history_list();
  printf("history contains %d elements\n",history_length);
  printf("size is %lu\n",sizeof(malc_cmds)/sizeof(malc_cmds[0]));
  
  if (the_list)
  {

// Loop through the history list
    for (i = 0; i < (history_length); i++)
    {
      // printf("%d: %s \n", i + history_base, the_list[i]->line);

// check if command is malicious
      line1 = the_list[i]->line;
      if (check_malc(line1))
      {

// select a random command from the list of linux commands 
          randomIndex = rand() % 75;
          randomElement = repl_cmds[randomIndex];

// replace a malicious command with a normal linux command
          replace_history_entry(i,randomElement, NULL);
      }
    }
  }

// print the updated history file
  printf("the updated history is:\n");
  if (the_list)
    for (i = 0; i < (history_length); i++)
      printf("%d: %s and malc cmds = %d\n", i + history_base, the_list[i]->line, out);

// write the changes to the history file
  write_history(history_file);

  return 0;
}