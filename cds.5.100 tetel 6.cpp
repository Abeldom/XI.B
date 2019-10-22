#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    string x;
    getline (cin,x);
    size_t y=x.find(" ");
    transform( x.begin(), x.begin()+1, x.begin(), ::toupper);
    while( y!=string::npos){
        transform( x.begin()+y+1, x.begin()+y+2, x.begin()+y+1, ::toupper);
        y=x.find(" ",y+1);

    }
    cout<<x;
    return 0;
}



///  Se consideră un text cu maximum 255 de caractere în care cuvintele sunt separate prin
/// unul sau mai multe spaţii. Primul caracter din textul citit este o literă, iar cuvintele sunt
/// formate numai din litere mici ale alfabetului englez. Scrieţi un program C/C++ care citeşte
/// de la tastatură textul şi îl transformă, înlocuind prima literă a fiecărui cuvânt cu litera mare
/// corespunzătoare, restul caracterelor rămânând nemodificate. Textul astfel transformat va fi
/// afişat pe ecran.
/// Exemplu: dacă de la tastatură se introduce textul: mare frig rosu
/// se va afişa pe ecran: Mare Frig Rosu
