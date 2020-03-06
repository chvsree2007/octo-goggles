#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
	char ch;
	DIR *dirptr;
	struct dirent *dentry;

	if (argc ==1){ 		/* No arguments provided */
		argv[1] = ".";	/* Current Directory */
		dirptr = opendir(argv[1]);
		do{
			dentry = readdir(dirptr);
			if(dentry){
				if(dentry->d_type == DT_REG)
					ch = 'f';
				else if(dentry->d_type == DT_DIR) 
					ch = 'd';
				else
					ch = 'u';

				printf("%c ",ch);
				printf("%s\n",dentry->d_name);
			}
		}while(dentry);
		closedir(dirptr);
	}

	if(argc >1){
		dirptr = opendir(argv[1]);
		do{
			dentry = readdir(dirptr);
			if(dentry){
				if(dentry->d_type == DT_REG)
					ch = 'f';
				else if(dentry->d_type == DT_DIR) 
					ch = 'd';
				else
					ch = 'u';

				printf("%c ",ch);
				printf("%s\n",dentry->d_name);
			}
		}while(dentry);
		closedir(dirptr);
	}
	return 0;
}
