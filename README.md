# C-programming

### 2017학년도 2학기 C프로그래밍과 실습 시간에 했던 코드들입니다.
***

#

### 1. 교재

![default](https://user-images.githubusercontent.com/45006693/48911675-b69cfb80-eeb6-11e8-8aea-025701a4e4c6.gif)

#

### 2. 각 챕터별 내용

#

### Chapter1 C언어의 시작

##### 프로그램 개발 과정은 편집-컴파일/링크-실행 단로 구분된다. 이러한 과정을 하나의 프로그램 내에서 제공하는 것을 통합 개발 환경이라 한다.
##### 도스에서는 Turbo-C나 Borland-C가 통합 개발 환경을 제공하고, 윈도우에서는 Visual C++또는 C-Builder가 통합 개발 환경을 제공한다.

#### #include <stdio.h>

##### 전처리기 부분으로, 전처리기 지시자인 #을 사용하여 include 명령을 실행한다.
##### include 명령 다음에는 반드시 스페이스를 눌러 한 칸을 띄우고 헤더파일명을 입력한다.
##### 헤더파일은 확장자가 .h다.
##### 시스템에 있는 헤더파일은 #include <헤더파일명> 형태로 사용할 수 있다.
##### 사용자가 만든 헤더파일은 #include "헤더파일명" 형태로 사용할 수 있다.

#### int main(void)

##### main 다음에는 ()를 사용한다. 반환형 함수명 (매개변수) 형태이다.
##### main 함수 아래에는 {}를 사용ㅎ나다.

#### printf("")

##### printf()는 지정한 내용을 도스 창에 출력하는 함수다.
##### 화면에 출력되는 내용은 괄호 안의 큰따옴표("") 사이에 있는 값이다.
##### \n은 도스 창에 출력할 때 한 줄을 띄우라는 명령이다.

#### return 0

##### 숫자 0을 반환하라는 의미다.

##### 소스코드를 작성할 때 문법에 맞지 않거나 또는 문법적인 문제는 없지만 논리적으로 맞지 않으면 프로그램에 오류가 발생한다. =
##### 문법적인 올나 논리적인 오류를 찾아 프로그램을 수정하는 것을 디버깅이라고 한다.

#

### Chapter2 기본 자료형과 형변환

##### 프로그래밍 언어에서 키워드는 고유한 의미를 지닌 예약된 단어로 예약어라고 부르기도 한다.

#

#### 미국규격협회가 지정한 C 언어의 키워드

##### auto break case char const continue default do double else enum extern float for goto if int long register return short signed sizeof static struct switch typedef union unsigned void volatile while

#

##### 키워드 외에 프로그램에서 사용자가 필요에 따라 이름을 만들어 사용하는 단어가 있는데 이를 식별자라고 한다.

#### 식별자 작성 규칙

##### 영문 대문자와 소문자, 숫자, 밑줄을 포함한 63개의 문자로만 구성할 수 있다.
##### 첫 글자로 숫자를 사용할 수 없다.
##### 대문자와 소문자를 구별하며, 키워드는 사용할 수 없다.

##### 상수는 프로그램이 실행되어 끝날 때가지 값이 변하지 않는 자료를 의미하며, 어떤 숫자나 문자 1개 또는 문자열로 표현한다.
##### 문자 1개는 ''를 사용해서 표현하고 문자열은 ""를 사용해서 표현한다.
##### 또 기호 상수는 전처리문인 #define을 이용하여 상수명과 값을 지정한 후 사용한다.

##### 상수는 한 번 입력하면 프로그램이 종료될 때까지 값이 동일해야 하지만 변수는 값이 계속 변할 수 있다.
##### 선언된 변수에 청므으로 값을 저장하는 것을 초기화라고 한다.

#### 정수형 자료

##### (signed) short (int) -> 2byte
##### unsigned short (int) -> 2byte
##### (signed) int -> 4byte
##### unsigned int -> 4byte
##### long (int) -> 8byte
##### unsigned long (int) -> 8byte

##### pow() 함수는 지수를 표현할 때 사용하는 함수로 pow(a,b)에서 a는 밑수를, b는 지수를 의미한다.

#### 실수형 변수

##### float -> 4byte
##### double -> 8byte
##### long double -> 8byte

#### 문자형 변수

##### 문자형은 문자 1개를 작은따옴표('') 안에 넣어서 사용하는 자료형으로 작은따옴표 안에 있는 문자를 데이터 1개로 취급한다.
##### 컴퓨터의 내부적인 문자 코드로 흔히 아스키나 EBCDIC 코드를 이용하는데, 대부분의 컴퓨터는 아스키코드를 사용한다.
##### 문자형을 다루는 자료형은 char이고, 0~127의 부호 없는 정수에 문자를 정의한다.

##### 자료형을 바꾸는 것을 형 변환이라고 하는데, 형 변환 방법에는 컴파일러가 자동으로 해주는 묵시적 형 변환과 사용자가 강제로 지정하는 명시적 형 변환이 있다.

### Chapter3 표준 입출력

#### 입출력 함수의 종류

##### 표준 입출력 함수 : scanf(), printf(), getchar(), putchar(), gets(), puts()
##### -> 기본 입출력장치인 키보드와 모니터를 통해 자료를 입출력하는 함수다.
##### 파일 입출력 함수 : fscanf(), fprintf()
##### -> 특정한 파일을 통해 자료를 입출력하는 함수다.
##### 저급 입출력 함수 : read(), write()
##### -> 응용 프로그램에서 제공하는 함수가 아니라 운영체제 내의 시스템 호출을 통해 자료를 입출력하는 함수다.

#### 표준 입출력 함수의 종류

##### 형식화된 입출력 함수 : scanf(), printf()
##### 문자 입출력 함수 : getchar(), putchar()
##### 문자열 입출력 함수 : gets(), puts()

#### printf() 함수

##### printf("문자열");
##### printf("제어 문자열(Format-String)", 변수);
##### printf("제어 문자열(Format-String)", 표현식);

#### 변환기호의 종류

##### %d : 부호 있는 10진수
##### %o : 부호 없는 8진수
##### %x : 부호 없는 6진수
##### %u : 부호 없는 10진수
##### %e : 지수 형태
##### %f : 실수 형태
##### %g : %e 또는 %f의 변환 중 문자 수가 적은 것, 유효하지 않는 0은 출력되지 않는다.
##### %c : 문자 1개
##### %s : 문자열
##### %n : %n이 나타날 때까지 출력한 문자 수
##### %ld : long형 10진수
##### %lu : long형 부호 없는 10진수

#### scanf() 함수

##### scanf("변환기호(Format-String).....", &변수1, &변수2, .....);

#### 탈출 기법의 종류

##### 문자명(정숫값) 프로그램 표현 : 설명
##### 경고(7) \a : 경고음
##### 수평 탭(9) \t : 수평으로 탭만큼 이동
##### 개행문자(10) \n : 다음 줄로 이동
##### 캐리지 리턴(13) \r : 현재 줄의 처음으로 이동
##### 큰따옴표(34) \" : "
##### 작은따옴표(39) \' : '
##### 역슬래시(92) \\ : \
##### 퍼센트(37) %% : %

#

### Chapter4 연산자

#### 연산자의 종류

##### 산술 연산자 : +,-,*
##### 관계 연산자 : >,<,==,!=,>=,<=
##### 증감 연산자 : ++,--
##### 논리 연산자 : &&,||,!
##### 조건 연산자 : ?:
##### 비트 논리 연산자 : &,|,^,~
##### 비트 이동 연산자 : <<,>>
##### 대입 연산자 : =

##### 대입 연산자를 기준으로 왼쪽에 있는 피연산자를 lvalue, 오른쪽에 있는 피연산자를 rvalue라곻 ㅏㄴ다.
##### rvalue에는 값, 변수, 수식 등을 넣을 수 있고, lvalue에는 오로지 변수만 넣을 수 있다.

#### 증감 연산자의 종류

##### a++ : 변숫값을 수식에 먼저 적용한 후 최종 변숫값을 1만큼 증가
##### ++a : 변숫값을 1만큼 먼저 증가시킨 후 최종 변숫값을 수식에 적용
##### a-- : 변숫값을 수식에 먼저 적용한 후 최종 변숫값을 1만큼 감소
##### --a : 변숫값을 1만큼 먼저 감소시킨 후 최종 변숫값을 수식에 적용

#### 논리 연산자의 종류

##### 논리곱(&&) AND
##### 논리합(||) OR
##### 논리부정(!) NOT

#### 비트 연산자의 종류

##### & 비트곱(AND)
##### | 비트합(OR)
##### ^ 배타적 논리합(XOR)
##### ~ 비트 반전(1의 보수)
##### << 왼쪽으로 이동
##### >> 오른쪽으로 이동

##### 연산자 우선순위

##### 다항>산술>이동>관계>비트>논리>조건>

#

### Chapter5 선택문

#### if문 형식

##### if(조건식) 문장;
##### -> if문의 조건식이 참이면 문장을 수행하고, 거짓이면 문장을 수행하지 않는다.

##### if(조건식) 문장 1;
##### else 문장 2;
##### -> if문의 조건식이 참이면 문장 1을 수행하고, 거짓이면 else문 아래의 문장 2를 수행한다.

##### if(조건식 1) 문장 1;
##### else if(조건식 2) 문장 2;
##### ...
##### else 문장 3;
##### -> 조건식이 여러 개 있을 때 조건에 맞는 문장만 수행하는 경우에 사용한다.

##### if(조건식 1)
#####   if(조건식 2) 문장 1;
##### -> if문 안에 if문이 있는 경우로 조건식 1과 조건식 2가 모두 참일 때만 문장 1이 수행된다.

#### switch문 형식

##### switch(조건식)
##### {
#####   case 상숫값 1 :
#####     명령문 블록 1
#####     break;
#####   case 상숫값 2 :
#####     명령문 블록 2
#####     break;
##### ...
#####   default :
#####     명령문 블록 n
#####     break;
##### }

##### switch문의 조건식 결과 값과 case 상숫값이 일치하는지 검사하여 일치하는 값이 나오면 그 case문 아래의 명령문 블록을 수행한다.
##### 그러나 여러 개의 case문 중에서 어느 하나라도 일치하는 값이 없으면 default 명령문 블록을 수행한다.

#### 조건 연산자

##### (문장 1) ? (문장 2) : (문장 3);
##### 문장 1의 내용이 참이면 문장 2를 수행하고, 거짓이면 문장 3을 수행한다.

#

### Chapter6 반복문

#### for문

##### for(초기화; 조건식; 증감식)
##### {
#####   명령문 1;
#####   명령문 2;
##### ...
##### }

##### 초기화: 변수의 초기값을 지정하고, 반복문의 시작을 나타낸다.
##### 조건식: 변숫값이 조건식에 맞으면 계속 반복하고 아니면 멈춘다.
##### 증갑식: 변숫값을 증가시키거나 감소시킨다.

#### while문

##### 초기화;
##### while(조건식)
##### {
#####   명령문 1;
#####   명령문 2;
##### ...
#####   증감식
##### }

##### 조건식을 검사하여 참이면 명령을 수행하고 for문처럼 증감식으로 변숫값을 증감시킨다.
##### 그리고 다시 조건식과 비교하여 특정한 명령을 반복 수행한다.

#### do~while문

##### do
##### {
#####   명령문 1;
##### }while(조건식);

##### 일단 do 안에 있는 명령문을 수행하고 나중에 while문의 조건식을 비교하므로 적어도 한 번은 명령문을 처리한다.

#

### Chapter7 배열

#####

#

### Chapter8 함수

#####

#

### Chapter9 변수영역

#####

#

### Chapter10 포인터

#####
