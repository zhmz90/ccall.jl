#include <stdlib.h>
#include <stdio.h>

struct BGZF_1{
  int err;
  float fval;
  double dval;
};


BGZF *bgzf_open(const char *path, const char *mode){
  BGZF_1 *fp = (BGZF_1*)malloc(sizeof(BGZF_1));
  return fp;
}


int main(){
  BType *bt ;
  

  return 0;
}
