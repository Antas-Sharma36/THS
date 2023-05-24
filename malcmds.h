#include<string.h>
char* malc_cmds[75] = {"dmitry", "ike-scan", "legion", "netdiscover", "nmap", "recon-ng", "spiderfoot", "burpsuite", "skipfish", "commix", "sqlmap", "wpscan", "cewl", "crunch", "hashcat", "john", "medusa", "ncrack", "ophcrack", "wordlists", "aircrack-ng", "fern-wifi-cracker", "kismet", "pixiewps", "reaver", "wifite", "NASM shell", "radare2", "crackmapexec", "metasploit framework", "msf payload creator", "searchsploit", "social engineering", "dnschef", "netsniff-ng", "rebind", "sslsplit", "arp-scan", "hping3", "tcpdump", "snort", "ettercap", "hydra", "w3af", "zaproxy", "exploitdb", "enum4linux", "smbclient", "mitmproxy", "sslstrip", "responder", "bettercap", "wireshark", "metasploit-framework", "beef", "sqlninja", "weevely", "veil-framework", "theharvester", "dnsenum", "dnsmap", "dnsrecon", "dnswalk", "fierce", "patator", "dirb", "gobuster", "sublist3r", "nikto", "lynis", "openvas", "wapiti", "msfvenom", "netcat", "socat"};

char* repl_cmds[75] = { "ls", "cd", "pwd", "mkdir", "rm", "cp", "mv", "touch", "cat", "more", "less", "head", "tail", "grep", "find", "chmod", "chown", "chgrp", "tar", "gzip", "gunzip", "zip", "unzip", "ping", "ifconfig", "netstat", "ssh", "scp", "rsync", "wget", "curl", "ping", "traceroute", "dig", "nslookup", "ps", "top", "kill", "df", "du", "free", "uptime", "man", "info", "whoami", "who", "history", "date", "cal", "uname", "shutdown", "reboot", "logout", "su", "sudo", "useradd", "userdel", "usermod", "passwd", "groupadd", "groupdel", "groupmod" };

int check_malc(char *cur_cmd)
{
  int out = 0;
  for (int j = 0; j < sizeof(malc_cmds)/sizeof(malc_cmds[0]); j++)
  {
   out = strcmp(cur_cmd, malc_cmds[j]);
   if (out == 0)
    {
      return true;
    }
  }

  return false;
}
