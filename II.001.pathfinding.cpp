#include <iostream>
#include <fstream>

using namespace std;
int szaml = 0;
int path(int map[][1000], int n, int v[][1000], int i, int j, int hossz, int min)
{
  if (i == n - 1 && j == n - 1)
  {
    if (++hossz < min)
    {
      min = hossz;
    }
    szaml++;
    for (int k = 0; k < n; k++)
    {
      for (int l = 0; l < n; l++)
      {
        cout << v[k][l] << " ";
      }
      cout << endl;
    }

    return min;
  }
  else
  {
    // jobbra
    int x;
    if (i + 1 < n)
    {
      if (map[i + 1][j] == 1 && v[i + 1][j] == 0)
      {
        if (hossz + 1 <= min)
        {
          v[i + 1][j] = 1;
          x = path(map, n, v, i + 1, j, hossz + 1, min);
          if (x < min)
          {
            min = x;
          }
          v[i + 1][j] = 0;
        }
      }
    }

    //balra
    if (i - 1 >= 0)
    {
      if (map[i - 1][j] == 1 && v[i - 1][j] == 0)
      {
        if (hossz + 1 <= min)
        {
          v[i - 1][j] = 1;
          x = path(map, n, v, i - 1, j, hossz + 1, min);
          if (x < min)
          {
            min = x;
          }
          v[i - 1][j] = 0;
        }
      }
    }

    // fel
    if (j - 1 >= 0)
    {
      if (map[i][j - 1] == 1 && v[i][j - 1] == 0)
      {
        if (hossz + 1 <= min)
        {
          v[i][j - 1] = 1;
          x = path(map, n, v, i, j - 1, hossz + 1, min);
          if (x < min)
          {
            min = x;
          }
          v[i][j - 1] = 0;
        }
      }
    }
    //le
    if (j + 1 < n)
    {
      if (map[i][j + 1] == 1 && v[i][j + 1] == 0)
      {
        if (hossz + 1 <= min)
        {
          v[i][j + 1] = 1;
          x = path(map, n, v, i, j + 1, hossz + 1, min);
          if (x < min)
          {
            min = x;
          }
          v[i][j + 1] = 0;
        }
      }
    }
  }
  return min;
}

int main()
{

  ifstream in("input.txt");
  int n;

  in >> n;

  int map[n][1000];
  int v[n][1000];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      in >> map[i][j];
      v[i][j] = 0;
    }
  }
  v[0][0] = 1;
  int min = n * n;

  min = path(map, n, v, 0, 0, 0, min);
  cout << min << " " << szaml;
}