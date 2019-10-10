#include "ft_atoi.c"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
char *sizeoffile(int a, char *h);
int  getheight(int a, char *h);
int main(int argv, char **argc)
{
  int a;
  char c;
  int d;
  int e;
  char *h;

  d = 0;
  e = 1;
  if (argv > 1)
    {
      while (e < argv)
	{
	  a = open(argc[e], O_RDONLY);
	  h = sizeoffile(a, h);
	  close(a);
	  a = open(argc[e], O_RDONLY);
	  d = getheight(a, h);
	  close(a);
	  printf("%d\n", d);
	  e++;
	}
    }
  /*  if (a >= 0)
    {
      while (read(a, &c, 1))
	{
	  while ((c != '.' && read(a, &c, 1)))
	    {
	      e = (c - 1) - '0';
	      printf("%d\n", e);
	      c++;
	      //printf("%d\n", e);

	    }
		  if (c == '.' || c == 'o')
	    d++;
	  // write(1, &c, 1);
	}
	}*/
  //  printf("%d", d - 2);
  //printf("%d\n", e);
  return(0);
}

char *sizeoffile(int a, char *h)
{
  int e;
  int g;

  e = 0;
  g = 1;
  if (a >= 0)
    {
      while (read(a, &e, 1))
	g++;
      h = malloc(sizeof(char) * g);
    }
  return(h);
}

int getheight(int a, char *h)
{
  int e;
  int d;

  d = 0;
  e = 0;
  if (a >= 0)
    {
      while (read(a, &e, 1))
        {
          h[d] = e;
          d++;
        }
    }
  d = ft_atoi(h);
  return(d);
}
