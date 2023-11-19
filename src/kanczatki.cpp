#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("color F4");
    string vid1 = "асабовы";
    string vid2 = "неасабовы";
    string zcv = "жчшцр"; /// зацвярдзелыя
    string gkh = "гкх"; /// г, к, х
    string glm = "яёюіейь"; /// галосныя йотаваныя + й, ь
    string glt = "аоуыэ"; /// звычайныя галосныя
    string zchn = "бвдзлмнпстфў"; /// усе зычныя (акрамя тых, што ўжо былі выпісаны)
    string sl, vid;
    for (int i = 0; i < 10000; i++)
    {
        cout << "Увядзіце назоўнік - ";
        getline(cin, sl);
        int dl = sl.size() - 1; /// апошняя літара ў слове
        cout << "Увядзіце, з'яўляецца назоўнік асабовым або неасабовым (калі ласка, з маленькай літары) - ";
        getline(cin, vid);
        int tva = 0; ///цвёрдая аснова
        int mka = 0; /// мяккая аснова
        if (glm.find(sl[dl]) != string::npos)
        {
            sl.erase(dl, 1);
            dl--;
            if (gkh.find(sl[dl]) == string::npos)
                mka++;
        }
        else
        {
            if (glt.find(sl[dl]) != string::npos)
            {
                sl.erase(dl, 1);
                dl--;
                if (zchn.find(sl[dl]) != string::npos)
                    tva++;
            }
            else
            {
                if (zchn.find(sl[dl]) != string::npos)
                    tva++;
            }
        }
        cout << "Слова у месным склоне: ";
        if (zcv.find(sl[dl]) != string::npos && tva == 0 && mka == 0)
        {
            if (vid == vid1)
                cout << sl << "у" << endl;
            if (vid == vid2)
                cout << sl << "ы" << endl;
        }
        else
        {
            if (gkh.find(sl[dl]) != string::npos && tva == 0 && mka == 0)
            {
                if (vid == vid1)
                    cout << sl << "у" << endl;
                if (vid == vid2)
                    cout << "Ёсць розныя варыяцыі, якія залежаць ад сэнсу (і не толькі), таму лепей паглядзець у slounik.org" << endl;
            }
            else
            {
                if (mka != 0)
                {
                    if (vid == vid1)
                        cout << sl << "ю" << endl;
                    if (vid == vid2)
                        cout << sl << "і" << endl;
                }
                else
                {
                    if (vid == vid1 || vid == vid2)
                    {
                        if (tva != 0)
                        {
                            if (sl[dl] == 'т')
                            {
                                sl.erase(dl, 1);
                                cout << sl << "це" << endl;
                            }
                            else
                            {
                                if (sl[dl] == 'ў')
                                {
                                    sl.erase(dl, 1);
                                    cout << sl << "ве" << endl;
                                }
                                else
                                {
                                    if (sl[dl] == 'д')
                                        cout << sl << "зе" << endl;
                                    else
                                        cout << sl << "е" << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << endl;
        if (vid != vid1 && vid != vid2)
        {
            cout << "Калі слова не з'явілася, праверце, ці няма памылак/апісак у словах, якія Вы ўводзілі" << endl << endl;
        }
        sl.erase();
        vid.erase();
        cout << "Увядзіце наступнае слова або закрыйце праграму крыжыкам/escape" << endl << endl;
    }
    return 0;
}
