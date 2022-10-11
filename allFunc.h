#pragma once

#include <iostream>
#include <ctime>
#include <unistd.h>
#include <cstdlib>
#include <vector>

using namespace std;

void show(vector<int> arr);
void randomGuess(vector<int> &computerNum);
void makeNewGuess(int bulls, int cows, vector<int> &computerNum, vector<vector<int>> &arr, int size);
void allVariation(vector<vector<int>> &arr, int length);
int compareMasCows(vector<int> computerMas, vector<int> &arrMas);
int compareMasBulls(vector<int> computerMas, vector<int> &arrMas);
bool isNull(vector<int> arr);
int gameLoop();
int getSizeOfCombination();
int getCountOfAllVariations(int length);
bool isRetry(vector<int> arr);
