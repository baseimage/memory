#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MEGABYTE 1024*1024*1024

int main(int argc, char *argv[])
{
        void *myblock = NULL;
        int count = 0;
        while(1)
        {
                myblock = (void *) malloc(MEGABYTE);
                if (!myblock) break;
                memset(myblock, 1, MEGABYTE);
                // printf("Currently allocating %d MB\n", ++count*100);
                printf("Currently allocating %d GB\n", ++count);
                system("sleep 1");
        }
        exit(0);
}
