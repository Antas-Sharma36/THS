#include <stdio.h>
#include <stdlib.h>
#include <readline/history.h>
#include<readline/readline.h>

int main() {
  using_history();
  read_history("history_file");



  register HIST_ENTRY **the_list;
  register int i;

  the_list = history_list();
    if (the_list)
        for (i = 0; the_list[i]; i++)
            printf ("%d: %s\n", i + history_base, the_list[i]->line);
  HIST_ENTRY *entry = history_get(history_length);
  printf("Last command: %s\n", entry->line);

//   char *new_command = "ls -al";
//   replace_history(history_length - 1, new_command, NULL);

//   write_history("history.txt");
  return 0;
}
