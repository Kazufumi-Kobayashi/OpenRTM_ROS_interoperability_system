# RTMとROSを用いた物体操作システム　　
## 概要　　
OpenRTM-aist-2.0の機能であるROS Transportを活用したOpenRTMとROSによる相互運用システム  
開発コンポーネントはロボットアーム共通インターフェースのブリッジとして利用可能になるため，様々なROS対応のマニピュレータに適用可能  
一例としてROS対応マニピュレータであるMOTOMAN-GP8による検証を行った  
## 開発環境　　
言語：C++，Python  
OS：Linux (Ubuntu16.04)  
RTミドルウェア：OpenRTM-aist-2.0  
ROS：ROS kinetic  
## 開発コンポーネント  
### [RTMtoROS]()  
ロボットアーム共通インターフェースのブリッジRTC  
RTM側のサービスポートからの情報をデータポートへと変換し，ROS TransportによりROS側へと送信する  
### [ManipulatorControlSample]()  
MOTOMAN-GP8の各軸の関節角度や手先位置などをCUIにて指定するサンプルコントローラRTC  
## ドキュメント  
### マニュアル　　
[ROSでMotoman GP8を利用するための環境構築と動作確認](http://www1.meijo-u.ac.jp/~kohara/cms/technicalreport/ros_motoman_gp8_setup)  
[RTMとROSを用いた物体操作システムマニュアル]()  
### 仕様書  
[RTMtoROS仕様書]()  
[ManipulatorControlSample仕様書]()  
### その他  
[検証動画]()  
RTMコンテストプレゼン資料・・・準備中
