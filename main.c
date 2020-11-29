#include <stdio.h>
void KSH(int a){
    printf("과제가 하고 싶다면 당근을 흔들어 주세요\n"); //과제로 변경
    int i;
	for (i = 0; i < a; i++)
    {
        printf("당근");
    }
    
}

void JSJ() {
	char hw[2][10] = {"시프실", "남데베"};
	int i;
	for(i = 0; i < 2; i++)
		printf("%s 과제 말고 과자 주세요\n", hw[i]);
}


int main(){
    printf("Hello OSS!\n");
    printf("Hello Team 9!\n");
    //아무 코드나 추가해서 commit 해주세요..
    
    //김상훈 commit, KSH 함수 생성
    //길은지 printf Team 9 추가
    //정석준 JSJ 함수 생성
    //서한결 return 0 추가
    int helpme = 3;
    KSH(helpme);
    JSJ();
    return 0;
}
