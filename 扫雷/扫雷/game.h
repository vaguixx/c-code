#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define manyboom 80
void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
void Displayboard(char board[ROWS][COLS], int row, int col);
void putboom(char board[ROWS][COLS], int row, int col);
void findboom(char mine[ROWS][COLS], char show[ROWS][COLS], int row,int col);
int get_boom_count(char mine[ROWS][COLS],int x,int y);