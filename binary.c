#include <stdio.h>
	 
int main(int argc, char **argv)
{
	    int a[] = {2, 4, 6, 8, 10, 12, 14, 16,20,25,56,78};
	    int key = atoi(argv[1]);
	    int n = 12;
	    int low = 0;
	    int high = n - 1;
	    int middle;
	    int flag = 0;
	 
	    while (low <= high) {
	        middle = (low + high) / 2;
	        if (key == a[middle]) {
	        printf("Found number %d at position %d\n", key, middle);
	            flag = 1;
	        }
	        else if (key < a[middle]) {
	            high = middle - 1;
	        }
	        else {
	            low = middle + 1;
	        }
	        if (flag)
	            break;
	    }
	 
	    if (! flag)
	        printf("number %d was not found!\n", key);
	    return 0;   
   }






	

