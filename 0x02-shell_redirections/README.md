In todays task, I will be working on the Shell, I/O Redirections and filters.
The aim of this task, is to learn all about Shell, I/O Redirections and filters, the commands used for I/O redirections and the different types of filter commands.

I will also be stating each script line and what they peform. Wish me good luck guys.

The hello world script: echo 'Hello, World'

A script that displays a confused smiley face: echo '"(Ôo)'.\'

A script to display the content of a file: cat file_name

A script to display the content of 2 files: cat file1 file2

A script to display the last 10 lines of a file: tail file_name

A script to display the first 10 lines of a file: head file_name

A script to display the 3 line of a file: head -3 file_name | tail -1

A shell script that creates a file name with content: echo 'Somthing' > filane_name

A script the writes writes into the file and also overwrites old content: ls -al > filecotent

A script that duplicates the last line of a file: tail -n 1 < iacta >> iacta

A script that deletes all the regular files not the directories:find . -type f -name "*.js" -delete

A script that counts the number of directories and sub-directories in the current directory: find . -type d -not -name '.' | wc -l 

A script that displays the 10 newest files in the current directory: ls -t1 | head

Creating a unique file: sort | uniq -u

Display lines containing patterns: grep -i "root" /file/path 

Display the number of lines that contain the pattern: grep -i "bin" /filename | wc -l

Display lines containing pattern and 3 lines after them in the file: grep -iA 3 "root" /etc/passwd

Display all the lines in the file that do not contain the pattern: grep -v "bin /etc/passwd

Display all lines of the file(Letters only please): grep -i '^[a-z]' /etc/ssh/sshd_config

Replace all characters A and c from input to Z and e respectively: tr "A" "Z" | tr "c" "e"

A script that removes all letters c and C from input: tr -d "Cc" 

A script that reverse its input: rev 

A  script that displays all users and their home directories, sorted by users: cut -d ":" -f1,6 /etc/passwd | sort 

A command that finds all empty files and directories in the current directory and all sub-directories: find . -empty | rev | cut -d '/' -f 1 | rev

A script that lists all the files with a .gif extension: find . -type f -name \*.gif -printf "%f\n" | LC_ALL=C sort -f |rev | cut -b 5- | rev

A script that decodes acrostics that use the first letter of each line: cut -c l | paste -s -d ''

A script that parses web servers logs in TSV format: tail -n +2 | cut -f -1 | sort -k 1 | uniq -c | sort -rnk 1 | head -n 11 | rev | cut -d ' ' -f -1 | rev
 
