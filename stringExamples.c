#include <stdio.h>
#include <stdlib.h>

void pangrammi(char cumle[50]){

    char sayac='a';
    int bulunanHarf=0;

    for(int i=0;i<26;i++){
        for(int j=0;j<strlen(cumle);j++){
            if(cumle[j]==sayac){
                bulunanHarf++;
                break;//bu harfi buldum bunu daha aramama gerek yok
            }
        }
        sayac++;
    }
    if(bulunanHarf==26)
        printf("%s pangram!!\n",cumle);
    else
        printf("%s pangram degil!!\n",cumle);

}
void lipogrammi(char cumle[50],char istenmeyen){

    int r=-1;

    for(int i=0;i<strlen(cumle);i++){
            if(cumle[i]==istenmeyen){
                r=0;
                break;
            }
    }
    if(r==-1)
        printf("\n%s lipogram\n",cumle);
    else
        printf("\n%s lipogram degil\n",cumle);
}

void anagrammi(int boyut1,int boyut2,char cumle1[][boyut1],char cumle2[][boyut2]){

    char siralicumle1[10],siralicumle2[10],temp1[10],temp2[10];
    char ch='a';
    char enkucuk='{';
    int enkucukindis;

    for(int k=0;k<13;k++){
        for(int l=0;l<14;l++){
           strcpy(temp1,cumle1[k]);
            strcpy(temp2,cumle2[l]);

            for(int i=0;i<strlen(temp1);i++){
                enkucuk='{';
                for(int j=0;j<strlen(temp1);j++){
                    if(temp1[j]<enkucuk){
                        enkucuk=temp1[j];
                        enkucukindis=j;
                    }
                }
                siralicumle1[i]=enkucuk;
                temp1[enkucukindis]='{';
                siralicumle1[strlen(temp2)-1]='\0';
            }

            for(int i=0;i<strlen(temp2);i++){
                enkucuk='{';
                for(int j=0;j<strlen(temp2);j++){
                    if(temp2[j]<enkucuk){
                        enkucuk=temp2[j];
                        enkucukindis=j;
                    }
                }
                siralicumle2[i]=enkucuk;
                temp2[enkucukindis]='{';
            }
            siralicumle2[strlen(temp2)-1]='\0';

            if(!strcmp(siralicumle1,siralicumle2))
                printf("%s ile %s anagram\n",cumle1[k],cumle2[l]);
        }
    }
}

int main(){
    char cumle1[13][10] = { "harbi", "bitik", "ferah", "define", "alman", "yaban", "sanal", "okutman",
                            "enerjik", "balistik", "toparlak", "algoritma", "karbonlu" };

    char cumle2[14][10] = { "efendi", "portakal", "jenerik", "komutan", "bitki", "aslan", "ihbar",
                            "baronluk","bayan", "logaritma", "refah", "basitlik", "anlam", "sabitlik" };
    anagrammi(10,10,cumle1,cumle2);
    lipogrammi(cumle1[1],'a');
    pangrammi(cumle2[6]);

    return 0;
}
