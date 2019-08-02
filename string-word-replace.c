#include <stdio.h>
#include <string.h>
int main(){
        char str2[150]=" ",w[20],r[20],neww[20][20],str[100];
        int i=0,len=0;
        const char del[2]=" ";
        char *token;
        printf("token is : %s\n",del);
        printf("Enter a string\n");
        gets(str);
        printf("Enter the word to replace\n");
        gets(w);
        printf("enter the word to replace it with\n");
        gets(r);
        printf("Entered String is : \n");
        puts(str);
        token=strtok(str,del);
        puts(token);
        if(strcmp(token,w)==0)
                strcpy(neww[i],r);
        else
                strcpy(neww[i],token);
        i=0;
        while(token!=NULL)
        {
                if(strcmp(token,w)==0)
                        strcpy(neww[i],r);
                else
                        strcpy(neww[i],token);
                token=strtok(NULL,del);
                i++;
        }
        len=i;
        printf("After replacing : \n");
        strcpy(str2,neww[0]);
        for(i=1; i<len; i++) {
                strcat(str2," ");
                strcat(str2,neww[i]);
        }
        puts(str2);
        return(0);
}
