#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col);
void Display(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);
int isfull(char board[ROW][COL], int row, int col);