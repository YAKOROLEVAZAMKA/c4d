//
        difftime (1,3);
        tempx = xpos;
        tempy = ypos;

        if (allow == 1 && snake_length > 0)
            xpos = xpos - 1;
        if (allow == 2 && snake_length > 0)
            ypos = ypos - 1;
        if (allow == 3 && snake_length > 0)
            xpos = xpos + 1;
        if (allow == 4 && snake_length > 0)
            ypos = ypos + 1;

        if (checkdead(snake, xpos, ypos, direction, mfield, food, &eat) == 0)
        {
                            
            if (eat == 1)
                snake_length++;               
            sn = 0;
            tempx = xpos;
            tempy = ypos;
                                                        
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
            
            checkwin(snake_length, xfield, yfield);
            if (eat == 1)
                create_food(snake, xfield, yfield, mfield, food);
            eat = 0;
            show_field(yfield, snake);
        }

        //