**Bandit0:** Password was given from the site. Steps were to ssh in bandit.labs.overthewire.org as bandit0 (the full command therefore is: bandit0@bandit.labs.overthewire.org).  
**Bandit1:** To retrieve the password we had to use the command cat on the readme file in the home directory. (cd $HOME; cat readme).  
**Bandit2:** To retrieve the password we had to use the cat command once more, with the difference that this time the file was called "-" and we couldn't cat just as "cat -", that didn't work. To solve this issue we used the relative filepath like "cat ./-".  
