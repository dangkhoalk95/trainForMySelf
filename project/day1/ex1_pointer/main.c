/*
Create 5/1/2019.
*/

#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/* Prototype */

/*
 * Function: parser
 * ----------------------------
 * Returns -1 mean failed, 0 mean success.
 *
 * input: input string 's address 
 * ppHead: pointer to pointer store start address of answer
 * ppTail: pointer to pointer store stop address of answer
 *   
 * Example: 
 * const char input[] = "GJH[324]KLFJ[5465]543efwe"
 * char *pHead,*pTail;
 * After call parser(input,&pHead,&pTail); 
 * pHead = &input[4];
 * pTail = &input[6];
 * return 0;
 * Call parser(input,&pHead,&pTail); again
 * pHead = &input[13];
 * pTail = &input[16];
 * return 0;
 * Call parser(input,&pHead,&pTail); again
 * pHead = 0; (or NULL)
 * pTail = 0; (or NULL)
 * return -1;
 */
int parser(const char *input, char **ppHead, char **ppTail)
{
	// Add your code here
	return -1;
}

int main(int argc, char **argv)
{
	char *pHead,*pTail;
	if(argc == 1)
		return -1;
	for(int i=1;i<argc;i++)
	{
		printf("Input[%i]:%s\r\n",i,argv[i]);
		int counter = 0;
        while(parser(argv[i],&pHead,&pTail)==0)
		{
			char *log = (char *)malloc(pTail - pHead + 2);
			memcpy(log,pHead,pTail-pHead+1);
			log[pTail-pHead+1] = '\0';
			printf("[%i]:%s\r\n",counter++,log);
			free(log);
		}
	}
	return 0;
}