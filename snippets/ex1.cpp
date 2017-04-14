 int foo(int a, int b) {
   int k = 1;          // k je konstantno: 1
   int m, n;
   if (a == 0) {
     ++k;              // k je konstantno: 2
     m = a;
     n = b;
   } else {
     k = 2;            // k je konstantno: 2
     m = 0;
     n = a + b;
   }
   return k + m + n;   // k je konstantno: 2
 }
