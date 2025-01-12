#ifndef __SYSY
#define __SYSY 202203L
#endif
#include <sysy/sylib.h>


// recursive function operation

float fibFP(float n) {
    if (n < 2.0) {
        return 1.0; 
    }
    return fibFP(n - 2.0) + fibFP(n - 1.0);
}

float takFP(float x, float y, float z) {
    if (y < x)
        return takFP( takFP(x-1.0, y, z), takFP(y-1.0, z, x), takFP(z-1.0, x, y) );
    return z;
}
int main()
{
    starttime();
   int n = getint();
  
   float x = getfloat();
   float y = getfloat();
   float z = getfloat();
   float f1 = fibFP(28.0 + n);
   float t1 = takFP(x, y, z);
   if(f1==63245984.0){
       putch(112);
   }
   else{
       putint(1);

   }
   if(t1==2.0){
       putch(112);
   }
   else {
      putint(1);
   }
   stoptime();
   return 0;
    
}
