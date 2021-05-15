#include "myfiles.h"
#include "date.h"
#include <string.h>

void readFile(FILE *theFile, myFile *buffer){
	int size = sizeof(buffer)/sizeof(*buffer);
	for(int i = 0; i<size; i++){
		fscanf(theFile, "%s %d %d %d %d %d %d %d", &buffer[i].fileName, &buffer[i].fileSize, 
			&buffer[i].dateCreated. , &buffer[i].dateCreated., &buffer[i].dateCreated., 
			&buffer[i].dateModified., &buffer[i].dateModified., &buffer[i].dateModified.);
	}
}

void listFile(myFile *toPrint){
	int size = sizeof(toPrint)/sizeof(*toPrint);
	for(int i =1; i<size; i++){
		printf("File Name:");
		printf("%s\n",toPrint[i].fileName);
	}
}

void listAllInfo(myFile *toPrint){
	int size = sizeof(toPrint)/sizeof(*toPrint);
	printf("File Name:\t\tFile Size:\tDate Created:\t\tDateModified");
	for(int i =1; i<size; i++){
		printf("%s\t\t%d\t%d/%d/%d\t\t%d/%d/%d\n",toPrint[i].fileName, toPrint[i].fileSize,
			toPrint[i].dateCreated., toPrint.dateCreated., toPrint.dateCreated.,
			toPrint[i].dateModified., toPrint[i].dateModified., toPrint[i].dateModified.);
	}
}

void listFileType(myFile *toPrint, char *fileType){
	
	//this is to have a buffer big enough for .fileExtension
	char substring[(sizeof(fileType)\sizeof(*fileType))+1];

	int size = sizeof(toPrint)/sizeof(*toPrint);
	substring[0]='.';
	strcat(substring,filetype);

	printf("Matched FileType:\n");
	for(int i = 0; i<size; i++){
		if(strstr(toPrint[i].fileName, substring)!=NULL){
			printf("%s\n", toPrint[i].fileName);
		}	
	}
}

void listContains(myFile *toPrint, char *substring){
	int size = sizeof(toPrint)/sizeof(*toPrint);
	printf("Found matches:\n");
	for(int i =0; i<size; i++){
		if(strstr(toPrint[i].fileName, substring)!=NULL){
			printf("%s\n", toprint[i].fileName);
		}
	}
}
void listCreated(myFile *toPrint, Date cmpDate){
	int size = sizeof(toPrint)/sizeof(*toPrint);
	printf("Files created on Date:\n");
	for(int i =0; i<size; i++){
		if(dateCmp(toPrint[i].dateCreated), cmpDate){
			printf("%s\n", toPrint[i].fileName);
		}
	}
}
void listModified(myFile *toPrint, Date cmpDate){
	int size = sizeof(toPrint)/sizeof(*toPrint);
	printf("Files created on Date:\n");
	for(int i =0; i<size; i++){
		if(dateCmp(toPrint[i].dateModified), cmpDate){
			printf("%s\n", toPrint[i].fileName);
		}
	}
}
