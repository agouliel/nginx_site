#include <stdio.h>

main(int argc, char *argv[]) {

  FILE *fd, *fp;
  fd = fopen(argv[1], "rb");
  fp = fopen(argv[2], "w");

  int c;
  while ( ( c = getc(fd) ) != EOF ) fprintf(fp, "%0*d", 3, c);

  fclose(fd);
  fclose(fp);

  return 0;
}
