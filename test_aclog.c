#include <stdio.h>
#include <string.h>
#include <time.h>

int main() 
{
	int i;
	size_t bytes;
	FILE *file;
	char filenames[10][7] = {"file_0", "file_1", 
			"file_2", "file_3", "file_4",
			"file_5", "file_6", "file_7", 		
			"file_8", "file_9"};


	/* example source code */

	for (i = 0; i < 10; i++) {

		file = fopen(filenames[i], "w+");
		if (file == NULL) 
			printf("fopen error\n");
		else {
			bytes = fwrite(filenames[i], strlen(filenames[i]), 1, file);
			fclose(file);
		}

	}


	/* add your code here */
	
	file = fopen(filenames[7],"a");
	fclose(file);

	FILE *flog;
	flog = fopen("file_logging.log", "a");
	
	time_t t = time(NULL);
	struct  tm tm = *localtime(&t);
	
	char *filepath;
	for (size_t i = 0; i < 10; i++)
	{
		int uid = i+2020;
		//filepath = realpath(, NULL);
		fprintf(flog, "%d\t%s\t%02d-%02d-%d\t%02d:%02d:%02d\t%d\t%d\t%s\n",
		uid,filenames[i],tm.tm_mday,tm.tm_mon+1,1900+tm.tm_year,tm.tm_hour, tm.tm_min, tm.tm_sec,
		1,1,"finger");
	}
	
	/* ... */
	/* ... */


}
