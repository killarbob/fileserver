#include "date.h"
#include "myfiles.h"
#include <stdio.h>
int main(){
	myFiles array[100];
	FILE *ptr= fopen("data.txt", "r");

	readfile(array, ptr);
	listFile(array);
	listAllInfo(array);
	while(1){

	}

}