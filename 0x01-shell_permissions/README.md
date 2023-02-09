My name is Betty

I am going to be working on the shell permissions for this program.

I will be assigning different permission leveles for every users, this includes file owner, group owner, and everyone else. 



The different permission levels I may be assigning will be 

chmod:  To modify file access rights or change the permissions of a file or directory

su:To become a temporarily superuser

sudo:To grant more than one superuser privileges as needed

chown:To change file ownership

chgrp:To change a file's group ownership

>>>>>For the project<<<<<

Change user to  Betty: su betty

Displays username of the current user: whoami

To prints all the groups the current user is part of: groups

To change the owner of the file hello to the user betty: chown betty hello

A script that creates an empty file hello: touch hello

Grants execute permission to the owner of the file: chmod u+x hello

For adding execute permission to the owner and the group owner, and read permission to other users: chmod ug+x,o+r hello

Grants execution permission to the owner, group owner and other users, to the file: chmod ugo+x hello

A script that set zero permission to owner and group but grants all permissions to user: chmod 007 hello

A script for John Doe hello file: chmod 753 hello

A script that references another file: chmod --reference=olleh hello

A script that gives permission to all subdirectories of the current directory: chmod -R +X .

A script that creates a directory called my_dir with permissions 751 in the working directory: mkdir -m 751 my_dir

A script that changes the group owner to school for the file hello: chgrp school hello

A script that changes the owner to vincent and the group owner to staff: chown vincent:staff *

A script that changes the owner and the group owner of a file: chown -h vincent:staff _hello

A script that changes the owner of a file from an existing owner: chown --from=guillaume betty hello

A script that will play the StarWars IV episode in the terminal: telnet towel.blinkenlights.nl
