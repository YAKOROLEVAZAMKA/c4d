#include "ft_atoi.c"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

void printcart(char **kvd, int vis);
char **gotmassiv(int a, char **kvd, int vis, int shir);
char **mallmassiv(int a, char **kvd, int vis, int shir);
char *sizeoffile(int a, char *h);
int msize(int a, int b);
int msqr(int c);
int getheight(int a, char *h);
int main(int argv, char **argc)
{
  int a;
  int b;
  int c;
  int d;
  int m;
  int m2;
  int kol;
  int vis;
  int shir;
  int e;
  int m3;
  char *h;
  char **kvd;
  int z;

  e = 1;
  c = 0;
  b = 0;
  m = 0;
  z = 0;
  m3 = 0;
  if (argv > 1)
    {
      while (e < argv)
	{
	  a = open(argc[e], O_RDONLY);
	  h = sizeoffile(a, h);
	  close(a);
	  a = open(argc[e], O_RDONLY);
	  vis = getheight(a, h);
	  close(a);
	  printf("%d\n", vis);
	  a = open(argc[e], O_RDONLY); 
	  kol = msize(a, 2);
	  shir = (kol / vis);
	  close(a);
	  printf("%d\n", shir);
	  kvd = (char**)malloc((vis+1) * sizeof(char*));
	  c = 0;
      	  while (c < vis)
	    {
	      printf("%d", c);
	      kvd[c] = (char *)malloc((shir+1) * sizeof(char));
	      c++;
	    }

	  //	  kvd = mallmassiv(a, kvd, vis, shir);
	  printf("%s", "YA TUT");
	  a = open(argc[e], O_RDONLY); 
	  kvd = gotmassiv(a, kvd, vis, shir);
	  // printcart(kvd, vis);
	  close(a);
	  a = open(argc[e], O_RDONLY);
	  d = 0;
	  printf("%s", "YA TUT");
	  c = msize(a, 1);
	  printf("%s", "YA TUT");
	  c = msqr(c);
	  //	  printf("%d\n", c);

	  c = c > shir && c > vis ? shir : c;
	  c = shir >= vis && c >= shir ? vis : c;
	  printf("%s", "YA TUT");
	  d = 0;
	  b = 0;
	  while (c > 0)
	    {
	      if (z == 1)
		break;
	      while (d <  vis)
		{
		  if (z == 1)
		    break;
		  while(b < shir)
		    {
		      if (z == 1)
			break;
		      if (kvd[d][b] == '.' && kvd[d][b + c - 1] == '.' && kvd[d + c - 1][b] == '.' && kvd[d + c - 1][b + c - 1] == '.')
			{
			  if (z == 1)
			    break;
			  m3 = 0;
			  m = 0;
			  m2 = 0;
			  while (m <= c && kvd[d + m][b])
			    {
			      while (m2 <= c && kvd[d][b + m2])
				{
				  if ((c * c) == m3)
                                    {
                                      printf("%d\n", msqr(m3));
                                      z = 1;
                                      break;
                                    }
				  if (kvd[d + m][b + m2] == '.')
					  m3++;
				  m2++;
				}
			      m++;
			      m2 = 0;
			    }
			}
		      b++;
		    }
		  b = 0;
		  d++;
		}
	      d = 0;
	      b = 0; 
	      c = c - 1;
	    }
	  e++;
	}
    }
  c = 0;
  m = 0;
  while (c < msqr(m3) && kvd[d + c][b + m])
    {
      while (m < msqr(m3) && kvd[d + c][b + m])
	{
	  kvd[d + c][b + m] = 'x';
	  printf("%c", kvd[d + c][b + m]);
	  m++;
	}
      printf("\n");
      m = 0;
      c++;
    }
  //  printcart(kvd, vis);
  free(kvd);
  close(a);
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

int msize(int a, int b)
{
  char e;
  int g;

  e = 0;
  g = 0;
  if (a >= 0)
    {
      while (read(a, &e, 1)) 
	{
	  if (b == 2)
	    {
	      if (e == '.' || e == 'o')
		g++;
	    }
	  else if(b == 1)
	  {
	    if (e == '.')
	      g++;
	  }
	}
    }
  return(g - b);
}

char **gotmassiv(int a, char ** kvd, int vis, int shir)
{
  size_t c;
  size_t d;
  size_t b;

  c = 0;
  d = 0;
  b = 0;
  while (read(a, &(kvd[c][b]), 1) != '\0')
    {
      if ((kvd[c][b] == '.' || kvd[c][b] == 'o') && kvd[c][b] != '\n')
	{
	  if (d > 1)
	    {
	      if (c < vis)
		{
		  if (b < shir - 1)
		      b++;
		  else
		    {
		      b = 0;
		      c++;
		    }
		}
	    }
	  d++;
	}
    }
  return(kvd);
}

void printcart(char **kvd, int vis) //ne zabud ubrat otsuda PRINT F! i sdelat print str i print char
{
  int c;

  c = 0;
  while (c < vis)
    {
      printf("%s\n", kvd[c]);
      c++;
    }
}

char **mallmassiv(int a, char ** kvd, int vis, int shir)
{
  size_t c; 

  kvd = malloc(sizeof(char *) * (vis + 2));
  c = 0;
  while (c <= vis)
    {
      kvd[c] = malloc(sizeof(char) * (shir + 1));
      c++;
    }
  return(kvd);
}

int msqr(int c)
{
  int d;

  d = 0;
  while( d <= c)
    {
      if (d * d == c)
	{
	  return (d);
	  break;
	}
      if((d * d) > c)
	{
	  return( d - 1);
	  break;
	}
      d++;
    }
  return(d);
}
