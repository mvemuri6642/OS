#include <unistd.h>
#include<stdio.h>
 
int main(void) {
 
  execl("/home/cse/19B95B0506/exec_f1","exec_f1",NULL);
  printf("success");
 
  return 0;
}
