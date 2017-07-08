#include <stdio.h>
#include <unistd.h>
#include <getopt.h>

const struct option long_options[] = {
	{"help", 	0, NULL, 'h'},
	{"output", 	1, NULL, 'o'},
	{"verbose", 0, NULL, 'v'},
	{NULL,		0, NULL, 0}
};

const char* const short_options = "ho:v";

void main(int argc, char *argv[])
{
	int next_option;
	
	do{
		next_option = getopt_long(argc, argv, short_options, long_options, NULL);
		
		switch(next_option){
			case 'h':
				fprintf(stdout, "HELP! HELP!!\n");
				break;
			case 'o':
				printf("%s\n", optarg);
				break;
			case 'v':
				printf("Verbose!!!!\n");
				break;
			case '?':
				printf("Invalid option babe. Question\n");
			case -1:
				break;
			default:
				printf("Huh!! Cant even code properly!!\n");
		}
	} while(next_option != -1);
}
