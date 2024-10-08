#include <stdio.h>

int main()
{

  int n;
  int count = 0;
  int count1 = 0;

  scanf("%d", &n);

  int t = n;

  for (int i = 0;; i++)
  {
    if (t / 10 != 0)
    {
      count++;
      t /= 10;
    }

    else
    {
      break;
    }
  }

  for (int i = 0; i < count; i++)
  {
    if (n % 10 != 7 && n % 10 != 4)
    {
      count1++;
      n /= 10;
    }
  }

  if (count == count1)
  {
    printf("Unlucky\n");
  }
  else
  {
    printf("Lucky\n");
  }

  return 0;
}