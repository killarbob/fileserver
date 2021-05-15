#include "date.h"


int dateCmp(Date date1, Date date2){
	if(date1.year==date2.year&&date1.month==date2.month&&date1.day==date2.day){
		return 1;
	}
	return 0;
}