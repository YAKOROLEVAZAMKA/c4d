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
#include "create_food.c"
#include "checkwin.c"

//#include "move.c"
//#include "malloc_telo.c"
//#include "malloc_snake.c"
//#include "allow_direction.c"
//#include "pressedbutton.c"
//#include "move.c"
//#include "get_field.c"
//#include "xpos_ini.c"
//#include "ypos_ini.c"



int count_field_all(char *field_name);
int count_field_x(char *field_name);
void create_snake(char **snake, int xfield, int yfield, int *xp, int *yp, char mfield);
int checkdead(char **snake, int xpos, int ypos, int direction, char mfield, char food, int *eat);
void create_food(char **snake, int xfield, int yfield, char mfield, char food);
void checkwin(int snake_length, int xfield, int yfield);


//void move(char ***snake, int *eat, int *xpos, int *ypos, int *telo_x, int *telo_y, char snake_head, char mfield, int *sn);
//int allow_direction(int direction, int snake_length);
//void malloc_snake(char **snake, char *field, int xfield, int yfield);
//void malloc_telo(int **telo_x, int **telo_y, int xfield, int yfield);
//int pressedbutton(void);
//void move(char **snake, int x, int y, int yfield);
//void get_field(char **snake, int xfield);
//int xpos_ini(int xfield);
//int ypos_ini(int yfield);

int main(int argc, char **argv)
{   
    char *field_name;

    if (argc != 2)
        field_name = "field.txt";
    if (argc == 2)
        field_name = argv[1];


    char mfield;
    char food;
    char snake_head;
    int allow;

    //int allow_move;

    mfield = '.';
    food = 'x';
    snake_head = 'Q';

    int xpos;
    int ypos;

    int xfield = 0;
    int yfield = 0;

    xfield = count_field_x(field_name);
    yfield = count_field_all(field_name)/xfield;
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


    create_snake(snake, xfield, yfield, &xpos, &ypos, mfield);

    //difftime(1,2);
    create_food(snake, xfield, yfield, mfield, food);
    //difftime(1,2);
    telo_x[0] = xpos;
    telo_y[0] = ypos;

    //telo_x[1] = 2;
    //telo_y[1] = 2;

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
                                    snake[telo_y[sn]][telo_x[sn]] = snake_head;
                                    snake[tempy][tempx] = mfield;
                                }
                                if (sn > 0)
                                {
                                     
                                    if (eat == 1)
                                    {
                                        tempx2 = telo_x[sn];
                                        tempy2 = telo_y[sn];
                                        telo_x[sn] = tempx;
                                        telo_y[sn] = tempy;
                                        snake[telo_y[sn]][telo_x[sn]] = 'o';
                                        tempx = tempx2;
                                        tempy = tempy2;
                                    }
                                    if (eat == 0)
                                    {
                                        
                                        tempx2 = telo_x[sn];
                                        tempy2 = telo_y[sn];
                                        telo_x[sn] = tempx;
                                        telo_y[sn] = tempy;
                                        snake[telo_y[sn]][telo_x[sn]] = 'o';
                                        tempx = tempx2;
                                        tempy = tempy2;
                                        snake[tempy][tempx] = mfield;
                                    }
                                    //move(&snake, &eat, &xpos, &ypos, telo_x, telo_y, snake_head, mfield, &sn);

                                }
                            }
                            
                            
                            
    
                            
                            allow = 1;
                            checkwin(snake_length, xfield, yfield);
                            if (eat == 1)
                                create_food(snake, xfield, yfield, mfield, food);
                            eat = 0;
                            show_field(yfield, snake);
                            break;
                        }
                        else
                        {
                            //puts("You are Dead!");
                            //puts("\n");
                            //printf("[y] - %d, [x] - %d\n", ypos, xpos+1);
                            printf("[Score] - [%d]", snake_length);
                            return (0);
                        }
                    }
                    
                case 'w':
                    if (allow == 4 && snake_length > 0)
                        break;
                    if (checkdead(snake, xpos, ypos, direction, mfield, food, &eat) == 0)
                    {
                        if (eat == 1)
                            snake_length++;
                            
                        sn = 0;

                        tempx = xpos;
                        tempy = ypos;
                       
                        ypos = ypos - 1;

                        for (sn = 0; sn <= snake_length; sn++)
                            {
                                if (sn == 0)
                                {
                                    telo_x[sn] = xpos;
                                    telo_y[sn] = ypos;
                                    snake[telo_y[sn]][telo_x[sn]] = snake_head;
                                    snake[tempy][tempx] = mfield;
                                }
                                if (sn > 0)
                                {
                                    if (eat == 1)
                                    {
                                        //printf("\nYOU ATE FOOD!!!");
                                        tempx2 = telo_x[sn];
                                        tempy2 = telo_y[sn];
                                        telo_x[sn] = tempx;
                                        telo_y[sn] = tempy;
                                        snake[telo_y[sn]][telo_x[sn]] = 'o';
                                        tempx = tempx2;
                                        tempy = tempy2;
                                    }
                                    if (eat == 0)
                                    {
                                        
                                        tempx2 = telo_x[sn];
                                        tempy2 = telo_y[sn];
                                        telo_x[sn] = tempx;
                                        telo_y[sn] = tempy;
                                        snake[telo_y[sn]][telo_x[sn]] = 'o';
                                        tempx = tempx2;
                                        tempy = tempy2;
                                        snake[tempy][tempx] = '.';
                                    }

                                }
                            }
        
                    
                            
                            
                        


                        allow = 2;
                        checkwin(snake_length, xfield, yfield);
                        if (eat == 1)
                                create_food(snake, xfield, yfield, mfield, food);
                        eat = 0;
                        show_field(yfield, snake);
                        break;
                    }
                    else
                    {
                        //puts("\n");
                        //puts("You are Dead!");
                        //printf("[y] - %d, [x] - %d\n", ypos, xpos+1);
                        printf("[Score] - [%d]", snake_length);
                        return (0);
                    }
                case 'd':
                    if (allow == 1 && snake_length > 0)
                        break;
                    if (checkdead(snake, xpos, ypos, direction, mfield, food, &eat) == 0)
                    {
                        if (eat == 1)
                            snake_length++;
                            
                        sn = 0;

                        tempx = xpos;
                        tempy = ypos;

                        xpos = xpos + 1;

                        for (sn = 0; sn <= snake_length; sn++)
                            {
                                if (sn == 0)
                                {
                                    telo_x[sn] = xpos;
                                    telo_y[sn] = ypos;
                                    snake[telo_y[sn]][telo_x[sn]] = snake_head;
                                    snake[tempy][tempx] = mfield;
                                }
                                if (sn > 0)
                                {
                                    if (eat == 1)
                                    {
                                        //printf("\nYOU ATE FOOD!!!");
                                        tempx2 = telo_x[sn];
                                        tempy2 = telo_y[sn];
                                        telo_x[sn] = tempx;
                                        telo_y[sn] = tempy;
                                        snake[telo_y[sn]][telo_x[sn]] = 'o';
                                        tempx = tempx2;
                                        tempy = tempy2;
                                    }
                                    if (eat == 0)
                                    {
                                        
                                        tempx2 = telo_x[sn];
                                        tempy2 = telo_y[sn];
                                        telo_x[sn] = tempx;
                                        telo_y[sn] = tempy;
                                        snake[telo_y[sn]][telo_x[sn]] = 'o';
                                        tempx = tempx2;
                                        tempy = tempy2;
                                        snake[tempy][tempx] = mfield;
                                    }

                                }
                            }
        
                    
                            
                            
                        

                        allow = 3;
                        checkwin(snake_length, xfield, yfield);
                        if (eat == 1)
                                create_food(snake, xfield, yfield, mfield, food);
                        eat = 0;
                        show_field(yfield, snake);
                        break;
                    }
                    else
                    {
                        //puts("\n");
                        //puts("You are Dead!");
                        //printf("[y] - %d, [x] - %d\n", ypos, xpos+1);
                        printf("[Score] - [%d]", snake_length);
                        return (0);
                    }
                case 's':
                    if (allow == 2 && snake_length > 0)
                        break;
                    if (checkdead(snake, xpos, ypos, direction, mfield, food, &eat) == 0)
                    {
                       if (eat == 1)
                            snake_length++;
                            
                        sn = 0;

                        tempx = xpos;
                        tempy = ypos;

                        
                        ypos = ypos + 1;

                        for (sn = 0; sn <= snake_length; sn++)
                            {
                                if (sn == 0)
                                {
                                    telo_x[sn] = xpos;
                                    telo_y[sn] = ypos;
                                    snake[telo_y[sn]][telo_x[sn]] = snake_head;
                                    snake[tempy][tempx] = mfield;
                                }
                                if (sn > 0)
                                {
                                    if (eat == 1)
                                    {
                                        //printf("\nYOU ATE FOOD!!!");
                                        tempx2 = telo_x[sn];
                                        tempy2 = telo_y[sn];
                                        telo_x[sn] = tempx;
                                        telo_y[sn] = tempy;
                                        snake[telo_y[sn]][telo_x[sn]] = 'o';
                                        tempx = tempx2;
                                        tempy = tempy2;
                                    }
                                    if (eat == 0)
                                    {
                                        
                                        tempx2 = telo_x[sn];
                                        tempy2 = telo_y[sn];
                                        telo_x[sn] = tempx;
                                        telo_y[sn] = tempy;
                                        snake[telo_y[sn]][telo_x[sn]] = 'o';
                                        tempx = tempx2;
                                        tempy = tempy2;
                                        snake[tempy][tempx] = mfield;
                                    }

                                }
                            }
        
                    
                            
                            
                        

                        allow = 4;
                        checkwin(snake_length, xfield, yfield);
                        if (eat == 1)
                                create_food(snake, xfield, yfield, mfield, food);
                        eat = 0;
                        show_field(yfield, snake);
                        break;
                    }
                     else
                    {
                        //puts("\n");
                        //puts("You are Dead!");
                        //printf("[y] - %d, [x] - %d\n", ypos, xpos+1);
                        printf("[Score] - [%d]", snake_length);
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