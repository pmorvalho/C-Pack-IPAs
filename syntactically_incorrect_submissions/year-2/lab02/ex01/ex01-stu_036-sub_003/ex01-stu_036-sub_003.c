int main() {
  int a, b, c;
  printf("Introduz o primeiro número: ");
  scanf("%d", &a);
  printf("Introduz o segundo número: ");
  scanf("%d", &b);
  printf("Introduz o terceiro número: ");
  scanf("%d", &c);
  if (a >= b) {
    if (c >= a) {
      printf("%d\n", c);
    } else {
      printf("%d\n", a);
    }
  } else {
    if (c >= b) {
      printf("%d\n", c);
    } else {
      printf("%d\n", b);
    }
  }
  return 0;
}