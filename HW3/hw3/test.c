int ComputeFac(int num) {
   int num_aux;
      if (num < 1)
         num_aux = 1;
      else
         num_aux = num * ComputeFac(num-1);
      return num_aux;
}

int main() {
   printf("\%d\n", ComputeFac(10));
}

