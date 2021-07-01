#include <stdio.h>
#include <memory.h>
#include <string.h>
int main()
{
  FILE *fp;
  char file_buff[100];
  fp = fopen("test_line.txt", "w");

  if (fp == NULL)
    printf("FILE OPEN FAIL\n");
  else
    printf("FILE OPEN COMPLETE\n");

  int i;

  for (i = 1; i <= 5; i++)
  {
    printf("Enter what to write in the file (#%d LINE)\n>> ", i);
    memset(file_buff, 0, sizeof(file_buff));
    scanf("%s", file_buff);
    file_buff[strlen(file_buff)] = '\n';

    fputs(file_buff, fp);
  }
  fclose(fp);

  fp = fopen("test_line.txt", "r");

  if (fp == NULL)
    printf("FILE OPEN FAIL\n");
  else
    printf("FILE OPEN COMPLETE\n");

  while (fgets(file_buff, sizeof(file_buff), fp) != NULL)
  {
    printf("%s", file_buff);
    memset(file_buff, 0, sizeof(file_buff));
  }
  fclose(fp);

  return 0;
}