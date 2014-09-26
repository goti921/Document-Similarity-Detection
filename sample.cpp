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
    char s[111];
    double a, b;
}obj[101010];

bool cmp(Node a, Node b)
{
    return a.b>=b.b;
}

const char *p;
char a[10101];
double x, y, z;
int ps=0;

bool check(const char *p)
{
    char x[10101];
    int i;
    for(i=0;p[i];++i)
        x[i]=p[i];
    x[i]='\0';
    strlwr(x);
    if(strstr(x, obj[0].s) && strstr(x, obj[1].s) && strstr(x, obj[2].s))
        return true;
    return false;
}

int main()
{
    freopen("C:/Users/manu/Desktop/my stuff/study/all sem/sem 6/Data mining &warehousing/assignment/output.csv", "w", stdout);
    ifstream  data("C:/Users/manu/Desktop/my stuff/study/all sem/sem 6/Data mining &warehousing/assignment/example.csv");
    string line;
    getline(data, line);
    stringstream s(line);
    string c;
    getline(s, c, ',');
    p=c.c_str();
    printf("word,in documents,total\n");
    while(std::getline(data,line))
    {
        stringstream  s(line);
        while(std::getline(s,c,','))
        {
            p=c.
            c_str();
            int i;
            for(i=0;p[i]!=';';++i)
                a[i]=p[i];
            a[i]='\0';
            sscanf(&p[i+1], "%lf;%lf", &x, &y);
            obj[ps].a=x, obj[ps].b=y;
            strcpy(obj[ps].s, a);
            //printf("%s\n", obj[ps].s);
            ps++;
        }
    }
    sort(obj, obj+ps, cmp);
    for(int i=0;i<ps;++i)
        printf("%s,%lf,%lf\n", obj[i].s, obj[i].a, obj[i].b);
    strlwr(obj[0].s), strlwr(obj[1].s), strlwr(obj[2].s), strlwr(obj[3].s), strlwr(obj[4].s);
    freopen("C:/Users/manu/Desktop/my stuff/study/all sem/sem 6/Data mining &warehousing/assignment/sample.txt", "r", stdin);
    freopen("C:/Users/manu/Desktop/my stuff/study/all sem/sem 6/Data mining &warehousing/assignment/output.txt", "w", stdout);
    while(1)
    {
        gets(a);
        if(strlen(a)==0 || strcmp(a, "")==0)
            break;
        for(p=strtok(a, ".");p;p=strtok(NULL, "."))
        {
            if(check(p))
            {
                printf("%s\n", p);
                printf("\n");
            }
        }
    }
    return 0;
}
