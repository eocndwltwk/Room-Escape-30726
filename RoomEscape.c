/*
개발자 : 신가희, 최지은, 한세희
개발일 : 2021.09.08
문의 : hshgml@naver.com
*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

#define T 1
#define F 0

void start();
void place();
void house();
void bathroom();

void sink();
void bed();
void closet();
void desk();
void dool();
void toilet();
void bathtub();
void washstand();
void cabinet();
void door(); 

void computer_PW();
void door_PW();

int Find_BathroomKey = F;
int Bare_doolarm = F;
int Bare_doolleg = F;
int Find_ToiletKey = F;
int Bare_doolbody = F;
int Bare_doolhead = F;

int closet_count = 0;
int pw_count = 0;

void WaitForSeconds(float _seconds) {
	Sleep(_seconds * 1000);
} 

int main() {
	int place;
	start(); 
	int exit=1;
	while(exit) {
		printf("1) 오두막\n");
		printf("2) 화장실\n");
		printf("이동할 장소를 선택해 주세요: ");
		scanf("%d", &place);
		printf("\n");
		
		switch(place) {
			case 1:
				house();
				break;
			case 2:
				bathroom();
				break;
			default:
				printf("다시 입력해 주세요.\n\n");
				break;
		}
	}
}

void start() {
	system("cls");
	printf("으으.. 머리야..\n");
	WaitForSeconds(1.5f);
	printf("여긴 어디지..?\n");
	WaitForSeconds(1.5f);
	printf("오두막인가?\n");
	WaitForSeconds(1.5f);
	printf("일단 나가자..\n\n");
	WaitForSeconds(2.0f);
	printf("(덜컹덜컹)\n");
	WaitForSeconds(1.5f);
	printf("뭐야 문이 안 열리잖아?!\n");
	WaitForSeconds(1.5f);
	printf("문을 열 수 있는 걸 찾아야겠어.\n\n");
	WaitForSeconds(1.5f);
	system("pause");
	printf("\n");
}

void place() {
	int place_choice;

	printf("1) 오두막\n");
	printf("2) 화장실\n");
	printf("이동할 장소를 선택해 주세요: ");
	scanf("%d", &place_choice);
	printf("\n");

	switch(place_choice) {
		case 1:
			house();
			break;
		case 2:
			bathroom();
			break;
		default:
			printf("다시 입력해 주세요.\n\n"); 
			system("pause");
	}
}

void house() {
	int house_choice;
	
	system("cls");
	printf("[ 오두막 ]\n\n");
	printf("1) 싱크대\n");
	printf("2) 침대\n");
	printf("3) 옷장\n");
	printf("4) 책상\n");
	printf("5) 인형\n");
	printf("6) 출입문\n"); 
	printf("조사할 물건을 선택해 주세요: ");
	scanf("%d", &house_choice);
	printf("\n");
	
	switch(house_choice) {
		case 1:
			if(Find_BathroomKey) {
				printf("더 이상 냄새가 나지 않는다.\n\n");
				system("pause");
			}
			else {
				sink();
			}
			break;
		case 2:
			bed();
			break;
		case 3:
			closet();
			break;
		case 4:
			desk();
			break;
		case 5:
			dool();
			break;
		case 6:
			door();
			break; 
		default:
			printf("다시 입력해 주세요.\n\n");
			system("pause");
	}
}

void sink() {
	int sink_choice, YvsN;
	
	system("cls");
	printf("[ 오두막 ] - [ 싱크대 ]\n\n");
	printf("배수구에 음식물이 쌓여 있다.\n\n");
	WaitForSeconds(1.5f);
	printf("1) 물을 튼다.\n");
	printf("0) 다른 것을 조사한다.\n");
	printf("작업할 것을 선택해 주세요: ");
	scanf("%d", &sink_choice);
	printf("\n");
	
	switch(sink_choice) {
		case 1:
			printf("물이 내려가지 않는다.\n");
			WaitForSeconds(1.5f);
			printf("좀 치울까? 냄새도 심한데..\n\n");
			WaitForSeconds(1.5f);
			printf("1) 치운다.\n");
			printf("2) 안 치운다.\n");
			scanf("%d", &YvsN);
			printf("\n");
			
			if(YvsN == 1) {
				printf("[ 화장실 열쇠 획득 ]\n\n");
				Find_BathroomKey = T;
				return;
			}  
			else {
				return;
			}
			break;
		case 0: 
			return;
		default:
			printf("다시 입력해 주세요.\n\n");
			system("pause");
	}
}

void bed() {
	int bed_choice;
	
	system("cls");
	printf("[ 오두막 ] - [ 침대 ]\n\n");
	printf("침대가 폭신한 걸 보니 좋은 매트리스 같다.\n\n");
	WaitForSeconds(1.5f);
	printf("1) 매트리스를 들어본다.\n");
	printf("2) 배게의 지퍼를 열어본다.\n");
	printf("3) 침대 밑을 본다.\n");
	printf("0) 다른 것을 조사한다.\n");
	printf("작업할 것을 선택해 주세요: ");
	scanf("%d", &bed_choice);
	printf("\n");
	
	switch(bed_choice) {
		case 1:
			printf("[ 찢어진 메모지 발견 ]\n");
			WaitForSeconds(1.5f);
			printf("메모지에 '2020.10.25'라고 적혀있다.\n\n");
			break;
		case 2:
			printf("[ 출입문 비밀번호 획득 (0) ]\n\n");
			break;
		case 3:
			printf("먼지가 너무 많다. 청소를 언제 한 거야..\n\n");
			break;
		case 0:
			return;
		default:
			printf("다시 입력해 주세요.\n\n");
			system("pause");
	}
}

void closet() {
	int closet_choice;
	
	system("cls");
	printf("[ 오두막 ] - [ 옷장 ]\n\n");
	printf("옷이 가득 쌓여있다.\n\n");
	WaitForSeconds(1.5f);
	printf("1) 옷을 정리한다.\n");
	printf("0) 다른 것을 조사한다.\n");
	printf("작업할 것을 선택해 주세요: ");
	scanf("%d", &closet_choice);
	printf("\n");
	
	switch(closet_choice) {
		case 1:
		closet_count += 1;
			if(closet_count >= 5) {
				printf("이제야 좀 사람 사는 곳 같다.\n");
				WaitForSeconds(1.5f);
				printf("[ 출입문 비밀번호 획득 (1) ]\n\n");
			}
			else {
				printf("아직도 지저분하다.\n\n");
			}
			break;
		case 0:
			return;
		default:
			printf("다시 입력해 주세요.\n\n");
			system("pause");
	}
}

void desk() { 
	int desk_choice, PW_choice;

	system("cls");
	printf("[ 오두막 ] - [ 책상 ]\n\n");
	printf("책상 위에 컴퓨터와 사진이 있다.\n\n");
	WaitForSeconds(1.5f);
	printf("1) 컴퓨터를 켠다.\n");
	printf("2) 사진을 본다.\n");
	printf("0) 다른 것을 조사한다.\n");
	printf("작업할 것을 선택해 주세요: ");
	scanf("%d", &desk_choice); 
	printf("\n");
	
	switch(desk_choice) {
		case 1:
			printf("패스워드가 걸려있고, 화면에 '초성'이라 적혀있다.\n\n");
			WaitForSeconds(1.5f);
			printf("1) 패스워드를 입력한다.\n");
			printf("2) 패스워드를 입력하지 않는다.\n");
			scanf("%d", &PW_choice);
			printf("\n");
			
			if(PW_choice == 1) 
				computer_PW();
			else
				return;
			break;
		case 2:
			printf("사진 뒤에 'PC: 신가희한세희'라고 적혀있다.\n");
			WaitForSeconds(1.5f);
			printf("혹시 이게 컴퓨터의 패스워드인가?\n\n");
			break;
		case 0:
			return;
		default:
			printf("다시 입력해 주세요.\n\n");
			system("pause");
	}
}

void dool() {
	int dool_choice;
	
	system("cls");
	printf("[ 오두막 ] - [ 인형 ]\n\n");
	printf("관절 인형이다.\n\n");
	WaitForSeconds(1.5f);
	printf("1) 인형의 머리를 분리한다.\n");
	printf("2) 인형의 몸통을 분리한다.\n");
	printf("3) 인형의 팔을 분리한다.\n");
	printf("4) 인형의 다리를 분리한다.\n");
	printf("0) 다른 것을 조사한다.\n");
	printf("작업할 것을 선택해주세요: ");
	scanf("%d", &dool_choice);
	printf("\n");
	
	switch(dool_choice) {
		case 1:
			printf("[ 출입문 비밀번호 획득 (1) ]\n\n");
			Bare_doolhead=T;
			break;
		case 2:
			printf("[ 변기 열쇠 획득 ]\n\n");
			Find_ToiletKey = T;
			Bare_doolbody=T;
			break;
		case 3:
			printf("아무것도 없다.\n\n");
			Bare_doolarm = T;
			break; 
		case 4:
			printf("아무것도 없다.\n\n");
			Bare_doolleg= T;
			break; 
		case 0:
			return;
		default:
			printf("다시 입력해 주세요.\n\n");
			system("pause");
	}
}

void door() {
	int door_choice;
	
	printf("문이 잠겨있다.\n");
	WaitForSeconds(1.5f);
	printf("암호를 입력해야 한다.\n");
	WaitForSeconds(1.5f);
	printf("잠깐 메모지에 무언가 적혀있다.\n\n");
	WaitForSeconds(1.5f);
	printf("인형 훼손은 최소한으로 해야 하며, 암호를 틀리면 위험해짐.\n");
	WaitForSeconds(1.5f);
	printf("1) 비밀번호를 입력한다.\n");
	printf("2) 비밀번호를 입력하지 않는다.\n");
	printf("작업할 것을 선택해주세요: ");
	scanf("%d", &door_choice);
	printf("\n");
	
	switch(door_choice) {
		case 1:
			door_PW();
			break;
		case 2:
			return;
		default:
			printf("다시 입력해 주세요.\n\n");
			system("pause");
	}
}

void bathroom() {
	int bathroom_choice;
	
	system("cls");
	if(Find_BathroomKey == 1) {
		printf("화장실 문이 열렸다.\n\n");
		WaitForSeconds(1.5f);
		printf("1) 변기\n");
		printf("2) 세면대\n");
		printf("3) 욕조\n");
		printf("4) 수납장\n");
		printf("조사할 물건을 선택해 주세요: ");
		scanf("%d", &bathroom_choice);
		printf("\n");
		
		switch(bathroom_choice) {
			case 1:
				if(Find_ToiletKey){
				toilet(); }
				else
				printf("자물쇠가 걸려있다.\n\n");
				break;
			case 2:
				washstand();
				break;
			case 3:
				bathtub();
				break;
			case 4:
				cabinet();
				break;
			default:
				return;
		}
	}
	else {
		printf("자물쇠가 걸려있다.\n");
		printf("열쇠부터 찾아야겠다.\n\n");
		return;
	}
}

void toilet() {
	int toilet_choice;
	
	system("cls");
	printf("[ 화장실 ] - [ 변기 ]\n\n");
	WaitForSeconds(1.5f);
	printf("1) 화장실을 사용한다.\n");
	printf("2) 변기를 살펴본다.\n");
	printf("3) 변기 수조 뚜껑을 연다.\n");
	printf("0) 다른 것을 조사한다.\n");
	printf("작업할 것을 선택해 주세요: ");
	scanf("%d", &toilet_choice);
	printf("\n");
	
	switch(toilet_choice) {
		case 1:
			printf("속이 비어 상쾌하다\n\n");
			break;
		case 2:
			printf("더럽고 냄새가 난다.\n\n");
			break;
		case 3:
			printf("[ 출입문 비밀번호 획득 (2) ]\n\n");
			break;
		case 0:
			return;
		default:
			printf("다시 입력해 주세요.\n\n");
			system("pause");
	}
}

void washstand() {
	int washstand_choice;
	
	system("cls");
	printf("[ 화장실 ] - [ 세면대 ]\n\n");
	printf("세면대에 머리카락이 있어 물이 안 내려간다.\n\n");
	WaitForSeconds(1.5f);
	printf("1) 머리카락을 제거한다.\n");
	printf("2) 배수관을 조사한다.\n");
	printf("0) 다른 것을 조사한다.\n");
	printf("작업할 것을 선택해 주세요: ");
	scanf("%d", &washstand_choice);
	printf("\n");
	
	switch(washstand_choice) {
		case 1:
			printf("그러나 여전히 물이 안 내려간다. 배수관에 뭐가 있나?\n\n");
			WaitForSeconds(1.5f);
			break;
		case 2:
			printf("[ 찢어진 메모지 발견 ]\n");
			WaitForSeconds(1.5f);
			printf("메모지에 'D-day 37'이라고 적혀있다.\n\n");
			break;
		case 0:
			return;
		default:
			printf("다시 입력해 주세요.\n\n");
			system("pause");
	}
}
		
void bathtub() {
	int bathtub_choice;
	
	system("cls");
	printf("[ 화장실 ] - [ 욕조 ]\n\n");
	printf("물이 가득 차있다. 물이 차가운 걸 보니 장시간 노출된 물인 것 같다.\n\n");
	WaitForSeconds(1.5f);
	printf("1) 욕조의 물을 모두 뺀다.\n");
	printf("0) 다른 것을 조사한다.\n");
	printf("작업할 것을 선택해 주세요: ");
	scanf("%d", &bathtub_choice);
	printf("\n");

	switch(bathtub_choice) {
		case 1:
			printf("바닥에 종이이가 가라앉아 있다.\n");
			WaitForSeconds(1.5f);
			printf("글씨가 물에 번져 알아볼 수가 없다.\n");
			printf("무시해야겠군..\n\n");
			break;
		case 0:
			return;
		default:
			printf("다시 입력해 주세요.\n\n");
			system("pause");
	}
}

void cabinet() {
	int cabinet_choice;
	
	system("cls");
	printf("[ 화장실 ] - [ 수납함 ]\n\n");
	printf("옆으로 미는 수납함이다.\n\n");
	WaitForSeconds(1.5f);
	printf("1) 오른쪽을 조사한다.\n");
	printf("2) 왼쪽을 조사한다.\n");
	printf("0) 다른 것을 조사한다.\n");
	printf("작업할 것을 선택해 주세요: ");
	scanf("%d", &cabinet_choice);
	printf("\n");
	
	switch(cabinet_choice) {
		case 1:
			printf("수건이 가득 차있다.\n");
			WaitForSeconds(1.5f);
			printf("사용할 곳이 없어 보인다.\n\n");
			break;
		case 2:
			printf("빚과 비누, 면도기 같은 작동사니가 많이 있다.\n");
			WaitForSeconds(1.5f);
			printf("사용할 곳이 없어 보인다.\n\n");
			break;
		case 0:
			return;
		default:
			printf("다시 입력해 주세요.\n\n");
			system("pause");
	}
}

void computer_PW() {
	char PW[7]="SGHHSH", PWinput[7];
	
	printf("패스워드를 입력하세요: ");
	scanf("%s", &PWinput);
	printf("\n"); 
	
	if(!strcmp(PW,PWinput)) {
		printf("'꽝'이라는 글씨가 나왔다. 헛고생을 했군..\n\n");
	}
	else
		printf("패스워드가 틀렸습니다. 다시 입력해 주세요.\n");
		return;	
}

void door_PW() {
	char  PW[5] = "1201", PWinput[5];
 	
	printf("패스워드를 입력하세요: ");
	scanf("%s", &PWinput);
	printf("\n"); 
	
	if(!strcmp(PW, PWinput)) {
		if(pw_count >= 4) {
			printf("기회소실로 탈출 불가\n");
			printf("[ 게임 오버 ]\n");
			exit(0);
		} 
		else if(pw_count >= 1) {
			printf("문 앞에 납치범이 웃으며 서있다.\n");
			printf("[ 게임 오버 ]\n");
			exit(0); 
		}
		else if(Bare_doolarm && Bare_doolleg && Bare_doolbody && Bare_doolhead) {
			printf("인형의 복수가 시 작 된 다.\n");
			printf("[ 게임 오버 ]\n");
			exit(0);
		}
		else {
			printf("[ 탈출 성공 ]\n");
			exit(0);
		}
	}
	else {
		printf("비밀번호를 틀렸다.\n\\n");
		pw_count++;
	}
	return;
}

