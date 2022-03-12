<!--
1. 이미지(가운데 정렬, 70%)
<centet><img src="이미지링크" width="70%" height="70%"/></center>

1-2. 이미지 캡션 달기
<p align = "center">
내용
</p>

2. 글꼴 색상
노란색 : #fff5b1
초록색 : #dcffe4
주황색 : #f7ddbe
빨간색 : #f56
<span style="color: #fff5b1">
</span>
-->
# Overview
## Contents
 1. [네트워크 이해](#네트워크-이해)
 1. [프로토콜(Protocol)](#프로토콜protocol)
 1. [네트워크 계층 구조](#네트워크-계층-구조)
 1. [네트워크 장비](#네트워크-장비)

***
# 네트워크 이해
- `네트워크`란 통신설비들로 두 대 이상의 컴퓨터를 서로 연결한 것을 의미함
- 다수의 컴퓨터를 네트워크로 연결했을 때 얻을 수 있는 이점
    - 데이터 공유가 용이함
    - 능률적인 통신
    - 주변장치 공유
***
## 근거리 통신
- `근거리 통신망`(LAN, Local Area Network)은 한 건물이나 학교 내 캠퍼스처럼 비교적 가까운 지역에 한정된 통신망을 말함
- 컴퓨터 뿐만 아니라 가까운 거리에 있는 프린터, 팩스, 단말기 등 기타 네트워크 장비들을 포함하여 통칭하는 네트워크 시스템
## 광역 통신
- `광역 통신망` (WAN, Wide Area Network)는 두 개 이상의 근거리 네트워크(LAN)가 넓은 지역에 걸쳐 연결되어 있는 것
- WAN은 국가와 국가 간을 연결하는 매우 범위가 넓은 네트워크 이다

<center><img src="./img/Overview/Wan.jpg" width="70%" height="70%"/></center>

***
## 통신 방식

- 종류 :
    - 유니캐스트
    - 브로드캐스트
    - 멀티캐스트

- `서버` : 다른 컴퓨터에 데이터 전송 서비스를 제공하는 컴퓨터
- `클라이언트` : 서버에서 보내주는 데이터 서비스를 수신하는 컴퓨터
<br>-> 서버는 클라이언트(사용자)한테 요청 받아 서비스를 제공하는데, 이렇게 구성된 시스템을 `클라이언트/서버` 시스템이라고 한다.

<center><img src="./img/Overview/서버:클라이언트.jpg" width="70%" height="70%"/></center>
<p align = "center">
클라이언트/서버
</p>

## 유니캐스트
- 네트워크에서 가장 많이 사용하는 <span style="color: #dcffe4">유니캐스트(Unicast)는 서버와 클라이언트 간의 일대일(1:1) 통신 방식</span>을 말한다
- 자신의 <span style="color:#f56">MAC(Media Access Control Address)</span> 주소와 수신지 MAC 주소가 동일하다면 전송된 데이터를 수신하고, 자신의 LAN카드 MAC주소가 수신지 주소가 아니라고 판단되면 해당 프레임은 버림
<center><img src="./img/Overview/유니캐스트.jpg" width="70%" height="70%"/></center><p align ="center">
Unicast 방식</p>

***
## 브로드캐스트
- <span style="color: #dcffe4">브로드캐스트(Broadcast)는 로컬 LAN에 있는 모든 네트워크 단말기에 데이터를 보내는 방식</span>으로, 서버와 클라이언트 간에 일대모두(1:all)로 통신하는 데이터 전송 서비스다
- 브로드캐스트의 MAC주소는 `FF-FF-FF-FF-FF-FF`로 미리 정해져 있다
- <span style="color: #dcffe4">다른 라우터를 찾거나, 라우터끼리 데이터를 교환하거나, 서버가 서비스를 제공하려고 모든 클라이언트에게 알릴 때</span> 등 여러 상황에서 사용
- 수신을 원치 않는 클라이언트도 수신하게 되므로 <span style="color: #dcffe4">네트워크 *성능 저하*를 가져올 수 있음</span>
<center><img src="./img/Overview/브로드캐스트.jpg" width="70%" height="70%"/></center><p align ="center">
Broadcast 방식</p>

***
## 멀티캐스트
- 멀티캐스트는 전송하려는 <span style="color: #f56">특정 그룹에게만 한 번에 전송</span>할 수 있기 때문에 `유니캐스트`처럼 반복해서 보낼 필요가 없고, `브로드캐스트`처럼 전송받을 필요가 없는 컴퓨터에 보내지 않아도 됨

<center><img src="./img/Overview/멀티캐스트.jpg" width="70%" height="70%"/></center><p align ="center">
Multicast 방식</p>

# 프로토콜(Protocol)
- 본래 의미는 외교에서 의례 또는 의정서
- 톰 마릴이 <span style="color: #f56">'컴퓨터와 컴퓨터 사이에서 메시지를 전달하는 과정'</span>이라 정의
***
## 프로토콜의 3가지 요소
- `구문(Syntax)` : <span style="color: #f56">데이터의 구조나 포맷</span>을 의미
- `의미(Semantics)` : <span style="color: #f56">전송되는 데이터의 각 부분이 무엇을 뜻하는지</span>를 알 수 있게 미리 정해둔 규칙<br><span style="color: #004f92">
(데이터 자체뿐만 아니라 오류 제어, 동기 제어, 흐름 제어를 포함)</span>
- `순서(timing)` : 어떤 데이터를 보낼 것인지와 얼마나 빠르게 데이터를 보낼 것인지 정의
***
## 프로토콜의 기능
- `주소 설정(Addressing)` : <span style="color: #004f92">서로 다른 시스템의 두 개체가 통신</span>을 하는 경우 필요
- `순서 제어(Sequence Control)` : 프로토콜 데이터 단위를 전송할 때 보내는 <span style="color: #004f92">순서를 명시하는 기능
- `데이터 대열의 단편화 및 재조합(Fragmentation & Reassembly)` : 대용량 파일을 전송할 때 <span style="color: #004f92">전송 효율이 높은 작은 단위로 나누어 전송</span>한 뒤 전송받은 시스템에서 <span style="color: #004f92">이를 재조합</span> 해야 함
- `캡슐화(Encapsulation)` : <span style="color: #004f92">데이터에 제어 정보</span>를 추가
- `연결 제어(Connection Control)` : <span style="color: #004f92">연결 설정, 데이터 전송, 연결 해제에 대한 통제</span> 수행
- `흐름 제어(Flow Control)` : 송신측 개체로부터 오는 <span style="color: #004f92">데이터의 양이나 속도를 조절</span>하는 기능, 속도 차이 등으로 인한 정보 유실 방지
- `오류 제어(Error Control)` : 두 개체에서 데이터를 교환할 때 <span style="color: #004f92">오류가 발생한 경우, 이를 제어</span>하는 기법
- `동기화(Synchronization)` : 두 개체 간에 데이터를 전송할 때 각 개체는 특정 타이머 값이나 윈도우 크기 등을 통해 <span style="color: #004f92">동시에 정의된 인자 값을 공유</span>하는 것
- `다중화(Multiplexing)` : 통신 선로 하나에서 <span style="color: #004f92">여러 시스템을 동시에 통신</span>할 수 있는 기법
- `전송 서비스` : <span style="color: #004f92">우선순위 결정, 서비스 등급과 보안 요구 등을 제어</span>하는 서비스
***
# 네트워크 계층 구조

***
# 네트워크 장비