#include <iostream>
#include <string>

using namespace std;

int main() {
/*#14

    string text;
    std::getline(std::cin,text);
    if ((text[0]=='a') && (text[1]=='b') && (text[2]=='c'))
        text.replace(0,3,"www");
    else
        text.append("zzz");
    std::cout«text;
*/

/*#10

    string text;
    std::getline(std::cin,text);
    if (text[0]==' '){
        for (int i=0;i<text.length();i++)
            if ((text[i]==' ') && (text[i+1]!=' '))
                text.erase(i+1,1);
            }
            else{
                text.erase(0,1);
                for (int i=0;i<text.length();i++)
                    if ((text[i]!=' ') && (text[i-1]==' '))
                        text.erase(i,1);
            }
    std::cout«text

*/

/*#1

    int kolvo;
    string text;
    std::getline(std::cin,text);
    if ((text[0]!='u') && (text[1]!='m')){
        kolvo=0;
        for (int i=0;i<text.length();i++)
        if ((text[i+1]=='m') && (text[i]=='u') && (text[i-1]!=' '))
            kolvo+=1;
    }
    else{
        kolvo=-1;
        for (int i=0;i<text.length();i++)
            if ((text[i+1]=='m') && (text[i]=='u') && (text[i-1]!=' '))
                kolvo+=1;
    }
    std::cout«kolvo;

*/

/*#19

    string text;
    std::getline(std::cin,text);
    for(int i=0;i<text.length();i++)
        if (text[i]=='a')
            text.replace(i,1,"ab");
    std::cout«text;

*/

    return 0;
}
