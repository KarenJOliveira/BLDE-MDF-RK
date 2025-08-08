#include "stdlib.h"
#define _USE_MATH_DEFINES
#include <math.h>

#include <cfloat>
#include <fstream>
#include <map>
#include <set>
#include <utility>
#include <vector>

#define EPS 0.0

void calculaFuncao(double *ind, int d, int nivel, double *leader, double *follower, int funcao, double &fitness, double &restriction, double **cost = nullptr, std::vector<int> tollEdges = {}, int maxNodes = 0, std::tuple<int, int, double> commodity = {0, 0, 0});
int getDimensao(int funcao, int nivel, int maxNodes = 0, int maxTollEdges = 0, int maxCommodities = 0);
int getTipo(int funcao, int nivel);
double getLower(int nivel, int funcao, int indice);
double getUpper(int nivel, int funcao, int indice);

int getNEval(int nivel);

std::vector<int> ordenaSolucao(double *solucao, int maxNodes, int startNode);
std::vector<int> retornaAdjacentes(int noAtual, double **cost, int maxNodes, std::set<int> visitados);
std::vector<int> retornaCaminho(int startNode, int endNode, double **cost, int maxNodes, std::vector<int> list, double &rest);
