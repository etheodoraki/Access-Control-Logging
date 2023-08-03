# Access-Control-Logging
The access control logging system will monitor and keep track of every file access and
modification that occurs in the system. So, each file access or file modification will generate 
an entry in a log file. This log file will be inspected by a separate high privileged process.

Step 1: Access Control Logging Tool
        Development of the file "logger.c" which constructs our own fopen() and fwrite().
        Each time the user calls these functions to create/open/write a file,
        an entry is created to the "file_logging.log" log file.
        There is an issue creating distinct values for some entry variables in the log file.
        But if you manually modify the values (e.g. is_access_denied) in the log file, you can 
        verify that the functionality of step 2 is valid.
        

Step 2: Access Control Monitoring Tool
        Development of "acmonitor.c" file. Implementaion of the first part is done here,
        where malicious users' IDs are printed by the option -m.
        -> I added a log file with an example of a malicious user to check this step.
        Part 2 is not completed.

Step 3:
        Added some logs with denied access and fingerprint="finger".
