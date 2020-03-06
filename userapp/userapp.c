#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <dirent.h>
#include <string.h>

void print_usage(){
	printf("Usage: userapp <Option>\n \t -a  To print all information\n");
	printf("\t -c  To print CPU usage\n");
	printf("\t -m  To print Memory usage\n");
	printf("\t -n  To print Network info\n");
	printf("\t -g  To print GPIOs info\n");
}

void get_gpio_info(){

        DIR *directory=NULL;
        struct dirent *entry=NULL;
        int count=0;

        directory = opendir("/sys/class/gpio/"); /* Update it with /sys/class/gpio/ */

        if(directory != NULL)
        {
                while((entry = readdir(directory)) != NULL ) {
                        if(entry->d_type == DT_DIR && strcmp(entry->d_name,"..")!=0 && strcmp(entry->d_name, ".")!=0){
                                printf("%s\n", entry->d_name);
                                count++;
                        }
                }
        }
        printf("Total Number of GPIOs found=%d\n",count);
}

int main(int argc, char *argv[])
{
	int opt;
	int status =0;
        static struct option long_options[] = {
		{"cpu_usage",    no_argument,     0,  'c' },
		{"memory_usage", no_argument,       0,  'm' },
		{"network_info", no_argument,   0,  'n' },
		{"gpio_info", no_argument,   0,  'g' },
		{"all",        no_argument,       0,  'a' },
		{"help",       no_argument,       0,  'h' },
		{0,           0,                 0,  0   }
	};

	int long_index =0;
	system("date");
	while ((opt = getopt_long(argc, argv,"cmngah:",
			long_options, &long_index )) != -1) {
        if (opt == -1){
                print_usage();
                exit(EXIT_FAILURE);
	}
	switch (opt) {
        	case 'c':
                	printf("####### CPU USAGE #################\n");
			system("./get_cpu_usage.sh 1");
			break;

		case 'm':
			printf("####### Memory Usage ##################\n");
			system("./memory_usage.sh");
			break;

		case 'n':
			printf("####### Network Info & Interfaces ################\n");
			system("phoronix-test-suite network-info");
			system("lshw -class network -short");
			break;
		
		case 'g':
			printf("####### GPIOs Info ################\n");
			get_gpio_info();
			break;

		case 'a':
                	printf("####### CPU USAGE #################\n");
			system("./get_cpu_usage.sh 1");
			printf("\n####### Memory Usage ################");
			system("./memory_usage.sh");
			printf("\n####### Network Info & Interfaces ##############\n");
			system("phoronix-test-suite network-info");
			system("lshw -class network -short");
			printf("####### GPIOs Info ################\n");
			get_gpio_info();
			break;

		case 'h':
			print_usage();
			break;

		default:print_usage();
			exit(EXIT_FAILURE);
		}
	}
	return 0;
}

