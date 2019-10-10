#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <conio.h>



#include "count_field_x.c"
#include "count_field_all.c"
#include "show_field.c"
#include "create_snake.c"
#include "checkdead.c"


//#include "malloc_telo.c"
//#include "malloc_snake.c"
//#include "allow_direction.c"
//#include "pressedbutton.c"
//#include "move.c"
//#include "get_field.c"
//#include "xpos_ini.c"
//#include "ypos_ini.c"



int count_field_all(void);
int count_field_x(void);
void create_snake(char **snake, int xfield, int yfield, int *xp, int *yp);
int checkdead(char **snake, int xpos, int ypos, int direction, char mfield, char food, int *eat);


//int allow_direction(int direction, int snake_length);
//void malloc_snake(char **snake, char *field, int xfield, int yfield);
//void malloc_telo(int **telo_x, int **telo_y, int xfield, int yfield);
//int pressedbutton(void);
//void move(char **snake, int x, int y, int yfield);
//void get_field(char **snake, int xfield);
//int xpos_ini(int xfield);
//int ypos_ini(int yfield);

int main(void)
{
    char mfield;
    char food;
    int allow;

    //int allow_move;

    mfield = '.';
    food = 'x';

    int xpos;
    int ypos;

    int xfield = 0;
    int yfield = 0;

    xfield = count_field_x();
    yfield = count_field_all()/xfield;
    printf("x = %d, y = %d\n", xfield, yfield);

    FILE *fh;
    int ch;
    static char **snake;
    char *field;
    int i;
    int j;

    //malloc_snake(snake, field, xfield, yfield);

    field = (char *)malloc(sizeof(char) * (xfield + 1));

    snake = (char **)malloc(sizeof(char*)* xfield);
    for(i = 0; i < yfield; i++)
        snake[i] = (char *)malloc(sizeof(char) * xfield);

    int *telo_x;
    int *telo_y;
    int eat;
    int tempx;
    int tempy;
    int tempx2;
    int tempy2;
    int snake_length = 0;
    int sn;


    
    telo_x = (int *)malloc(sizeof(int)* xfield * yfield);
    telo_y = (int *)malloc(sizeof(int)* xfield * yfield);
    

    fh = fopen("field.txt", "r");
    if  (fh == NULL)
    {
        puts("Error");
        exit (1);
    }

    j = 0;
    

    while (fgets(field, xfield+1, fh))
    {
        strcpy(snake[j], field);
        //printf("[%d] - %s", j, snake[j]);  //SHOW_FIELD_COPIED_TO_**SNAKE

        j++;
    }

   
    fclose(fh);


    create_snake(snake, xfield, yfield, &xpos, &ypos);
    telo_x[0] = xpos;
    telo_y[0] = ypos;

    telo_x[1] = 2;
    telo_y[1] = 2;

    system("Cls");

    show_field(yfield, snake);

    

    puts("\n");

    //printf("[x] - %d / %d\n", xpos+1, xpos); // X NACIHNAETSA S 0 !!!!
    //printf("[y] - %d / %d\n", ypos+1, ypos); // Y NACIHNAETSA S 0 !!!!

    

    int direction ='\0';
    
    while (direction != 'Q')
    {

        while(!kbhit());
        direction = getch();
        //allow_move = allow_direction(direction, snake_length);

        switch (direction)
        {
                case 'a':
                    if (allow == 3 && snake_length > 0)
                    {    
                        break;
                    }
                    else
                    {     

                        if (checkdead(snake, xpos, ypos, direction, mfield, food, &eat) == 0)
                        {
                            
                            if (eat == 1)
                                snake_length++;
                            
                            sn = 0;

                            tempx = xpos;
                            tempy = ypos;

                            xpos = xpos - 1;
                                                        
                            for (sn = 0; sn <= snake_length; sn++)
                            {
                                if (sn == 0)
                                {
                                    telo_x[sn] = xpos;
                                    telo_y[sn] = ypos;
                                    snake[telo_y[sn]][telo_x[sn]] = 'Q';
                                    snake[tempy][tempx] = '.';
                                }
                                if (sn > 0)
                                {
                                    if (eat == 1)
                                    {
                                        printf("\nYOU ATE FOOD!!!");
                                        tempx2 = telo_x[sn];
                                        tempy2 = telo_y[sn];
                                        telo_x[sn] = tempx;
                                        telo_y[sn] = tempy;
                                        snake[telo_y[sn]][telo_x[sn]] = 'o';
                                        //snake[tempy][tempx] = '.';
                                        tempx = tempx2;
                                        tempy = tempy2;
                                    }
                                    if (eat == 0)
                                    {
                                        
                                        tempx2 = telo_x[sn];
                                        tempy2 = telo_y[sn];
                                        //snake[telo_y[sn]][telo_x[sn]] = '.';
                                        telo_x[sn] = tempx;
                                        telo_y[sn] = tempy;
                                        snake[telo_y[sn]][telo_x[sn]] = 'o';
                                        //snake[tempy][tempx] = '.';
                                        tempx = tempx2;
                                        tempy = tempy2;
                                        snake[tempy][tempx] = '.';
                                    }

                                }
                            }
        
                    
                            
                            show_field(yfield, snake);
                            
                            allow = 1;
                            eat = 0;
                            break;
                        }
                        else
                        {
                            //xpos = telo_x[1];
                            //ypos = telo_y[1];
                            //tpos = 0;
                            //telo[tpos][ty][tx] = snake[ypos][xpos];
                            //puts("\n");
                            puts("You are Dead!");
                            puts("\n");
                            printf("[y] - %d, [x] - %d\n", ypos, xpos+1);
                            return (0);
                        }
                    }
                    
                case 'w':
                    if (allow == 4 && snake_length > 0)
                        break;
                    if (checkdead(snake, xpos, ypos, direction, mfield, food, &eat) == 0)
                    {
                        
                        snake[ypos][xpos] = '.';
                        ypos = ypos - 1;
                        snake[ypos][xpos] = 'Q';
                        show_field(yfield, snake);
                        if (eat == 1)
                                printf("\nYOU ATE FOOD!!!");
                        allow = 2;
                        eat = 0;
                        break;
                    }
                    else
                    {
                        puts("\n");
                        puts("You are Dead!");
                        printf("[y] - %d, [x] - %d\n", ypos, xpos+1);
                        return (0);
                    }
                case 'd':
                    if (allow == 1 && snake_length > 0)
                        break;
                    if (checkdead(snake, xpos, ypos, direction, mfield, food, &eat) == 0)
                    {
                   

                        snake[ypos][xpos] = '.';
                        xpos = xpos + 1;
                        snake[ypos][xpos] = 'Q';
                        show_field(yfield, snake);
                        if (eat == 1)
                                printf("\nYOU ATE FOOD!!!");
                        allow = 3;
                        eat = 0;
                        break;
                    }
                    else
                    {
                        puts("\n");
                        puts("You are Dead!");
                        printf("[y] - %d, [x] - %d\n", ypos, xpos+1);
                        return (0);
                    }
                case 's':
                    if (allow == 2 && snake_length > 0)
                        break;
                    if (checkdead(snake, xpos, ypos, direction, mfield, food, &eat) == 0)
                    {
                       

                        snake[ypos][xpos] = '.';
                        ypos = ypos + 1;
                        snake[ypos][xpos] = 'Q';
                        show_field(yfield, snake);
                        if (eat == 1)
                                printf("\nYOU ATE FOOD!!!");
                        allow = 4;
                        eat = 0;
                        break;
                    }
                     else
                    {
                        puts("\n");
                        puts("You are Dead!");
                        printf("[y] - %d, [x] - %d\n", ypos, xpos+1);
                        return (0);
                    }
                case 'q':
                    return (0);
                    break;    
                default:        
                    break;
        
        }
    }

    
    return (0);
}