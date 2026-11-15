#include <stdio.h>
main(int argc, char *argv[]) {

  FILE *fp;
  fp = fopen(argv[1], "r");
  int size = 0;
  int b;
  while ( ( b = getc(fp) ) != EOF ) size++;
  fclose(fp);



  FILE *fd, *fe;
  fd = fopen(argv[1], "r");
  fe = fopen(argv[2], "wb");

  char myArray[3];
  int result;
  int i;
  for (i=0; i<size/3; i++) {

    myArray[0] = getc(fd);
    myArray[1] = getc(fd);
    myArray[2] = getc(fd);

    result = (myArray[0] - '0')*100 + (myArray[1] - '0')*10 + (myArray[2] - '0');
    putc(result, fe);

  }

  fclose(fd);

  return 0;
}
