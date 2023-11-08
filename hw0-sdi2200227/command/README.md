**Bandit0:** Password was given from the site. Steps were to ssh in bandit.labs.overthewire.org as bandit0 (the full command therefore is: ssh bandit0@bandit.labs.overthewire.org).  
  
**Bandit1:** To retrieve the password we had to use the command cat on the readme file in the home directory. (cd $HOME; cat readme).  
  
**Bandit2:** To retrieve the password we had to use the cat command once more, with the difference that this time the file was called "-" and we couldn't cat just as "cat -", that didn't work. To solve this issue we used the relative filepath like "cat ./-".  
  
**Bandit3:** The file had spaces between, so we used the command "cat ./'spaces in this filename', therefore we used single quotes to access the file.

**Bandit4:** The file in this situation was hidden. Such as .profile or .bashrc, to find it we used "ls -a", and then we "cat .inhere".  
  
**Bandit5:** The password was in the directory "inhere", used "cat ./-file**", to cat every single file and notice which one has a normal string. Asterics are used as a "joker" to indicate any possible character.  

**Bandit6:** "passwordFile=$(find ./ -type f -size 1033c); cat $passwordfile; echo;". We store the password in the variable passwordFile, the command used is "find" with option "type f" (which means find files) and option "size 1033c" (which looks for a file of size as the password strings).  
  
**Bandit7:** Password was in the path "/var/lib/dkpg/info/" and the file name was "bandit7.password". The absolute path therefore is "/var/lib/dkpg/info/bandit7.password". The command used looks a lot like the previous one, but we check in the group bandit6 for user bandit7. The full command is "passwordFilename=$(find / -type f -user bandit7 -group bandit6 -size 33c 2>/dev/null); cat $passwordFilename".  

**Bandit8:** "cat data.txt | grep ^millionth". The command used is to "cat data.txt" file and print only the line that started (using ^ followed by) millionth as instructed.  

**Bandit9:** "cat data.txt | sort | uniq -u". The command used is to "cat data.txt" file, sort it and print the only line that didn't have any duplicates (using the command uniq, with option -u).  

**Bandit10:** "strings data.txt | grep =".

**Bandit11:** "base64 -d data.txt", using this command we decrypt (option -d) the file "data.txt" using the command "base64".
