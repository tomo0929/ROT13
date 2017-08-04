#include<stdio.h>
int main(void){
  while(1){
    char a[256];
    a[0]=0;
    printf("”CˆÓ‚Ì‰p”•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    scanf("%s",a);
    for(int i=0;a[i]!=NULL;i++){
      if(a[i]>='a' && a[i]<='z') {
        a[i] = (a[i] - 'a' +13) %26 + 'a';
      }
    else if(a[i]>='A' && a[i]<='Z'){
      a[i] = (a[i] - 'A' +13) %26 + 'A';
    }
    printf("%c",a[i]);
  }
}
}
