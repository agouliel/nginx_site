#include <stdio.h>
main() {

  FILE *fd, *fp;
  fd = fopen("final.txt", "r");
  fp = fopen("grcode.txt", "w");

  int c, first, second, third, remainder;
  while ( ( c = getc(fd) ) != EOF ) {

    if (c > 99) {
      //fprintf(fp, "%d", c); //MULT=1, LENG=3
      first = c / 100;
      remainder = c % 100;
      second = remainder / 10;
      third = remainder % 10;
    }

    else {
      //fprintf(fp, "0%d", c);
      first = 0;
      second = c / 10;
      third = c % 10;
    }

    first += '0';
    second += '0';
    third += '0';

    putc(first, fp);
    putc(second, fp);
    putc(third, fp);

  }

  fclose(fd);
  fclose(fp);

  return 0;
}
