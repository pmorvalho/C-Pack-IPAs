void piramide(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      printf("  ");
    }

    for (int j = 1; j <= i; j++)
    {
      printf("%d ", j);
    }

    for (int j = i - 1; j >= 1; j--)
    {
      printf("%d", j);
      if (j != 1 || j == 1 && i != n)
      {
        printf(" ");
      }
    }

    printf("\n");
  }

}

int main()
{
  int n;
  scanf("%d", &n);
  piramide(n);
  return 0;
}