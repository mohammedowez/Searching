#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   // create  the file 
    FILE *file;
    char s[1000];   
// path of the directory 
    char loc[1000] = "C:\\Users\\Owez\\Desktop\\mini\\text";
    char tmp[1000];
    char end[10] = "0.txt";
    char ch;
    int l = 1, i, c = 0,f =0,cs,j;
// Input the word from user
    printf("Enter the string to be searched: ");
    scanf("%s",s);
	for(j = 0; j < 10; j++)
	{
		c = 0; 
// string coping function is used to copy the Path to the loc file
		strcpy(tmp,loc);
/* 		f = 0;
    file = fopen(strcat(tmp,end),"r");
    while(!feof(file))
    {
        if(s[0] == getc(file))
        {
            f = 1;
            c++;
            cs = c;
            for(i = 1; s[i] != 0; i++)
            {
                ch = getc(file);
                if(ch != '\n')
c++;
                else
                {
                    l++;
                    c = 0;
                }
                if(ch != s[i])
                {
                    f = 0;
                    break;
                }
            }
            if(f == 1)
            break;
        }
        else
        c++;
    }

    if(f == 0)
    {
	printf("String not found in text%s\n\n",end);
	end[0]++;
	continue;
	}
    else
    printf("String found in text%s at\nLine - %d\nColumn - %d\n",end,l,cs);
    fclose(file);
// printing  all the content of the files
    printf("The file contents are: \n\n");
    file = fopen(tmp,"r");
    while(!feof(file))
    {
    	printf("%c",getc(file));
	}
	printf("\n");  
// close the file
	fclose(file); 
	end[0]++;
	}
	
    return 0;
}
