//copying from one file to another file, if the target file
// already exists
//overwrite it with cofirmation
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
void main()
{
 FILE *fs,*ft;
 char opt,source[20],target[20],ch;
 printf("\n Enter source file ");
 scanf("%s",source);
 fs=fopen(source,"r");
 if(fs==NULL)
 {
  printf("\Source file not found ");
  getch();
  exit(0);
 }
 printf("\n Enter target file ");
 scanf("%s",target);
 ft=fopen(target,"r");
 fflush(stdin);   //to clear the keyboard buffer
 if(ft!=NULL)
 {
printf("\n The file %s already exists! Do you want to overwrite y/n ",target);
    scanf("%c",&opt);
    if(opt=='n' || opt=='N')
    {
     printf("\n 0 files copied... ");
     getch();
     exit(0);
     }
 }
 ft=fopen(target,"w");
 while((ch=getc(fs))!=EOF)
 putc(ch,ft);
 printf("\n File copied successfully....");
 fclose(fs);
 fclose(ft);
 getch();
}