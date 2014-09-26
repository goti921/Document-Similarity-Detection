#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <fstream>

 using namespace std;

 struct Node
 {
     double a, b, c;
 }obj[101010];

 double x, y, z;
 int ps=0;
 char a[111], b[111], c[111];
 const char *p;

bool cmp(Node a, Node b)
{
    return a.c>=b.c;
}

 int main()
 {
    freopen("C:/Users/manu/Desktop/my stuff/study/all sem/sem 6/Data mining &warehousing/assignment/similarity.csv", "w", stdout);
    ifstream  data("C:/Users/manu/Desktop/my stuff/study/all sem/sem 6/Data mining &warehousing/assignment/similar.csv");
    string line;
    getline(data, line);
    stringstream s(line);
    string c;
    getline(s, c, ',');
    p=c.c_str();
    printf("FIRST_ID,SECOND_ID,SIMILARITY\n");
    while(std::getline(data,line))
    {
        stringstream  s(line);
        string c;
        while(std::getline(s,c,','))
        {
            p=c.c_str();
            sscanf(p, "%lf;%lf;%lf", &x, &y, &z);
            obj[ps].a=x, obj[ps].b=y, obj[ps].c=z;
            ps++;
        }
    }
    sort(obj, obj+ps, cmp);
    for(int i=0;i<ps;++i)
        printf("%lf,%lf,%.15lf\n", obj[i].a, obj[i].b, obj[i].c);
    return 0;
 }
