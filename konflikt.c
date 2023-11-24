#include <stdio.h>

int main(void) {

    char  t0[3][5] = {0};
    char  t1[3][5] = {{'A','l','a'},{'m','a'},{'k','o','t','a'}};
    char  t2[3][5] = {{"Ala"},{"ma"},{"kota"}};
//    char  t2[3][5] = {"Ala","ma","kota"};
    char *t3[3]    = {"Ala","ma","kota"};

// Wstepne wypelnienie tablicy t0:
    char *p;
    for(p=(char*)t0; p<(char*)t0+15; ++p) *p = '_';
// Wpisanie slow do tablicy t0:
    t0[0][0]='A'; t0[0][1]='l'; t0[0][2]='a'; 
    t0[1][0]='m'; t0[1][1]='a';  
    t0[2][0]='k'; t0[2][1]='o'; t0[2][2]='t'; t0[2][3]='a'; 
    
    printf("Ile bajtow zajmuja tablice: %d %d %d %d\n",sizeof(t0),sizeof(t1),sizeof(t2),sizeof(t3));
    #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

char *read_string(void){
    char str[2];
    char *k = malloc(1);
    for (int i =1; i>0;i++){
        fgets(str,2,stdin);
        if (!strcmp(str, " ")||!strcmp(str, "\n")){
            if(!(!strcmp(k, " ")||!strcmp(k, "\n")||!strcmp(k, ""))){
            return k;
            }else {
            continue;
            }  
        }
        k = realloc(k,1+i);
        strcat(k, str);
    }
    return k;
}

int main(void) {
    int n;
    scanf("%d", &n);

    char *adresy[n];
    for (int i = 0; i<n; i++){
        if (!i) adresy[0]= read_string();
        else{
            char *buf = read_string();
            int k = i;
            for (int j = 0; j<i;j++){
                if (*buf<*adresy[j]){
                    for(int l =i-1 ; l>=j;l--){
                        adresy[l+1]=adresy[l];
                    }
                    k = j;
                    break;
                }
            }
            adresy[k]=buf;
        }
    }

    for (int i = 0; i<n; i++){
        printf("%s\n",adresy[i]);
    }

    for (int i = 0; i<n; i++){
        free(adresy[i]);
   }
    return 0;
}
    char *p_ma = "ma";
    printf("Adresy pod ktorymi jest zpisane slowo \"ma\": \n%p t0,\n%p t1,\n%p t2,\n%p t3,\n%p literal\n", t0[1], t1[1], t2[1], t3[1], p_ma);
    return 0;
}
