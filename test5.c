#include <stdio.h>
#include<stdbool.h>
#include <readline/history.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <string.h>

bool check_malc(char* cur_cmd){
  char* malc_cmds[75] = {"dmitry", "ike-scan", "legion", "netdiscover", "nmap", "recon-ng", "spiderfoot", "burpsuite", "skipfish", "commix", "sqlmap", "wpscan", "cewl", "crunch", "hashcat", "john", "medusa", "ncrack", "ophcrack", "wordlists", "aircrack-ng", "fern-wifi-cracker", "kismet", "pixiewps", "reaver", "wifite", "NASM shell", "radare2", "crackmapexec", "metasploit framework", "msf payload creator", "searchsploit", "social engineering", "dnschef", "netsniff-ng", "rebind", "sslsplit", "arp-scan", "hping3", "tcpdump", "snort", "ettercap", "hydra", "w3af", "zaproxy", "exploitdb", "enum4linux", "smbclient", "mitmproxy", "sslstrip", "responder", "bettercap", "wireshark", "metasploit-framework", "beef", "sqlninja", "weevely", "veil-framework", "theharvester", "dnsenum", "dnsmap", "dnsrecon", "dnswalk", "fierce", "patator", "dirb", "gobuster", "sublist3r", "nikto", "lynis", "openvas", "wapiti", "msfvenom", "netcat", "socat"};
  int out = 0 ;
  for ( int j = 0 ; j < 75 ; j++){
      out = strcmp(cur_cmd, malc_cmds[j]);
      printf("out = %d\n", out);
      if ( out == 1 ){
          return true;
      } 
  }
  return 0;
}

int main() {
  //char* strinj[20];
  char *line;
  HIST_ENTRY *entry;


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
              char* malc_cmds[75] = {"dmitry", "ike-scan", "legion", "netdiscover", "nmap", "recon-ng", "spiderfoot", "burpsuite", "skipfish", "commix", "sqlmap", "wpscan", "cewl", "crunch", "hashcat", "john", "medusa", "ncrack", "ophcrack", "wordlists", "aircrack-ng", "fern-wifi-cracker", "kismet", "pixiewps", "reaver", "wifite", "NASM shell", "radare2", "crackmapexec", "metasploit framework", "msf payload creator", "searchsploit", "social engineering", "dnschef", "netsniff-ng", "rebind", "sslsplit", "arp-scan", "hping3", "tcpdump", "snort", "ettercap", "hydra", "w3af", "zaproxy", "exploitdb", "enum4linux", "smbclient", "mitmproxy", "sslstrip", "responder", "bettercap", "wireshark", "metasploit-framework", "beef", "sqlninja", "weevely", "veil-framework", "theharvester", "dnsenum", "dnsmap", "dnsrecon", "dnswalk", "fierce", "patator", "dirb", "gobuster", "sublist3r", "nikto", "lynis", "openvas", "wapiti", "msfvenom", "netcat", "socat"};
              printf ("%d: %s \n", 0 + history_base, the_list[i]->line);

              // printf("Line1 = %s\n",line1);

              // for ( int j = 0 ; j < 75 ; j++){

              // // char* strinj = malc_cmds[0];
              // // out = strcmp(line1, strinj);

              //   char* line1 = the_list[j]->line;
              //   char* strinj = malc_cmds[j];
              //   out = strcmp( strinj, line1);
              //     if ( out == 0 ){
              //         replace_history_entry(j, "new command", NULL);
              //     }
              // }
            }
              // if (out == 0) {
              //   printf("The strings are equal.\n");
              // } else {
              //    printf("The strings are not equal.\n");
              // }

          } 

//  replace the second history entry
  // replace_history_entry(1, "new command", NULL);

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
