#include <stdio.h>
#include <readline/history.h>
#include <readline/readline.h>
#include <stdlib.h>

int main() {
  char *line;
  HIST_ENTRY *entry;


// specify the history file
  char* history_file = "history_file";

// read the history file 
  read_history(history_file);

  register HIST_ENTRY **the_list;
  register int i;

          the_list = history_list();
          if (the_list)
            for (i = 0; the_list[i]; i++)
              printf ("%d: %s\n", i + history_base, the_list[i]->line);


//  replace the second history entry
  replace_history_entry(1, "new command", NULL);

// print the updated history file 
  printf("the updated history is:\n");
  the_list = history_list();
  if (the_list)
    for (i = 0; the_list[i]; i++)
      printf ("%d: %s\n", i + history_base, the_list[i]->line);

// save history ig  
  write_history(history_file);
  return 0;
}
