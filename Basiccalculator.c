/ * * * Basic Calculator * * * /
#include <stdio.h>
int main()
{
  char x;
  int a,b;
  scanf("%d\n",&a);
  scanf("%d\n",&b);
  scanf("%c",&x);
  if(x=='+')
  {
    printf("%d\n",a+b);
  }
  else if(x=='-')
  {
    printf("%d\n",a-b);
  }
  else if(x=='*')
  {
    printf("%d\n",a*b);
  }
  else if(x=='/')
  {
    printf("%d\n",a/b);
  }
  else
  {
    printf("%d\n",a%b);
  }
  return 0;
}
