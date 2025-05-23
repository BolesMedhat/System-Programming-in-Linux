#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if ( 3 == argc )
	{
		char buf[100];
		int source_fd ,directory_fd;
		
		source_fd = open( argv[1] , O_RDONLY );
		
		if( source_fd == -1 )
		{
			printf("ERROR: can not use the source path\n");
			exit(1);
		}

		directory_fd = open( argv[2] , O_WRONLY | O_CREAT | O_TRUNC , 0644 );
                
		if( directory_fd == -1 )
		{
                        printf("ERROR: can not use the source path\n");
                        exit(2);
                }


		int linesReadNum;
			
		while ( ( linesReadNum = read( source_fd , buf , 100 ) ) > 0 )
		{
			if ( write( directory_fd , buf , linesReadNum ) == -1 )
			{
				printf("copy Failed!\n");
				break;
			}
		}
		if ( linesReadNum == -1 )
		{
			printf("copy Failed!\n");
		}

		close( source_fd );
		close( directory_fd );
	}
	else
	{
		printf("ERROR: the command must be like this: ./mycp source_path directory_path\n");
	}
	
	return 0;
}
