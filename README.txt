How to request data:

My partner will use the system call command on cpp in order to call my microservice, while also passing in a file.
EX code: system("./ms filename.txt");

How to recieve data:

My program will return an exit value of 1 or -1. If it is a 1, no valid file or a valid file was found. If no valid file was found it will create it.
If the user types in a file name without ".txt" at the end of it, my microservice will return a exit status of -1 to reprompt the user.

UML Sequence Diagram:


User                         My Microservice

Request File --------------> Find File Name

New File Created <---------- No File Found 

Reprompt User <------------- Invalid File

No Creation of File <------- File Found