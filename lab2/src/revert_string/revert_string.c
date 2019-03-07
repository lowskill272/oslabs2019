#include "revert_string.h"
#include <stdio.h>

void RevertString(char *str)
{
	int n=0;
	while(str[n]!='\0') {
	    n++;
	}
	char swap;
	int i=0;
	    label:
	    swap=str[i];
	    str[i]=str[n-i-1];
	    str[n-i-1]=swap;
	    i++;
	    if(i<n/2)
	    goto label;

}

