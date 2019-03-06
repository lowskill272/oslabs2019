#include "revert_string.h"
#include <stdio.h>

void RevertString(char *str)
{
	int n=0;
	while(str[n]!='\0') {
	    n++;
	}
	char swap;
	for(int i=0;i<n/2;i++){
	    swap=str[i];
	    str[i]=str[n-i-1];
	    str[n-i-1]=swap;
	}
}

