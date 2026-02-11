 #include <stdio.h>
 
 int main() {
    int n;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

      for (int i = 1; i < n; i += 2) {
      if (i % 2 == 0 || i % 7 == 0 || i % 11 == 0) continue;
      if (i >= 100) break;
        else printf("%d\n", i);
   }
}