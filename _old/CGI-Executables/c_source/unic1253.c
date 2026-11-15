#include <stdio.h>
#include <string.h>

#define MAX_LEN_SINGLE_LINE 120

int main(int argc, char *argv[]) {

  char buffer[MAX_LEN_SINGLE_LINE+2];
  char *buff_ptr, *find_ptr;
  FILE *fp1, *fp2;
  int find_len = 6;



  fp1 = fopen(argv[1],"r"); fp2 = fopen("result1.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#913;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(193, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result1.txt","r"); fp2 = fopen("result2.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#914;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(194, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result2.txt","r"); fp2 = fopen("result3.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#915;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(195, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result3.txt","r"); fp2 = fopen("result4.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#916;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(196, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result4.txt","r"); fp2 = fopen("result5.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#917;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(197, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result5.txt","r"); fp2 = fopen("result6.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#918;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(198, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result6.txt","r"); fp2 = fopen("result7.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#919;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(199, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result7.txt","r"); fp2 = fopen("result8.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#920;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(200, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result8.txt","r"); fp2 = fopen("result9.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#921;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(201, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result9.txt","r"); fp2 = fopen("result10.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#922;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(202, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result10.txt","r"); fp2 = fopen("result11.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#923;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(203, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result11.txt","r"); fp2 = fopen("result12.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#924;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(204, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result12.txt","r"); fp2 = fopen("result13.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#925;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(205, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result13.txt","r"); fp2 = fopen("result14.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#926;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(206, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result14.txt","r"); fp2 = fopen("result15.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#927;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(207, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result15.txt","r"); fp2 = fopen("result16.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#928;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(208, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result16.txt","r"); fp2 = fopen("result17.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#929;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(209, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result17.txt","r"); fp2 = fopen("result18.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#930;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(210, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result18.txt","r"); fp2 = fopen("result19.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#931;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(211, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result19.txt","r"); fp2 = fopen("result20.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#932;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(212, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result20.txt","r"); fp2 = fopen("result21.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#933;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(213, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result21.txt","r"); fp2 = fopen("result22.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#934;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(214, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result22.txt","r"); fp2 = fopen("result23.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#935;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(215, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result23.txt","r"); fp2 = fopen("result24.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#936;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(216, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result24.txt","r"); fp2 = fopen("result25.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#937;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(217, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result25.txt","r"); fp2 = fopen("result26.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#945;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(225, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result26.txt","r"); fp2 = fopen("result27.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#946;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(226, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result27.txt","r"); fp2 = fopen("result28.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#947;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(227, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result28.txt","r"); fp2 = fopen("result29.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#948;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(228, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result29.txt","r"); fp2 = fopen("result30.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#949;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(229, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result30.txt","r"); fp2 = fopen("result31.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#950;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(230, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result31.txt","r"); fp2 = fopen("result32.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#951;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(231, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result32.txt","r"); fp2 = fopen("result33.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#952;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(232, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result33.txt","r"); fp2 = fopen("result34.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#953;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(233, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result34.txt","r"); fp2 = fopen("result35.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#954;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(234, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result35.txt","r"); fp2 = fopen("result36.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#955;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(235, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result36.txt","r"); fp2 = fopen("result37.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#956;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(236, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result37.txt","r"); fp2 = fopen("result38.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#957;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(237, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result38.txt","r"); fp2 = fopen("result39.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#958;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(238, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result39.txt","r"); fp2 = fopen("result40.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#959;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(239, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result40.txt","r"); fp2 = fopen("result41.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#960;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(240, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result41.txt","r"); fp2 = fopen("result42.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#961;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(241, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result42.txt","r"); fp2 = fopen("result43.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#962;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(242, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result43.txt","r"); fp2 = fopen("result44.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#963;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(243, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result44.txt","r"); fp2 = fopen("result45.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#964;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(244, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result45.txt","r"); fp2 = fopen("result46.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#965;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(245, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result46.txt","r"); fp2 = fopen("result47.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#966;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(246, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result47.txt","r"); fp2 = fopen("result48.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#967;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(247, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result48.txt","r"); fp2 = fopen("result49.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#968;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(248, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result49.txt","r"); fp2 = fopen("result50.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#969;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(249, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result50.txt","r"); fp2 = fopen("result51.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#902;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(162, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result51.txt","r"); fp2 = fopen("result52.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#904;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(184, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result52.txt","r"); fp2 = fopen("result53.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#905;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(185, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result53.txt","r"); fp2 = fopen("result54.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#906;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(186, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result54.txt","r"); fp2 = fopen("result55.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#908;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(188, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result55.txt","r"); fp2 = fopen("result56.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#910;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(190, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result56.txt","r"); fp2 = fopen("result57.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#911;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(191, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result57.txt","r"); fp2 = fopen("result58.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#912;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(192, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result58.txt","r"); fp2 = fopen("result59.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#938;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(218, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result59.txt","r"); fp2 = fopen("result60.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#939;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(219, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result60.txt","r"); fp2 = fopen("result61.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#940;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(220, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result61.txt","r"); fp2 = fopen("result62.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#941;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(221, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result62.txt","r"); fp2 = fopen("result63.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#942;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(222, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result63.txt","r"); fp2 = fopen("result64.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#943;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(223, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result64.txt","r"); fp2 = fopen("result65.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#944;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(224, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result65.txt","r"); fp2 = fopen("result66.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#970;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(250, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result66.txt","r"); fp2 = fopen("result67.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#971;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(251, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result67.txt","r"); fp2 = fopen("result68.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#972;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(252, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result68.txt","r"); fp2 = fopen("result69.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#973;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(253, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  fp1 = fopen("result69.txt","r"); fp2 = fopen("final.txt","w"); while (fgets(buffer, MAX_LEN_SINGLE_LINE+2, fp1)) { buff_ptr = buffer;
  while ((find_ptr = strstr(buff_ptr, "&#974;"))) { while(buff_ptr < find_ptr) fputc((int)*buff_ptr++, fp2); putc(254, fp2); buff_ptr += find_len; }
  fputs(buff_ptr, fp2);} fclose(fp2); fclose(fp1);

  system("rm result*.txt");

  return 0;

}
