#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("This is file %s, line %d, run on  %s %s\n",__FILE__, __LINE__,__DATE__, __TIME__);
  
  system("ls -l");

  system("mkdir xxx");
  
  printf("%s", "\n");

  system("mkdir xxx/xxx2");

  system("ls -lR");

  return 0;
}

