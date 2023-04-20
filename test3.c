#include <stdio.h>
#include<readline/history.h>
#include<readline/readline.h>

int main() {

// Compile using gcc test3.c -lreadline
    printf("Imported the history header\n");

    using_history(); 
// This function initializes the interactive variables???
    HISTORY_STATE* hist_state = history_get_history_state();
// Get the current history state    
        //printf("History state length=%d",HISTORY_STATE);
    int h_state_len = hist_state->length; // = hist_state.len 
    printf("Length of state is:%d",h_state_len); 
//Print number of elements within the history state
// why zero tho?
return 0;
}
