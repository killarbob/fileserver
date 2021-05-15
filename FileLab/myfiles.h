#ifndef
#define MYFILES
#include "date.h"

typedef struct myFile{
	char fileName[61];
	char filetype[60];//i would rather do this at the start
	int fileSize;
	Date dateCreated;
	Date dateModified;
} myFile;

void readFile(FILE *theFile, myFile *buffer);

void listFile(myFile *toPrint);

void listAllInfo(myFile *toPrint);
void listFileType(myFile *toPrint, char *fileType);
void listContains(myFile *toPrint, char *substring);
void listCreated(myFile *toPrint, Date cmpDate);
void listModified(myFile *toPrint, Date cmpDate);


#endif