#include <stdio.h>
#include <stdlib.h>
int main(void)
{
FILE *fptr; 
char word[81],ch,i,j;
int count=0;
fptr=fopen("Example.txt","r") ;
if (fptr!=NULL)
{ 
	printf("Example sentence:\n");
	while ((ch=getc(fptr))!=EOF)
	{	
		printf("%c",ch);
	}
	fclose (fptr) ;
	printf("\n");
}
else
printf ("File import error!\n");
printf("Enter a sentence:");
scanf("%[^\n]",word);
printf("\n");
printf("Original sentence:%s\n\n",word);
for (i = 0, j = 0; word[i]; i++)
	{
	if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
		{
		}
	 else
		{
			word[j++] = word[i];
		}
}
word[j] = '\0';	
printf("Processed sentence:%s\n\n",word);	
system("pause");
return 0;
}
