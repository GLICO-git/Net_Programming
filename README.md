# 네트워크프로그래밍_조효진
### 강의 교안 정리본
# Title
<details><summary>
Chapter1 : Overview
</summary><div markdown="1">

 1. 네트워크 이해
 1. 프로토콜(Protocol)
 1. 네트워크 계층 구조
 </div></details>

 <details><summary>
 Chapter2 : 소켓과 입출력
 </summary><div markdown="1">

 1. [소켓(Socket)?](#소켓socket)
    - [네트워크 프로그래밍](#네트워크-프로그래밍)
 1. [소켓과 입출력](#소켓과-입출력)
    - [파일 디스크립터 (File Descriptor)](#파일-디스크립터file-descriptor)
    - [리눅스의 기본 입출력 함수들](#리눅스의-기본-입출력-함수들)
        - [open()](#open())
        - [read()](#read())
        - [write()](#write)
        - [close()](#close)
        - [실습 1](#실습-1)
    - [소켓](#소켓)
        - [실습 2](#실습-2)
 1. [통신 프로토콜](#통신-프로토콜)
 1. [PF_INET vs AF_INET](#PF_INET-vs-AF_INET)
</div></details>

<details><summary>
Chapter3 : 소켓 API (1)
</summary><div markdown="1">

 1. [네트워크 주소](#네트워크-주소)
    - [네트워크 주소 : IP 주소](#네트워크-주소--ip-주소)
    - [네트워크 주소 : CIDR](#네트워크-주소--cidr)
    - [네트워크 주소 : loopback 인터페이스](#네트워크-주소--loopback-인터페이스)
    - [네트워크 주소 : 포트 번호](#네트워크-주소--포트-번호)
 1. [소켓 주소](#소켓-주소)
    - [소켓 주소 관련 구조체](#소켓-주소-관련-구조체)
    - [bind()](#bind)
 1. [바이트 순서](#바이트-순서)
    - [htonl()과 ntohl()](#htonl과-ntohl)
 1. [주소 변환](#주소-변환)
    - [inet_addr()](#inetaddr)
    - [inet_network](#inetnetwork)
    - [inet_aton()](#inetaton)
    - [inet_ntoa()](#inetntoa)
    - [inet_pton()과 inet_ntop()](#inetpton과-inetntop)
        - [inet_pton()](#inetpton)
        - [inet_ntop()](#inetntop)
    - [실습 1 : ip-uint](#실습-1--ip-uint)
</div></details>
<details><summary>
Chapter4 : 소켓 API (2)
</summary><div markdown="1">

1. [실습 02 : address-resolution](#실습-02--address-resolution)
1. [호스트 이름과 IP 주소](#호스트-이름과-IP-주소)
1. [실습 03 : getbyhostname](#실습-03--getvyhostname)
1. [소켓 프로그램](#소켓-프로그램)
	- [listen()](#listen)
	- [accept()](#accept)
	- [connect()](#connect)
	- [send()](#send)
	- [recv()](#recv)
1. [실습 04 : basictcpsrv](#실습-04--basictcpsrv)
1. [실습 04 : basictcplnt](#실습-04--basictcplnt)
</div></details>
<details><summary>
Chapter5 : TCP 소켓
</summary><div markdown="1">

 1. [TCP 기본](#TCP-기본)
	- [TCP 헤더](#TCP-헤더)
	- [TCP 상태](#TCP-상태)
	- [TCP 연결](#TCP-연결)
	- [TCP 종료](#TCP-종료)
	- [TCP 흐름제어](#TCP-흐름제어)
 1. [서버/클라이언트 분석](#서버/클라이언트-분석)
 1. [Iterative 서버 모델](#Iterative-서버-모델)
</div></details>
<details><summary>
Chapter6 : UDP 소켓
</summary><div markdown="1">

1. [포트 포워딩](#포트-포워딩)
1. [UDP 기본](#UDP-기본)
1. [UDP 서버/클라이언트 분석](#UDP-서버/클라이언트-분석)
	- [UDP 데이터 전송](#UDP-데이터-전송)
		- [sendto()](#sendto())
			- [sendto() 예제](#sendto()-예제)
		- [recvfrom()](#recvfrom())
			- [recvfrom() 예제](#recvfrom()-예제)
1. [UDP 소켓의 특징](#UDP-소켓의-특징)
1. [UDP 패킷 모니터링](#UDP-패킷-모니터링)
</div></details>

