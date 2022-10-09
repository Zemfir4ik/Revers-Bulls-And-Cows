#pragma once

#include <iostream>
#include <ctime>
#include <unistd.h>
#include <cstdlib>

using namespace std;

void show(int arr[4]);
void randomGuess(int *computerNum);
void makeNewGuess(int bulls, int cows, int *computerNum, int arr[][4], int SIZE);
void allVariation(int arr[5040][4]);
int compareMasCows(int computerMas[4], int arrMas[4]);
int compareMasBulls(int computerMas[4], int arrMas[4]);
bool isNull(int arr[4]);
int gameLoop();
